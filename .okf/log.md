# Log

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
