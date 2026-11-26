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
