# Log

## 2026-10-09

* `QMenu::popup(x, y)`: a menu at a global point, returning at once. For context menus (HumanInput slice 27). [surface](api/surface.md)
* Compiled into PHP (`--enable-qt` in php-src, as `venusian build` does), the Qt libraries join PHP's link line (macOS frameworks and their `-F` included); before, only a shared build linked them and the static link failed on every Qt symbol. Compiled in without ext/sockets, `Socket` arguments are not accepted instead of failing to compile. [build](runbooks/build.md)
* `extra.venusian.system` in composer.json: the apt packages `venusian build` installs to compile the extension, the run-time packages a `.deb` carrying it depends on or recommends beyond what `dpkg-shlibdeps` sees, and the Homebrew packages for a dev install.
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
