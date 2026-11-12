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
