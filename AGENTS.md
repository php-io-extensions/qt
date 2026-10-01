# Agent guidelines — php-io-extensions/qt

## Knowledge Bundle (OKF)

This package ships an Open Knowledge Format bundle at [`.okf/`](.okf/) (excluded from the Composer dist via `.gitattributes` `export-ignore`). Before changing code or advising on this package: read [`.okf/index.md`](.okf/index.md) first, open only the concepts the task needs, prefer `status: stable` over `draft`. When you learn something durable, update the affected concept(s) and append `.okf/log.md`; new or changed concepts stay `status: draft` until a human verifies them.

## Binding rules (the spec: [`.okf/binding-rules.md`](.okf/binding-rules.md))

1. One ext call = one Qt call. Sanctioned composites: constructor + registry register; the `QApplication`/`QGuiApplication`/`QCoreApplication` constructors copy PHP's argv into static storage owned by Bridge, because Qt keeps the `argc&`/`argv` for the process lifetime.
2. One static method per member, no opinions. Class path `Qt\<Module>\<Class>\<Class>`. Free functions bind on a class named after their header plus `Functions` (`qmath.h` → `Qt\Core\QMathFunctions\QMathFunctions`), so header-named groups never collide case-insensitively with a class. Functions in namespace `Qt` bind on `Qt\Core\Qt\Qt`. `QtPrivate` and any `_q_`/`d_ptr`/`Q_DECL_HIDDEN` symbol are not API.
3. Never hand-write `.zep`, optimizers, or generated `src/`. Pipeline only.
4. Every public and protected member of every class in every vendored module is bound or `@reserved <category> <signature>`. Categories: `template` (template member, or template argument outside the supported set), `function-pointer` (`std::function`, functor, `QFunctionPointer`, pointer-to-member `connect` overloads), `rvalue` (`&&` parameters, move constructors), `raw-pointer` (`void*`, pointer to a non-Qt type; `char**` other than the application argv), `operator`, `stream` (`QDataStream`/`QDebug`/`QTextStream` operators), `iterator`, `deprecated` (`QT_DEPRECATED_*`), `unreachable` (a protected member of a class that gets no shell: final, or without virtuals). Public and protected data members bind as getter `name(handle)` and setter `setName(handle, value)`. Private members are not API and are not listed. The parity check fails on any public or protected member that is neither bound nor reserved.
5. Types: the table below. Nothing else.
6. Inherited members bind once on the declaring class; handles are untyped, so `QWidget::resize($button, ...)` works. Const and non-const overloads with identical parameters bind once. A case-insensitive method-name collision within one class fails generation.
7. All glue lives in `Qt\Bridge\Bridge` (`src/phpqt-bridge.{h,cpp}`); marshalling only in `src/phpqt-support.{h,cpp}`. Generated shells are the only other C++ classes in the ext.
8. No constants in the ext. Enums and `QFlags` become PHP enums in `jovian/qt`, generated from this package's vendored AST.
9. Fallible calls return 0/null and raise `E_WARNING`. The ext never throws.
10. Zephir reserved words in method and parameter names get a trailing underscore; all-caps names are emitted mixed-case. Build on the Pi via `fnk`; fix on the Mac; never edit on the Pi.
11. Overloads: all bound. The first declared keeps the bare name. Each later overload appends its C++ parameter type names, stripped of `const`/`&`/`*`/template punctuation, each token capitalised (`resize`, `resizeQSize`; `addWidget`, `addWidgetQWidgetIntIntQtAlignment`). Constructors: `new`, then `new<Types>`. Overload order is declaration order in the AST.
12. Default arguments: scalar and string defaults become PHP defaults. Class-typed defaults (`QString()`, `QModelIndex()`, `Qt::WindowFlags()`) make the PHP parameter `var` defaulting to null, and the glue substitutes the C++ default expression on null. Both are generator-emitted from the AST's default text.
13. Protected members bind on the declaring class like public ones and dispatch through the shell. On a handle that was not constructed through a shell they warn and return 0/null.

Public and protected data members bind as getter `<name>(handle)` and setter `set<Name>(handle, value)` (spec rule 4 covers fields as members; this line fixes the shape).
