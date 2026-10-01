---
type: Module
title: Object model
description: One PHP object per QObject, guarded by QPointer; PHP deletes what it created unless Qt owns it through a parent.
resource: src/runtime.cpp
tags: [qt, zend, lifetime]
status: draft
generated: { by: claude-opus/5.5, at: 2026-09-30T21:06:21Z }
sources:
  - id: runtime
    resource: src/runtime.cpp
    title: Boxing, adoption, free_obj
  - id: header
    resource: src/runtime.h
    title: phpqt_object
---

# Overview

`phpqt_object { QPointer<QObject> *guard; QObject *raw; bool owned; int argc; char **argv; zend_object std; }`. Qt members sit behind pointers so the struct stays standard-layout for `XtOffsetOf`.[^header]

* Guard: `QPointer` nulls itself when Qt deletes the object; every method goes through `PHPQT_THIS`, which throws `QtException("<Class> has been deleted by Qt")` instead of touching freed memory.
* Identity: module global `boxes` maps address → wrapper. Boxing returns the existing wrapper only while its guard still points at that address, so an address Qt reuses gets a fresh wrapper.
* Class choice when boxing: walk `metaObject()` → `superClass()`; first class name registered with `phpqt_map_class()` wins (e.g. `QCocoaEventDispatcher` → `QAbstractEventDispatcher`); fallback `QObject`.
* Ownership: constructors adopt (`owned = true`); boxed objects are borrowed. `free_obj` deletes an owned object only if it has no parent (a parent means Qt owns it). While PHP runs inside a Qt callback, a non-application object is `deleteLater()`d instead, since it may be the one emitting.[^runtime]
* Applications: Qt keeps `argc` by reference and `argv` by pointer, so both live in the wrapper (persistent memory) and are freed after the application is deleted. One application per process: a second constructor throws.

[^runtime]: Boxing, adoption, free_obj
[^header]: phpqt_object
