---
type: Convention
title: Qt 6 binding rules
status: draft
generated:
  by: claude-fable-5.1
  at: 2026-09-26T00:00:00Z
---

# Binding rules

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

## Types

| C++ | PHP in | PHP out |
|---|---|---|
| `bool` | bool | bool |
| `int`, `uint`, `short`, `long`, `qint64`, `quint64`, `qsizetype`, `char`, `uchar` | int | int |
| enum, `QFlags<E>` | int | int |
| `float`, `double`, `qreal` | double | double |
| `QString`, `QStringView`, `QLatin1StringView`, `QAnyStringView`, `const char*`, `QByteArray`, `QByteArrayView`, `QChar` (one UTF-8 char) | string (`var` when nullable, null = null) | string |
| `QPoint`, `QPointF`, `QSize`, `QSizeF`, `QRect`, `QRectF`, `QLine`, `QLineF`, `QMargins`, `QMarginsF` | fields flattened in declaration order, int/double each | assoc array keyed by field |
| any other class, by value, reference, or pointer | int handle, 0 = null | int handle |
| `QVariant` | var (bool/int/double/string/array/handle by `QMetaType`) | var |
| `QList`, `QVector`, `QSet`, `QStringList`, `QByteArrayList` of a supported element | array | array |
| `QMap`, `QHash`, `QMultiMap`, `QMultiHash` with int or string key and supported value | assoc array | assoc array |
| `QPair<A,B>` | `[a, b]` | `[a, b]` |
| pointer-to-scalar out parameter (`bool *ok`, `int *`) | dropped from the PHP signature | return becomes assoc array `{return, <paramName>...}` |
| anything else | `@reserved` per rule 4 | |

Value-mapped classes (the string classes, the ten geometric structs, `QChar`, `QVariant`, `QStringList`, `QByteArrayList`) still bind every member, over the PHP native instead of a handle: `self` arrives as the native (flattened for geometry), a non-const member returns the mutated value (or `{return, self}` when it also returns something), and constructors return the native.

By-value class returns (`QImage QWidget::grab()`) are heap-copied, registered owned, and returned as a handle. `const T&` and `T*` parameters take a handle and pass the registry object. Geometric structs marshal flat because Surface consumes them as numbers, same as gtk's graphene rects; their own member functions bind as static methods taking the flattened fields.
