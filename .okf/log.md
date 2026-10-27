# Log

## 2026-10-27

* `QMessageBox` icon (`QMessageBox\Icon`, generated from qmessagebox.h) and checkBox (+set); `QFileDialog` nameFilters (+set) and filter (+set, `QDir\Filter` generated from qdir.h, or an int of or-ed bits); `QClipboard` clear and mimeData; `QMimeData` (constructor, hasText, formats). `scripts/gen-enum.php` reads an enumerator marked `QT_DEPRECATED_VERSION_X_*("…")`, as Qt 6.11 marks `QDir::Modified`. 647 / 11435.

## 2026-10-26

* `QKeyEvent::matches()` with `QKeySequence\StandardKey` (generated from qkeysequence.h); `QInputMethodEvent` (constructor with the preedit text and an attribute list, `setCommitString`, `commitString`, `preeditString`), `QInputMethodEvent\AttributeType` and the struct `QInputMethodEvent\Attribute`; the event filter boxes an input method event as its class. 634 / 11435.

## 2026-10-24

* `QWidget::style()`, `QStyle` (abstract, the application's style object) with `subElementRect()`, `QStyle\SubElement` (generated from qstyle.h, identical on Qt 6.4 and 6.11), and the value classes `QStyleOption` (`initFrom()`) and `QStyleOptionButton`, held as its `QStyleOption` base: a face laid out inside the rect the style draws a push button's contents into.

## 2026-10-23

* Fix: a process that freed its `QApplication` before a widget or window segfaulted in `~QWidget` (xcb). PHP's shutdown does that when a reused object handle puts a window after the application. With no application, an owned parentless widget or window is left to the process exit. [surface](api/surface.md)
* `QCompleter`, `QAbstractItemModel` (abstract), `QStringListModel`, `QIcon`, `QToolButton`, `QActionGroup`; `QComboBox` editable, line edit, completer, insert policy, edit text; `QAbstractButton` icons, `QPushButton` flat; a public `QScrollBar` constructor; `QWheelEvent::phase`; `QWidget::mapToGlobal`, accessible name; `QTabWidget::insertTab`. Enums `Qt\ToolButtonStyle`, `Qt\CaseSensitivity`, `QComboBox\InsertPolicy`, `QCompleter\CompletionMode`, `QToolButton\ToolButtonPopupMode`. New sites `qapp-scrollbar`, `qapp-tool-button` (QToolButton through `phpqt_construct_widget`'s `qapp-widget` check). [surface](api/surface.md)
* 0.10.3: `QWidget::clearFocus`. No new site. [surface](api/surface.md)

## 2026-10-22

* 0.10.3: `QWidget` `focusPolicy` / `setFocusPolicy` (`Qt\FocusPolicy`, generated with its checks) and static `setTabOrder`; `QKeyEvent` `text`, `isAutoRepeat`, `nativeScanCode`, `nativeVirtualKey`. No new site. [surface](api/surface.md)
* Coverage: `scripts/support.php` writes `SUPPORT.md` (every public member function name of QtCore, QtGui and QtWidgets classes, from clang++'s AST dump of each public class header; signals found through `QT_ANNOTATE_ACCESS_SPECIFIER`; a stub method on a subclass counts for the base that declares it, through every public base) and the README API badge; `--check` compares without the date. 570 / 11435 on Qt 6.11.2.
* `QMessageBox` `addButton`, `setDefaultButton`, `setEscapeButton`, `clickedButton`; `QFileDialog` (its constructor at site `qapp-file-dialog`), `setFileMode`, `setAcceptMode`, `setOption`, `setDirectory`, `selectFile`, `selectedFiles`; `QGuiApplication::clipboard` (`?QClipboard`: Qt warns and returns nullptr before an application, and lives, so no refusal), `QClipboard` `setText`, `text`; the generated `QMessageBox\ButtonRole`, `QFileDialog\FileMode`, `AcceptMode`, `Option`, `QClipboard\Mode`; in 0.10.3. An unshown native `QFileDialog` keeps no selection; Qt's own dialog (`DONT_USE_NATIVE_DIALOG`) does. [surface](api/surface.md)

## 2026-10-20

* `QWidget` `window`, `windowFlags`, `setWindowFlags`, `windowModality`, `setWindowModality`; the generated `Qt\WindowModality`; `QPushButton` `isDefault`, `setDefault`; in 0.10.3. `setParent` keeps its one-argument form: PHP holds it to `QObject::setParent(?QObject)`, so the flags of a child window go through `setWindowFlags`. [surface](api/surface.md)

## 2026-10-19

* `QWheelEvent` (constructor, `pixelDelta`, `angleDelta`, `position`, `globalPosition`, `source`; filters box wheels as it), the generated `Qt\ScrollPhase` and `Qt\MouseEventSource`, and `QStyleHints::mouseDoubleClickInterval` / `mouseDoubleClickDistance`, in 0.10.3. [surface](api/surface.md), [signals](architecture/signals.md)

## 2026-10-18

* `QTreeWidget` and `QTreeWidgetItem`, 0.10.3. Item lifetime as for table items: `PhpTreeWidgetItem`, owned by the tree or parent once Qt stored it. `QTreeWidgetItem*` signal arguments arrive as the item's wrapper. `data()` reads a QVariant through the signal-argument conversion. `QBrush`, `QColor`, `QFont` and `QPixmap` now cross both ways as QVariants and as signal arguments. Also `QAbstractItemView\ScrollHint`, `QTreeWidgetItem\ChildIndicatorPolicy`, `QKeyEvent` (filters box key presses and releases as it), and the generated `Qt\ItemDataRole` and `Qt\Key`. The constructor carries the `qapp-tree-widget` site. [surface](api/surface.md), [object model](architecture/object-model.md), [signals](architecture/signals.md)
* Event constructors refuse ints wider than their C type instead of truncating them: `QKeyEvent` key (int) and modifiers, `QMouseEvent` button, buttons and modifiers, `QContextMenuEvent` modifiers (32-bit masks). [surface](api/surface.md)
* `scripts/gen-enum.php` handles three more cases: deprecation messages that hold commas, digit names (`KEY_0`), and names that differ only in case (`DEAD_a` / `DEAD_A`). Its output for the enums already generated is unchanged. [generating enums](runbooks/generating-enums.md)

* Qt 1:1 (0.10.2): every method is one native call under Qt's name, parameters and defaults. Value classes `QPoint`, `QPointF`, `QSize`, `QRect`, `QDate`, `QKeySequence`, `QByteArray` replace arrays and strings; `QThread`, `QLayoutItem`, `QPointingDevice`, `QCalendarWidget`; window flags on the widget constructors; applications take `(int &$argc, array $argv, int $flags)`; `invokeMethod` takes the connection type; `QTextEdit\ExtraSelection` is the struct; `QImage` borrows its buffer with Qt's cleanup function; `QMenu::popup(QPoint)`, `addMenu(title)`, `QUrl::toString(options)`; abstract classes are abstract. `QSurfaceFormat::setDefaultFormat` and `QCoreApplication::setAttribute`/`testAttribute` with `Qt\ApplicationAttribute`: a GL widget composites only when its context shares with the window's, which on macOS means the same profile as Qt's default. [surface](api/surface.md), [layout](api/layout.md), [object model](architecture/object-model.md)
* Qt answers for itself: refusals stay only where a probe showed a crash, each with its `bindings.json` site and a test in `tests/Probes` (`--enable-qt-probes`); the main-thread and second-application checks are macOS-only. [errors and threads](architecture/errors-and-threads.md), [build](runbooks/build.md)
* Signal arguments of the value types reach PHP in their classes; `QEventFilter` hands over every event as `(watched, event)`. [signals](architecture/signals.md)
* `Qt::NoTitleBarBackgroundHint`'s check is guarded for Qt 6.9, so the extension builds on Qt 6.4–6.8 again.

## 2026-10-16

* `QSplitter`, `QSplitterHandle` and `QTabWidget`. 0.10.1. [surface](api/surface.md)
* The Debian/Ubuntu installer checks for Qt 6.4, the floor config.m4 builds against (Ubuntu 24.04 ships 6.4.2). 0.10.1.

## 2026-10-14

* QColor, QBrush, QTextCharFormat, QTextCursor, QTextBlock, QTextEditExtraSelection values; QTextDocument; QScrollBar; QFontDatabase::systemFont; QPlainTextEdit cursor, extra selections, wrap mode, interaction flags and scroll bars. 0.10.1. [surface](api/surface.md)
* QTextCursor::movePosition and the QTextCursor\MoveOperation enum. [surface](api/surface.md)
* QPlainTextEdit::viewport, whose resizes re-wrap the text. [surface](api/surface.md)
* QEvent constructor for the types Qt sends as a plain QEvent, so a test can deliver window activation without the OS granting it. [surface](api/surface.md)

## 2026-10-10

* `QInputEvent::setTimestamp` (ms, not negative), so tests stamp events the way Qt stamps real ones. [surface](api/surface.md)
* QLabel openExternalLinks and textInteractionFlags (`Qt\TextInteractionFlag`, generated), its linkActivated / linkHovered signals documented, QDesktopServices::openUrl (toolkit links). [surface](api/surface.md)
* `QApplication::focusWidget`, `QWidget::setFocus`/`hasFocus`, and the edit slots (cut, copy, paste, selectAll, undo, redo) of `QLineEdit` and `QPlainTextEdit`, plus `QLineEdit::selectedText`, for the Edit menu (HumanInput slice 29). [surface](api/surface.md)

## 2026-10-09

* `QMenu::popup(x, y)`: a menu at a global point, returning at once. For context menus (HumanInput slice 27). [surface](api/surface.md)
* Compiled into PHP (`--enable-qt` in php-src), the Qt libraries join PHP's link line (macOS frameworks and their `-F` included); before, only a shared build linked them and the static link failed on every Qt symbol. Compiled in without ext/sockets, `Socket` arguments are not accepted instead of failing to compile. [build](runbooks/build.md)
* Floor Qt 6.4 (Ubuntu 24.04): five `QEvent` checks guarded by `gen-enum.php --since`; build.json apps on the 24.04 image compile ext-qt. [generating enums](runbooks/generating-enums.md)
* `QEventFilter` callbacks get the event as a third argument, alive only during the call; `QEvent`, `QInputEvent`, `QMouseEvent`, `QContextMenuEvent` (+ enums `QContextMenuEvent\Reason`, `QInputDevice\DeviceType`); `QCoreApplication::sendEvent`, `QApplication::widgetAt`, `QWidget::mapFromGlobal`, `QGuiApplication::styleHints()`/`QStyleHints`. For right-click mail (HumanInput slice 26). [surface](api/surface.md)

## 2026-10-06

* `QWindow::destroy()`; `QVulkanInstance` is made on the main thread only. Suite 108 on Homebrew PHP 8.4 NTS and ZTS, 107 + 1 skipped on the Pi. [surface](api/surface.md)
* `QVulkanInstance` over an application's `VkInstance` and `QVulkanInstance::surfaceForWindow()`; `QWindow::setVulkanInstance()`/`vulkanInstance()`, `resize()`, `close()`. Freeing the instance destroys and detaches the windows using it; `create()` without a QGuiApplication is a QtException (Qt dereferenced a null platform). macOS needs `QT_VULKAN_LIB` naming the loader. Suite 107 on Homebrew PHP 8.4 NTS and ZTS, 106 + 1 skipped on the Pi (Qt on Wayland). [surface](api/surface.md)
* `QOpenGLWidget` and the `QOpenGLPainter` trampoline (`paintGL()` runs PHP with the context current and the widget's framebuffer object bound); the build needs Qt6OpenGL and Qt6OpenGLWidgets. `QSurfaceFormat` and `QOpenGLWidget::setFormat()`/`format()`: macOS gives a widget a legacy 2.1 context unless it asks for 4.1 core; the Pi's default is desktop GL 3.1 (GLSL 1.40). A slot Qt destroys frees its callable with its ancestors marked as tearing down: an owned, parentless ancestor freed then goes to `deleteLater()` instead of being deleted under Qt (it segfaulted or deadlocked). Suite 101 on Homebrew PHP 8.4 NTS and ZTS, 100 + 1 skipped on the Pi. [surface](api/surface.md), [object model](architecture/object-model.md)

## 2026-10-05

* Extension version is 0.10.2. `QWindow` (surface type, `winId`, create/show/hide, size, pixel ratio), `QSurface\SurfaceType`, `QWidget::createWindowContainer()`. [surface](api/surface.md)

## 2026-10-04

* Extension version is 0.10.1. `QImage` copies from an address as well as a string: the constructor's `$data` widens to `string|int`, an address trusted to hold `$bytesPerLine × $height` readable bytes (an ext-fb buffer's `pointer()`), never 0. [surface](api/surface.md)

## 2026-10-03

* Pixels from bytes: `QImage` (a deep copy of the bytes it is given), `QImage\Format`, `QPixmap::fromImage()`. [surface](api/surface.md)

## 2026-10-02

* Toolkit primitives slice, ext side. [Surface](api/surface.md): QLayout/QBoxLayout/QVBoxLayout/QHBoxLayout/QGridLayout, QWidget geometry/size-policy/style/font/enabled methods, QObject::children; QLabel, QAbstractButton/QPushButton/QCheckBox, QAbstractSlider/QSlider, QComboBox, QLineEdit, QPlainTextEdit, QDateEdit, QProgressBar, QFrame, QScrollArea, QAbstractItemView/QTableWidget/QTableWidgetItem, QFont, QPixmap; QUrl, QAudioOutput, QMediaPlayer, QVideoWidget. Enums `Qt\AlignmentFlag` (generated), `QSizePolicy\Policy`, `Qt\Orientation`, `Qt\AspectRatioMode`, `Qt\ScrollBarPolicy`, `QLineEdit\EchoMode`, `QFont\Weight`, `QFrame\Shape/Shadow`, `QAbstractItemView\SelectionBehavior/SelectionMode`, `QMediaPlayer\PlaybackState/MediaStatus/Error`.
* New: [layout](api/layout.md), [video](api/video.md). [Object model](architecture/object-model.md): value objects and the table item's second owner. [Signals](architecture/signals.md): QDate as ISO string. [Build](runbooks/build.md): Qt Multimedia required by `config.m4` and both installers.
* `phpqt_qstring`/`phpqt_return_qstring` and the widget constructor templates moved into `runtime.h`.
* Driver review bindings: `QGridLayout` row/column stretch and `addItem(QSpacerItem)`, `QSpacerItem`, `QBoxLayout::stretch`, `QLayout::invalidate`, `QLabel::textFormat` + `Qt\TextFormat`, slider single/page step, `QPixmap::scaled` transformation + device pixel ratio, `QWidget::devicePixelRatioF`, `QDateEdit::calendarWidget`/`minimumDate`, `invokeMethod` arguments. Value objects gained a `forget` hook so every owner-held kind (table item, spacer) clears its back-pointer the same way.
* `QAbstractItemView::clearSelection`, `QTableWidget::selectedItems`, `QTableWidgetItem::row` ([surface](api/surface.md)): a driver reads which row is selected, including none, and clears it.
* `QMetaObject::invokeMethod(object, member)` ([surface](api/surface.md)): emits a signal by name, so drivers' tests can drive `returnPressed()` without a keyboard.
* Review fixes: [layout](api/layout.md) holds for widgets added before installation; `insertWidget` and `setItem` range checks; Qt-made table items tracked through an item prototype, `horizontalHeaderItem`; `QPixmap` refused before a QGuiApplication; a second `__construct()` refused; `QSlider` defaults to vertical as Qt; `QFont` weight takes the 1–1000 scale; `QMediaPlayer::isAvailable`; installers require a Multimedia backend plugin ([object model](architecture/object-model.md), [video](api/video.md), [build](runbooks/build.md)).

## 2026-10-01

* Runbooks [adding a binding](runbooks/adding-a-binding.md), [generating enums](runbooks/generating-enums.md).
* [Surface](api/surface.md): QWidget, QMainWindow, QMenuBar, QMenu, QAction, QDialog, QMessageBox, QEventFilter, installEventFilter/removeEventFilter, QAction\MenuRole, generated QEvent\Type and Qt\WidgetAttribute with the generator. [Signals](architecture/signals.md): QEventFilter.

## 2026-09-30

* Bundle created with ext-qt 0.10.0: [surface](api/surface.md), [object model](architecture/object-model.md), [signals](architecture/signals.md), [errors and threads](architecture/errors-and-threads.md), [build](runbooks/build.md).
