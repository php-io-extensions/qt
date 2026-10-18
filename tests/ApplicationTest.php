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
    $argc = 1;

    expect(fn () => new QApplication($argc, [PHP_BINARY]))->toThrow(QtException::class)
        ->and(fn () => new QCoreApplication($argc, [PHP_BINARY]))->toThrow(QtException::class);
})->skip(PHP_OS_FAMILY !== 'Darwin', 'the second-application site is macOS only');

it('writes back the argc Qt leaves after stripping its own options', function (): void {
    $child = qtChild('$argc = 3; $app = new QApplication($argc, [PHP_BINARY, "-qwindowtitle", "T"]); return $argc;', app: false);

    expect($child['threw'])->toBeNull()
        ->and($child['result'])->toBe(1);
});

it('constructs from an empty argv', function (): void {
    $child = qtChild('$argc = 0; $app = new QCoreApplication($argc, []); return [$argc, QCoreApplication::applicationName()];', app: false);

    expect($child['threw'])->toBeNull()
        ->and($child['result'])->toBe([0, '']);
});

it('rejects an argc beyond the argv it counts', function (): void {
    $child = qtChild('$argc = 2; new QCoreApplication($argc, [PHP_BINARY]);', app: false);

    expect($child['threw'])->toBe('ValueError: QCoreApplication::__construct(): Argument #1 ($argc) must be between 0 and 1');
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

it('sets and tests an application attribute', function (): void {
    $attribute = Qt\ApplicationAttribute::DONT_SHOW_ICONS_IN_MENUS;
    $before = QCoreApplication::testAttribute($attribute);

    QCoreApplication::setAttribute($attribute);
    $on = QCoreApplication::testAttribute($attribute);
    QCoreApplication::setAttribute($attribute, false);
    $off = QCoreApplication::testAttribute($attribute);
    QCoreApplication::setAttribute($attribute, $before);

    expect($on)->toBeTrue()->and($off)->toBeFalse();
});

it('processes events with and without a time limit', function (): void {
    QCoreApplication::processEvents();
    QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::ALL_EVENTS, 10);
    QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::EXCLUDE_USER_INPUT_EVENTS->value | QEventLoop\ProcessEventsFlag::EXCLUDE_SOCKET_NOTIFIERS->value);

    // A negative time limit is Qt's to read; only an int's range is the C type's.
    expect(fn () => QCoreApplication::processEvents(0, -1))->not->toThrow(Throwable::class)
        ->and(fn () => QCoreApplication::processEvents(0, 2 ** 40))->toThrow(ValueError::class, 'between');
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
