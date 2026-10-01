<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('is the one instance', function (): void {
    expect(QCoreApplication::instance())->toBe(testApplication())
        ->and(testApplication()->inherits('QGuiApplication'))->toBeTrue()
        ->and(QGuiApplication::platformName())->not->toBe('')
        ->and(QCoreApplication::applicationPid())->toBe(getmypid())
        ->and(QCoreApplication::startingUp())->toBeFalse()
        ->and(QCoreApplication::closingDown())->toBeFalse();
});

it('refuses a second application', function (): void {
    expect(fn () => new QApplication([PHP_BINARY]))->toThrow(QtException::class)
        ->and(fn () => new QCoreApplication([PHP_BINARY]))->toThrow(QtException::class);
});

it('rejects an argv without argv[0]', function (): void {
    expect(fn () => new QGuiApplication([]))->toThrow(ValueError::class, 'argv[0]');
});

it('sets and reads application properties', function (): void {
    QCoreApplication::setApplicationName('QtTests');
    QGuiApplication::setApplicationDisplayName('Qt Tests');
    QGuiApplication::setDesktopFileName('com.projectsaturnstudios.QtTests');
    QGuiApplication::setQuitOnLastWindowClosed(false);

    expect(QCoreApplication::applicationName())->toBe('QtTests')
        ->and(QGuiApplication::applicationDisplayName())->toBe('Qt Tests')
        ->and(QGuiApplication::desktopFileName())->toBe('com.projectsaturnstudios.QtTests')
        ->and(QGuiApplication::quitOnLastWindowClosed())->toBeFalse();
});

it('processes events with and without a time limit', function (): void {
    QCoreApplication::processEvents();
    QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::ALL_EVENTS, 10);
    QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::EXCLUDE_USER_INPUT_EVENTS->value | QEventLoop\ProcessEventsFlag::EXCLUDE_SOCKET_NOTIFIERS->value);

    expect(fn () => QCoreApplication::processEvents(0, -1))->toThrow(ValueError::class);
});

it('returns from the dispatcher at once after wakeUp', function (): void {
    $dispatcher = QAbstractEventDispatcher::instance();

    expect($dispatcher)->toBeInstanceOf(QAbstractEventDispatcher::class)
        ->and(QAbstractEventDispatcher::instance())->toBe($dispatcher);

    $dispatcher->wakeUp();
    $t = hrtime(true);
    QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::WAIT_FOR_MORE_EVENTS);

    expect((hrtime(true) - $t) / 1e6)->toBeLessThan(20.0);
});
