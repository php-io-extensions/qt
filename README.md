<div align="center" id="header">

<h1>ext-qt</h1>

<h3>Qt 6 bound 1:1 into PHP 8.4+</h3>


[![CI](https://img.shields.io/github/actions/workflow/status/php-io-extensions/qt/ci.yml?style=flat-square&label=CI)](https://github.com/php-io-extensions/qt/actions/workflows/ci.yml)
[![Qt API](https://img.shields.io/badge/Qt_API-7.2%25_%28826%2F11435%29-blue?style=flat-square)](SUPPORT.md)
[![Packagist](https://img.shields.io/packagist/v/php-io-extensions/qt?style=flat-square)](https://packagist.org/packages/php-io-extensions/qt)
[![PHP](https://img.shields.io/packagist/dependency-v/php-io-extensions/qt/php?style=flat-square&label=PHP)](https://packagist.org/packages/php-io-extensions/qt)
[![License](https://img.shields.io/github/license/php-io-extensions/qt?style=flat-square)](LICENSE)
[![Platform](https://img.shields.io/badge/platform-linux_%7C_macos-blue?style=flat-square&logo=linux&logoColor=white)](#requirements)
[![OKF](https://img.shields.io/badge/OKF-0.2-6f42c1?style=flat-square&label=knowledge%20bundle)](.okf/index.md)
[![PIE](https://img.shields.io/badge/PIE-installable-4f5b93?style=flat-square&logo=php&logoColor=white)](https://github.com/php/pie)

</div>

A desktop app that runs on Linux and macOS alike needs windows, menus, dialogs, layouts, text editors, tables and trees, video and web pages, drawn in each platform's style and fed by one event loop that also watches timers and sockets. Writing that once per platform is years of work before the first window looks right on either.

<b>Qt</b> is that framework. KDE Plasma and a long list of cross-platform applications are built on it: `QApplication` runs the event dispatcher, widgets hold the interface, layouts place them, signals carry what changed to whoever is connected, and Qt Multimedia and Qt WebEngine play video and show web pages. It is written in C++, and its documentation covers every class.

<b>The only problem?</b> PHP can't reach it. This extension binds Qt 6 one to one in C++ against the Zend API, linked against the system's Qt. Each PHP class is its C++ counterpart (`QApplication`, `QTimer`, `QSocketNotifier`, …) and each method is one Qt call. Nested C++ scopes become PHP namespaces: `Qt::TimerType` is `Qt\TimerType`, `QMetaObject::Connection` is `QMetaObject\Connection`. Qt's value classes (`QPoint`, `QSize`, `QRect`, `QDate`, `QKeySequence`, `QUrl`, …) are PHP value objects. What Qt does passes through (invalid values, nullptr as `null`, its warnings on stderr); the extension refuses a call only where a probe showed it crashes. No defaults, no composites, no opinions: what Qt documents is what you call.

## Basic usage

Create the application, wait up to 16 ms for an event and dispatch it, and wake on a file descriptor:

```php
$argc = 1;
$app = new QApplication($argc, [PHP_BINARY]);

// Sleep up to 16 ms, or until an event arrives, dispatching what does.
$budget = new QTimer();
$budget->setSingleShot(true);
$budget->start(16);
QCoreApplication::processEvents(QEventLoop\ProcessEventsFlag::WAIT_FOR_MORE_EVENTS);

// Wake on a descriptor (a kqueue or epoll fd works: it turns readable when its own events are pending).
$notifier = new QSocketNotifier($fd, QSocketNotifier\Type::READ);
QObject::connect($notifier, 'activated(QSocketDescriptor,QSocketNotifier::Type)', fn () => null);
```

## Requirements

- Linux or macOS. `composer.json` lists those two families.
- PHP 8.4 or newer, NTS or ZTS, with `phpize` and `php-config`.
- A C++17 compiler and `pkg-config`.
- Qt 6.4 or newer with its development files: Core, Gui, Widgets, OpenGL, OpenGLWidgets, Multimedia, MultimediaWidgets, WebEngineCore and WebEngineWidgets, found through `pkg-config`.
- A Qt Multimedia backend plugin, which both installers require: AVFoundation on macOS (in Homebrew's qt), the FFmpeg plugin of `libqt6multimedia6` on Debian. On macOS the installer also requires the Vulkan headers, without which Qt declares no `QVulkanInstance`.

```bash
# Debian, Ubuntu, Raspberry Pi OS
sudo apt install build-essential g++ pkg-config php8.4-dev qt6-base-dev qt6-base-dev-tools \
    qt6-multimedia-dev libqt6multimedia6 libqt6multimediawidgets6 qt6-webengine-dev qt6-wayland

# macOS: Xcode Command Line Tools, and Homebrew's PHP ships phpize and php-config
xcode-select --install
brew install pkgconf qt vulkan-headers php@8.4
```

## Installation

### With PHP PIE (recommended)

```bash
pie install php-io-extensions/qt
```

### Manually (install script)

```bash
git clone https://github.com/php-io-extensions/qt.git
cd qt

./install-debian-trixie.sh             # Debian Trixie, Ubuntu 24.04+, Raspberry Pi OS: the php on PATH
./install-macos.sh                     # Homebrew php@8.4 and php@8.4-zts
./install-macos.sh /path/to/bin/php    # the macOS script takes specific PHP binaries
```

### Manually (phpize)

```bash
git clone https://github.com/php-io-extensions/qt.git
cd qt
phpize
./configure --enable-qt
make -j"$(nproc 2>/dev/null || sysctl -n hw.ncpu)"
sudo make install
```

Then add `extension=qt.so` to your `php.ini`, or to a file in the scan directory `php --ini` reports.

### Verify

```console
$ php --ri qt

qt

qt support => enabled
Version => 0.11.2
Qt => 6.11.2 (built 6.11.2)
```

## API

The calls that create the application, pump Qt's event dispatcher, sleep with a
budget, wake a sleep, open and close windows, build menu bars, lay widgets out,
style them, drive the common controls and play video:

| Class | Qt |
|---|---|
| `QObject` | constructor, `objectName`, `setObjectName`, `inherits`, `parent`, `setParent`, `children`, `deleteLater`, `connect` (string signature), `disconnect` |
| `QCoreApplication`, `QGuiApplication`, `QApplication` | constructors, `instance`, `processEvents` (both overloads), `sendPostedEvents`, `exec`, `quit`, `exit`, `applicationName`, `setApplicationName`, `applicationPid`, `closingDown`, `startingUp`, `setAttribute`, `testAttribute` (`Qt\ApplicationAttribute`), `platformName`, `desktopFileName`, `setDesktopFileName`, `applicationDisplayName`, `setApplicationDisplayName`, `quitOnLastWindowClosed`, `setQuitOnLastWindowClosed` |
| `QTimer` | constructor, `start` (both overloads), `stop`, `isActive`, `interval`, `setInterval`, `isSingleShot`, `setSingleShot`, `timerType`, `setTimerType`, `remainingTime`, `timerId`, `singleShot` (functor overload) |
| `QSocketNotifier` | constructor (fd as int, stream or Socket), `socket`, `type`, `isEnabled`, `setEnabled`, `isValid` |
| `QAbstractEventDispatcher` | `instance`, `processEvents`, `wakeUp`, `interrupt` |
| `QMetaObject\Connection` | `operator bool` as `isValid()` |
| `QMetaObject` | `invokeMethod` (object, member name, `Qt\ConnectionType`, arguments converted to its parameter types: calls a slot or emits a signal) |
| `QWidget` | constructor, `createWindowContainer` (static; the container owns the window), `show`, `hide`, `close`, `isVisible`, `setVisible`, `isWindow`, `window`, `windowFlags`, `setWindowFlags`, `windowModality`, `setWindowModality`, `isActiveWindow`, `activateWindow`, `setFocus`, `clearFocus`, `hasFocus`, `focusPolicy`, `setFocusPolicy` (`Qt\FocusPolicy`), `setTabOrder` (static), `raise`, `windowTitle`, `setWindowTitle`, `resize`, `width`, `height`, `size`, `sizeHint`, `pos`, `geometry`, `setGeometry`, `move`, `setMinimumSize`, `minimumWidth`, `minimumHeight`, `setFixedSize`, `setSizePolicy`, `setLayout`, `layout`, `isEnabled`, `setEnabled`, `styleSheet`, `setStyleSheet`, `font`, `setFont`, `setParent` (widgets only), `parentWidget`, `setAttribute`, `testAttribute` |
| `QWindow`, `QSurface\SurfaceType` | constructor (needs a `QGuiApplication`), `setSurfaceType`, `surfaceType`, `winId` (the native handle: an `NSView` address on macOS; creates the platform window when it has none), `create`, `show`, `hide`, `destroy`, `isExposed`, `resize`, `close`, `width`, `height`, `devicePixelRatio`, `setVulkanInstance`, `vulkanInstance`; the seven surface types |
| `QVulkanInstance` | constructor, `setVkInstance` (adopts a `VkInstance` address, e.g. ext-vulkan's `VkInstance::pointer()`), `create`, `isValid`, `errorCode`, `vkInstance`, `destroy`, static `surfaceForWindow` (a `VkSurfaceKHR` address). Present when Qt was built with Vulkan. On macOS set `QT_VULKAN_LIB` to the loader (`$(pkg-config --variable=libdir vulkan)/libvulkan.1.dylib`): Qt loads it by name and Homebrew's is outside dyld's search path |
| `QMainWindow` | constructor, `menuBar`, `setMenuBar`, `centralWidget`, `setCentralWidget` |
| `QMenuBar`, `QMenu` | constructors, `addMenu(title)`, `addAction`, `clear`, `isNativeMenuBar`, `setNativeMenuBar`; `title`, `setTitle`, `addSeparator`, `isEmpty`, `menuAction`, `popup(QPoint, ?QAction)` |
| `QAction` | constructor, `text`, `setText`, `setIcon` (`QIcon`), `isCheckable`, `setCheckable`, `isChecked`, `setChecked`, `isEnabled`, `setEnabled`, `isSeparator`, `setSeparator`, `menuRole`, `setMenuRole`, `shortcut`, `setShortcut` (`QKeySequence`), `trigger`, `toggle` |
| `QDialog`, `QMessageBox`, `QFileDialog` | constructors, `open`, `isModal`, `setModal`, `result`, `done`, `accept`, `reject`; `text`, `setText`, `informativeText`, `setInformativeText`, `textFormat`, `setTextFormat` (`Qt\TextFormat`), `addButton` (`QMessageBox\ButtonRole`), `setDefaultButton`, `setEscapeButton`, `clickedButton`; `setFileMode`, `setAcceptMode`, `setOption` (`QFileDialog\FileMode`, `AcceptMode`, `Option`), `setDirectory`, `selectFile`, `selectedFiles` |
| `QClipboard` | from `QGuiApplication::clipboard()` (null, with Qt's warning, before a `QGuiApplication`): `setText`, `text` (`QClipboard\Mode`) |
| `QObject` (filters) | `installEventFilter`, `removeEventFilter` |
| `QOpenGLWidget`, `QOpenGLPainter`, `QSurfaceFormat` | constructor, `makeCurrent`, `doneCurrent`, `isValid`, `defaultFramebufferObject`, `update`, `setFormat`, `format`; `QSurfaceFormat` version, profile and renderable type (`defaultFormat`, `setDefaultFormat`); trampoline: `new QOpenGLPainter(callable, ?QWidget)` runs PHP from `paintGL()` |
| `QEventFilter` | trampoline: `new QEventFilter(callable)`; hands every event of each watched object to PHP as `($watched, QEvent $event)` and returns PHP's bool to Qt, the event alive only during the call |
| `QEvent`, `QInputEvent`, `QMouseEvent`, `QKeyEvent`, `QWheelEvent`, `QContextMenuEvent` | `type`, `accept`, `ignore`, `isAccepted`, `spontaneous`; `modifiers`, `timestamp`, `deviceType` (`QInputDevice\DeviceType`); mouse `button`, `buttons`, `position`, `globalPosition`; key `key` (a `Qt\Key` value), `text`, `isAutoRepeat`, `nativeScanCode`, `nativeVirtualKey`, `matches` (a `QKeySequence\StandardKey`); `QInputMethodEvent` (constructor with the preedit text and its `QInputMethodEvent\Attribute` list, `setCommitString`, `commitString`, `preeditString`; boxed as its class by a filter); wheel `pixelDelta`, `angleDelta`, `position`, `globalPosition`, `source` (`Qt\MouseEventSource`); context menu `reason` (`QContextMenuEvent\Reason`), `pos`, `globalPos`; constructors for the mouse, key, wheel and context-menu events, and a plain `QEvent` of a type Qt sends as one (window activation, the change notices, …; other types are a ValueError), sent with `QCoreApplication::sendEvent` |
| Hit tests, hints | `QApplication::widgetAt`, `QApplication::focusWidget`, `QApplication::activeModalWidget`, `QWidget::mapFromGlobal`, `QGuiApplication::styleHints()` → `QStyleHints` `mousePressAndHoldInterval`, `startDragDistance`, `mouseDoubleClickInterval`, `mouseDoubleClickDistance`, `colorScheme` (Qt 6.5), `setColorScheme`, `unsetColorScheme` (Qt 6.8), with `Qt\ColorScheme` |
| `QLayout`, `QLayoutItem` | `setSpacing`, `spacing`, `setContentsMargins`, `count`, `removeWidget`, `indexOf`, `itemAt` (a `QLayoutItem`: `widget`, `layout`, `spacerItem`) |
| `QBoxLayout`, `QVBoxLayout`, `QHBoxLayout` | constructors (optional parent widget), `addWidget(widget, stretch, alignment)`, `insertWidget`, `addLayout`, `addStretch`, `setStretch`, `setAlignment`; widgets added before the layout is installed are held until it is |
| `QGridLayout` | constructor, `addWidget(widget, row, column, rowSpan, columnSpan, alignment)`, `addItem(QSpacerItem, …)`, `rowCount`, `columnCount`, `setRowStretch`, `setColumnStretch`, `rowStretch`, `columnStretch`, `setHorizontalSpacing`, `setVerticalSpacing`, `itemAtPosition` (a `QLayoutItem`) |
| `QSpacerItem` | constructor (w, h, policies), `changeSize`, `sizeHint` |
| `QLabel` | constructor, `text`, `setText`, `alignment`, `setAlignment`, `wordWrap`, `setWordWrap`, `setScaledContents`, `pixmap`, `setPixmap`, `textFormat`, `setTextFormat`, `openExternalLinks`, `setOpenExternalLinks`, `textInteractionFlags`, `setTextInteractionFlags`; signals `linkActivated(QString)`, `linkHovered(QString)` |
| `QDesktopServices` | `openUrl(QUrl)` |
| `QAbstractButton`, `QPushButton`, `QCheckBox` | constructors (text, parent), `text`, `setText`, `isCheckable`, `setCheckable`, `isChecked`, `setChecked`, `click`, `toggle`, push button `isDefault`, `setDefault`; signals `clicked(bool)`, `toggled(bool)` |
| `QAbstractSlider`, `QSlider`, `QScrollBar` | QScrollBar constructor (orientation, parent), or a scroll area's `verticalScrollBar`, `horizontalScrollBar`; QSlider constructor (orientation, vertical by default as in Qt, parent), `minimum`, `maximum`, `setRange`, `value`, `setValue`, `orientation`, `setOrientation`; signal `valueChanged(int)` |
| `QComboBox` | constructor, `addItem`, `addItems`, `clear`, `count`, `currentIndex`, `setCurrentIndex`, `currentText`, `itemText`, `setItemIcon` (`QIcon`), `isEditable`, `setEditable`, `lineEdit`, `setCompleter`, `insertPolicy`, `setInsertPolicy`, `sizeAdjustPolicy`, `setSizeAdjustPolicy`, `setEditText`; signal `currentIndexChanged(int)` |
| `QCompleter`, `QAbstractItemModel`, `QStringListModel` | constructor (model, parent), `setWidget`, `completionMode`, `setCompletionMode`, `setCaseSensitivity`, `completionPrefix`, `setCompletionPrefix`, `complete(rect)`, `popup`; abstract, made through `QStringListModel`; constructor, `setStringList`, `stringList` |
| `QToolButton`, `QIcon`, `QActionGroup` | constructor, `setMenu` (the menu is not taken: its owner outlives the button), `menu`, `popupMode`, `setPopupMode`, `toolButtonStyle`, `setToolButtonStyle`, `autoRaise`, `setAutoRaise`, `showMenu`; value: constructor (`QPixmap`), `isNull`; constructor, `addAction`, `checkedAction` |
| Button icons, tab insert, wheel phase, widget points | `QAbstractButton` `setIcon`, `iconSize`, `setIconSize`; `QPushButton` `isFlat`, `setFlat`; `QTabWidget` `insertTab`; `QWheelEvent` `phase`; `QWidget` `mapToGlobal`, `accessibleName`, `setAccessibleName` |
| `QLineEdit` | constructor (text, parent), `text`, `setText`, `placeholderText`, `setPlaceholderText`, `echoMode`, `setEchoMode`, `isReadOnly`, `setReadOnly`, `cut`, `copy`, `paste`, `selectAll`, `undo`, `redo`, `selectedText`; signals `textChanged(QString)`, `returnPressed()` |
| `QPlainTextEdit` | constructor, `toPlainText`, `setPlainText`, `isReadOnly`, `setReadOnly`, `cut`, `copy`, `paste`, `selectAll`, `undo`, `redo`, `document`, `textCursor`, `setTextCursor`, `ensureCursorVisible`, `setExtraSelections`, `extraSelections`, `lineWrapMode`, `setLineWrapMode`, `textInteractionFlags`, `setTextInteractionFlags`, `verticalScrollBar`, `horizontalScrollBar`, `viewport`; signals `textChanged()`, `cursorPositionChanged()` |
| `QTextDocument` | a text edit's: `findBlockByNumber` (Qt's invalid block past the end), `blockCount`, `characterCount`, `markContentsDirty` |
| `QTextLayout` | a block's (`QTextBlock::layout`, held by a cursor at the block's start): `setFormats`, `formats` of `QTextLayout\FormatRange` (public `start`, `length`, `format`) |
| `QColor`, `QBrush`, `QPalette`, `QTextCharFormat`, `QTextCursor`, `QTextBlock`, `QTextEdit\ExtraSelection` | values: `QColor` (`isValid`), `QBrush` (colour, `Qt\BrushStyle`), `QPalette` (a copy from `QGuiApplication::palette()`; `color` by `QPalette\ColorRole`, whose `ACCENT` is Qt 6.6's), `QTextCharFormat` (`setForeground`, `setBackground`, `setProperty`, `boolProperty`, `hasProperty`; `QTextFormat::FULL_WIDTH_SELECTION`), `QTextCursor` (UTF-16 positions, `setPosition`, `movePosition` by `QTextCursor\MoveOperation`, `isNull`), `QTextBlock` (`isValid`, `layout`), `QTextEdit\ExtraSelection` (public `cursor`, `format`) |
| `QFontDatabase` | `systemFont` |
| `QFontMetricsF` | value: constructor (`QFont`), `ascent`, `descent`, `lineSpacing`, `averageCharWidth`, `horizontalAdvance`, `elidedText` (`Qt\TextElideMode`) |
| `QDateEdit`, `QCalendarWidget` | constructor, `date`, `setDate`, `minimumDate`, `setMinimumDate` (`QDate`), `setCalendarPopup`, `calendarWidget`, `setDisplayFormat`; signal `dateChanged(QDate)` hands a `QDate` over |
| `QProgressBar` | constructor, `minimum`, `maximum`, `setRange`, `value`, `setValue`, `setTextVisible`, `reset` |
| `QFrame`, `QScrollArea` | constructors, `frameShape`, `setFrameShape`, `setFrameShadow`; `setWidget`, `widget`, `setWidgetResizable`, `setHorizontalScrollBarPolicy`, `setVerticalScrollBarPolicy`, `viewport`, `verticalScrollBar`, `horizontalScrollBar` |
| `QSplitter`, `QSplitterHandle`, `QTabWidget` | `QSplitter(Qt\Orientation)`, `orientation`/`setOrientation`, `addWidget`, `insertWidget` (outside 0..count appends), `count`, `widget`, `indexOf`, `setSizes`/`sizes`, `handleWidth`/`setHandleWidth`, `opaqueResize`/`setOpaqueResize`, `childrenCollapsible`/`setChildrenCollapsible`, `setStretchFactor`, `handle`; handle `splitter`; signal `splitterMoved(int,int)`. `addTab`, `removeTab`, `indexOf`, `count`, `currentIndex`/`setCurrentIndex`, `currentWidget`, `setTabText`/`tabText`, `widget`, `documentMode`/`setDocumentMode` (Qt's own index handling: a bad tab index does nothing, `tabText` gives ""); signal `currentChanged(int)` |
| `QAbstractItemView`, `QTableWidget`, `QTableWidgetItem` | `setSelectionBehavior`, `setSelectionMode`, `setEditTriggers`, `NO_EDIT_TRIGGERS`; constructor (rows, columns, parent), `rowCount`, `setRowCount`, `columnCount`, `setColumnCount`, `setHorizontalHeaderLabels`, `horizontalHeaderItem`, `selectedItems`, `clearSelection`, `setItem`, `item`, `clearContents`, `currentRow`, `selectRow`; item constructor, `text`, `setText`, `row`; signals `itemSelectionChanged()`, `cellClicked(int,int)` |
| `QTreeWidget`, `QTreeWidgetItem` | constructor (parent), `columnCount`, `setColumnCount`, `setHeaderLabels`, `addTopLevelItem`, `clear`, `currentItem`, `setCurrentItem`, `scrollToItem` (`QAbstractItemView\ScrollHint`), `expandItem`, `collapseItem`, `selectedItems`; item constructor (type), `text`/`setText`, `foreground`/`setForeground` (`QBrush`), `data`/`setData` (column, role, value as QVariant holds it), `addChild`, `childCount`, `child`, `parent`, `isExpanded`/`setExpanded`, `childIndicatorPolicy`/`setChildIndicatorPolicy`; signals `currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)`, `itemSelectionChanged()`, `itemActivated(QTreeWidgetItem*,int)`, `itemExpanded(QTreeWidgetItem*)`, `itemCollapsed(QTreeWidgetItem*)`, their items as the wrappers PHP holds |
| `QFont`, `QPixmap` | values: constructor (family, point size, weight, italic), `family`, `setFamily`, `pointSizeF`, `setPointSizeF`, `weight`, `setWeight`; constructor, `load`, `isNull`, `width`, `height`, `scaled`, `devicePixelRatio`, `setDevicePixelRatio` |
| `QImage`, `QByteArray` | `QImage` borrows the buffer at an address (a `QByteArray`'s or a framebuffer's `pointer()`, trusted), with Qt's cleanup function and info: constructor (data, width, height, bytes per line, `QImage\Format`, cleanup, info), `isNull`, `width`, `height`, `format`, `copy`; `QPixmap::fromImage` turns it into a pixmap. `QByteArray(data, size)`, `size`, `pointer` |
| `QPoint`, `QPointF`, `QSize`, `QRect`, `QDate`, `QKeySequence` | values, as Qt's own: points, sizes and rects in and out of the widget, event and layout calls; `QDate` (`toString`, `fromString` by `Qt\DateFormat`); `QKeySequence` (`toString`, `fromString` by `QKeySequence\SequenceFormat`) |
| `QUrl` | value: constructor (`QUrl\ParsingMode`), `fromLocalFile`, `toString(options)`, `isValid` |
| `QAudioOutput` | constructor, `setMuted`, `isMuted`, `setVolume`, `volume` |
| `QMediaPlayer` | constructor, `setVideoOutput`, `setAudioOutput`, `setSource`, `source`, `play`, `pause`, `stop`, `position`, `duration`, `setPosition`, `playbackState`, `mediaStatus`, `setLoops`, `INFINITE_LOOPS`, `errorString`, `hasVideo`, `isAvailable`; signals `playbackStateChanged`, `mediaStatusChanged`, `errorOccurred`, `positionChanged` |
| `QVideoWidget` | constructor |

Enums: `QEventLoop\ProcessEventsFlag`, `Qt\TimerType`, `QSocketNotifier\Type`,
`QAction\MenuRole`, `Qt\Orientation`, `Qt\AspectRatioMode`, `Qt\ScrollBarPolicy`,
`Qt\ToolButtonStyle`, `Qt\CaseSensitivity`, `QComboBox\InsertPolicy`, `QComboBox\SizeAdjustPolicy`, `QCompleter\CompletionMode`, `QToolButton\ToolButtonPopupMode`,
`QSizePolicy\Policy`, `QLineEdit\EchoMode`, `QFont\Weight`, `QTextCursor\MoveMode`, `QTextCursor\MoveOperation`, `QPlainTextEdit\LineWrapMode`,
`QFontDatabase\SystemFont`, `Qt\TextElideMode`, `Qt\TextInteractionFlag`, `QFrame\Shape`,
`QFrame\Shadow`, `QAbstractItemView\SelectionBehavior`,
`QAbstractItemView\SelectionMode`, `QAbstractItemView\ScrollHint`,
`QTreeWidgetItem\ChildIndicatorPolicy`, `QMediaPlayer\PlaybackState`,
`QMediaPlayer\MediaStatus`, `QMediaPlayer\Error`, and, generated from the Qt
headers by `scripts/gen-enum.php`, `QEvent\Type`, `Qt\WidgetAttribute`,
`Qt\AlignmentFlag`, `Qt\ItemDataRole`, `Qt\ScrollPhase`, `Qt\MouseEventSource` and `Qt\Key` (`KEY_0` … `KEY_9` keep the
prefix; `DEAD_a` / `DEAD_A` keep the case that tells them apart). QFlags parameters (`alignment`) take the enum or an OR'd int.
Function: `qVersion()`. The stubs in `stubs/` are the full declaration.

### Signals

Signals connect by the signature `SIGNAL()` spells, and the callable receives
the signal's arguments:

```php
QObject::connect($timer, 'timeout()', fn () => …);
QObject::connect($notifier, 'activated(QSocketDescriptor,QSocketNotifier::Type)', fn (int $fd, int $type) => …);
```

### Coverage

[SUPPORT.md](SUPPORT.md) lists every public member function name of the classes QtCore, QtGui and
QtWidgets declare (signals, operators, deprecated members and the value classes the extension
marshals as PHP strings and arrays left out; overloads count once), each marked bound or not; the
API badge is computed from it. Regenerate both after a binding change, and check them:

```bash
php84 scripts/support.php           # writes SUPPORT.md and the badge
php84 scripts/support.php --check   # exits 1 when either is stale
```

## Running the test suite

```bash
composer install
XDEBUG_MODE=off php -d memory_limit=128M vendor/bin/pest
php examples/smoke.php          # bridge: application, pump, sleep, wake; prints SMOKE_OK
php examples/window-smoke.php   # window, menu bar, actions, close filter; prints SMOKE_OK
```

`tests/VideoTest.php` plays `tests/fixtures/clip.mp4` (1.2 s, silent) through the
platform media backend: AVFoundation on macOS, the FFmpeg plugin of
`libqt6multimedia6` on Debian.

Each kept refusal has a probe in `tests/Probes` that shows the crash it prevents;
they run against a build configured with `./configure --enable-qt --enable-qt-probes`.

Tests open windows: run them in a logged-in GUI session. On Linux over SSH, export the session's `DISPLAY` (and `WAYLAND_DISPLAY` when
the `qt6-wayland` platform plugin is installed) first. Design notes live in the
OKF bundle under `.okf/`.

## License

MIT. See [LICENSE](LICENSE). Qt is available under the LGPL-3.0, the GPL or a commercial licence; it is linked, not shipped.
