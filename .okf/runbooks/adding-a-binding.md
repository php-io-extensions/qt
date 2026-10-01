---
type: Runbook
title: Adding a binding
description: Stub, gen_stub, one .cpp per header group, config.m4 source list, PHPQT_THIS, ownership, surface test.
resource: stubs/
tags: [qt, contributing]
status: draft
generated: { by: claude-opus/5.5, at: 2026-10-01T20:03:11Z }
sources:
  - id: runtime
    resource: src/runtime.h
    title: src/runtime.h
  - id: module
    resource: src/qt.cpp
    title: src/qt.cpp
---

# Overview

1. Declare in the stub of the Qt header group (`stubs/<Header>.stub.php`, `@generate-class-entries`). C++ scopes become PHP namespaces (`QAction::MenuRole` → `QAction\MenuRole`, own `namespace` block in the stub). Long Qt enums: [generate them](/runbooks/generating-enums.md); short ones by hand with a `static_assert` per case in the `.cpp`.
2. `php84 /opt/homebrew/opt/php@8.4/lib/php/build/gen_stub.php stubs` → `stubs/<Header>_arginfo.h`. Commit both.
3. New class: `register_class_<Class>(parent ce)`, `phpqt_object_setup()`, `phpqt_map_class("<C++ class>", ce)` inside the group's `phpqt_register_<Group>()`. Declare ce + register fn in `src/runtime.h`, define the ce in `src/qt.cpp`, call register in MINIT after its parent; enums go in `phpqt_register_enums()`. New `.cpp` → `config.m4` source list.[^runtime][^module]
4. Method body:
   * `PHPQT_THIS(Type, self)` first: the wrapped object, or `QtException` when Qt deleted it.
   * `PHPQT_REQUIRE_MAIN_THREAD()` for application construction and `exec()`.
   * Return objects through `phpqt_box` (identity map). Constructors: PHP owns what it created unless a parent takes it ([object model](/architecture/object-model.md)).
   * Enums out via `phpqt_return_enum`; signals connect through the dynamic slot ([signals](/architecture/signals.md)).
5. Include path form: `<QtCore/QEvent>`, `<QtWidgets/QApplication>` (framework-style on the Mac, same on Linux).
6. `tests/SurfaceTest.php` picks the declaration up from the stub; add behaviour tests; build, suite, smoke on Mac and Pi per [build](/runbooks/build.md); update [surface](/api/surface.md) and README.

[^runtime]: src/runtime.h
[^module]: src/qt.cpp
