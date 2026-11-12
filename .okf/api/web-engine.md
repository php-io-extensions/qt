---
type: API
title: Web engine
description: QWebEngineView (Qt WebEngine, Chromium) as a widget; loading reported through signals; the build needs Qt WebEngine.
resource: src/QWebEngine.cpp
tags: [qt, webengine, web]
status: draft
generated: { by: claude-opus/5.5, at: 2026-11-11T10:30:00Z }
sources:
  - id: source
    resource: src/QWebEngine.cpp
    title: QWebEngineView
  - id: config
    resource: config.m4
    title: Module check
  - id: test
    resource: tests/WebEngineTest.php
    title: HTML with a base URL, an unloadable page
---

# Overview

`new QWebEngineView(?QWidget $parent)` (site `qapp-web-engine-view`: a QApplication first, as every widget), then `load(QUrl)` or `setHtml(string $html, QUrl $baseUrl)` (`qwebengineview.h:53`, `:55`; the base URL is what relative links resolve against and the page's origin). Reads: `title()`, `url()`. Slots: `stop()`, `back()`, `forward()`, `reload()`.[^source]

State arrives through signals ([signals](/architecture/signals.md)):

| Signal | Meaning |
|---|---|
| `loadStarted()` | a load began |
| `loadFinished(bool)` | true loaded, false failed (no reason with it) |
| `titleChanged(QString)` | the page's title |
| `urlChanged(QUrl)` | the page's URL |

Build: `config.m4` requires `Qt6WebEngineCore >= 6.4 Qt6WebEngineWidgets >= 6.4`. Homebrew: `qtwebengine` (its `QtWebEngineProcess.app` helper ships in QtWebEngineCore.framework). Debian trixie: `qt6-webengine-dev`.[^config]

On macOS Qt 6.11.2 both cases pass, but each wait runs to its guard timer: the signals arrive while `processEvents(WaitForMoreEvents)` waits, without waking it.[^test]

[^source]: QWebEngineView
[^config]: Module check
[^test]: HTML with a base URL, an unloadable page
