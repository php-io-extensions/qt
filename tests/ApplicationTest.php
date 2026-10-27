<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('frees a window whose application went first, as PHP\'s shutdown can free them', function (): void {
    // At shutdown PHP frees objects by handle, newest first, and a handle can be reused: a window can
    // outlive the application object. Deleting a widget with no application crashes in ~QWidget.
    $child = qtChild(<<<'CODE'
        $argc = 1;
        $app = new QApplication($argc, [PHP_BINARY]);
        $window = new QMainWindow();
        $window->setCentralWidget(new QLabel('x'));
        $window->show();
        QCoreApplication::processEvents();
        unset($app);
        gc_collect_cycles();
        unset($window);
        gc_collect_cycles();

        return 'freed';
        CODE, app: false);

    expect($child['signal'])->toBeNull()
        ->and($child['result'])->toBe('freed');
});

it('puts text on the application clipboard and reads it back', function (): void {
    $clipboard = QGuiApplication::clipboard();
    // The test writes the user's clipboard: it keeps the text there and puts it back.
    $kept = $clipboard->text();
    $text = 'c7 ' . uniqid();
    $clipboard->setText($text);
    $read = $clipboard->text(QClipboard\Mode::CLIPBOARD);
    $clipboard->setText($kept);

    expect($clipboard)->toBeInstanceOf(QClipboard::class)
        ->and(QGuiApplication::clipboard())->toBe($clipboard)
        ->and($read)->toBe($text);
});

it('says whether the clipboard holds text, and clears it', function (): void {
    $clipboard = QGuiApplication::clipboard();
    $kept = $clipboard->text();
    $clipboard->setText('x');
    $held = $clipboard->mimeData();
    $hadText = $held->hasText();
    $clipboard->clear();
    $cleared = $clipboard->mimeData()?->hasText();
    $clipboard->setText($kept);

    expect($held)->toBeInstanceOf(QMimeData::class)
        ->and($hadText)->toBeTrue()
        ->and($cleared)->not->toBeTrue();
});

it('lists the formats the clipboard holds', function (): void {
    $clipboard = QGuiApplication::clipboard();
    $kept = $clipboard->text();
    $clipboard->setText('x');
    $formats = $clipboard->mimeData()->formats();
    $clipboard->setText($kept);

    expect($formats)->toContain('text/plain')
        ->and((new QMimeData())->formats())->toBe([]);
});

it('gives no clipboard before an application', function (): void {
    $child = qtChild('return QGuiApplication::clipboard();', app: false);

    expect($child['threw'])->toBeNull()
        ->and($child['survived'])->toBeTrue()
        ->and($child['result'])->toBeNull()
        ->and($child['signal'])->toBeNull();
});

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
