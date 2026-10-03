---
type: API
title: Binding surface
description: Classes, enums and functions ext-qt binds, each one Qt call; C++ scopes as PHP namespaces.
resource: stubs/
tags: [qt, api]
status: draft
generated: { by: claude-opus/5.5, at: 2026-10-02T22:46:35Z }
sources:
  - id: stubs
    resource: stubs/
    title: Stub files, one per Qt header
---

# Overview

Scope: calls that create the application, pump Qt's event dispatcher, sleep with a budget, wake a sleep, open/close windows, build menu bars, lay widgets out ([layout](/api/layout.md)), style them, drive the common controls, play video ([video](/api/video.md)). Stubs = source of truth; `tests/SurfaceTest.php` fails if a stub declaration is missing from the build.[^stubs]

Naming, all fixed:

* Class = Qt class name, global namespace. Method = Qt method name. Static stays static.
* Nested C++ scope = PHP namespace: `Qt::TimerType` → `Qt\TimerType`, `QSocketNotifier::Type` → `QSocketNotifier\Type`, `QMetaObject::Connection` → `QMetaObject\Connection`.
* Enum = backed int enum, cases SCREAMING_SNAKE of the enumerator (`WaitForMoreEvents` → `WAIT_FOR_MORE_EVENTS`). QFlags params = `Enum|int`.
* Overloads that differ by a trailing argument = one method with an optional/nullable param (`processEvents($flags, ?$maxtime)`, `start(?$msec)`).
* Constructors are PHP constructors (`new QTimer($parent)`); objects Qt returns are boxed, never constructed.
* Stub file names follow Qt headers (`qnamespace.stub.php` for `Qt::`): the Mac volume is case-insensitive, so `qt.stub.php` and `Qt.stub.php` would collide.

# Schema

| Class | Bound |
|---|---|
| `QObject` | ctor(?parent), objectName, setObjectName, inherits, parent, setParent, children, deleteLater, pointer; static connect(sender, signature, callable): `QMetaObject\Connection`, disconnect(Connection): bool |
| `QCoreApplication` / `QGuiApplication` / `QApplication` | ctor(array argv); static instance, processEvents, sendPostedEvents, exec, quit, exit, applicationName/set, applicationPid, closingDown, startingUp; Gui: platformName, desktopFileName/set, applicationDisplayName/set, quitOnLastWindowClosed/set |
| `QTimer` | ctor(?parent), start(?msec), stop, isActive, interval/set, isSingleShot/set, timerType/set, remainingTime, timerId; static singleShot(msec, callable) |
| `QSocketNotifier` | ctor(int\|resource\|Socket, Type, ?parent), socket, type, isEnabled, setEnabled, isValid |
| `QAbstractEventDispatcher` | static instance, processEvents(flags), wakeUp, interrupt |
| `QMetaObject\Connection` | isValid (operator bool) |
| `QMetaObject` | static invokeMethod(QObject, member, …args): bool — a slot, invokable or signal by name (a signal is emitted: drives `returnPressed()`, `clicked(QDate)` and the like without input events); up to 10 arguments converted to the member's parameter types (int/bool/float, QString, QDate as ISO string, enum case or int, QObject); false for no member of that name and arity |
| `qVersion()` | runtime Qt version |
| `QWidget` | ctor(?parent; needs a QApplication), devicePixelRatioF, show/hide/close/visible, isWindow, isActiveWindow, activateWindow, raise, window title, resize/width/height, size/sizeHint/pos/geometry as arrays, setGeometry, move, minimum/fixed size, setSizePolicy(`QSizePolicy\Policy` ×2), setLayout/layout, enabled, style sheet, font/setFont, setParent (a non-widget parent is a TypeError), parentWidget, set/testAttribute(Qt\WidgetAttribute) |
| `QMainWindow` | ctor, menuBar (made on first use, owned by the window), setMenuBar, central widget |
| `QMenuBar`, `QMenu` | addMenu(string) → QMenu, addMenu(QMenu) → its QAction, addAction, addSeparator, clear, title, isEmpty, menuAction, native menu bar flag |
| `QAction` | text, checkable/checked, enabled, separator, menu role (`QAction\MenuRole`), shortcut as a portable-text QKeySequence string (an unreadable string is refused), trigger, toggle; signals `triggered(bool)`, `toggled(bool)` |
| `QDialog`, `QMessageBox` | open (window-modal, returns at once), modal flag, result/done/accept/reject; text, informative text |
| `QEventFilter` | trampoline for installEventFilter/removeEventFilter: `$filter(QObject $watched, QEvent\Type|int $type): bool`, only for the listed types (all when null); true stops delivery to the watched object |
| `QLayout`, `QBoxLayout`, `QVBoxLayout`, `QHBoxLayout`, `QGridLayout` | abstract bases have no public ctor; concrete ctors take ?parent widget (owner); a widget added before the layout is installed is held, not deleted ([layout](/api/layout.md)); spacing, contents margins, count, removeWidget, indexOf, itemAtWidget, invalidate; box: addWidget(w, stretch, alignment), insertWidget (index ≤ count), addLayout, addStretch, setStretch, stretch, setAlignment; grid: addWidget(w, row, col, rowSpan, colSpan, alignment), row/columnCount, h/v spacing, itemAtPosition, row/column stretch, addItem(QSpacerItem) (layout takes it).
| `QSpacerItem` | value-style item: ctor(w, h, hPolicy, vPolicy), changeSize, sizeHint; PHP owns it until a layout takes it, then it reports "deleted" once the layout deletes it | `alignment` = `Qt\AlignmentFlag|int` |
| `QLabel` | ctor(text, ?parent), text, alignment (int flags)/setAlignment, wordWrap, setScaledContents, pixmap/setPixmap(?QPixmap), textFormat/setTextFormat (`Qt\TextFormat`) |
| `QAbstractButton` → `QPushButton`, `QCheckBox` | ctor(text, ?parent), text, checkable, checked, click, toggle; signals `clicked(bool)`, `toggled(bool)` |
| `QAbstractSlider` → `QSlider` | ctor(`Qt\Orientation` = VERTICAL as Qt's parent-only overload, ?parent), minimum, maximum, setRange, value, orientation, single/page step; signal `valueChanged(int)` |
| `QComboBox` | ctor, addItem, addItems(string[]), clear, count, currentIndex, currentText, itemText; signal `currentIndexChanged(int)` |
| `QLineEdit` | ctor(text, ?parent), text, placeholder, echoMode (`QLineEdit\EchoMode`), readOnly; signals `textChanged(QString)`, `returnPressed()` |
| `QPlainTextEdit` | ctor, toPlainText/setPlainText, readOnly; signal `textChanged()` |
| `QDateEdit` | ctor, date/setDate as ISO 8601 strings (bad string = ValueError), setCalendarPopup, calendarWidget (the popup's QCalendarWidget, boxed as QWidget; null without a popup), minimumDate/setMinimumDate (ISO), setDisplayFormat; signal `dateChanged(QDate)` delivered as the ISO string |
| `QProgressBar` | ctor, minimum, maximum, setRange (0,0 = busy), value, setTextVisible, reset |
| `QFrame` → `QScrollArea` | ctor, frameShape (`QFrame\Shape`), setFrameShadow (`QFrame\Shadow`); setWidget (area owns it), widget, setWidgetResizable, scroll bar policies (`Qt\ScrollBarPolicy`) |
| `QAbstractItemView` → `QTableWidget` | parented to QFrame here (QAbstractScrollArea/QTableView unbound); selection behavior/mode enums, setEditTriggers(int), `NO_EDIT_TRIGGERS`, clearSelection; ctor(rows, columns, ?parent; installs an item prototype so Qt-made items are tracked), row/column counts, header labels, horizontalHeaderItem, selectedItems (as Qt lists them), setItem (table takes the item; a cell outside the table or an item another table holds is a ValueError), item, clearContents, currentRow, selectRow (out of range: no-op, as Qt); signals `itemSelectionChanged()`, `cellClicked(int,int)` |
| `QFont`, `QPixmap`, `QTableWidgetItem`, `QUrl` | values, not QObjects ([object model](/architecture/object-model.md)): font family/pointSizeF (> 0; -1 = default in the ctor)/weight (`QFont\Weight` or any int on Qt's 1–1000 scale, in and out); pixmap (needs a QGuiApplication: Qt would abort) load/isNull/width/height/scaled(`Qt\AspectRatioMode`, `Qt\TransformationMode` = fast), devicePixelRatio/set; item text and row (-1 outside a table); url fromLocalFile/toString/isValid |
| `QAudioOutput`, `QMediaPlayer`, `QVideoWidget` | ctor(?parent QObject); muted, volume; setVideoOutput/setAudioOutput, setSource(QUrl)/source, play/pause/stop, position/duration/setPosition (ms), playbackState/mediaStatus enums, setLoops/`INFINITE_LOOPS`, errorString, hasVideo, isAvailable; signals `playbackStateChanged`, `mediaStatusChanged`, `errorOccurred(Error,QString)`, `positionChanged(qint64)`; video widget ctor(?parent) |

Generated enums: `scripts/gen-enum.php <header> <enum> <scope> <PHP enum> [prefix]` writes the stub cases and `src/checks/<Scope>_<Enum>.inc`, one `static_assert` per case, compiled into `src/qt.cpp`, so each build proves the values against its own Qt. It keeps what a default build compiles (`#ifndef QT_NO_*` and `#if` blocks in, `#ifdef` blocks out) and drops enumerators that repeat a value. `QEvent\Type` and `Qt\WidgetAttribute` come from the 6.8 headers, a subset of every later 6.x; `Qt\AlignmentFlag` from 6.11 (its twelve values are unchanged since Qt 4). Short enums are hand-written with a `static_assert` beside their registration.

Behaviour confirmed on both platforms: macOS (cocoa) makes the process a regular app on construction (Dock icon); Qt has no call to withdraw it. Linux: the app connects to the display server (`xcb` through XWayland on the Pi until `qt6-wayland` is installed); the taskbar lists windows, not processes.

[^stubs]: Stub files, one per Qt header
