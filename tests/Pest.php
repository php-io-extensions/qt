<?php

declare(strict_types=1);

use QEventLoop\ProcessEventsFlag;

if (! extension_loaded('qt')) {
    throw new RuntimeException('The qt extension is not loaded; run pest with -d extension=/path/to/qt.so');
}

/** The one application a process may hold. */
function testApplication(): QApplication
{
    static $app = null;

    if ($app === null) {
        $app = new QApplication([PHP_BINARY]);
        QGuiApplication::setQuitOnLastWindowClosed(false);
    }

    return $app;
}

/** processEvents(WaitForMoreEvents) until $done() holds; a guard timer bounds the wait at $limitMs. */
function processUntil(callable $done, int $limitMs = 2000): bool
{
    $expired = false;
    $guard = new QTimer();
    $guard->setSingleShot(true);
    $connection = QObject::connect($guard, 'timeout()', function () use (&$expired): void {
        $expired = true;
    });
    $guard->start($limitMs);

    while (! $done() && ! $expired) {
        QCoreApplication::processEvents(ProcessEventsFlag::WAIT_FOR_MORE_EVENTS);
    }

    $guard->stop();
    QObject::disconnect($connection);

    return $done();
}

/** QEvent::DeferredDelete */
const DEFERRED_DELETE = 52;
