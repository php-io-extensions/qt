---
type: API
title: Binding surface
description: Classes, enums and functions ext-qt binds, each one Qt call; C++ scopes as PHP namespaces.
resource: stubs/
tags: [qt, api]
status: draft
generated: { by: claude-opus/5.5, at: 2026-10-01T18:15:45Z }
sources:
  - id: stubs
    resource: stubs/
    title: Stub files, one per Qt header
---

# Overview

Scope: calls that create the application, pump Qt's event dispatcher, sleep with a budget, wake a sleep, open/close windows, build menu bars. Stubs = source of truth; `tests/SurfaceTest.php` fails if a stub declaration is missing from the build.[^stubs]

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
| `QObject` | ctor(?parent), objectName, setObjectName, inherits, parent, setParent, deleteLater, pointer; static connect(sender, signature, callable): `QMetaObject\Connection`, disconnect(Connection): bool |
| `QCoreApplication` / `QGuiApplication` / `QApplication` | ctor(array argv); static instance, processEvents, sendPostedEvents, exec, quit, exit, applicationName/set, applicationPid, closingDown, startingUp; Gui: platformName, desktopFileName/set, applicationDisplayName/set, quitOnLastWindowClosed/set |
| `QTimer` | ctor(?parent), start(?msec), stop, isActive, interval/set, isSingleShot/set, timerType/set, remainingTime, timerId; static singleShot(msec, callable) |
| `QSocketNotifier` | ctor(int\|resource\|Socket, Type, ?parent), socket, type, isEnabled, setEnabled, isValid |
| `QAbstractEventDispatcher` | static instance, processEvents(flags), wakeUp, interrupt |
| `QMetaObject\Connection` | isValid (operator bool) |
| `qVersion()` | runtime Qt version |
| `QWidget` | ctor(?parent; needs a QApplication), show/hide/close/visible, isWindow, isActiveWindow, activateWindow, raise, window title, resize/width/height, parentWidget, set/testAttribute(Qt\WidgetAttribute) |
| `QMainWindow` | ctor, menuBar (made on first use, owned by the window), setMenuBar, central widget |
| `QMenuBar`, `QMenu` | addMenu(string) → QMenu, addMenu(QMenu) → its QAction, addAction, addSeparator, clear, title, isEmpty, menuAction, native menu bar flag |
| `QAction` | text, checkable/checked, enabled, separator, menu role (`QAction\MenuRole`), shortcut as a portable-text QKeySequence string (an unreadable string is refused), trigger, toggle; signals `triggered(bool)`, `toggled(bool)` |
| `QDialog`, `QMessageBox` | open (window-modal, returns at once), modal flag, result/done/accept/reject; text, informative text |
| `QEventFilter` | trampoline for installEventFilter/removeEventFilter: `$filter(QObject $watched, QEvent\Type|int $type): bool`, only for the listed types (all when null); true stops delivery to the watched object |

Generated enums: `scripts/gen-enum.php <header> <enum> <scope> <PHP enum> [prefix]` writes the stub cases and `src/checks/<Scope>_<Enum>.inc`, one `static_assert` per case, compiled into `src/qt.cpp`, so each build proves the values against its own Qt. It keeps what a default build compiles (`#ifndef QT_NO_*` and `#if` blocks in, `#ifdef` blocks out) and drops enumerators that repeat a value. `QEvent\Type` and `Qt\WidgetAttribute` come from the 6.8 headers, a subset of every later 6.x.

Behaviour confirmed on both platforms: macOS (cocoa) makes the process a regular app on construction (Dock icon); Qt has no call to withdraw it. Linux: the app connects to the display server (`xcb` through XWayland on the Pi until `qt6-wayland` is installed); the taskbar lists windows, not processes.

[^stubs]: Stub files, one per Qt header
