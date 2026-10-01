# ext-qt

1:1 PHP bindings of Qt 6, written directly in C++ against the Zend API. Each
PHP class is its C++ counterpart (`QApplication`, `QTimer`, `QSocketNotifier`,
…) and each method is one Qt call. Nested C++ scopes become PHP namespaces:
`Qt::TimerType` is `Qt\TimerType`, `QMetaObject::Connection` is
`QMetaObject\Connection`. No defaults, no composites: behaviour is composed by
the caller.

Linux first, macOS too. Qt 6.5+, PHP 8.4+, NTS and ZTS.

## What is bound

The calls that create the application, pump Qt's event dispatcher, sleep with a
budget, wake a sleep, open and close windows, and build menu bars:

| Class | Qt |
|---|---|
| `QObject` | constructor, `objectName`, `setObjectName`, `inherits`, `parent`, `setParent`, `deleteLater`, `connect` (string signature), `disconnect` |
| `QCoreApplication`, `QGuiApplication`, `QApplication` | constructors, `instance`, `processEvents` (both overloads), `sendPostedEvents`, `exec`, `quit`, `exit`, `applicationName`, `setApplicationName`, `applicationPid`, `closingDown`, `startingUp`, `platformName`, `desktopFileName`, `setDesktopFileName`, `applicationDisplayName`, `setApplicationDisplayName`, `quitOnLastWindowClosed`, `setQuitOnLastWindowClosed` |
| `QTimer` | constructor, `start` (both overloads), `stop`, `isActive`, `interval`, `setInterval`, `isSingleShot`, `setSingleShot`, `timerType`, `setTimerType`, `remainingTime`, `timerId`, `singleShot` (functor overload) |
| `QSocketNotifier` | constructor (fd as int, stream or Socket), `socket`, `type`, `isEnabled`, `setEnabled`, `isValid` |
| `QAbstractEventDispatcher` | `instance`, `processEvents`, `wakeUp`, `interrupt` |
| `QMetaObject\Connection` | `operator bool` as `isValid()` |
| `QWidget` | constructor, `show`, `hide`, `close`, `isVisible`, `setVisible`, `isWindow`, `isActiveWindow`, `activateWindow`, `raise`, `windowTitle`, `setWindowTitle`, `resize`, `width`, `height`, `parentWidget`, `setAttribute`, `testAttribute` |
| `QMainWindow` | constructor, `menuBar`, `setMenuBar`, `centralWidget`, `setCentralWidget` |
| `QMenuBar`, `QMenu` | constructors, `addMenu` (both overloads), `addAction`, `clear`, `isNativeMenuBar`, `setNativeMenuBar`; `title`, `setTitle`, `addSeparator`, `isEmpty`, `menuAction` |
| `QAction` | constructor, `text`, `setText`, `isCheckable`, `setCheckable`, `isChecked`, `setChecked`, `isEnabled`, `setEnabled`, `isSeparator`, `setSeparator`, `menuRole`, `setMenuRole`, `shortcut`, `setShortcut`, `trigger`, `toggle` |
| `QDialog`, `QMessageBox` | constructors, `open`, `isModal`, `setModal`, `result`, `done`, `accept`, `reject`; `text`, `setText`, `informativeText`, `setInformativeText` |
| `QObject` (filters) | `installEventFilter`, `removeEventFilter` |
| `QEventFilter` | trampoline: `new QEventFilter(callable, ?array $types)`; hands the listed event types of each watched object to PHP |

Enums: `QEventLoop\ProcessEventsFlag`, `Qt\TimerType`, `QSocketNotifier\Type`,
`QAction\MenuRole`, and, generated from the Qt headers by `scripts/gen-enum.php`,
`QEvent\Type` and `Qt\WidgetAttribute`.
Function: `qVersion()`. The stubs in `stubs/` are the full declaration.

Signals connect by the signature `SIGNAL()` spells, and the callable receives
the signal's arguments:

```php
QObject::connect($timer, 'timeout()', fn () => …);
QObject::connect($notifier, 'activated(QSocketDescriptor,QSocketNotifier::Type)', fn (int $fd, int $type) => …);
```

## Example

```php
$app = new QApplication([PHP_BINARY]);

// Sleep up to 16 ms, or until an event arrives, dispatching what does.
$budget = new QTimer();
$budget->setSingleShot(true);
$budget->start(16);
QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::WAIT_FOR_MORE_EVENTS);

// Wake on a descriptor (a kqueue or epoll fd works: it turns readable when its own events are pending).
$notifier = new QSocketNotifier($fd, QSocketNotifier\Type::READ);
QObject::connect($notifier, 'activated(QSocketDescriptor,QSocketNotifier::Type)', fn () => null);
```

## Install

```bash
bash install-debian-trixie.sh   # Debian, Ubuntu, Raspberry Pi OS (needs qt6-base-dev, g++)
bash install-macos.sh           # Homebrew php@8.4 and php@8.4-zts (needs brew install qt)
```

Or with PIE: `pie install php-io-extensions/qt`.

## Test

```bash
composer install
php vendor/bin/pest
php examples/smoke.php          # bridge: application, pump, sleep, wake; prints SMOKE_OK
php examples/window-smoke.php   # window, menu bar, actions, close filter; prints SMOKE_OK
```

On Linux over SSH, export the session's `DISPLAY` (and `WAYLAND_DISPLAY` when
the `qt6-wayland` platform plugin is installed) first. Design notes live in the
OKF bundle under `.okf/`.

## License

MIT
