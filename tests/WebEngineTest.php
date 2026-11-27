<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('loads HTML with a base URL, signals loadStarted and loadFinished(true), and reads title and URL', function (): void {
    $view = new QWebEngineView();
    $view->resize(320, 200);
    $view->show();
    $events = [];
    QObject::connect($view, 'loadStarted()', function () use (&$events): void { $events[] = 'started'; });
    QObject::connect($view, 'loadFinished(bool)', function (bool $ok) use (&$events): void { $events[] = $ok ? 'ok' : 'failed'; });
    QObject::connect($view, 'titleChanged(QString)', function (string $title) use (&$events): void { $events[] = "title:{$title}"; });

    $view->setHtml('<title>Hello</title><p>hi</p>', new QUrl('https://example.test/page'));
    processUntil(fn () => in_array('ok', $events, true) || in_array('failed', $events, true), 20000);

    expect($events)->toContain('started', 'ok', 'title:Hello')
        ->and($view->title())->toBe('Hello')
        ->and($view->url()->toString())->toBe('https://example.test/page');

    $view->stop();
    $view->reload();
    $view->back();
    $view->forward();
    $view->close();
});

it('signals loadFinished(false) for a page it cannot load', function (): void {
    $view = new QWebEngineView();
    $result = null;
    QObject::connect($view, 'loadFinished(bool)', function (bool $ok) use (&$result): void { $result = $ok; });

    $view->load(new QUrl('file:///nonexistent/stargazer-webengine-test.html'));
    processUntil(fn () => $result !== null, 20000);

    expect($result)->toBeFalse();
});

it('delivers QWebEngineLoadingInfo through the page loadingChanged signal, started then succeeded', function (): void {
    $view = new QWebEngineView();
    $page = $view->page();
    $seen = [];
    $loadingDuring = null;
    QObject::connect($page, 'loadingChanged(QWebEngineLoadingInfo)', function (QWebEngineLoadingInfo $info) use (&$seen, &$loadingDuring, $page): void {
        $seen[] = $info;
        if ($info->status() === QWebEngineLoadingInfo\LoadStatus::LOAD_STARTED_STATUS) {
            $loadingDuring = $page->isLoading();
        }
    });

    expect($page)->toBeInstanceOf(QWebEnginePage::class)->and($page->isLoading())->toBeFalse();

    $view->setHtml('<title>Page</title><p>hi</p>', new QUrl('https://example.test/base'));
    processUntil(fn () => count(array_filter($seen, fn ($i) => $i->status() === QWebEngineLoadingInfo\LoadStatus::LOAD_SUCCEEDED_STATUS)) > 0, 20000);

    $statuses = array_map(fn ($i) => $i->status(), $seen);
    expect($statuses[0])->toBe(QWebEngineLoadingInfo\LoadStatus::LOAD_STARTED_STATUS)
        ->and(end($statuses))->toBe(QWebEngineLoadingInfo\LoadStatus::LOAD_SUCCEEDED_STATUS)
        ->and($loadingDuring)->toBeTrue()
        ->and($page->isLoading())->toBeFalse()
        ->and(end($seen)->url()->toString())->toBe('https://example.test/base')
        ->and(end($seen)->isErrorPage())->toBeFalse()
        ->and($page->title())->toBe('Page')
        ->and($page->url()->toString())->toBe('https://example.test/base');
});

it('reports LoadFailedStatus with an error string for a page it cannot load', function (): void {
    $view = new QWebEngineView();
    $failed = null;
    QObject::connect($view->page(), 'loadingChanged(QWebEngineLoadingInfo)', function (QWebEngineLoadingInfo $info) use (&$failed): void {
        if ($info->status() === QWebEngineLoadingInfo\LoadStatus::LOAD_FAILED_STATUS) {
            $failed = $info;
        }
    });

    $view->load(new QUrl('file:///nonexistent/webengine-test.html'));
    processUntil(fn () => $failed !== null, 20000);

    expect($failed)->toBeInstanceOf(QWebEngineLoadingInfo::class)
        ->and($failed->errorString())->not->toBe('')
        ->and($failed->errorCode())->toBeInt();
});

it('runs JavaScript in the page and hands the result to the callback, in each world', function (): void {
    $view = new QWebEngineView();
    $page = $view->page();
    $loaded = null;
    QObject::connect($view, 'loadFinished(bool)', function (bool $ok) use (&$loaded): void { $loaded = $ok; });
    $view->setHtml('<title>Script</title><p id="p">hi</p>', new QUrl('https://example.test/script'));
    processUntil(fn () => $loaded !== null, 20000);

    $results = [];
    $page->runJavaScript('document.getElementById("p").textContent + " there"', 0, function (mixed $result) use (&$results): void {
        $results['text'] = $result;
    });
    $page->runJavaScript('({a: 1, b: [true, "x"]})', 0, function (mixed $result) use (&$results): void {
        $results['object'] = $result;
    });
    $page->runJavaScript('window.ownGlobal = 5');
    $page->runJavaScript('typeof window.ownGlobal', 1, function (mixed $result) use (&$results): void {
        $results['world'] = $result;
    });
    processUntil(fn () => count($results) === 3, 20000);

    expect($loaded)->toBeTrue()
        ->and($results['text'])->toBe('hi there')
        ->and($results['object'])->toBe(['a' => 1, 'b' => [true, 'x']])
        ->and($results['world'])->toBe('undefined');
});

it('hands each console message of a QWebEngineConsolePage to PHP, with its level, line and source', function (): void {
    $messages = [];
    $view = new QWebEngineView();
    $page = new QWebEngineConsolePage(function (QWebEnginePage\JavaScriptConsoleMessageLevel $level, string $message, int $line, string $source) use (&$messages): void {
        $messages[] = [$level, $message, $line, $source];
    }, $view);
    $view->setPage($page);

    $view->setHtml("<script>\nconsole.log('first');\nconsole.warn('second');\nconsole.error(JSON.stringify({a: 1}));\n</script>", new QUrl('https://example.test/console'));
    processUntil(fn () => count($messages) === 3, 20000);

    expect($view->page())->toBe($page)
        ->and($page)->toBeInstanceOf(QWebEnginePage::class)
        ->and(array_column($messages, 1))->toBe(['first', 'second', '{"a":1}'])
        ->and(array_column($messages, 0))->toBe([
            QWebEnginePage\JavaScriptConsoleMessageLevel::INFO_MESSAGE_LEVEL,
            QWebEnginePage\JavaScriptConsoleMessageLevel::WARNING_MESSAGE_LEVEL,
            QWebEnginePage\JavaScriptConsoleMessageLevel::ERROR_MESSAGE_LEVEL,
        ])
        ->and($messages[0][2])->toBe(2)
        ->and($messages[0][3])->toBe('https://example.test/console');
});

it('refuses a console callable that is not callable', function (): void {
    new QWebEngineConsolePage('no such function');
})->throws(TypeError::class);

it('refuses a result callback that is not callable', function (): void {
    $view = new QWebEngineView();

    expect(fn () => $view->page()->runJavaScript('1', 0, 'no such function'))->toThrow(TypeError::class);
});

it('sets and tests an attribute of a page\'s own settings', function (): void {
    $view = new QWebEngineView();
    $other = new QWebEngineView();
    $settings = $view->page()->settings();
    $attribute = QWebEngineSettings\WebAttribute::PLAYBACK_REQUIRES_USER_GESTURE;
    $before = $settings->testAttribute($attribute);
    $settings->setAttribute($attribute, true);
    $set = [$settings->testAttribute($attribute), $view->page()->settings()->testAttribute($attribute), $other->page()->settings()->testAttribute($attribute)];
    $settings->setAttribute($attribute, false);

    // Qt reads it false until it is set; another page's settings are its own.
    expect($before)->toBeFalse()
        ->and($set)->toBe([true, true, false])
        ->and($settings->testAttribute($attribute))->toBeFalse()
        ->and($settings->testAttribute(QWebEngineSettings\WebAttribute::JAVASCRIPT_ENABLED))->toBeTrue()
        ->and(QWebEngineSettings\WebAttribute::PLAYBACK_REQUIRES_USER_GESTURE->value)->toBe(26);
});

it('runs a page\'s scripts when the document is made and when it is ready, and takes them away', function (): void {
    $messages = [];
    $view = new QWebEngineView();
    $page = new QWebEngineConsolePage(function ($level, string $message) use (&$messages): void {
        $messages[] = $message;
    }, $view);
    $view->setPage($page);
    $scripts = $page->scripts();

    $early = new QWebEngineScript();
    $early->setName('early');
    $early->setSourceCode('console.log("early body=" + (document.body ? "yes" : "no"));');
    $early->setInjectionPoint(QWebEngineScript\InjectionPoint::DOCUMENT_CREATION);
    $early->setWorldId(QWebEngineScript\ScriptWorldId::MAIN_WORLD->value);
    $early->setRunsOnSubFrames(false);
    $late = new QWebEngineScript();
    $late->setName('late');
    $late->setSourceCode('console.log("late p=" + document.getElementById("p").textContent);');
    $late->setInjectionPoint(QWebEngineScript\InjectionPoint::DOCUMENT_READY);
    $late->setWorldId(QWebEngineScript\ScriptWorldId::MAIN_WORLD->value);
    $scripts->insert($early);
    $scripts->insert($late);
    $inserted = $scripts->count();

    $view->setHtml('<p id="p">hi</p>', new QUrl('https://example.test/scripts'));
    processUntil(fn () => count($messages) === 2, 20000);
    $removed = [$scripts->remove($early), $scripts->remove($early), $scripts->count()];
    $scripts->clear();

    expect($inserted)->toBe(2)
        ->and($messages)->toBe(['early body=no', 'late p=hi'])
        ->and($removed)->toBe([true, false, 1])
        ->and($scripts->count())->toBe(0)
        ->and([QWebEngineScript\InjectionPoint::DOCUMENT_CREATION->value, QWebEngineScript\ScriptWorldId::USER_WORLD->value])->toBe([2, 2]);
});

it('reads a page\'s settings and scripts only while the page lives', function (): void {
    $view = new QWebEngineView();
    $page = new QWebEngineConsolePage(fn () => null);
    $view->setPage($page);
    $settings = $page->settings();
    $scripts = $page->scripts();
    $view->setPage(new QWebEngineConsolePage(fn () => null, $view));
    unset($page);

    expect(fn () => $settings->testAttribute(QWebEngineSettings\WebAttribute::JAVASCRIPT_ENABLED))->toThrow(QtException::class)
        ->and(fn () => $scripts->count())->toThrow(QtException::class)
        ->and(fn () => new QWebEngineSettings())->toThrow(Error::class);
});
