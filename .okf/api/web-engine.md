---
type: API
title: Web engine
description: QWebEngineView (Qt WebEngine, Chromium) as a widget; loading reported through signals; the build needs Qt WebEngine.
resource: src/QWebEngine.cpp
tags: [qt, webengine, web]
status: draft
generated: { by: claude-opus/5.5, at: 2026-11-27T18:00:00Z }
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

`page(): QWebEnginePage` (`qwebengineview.h:50`) boxes the page the view owns; PHP never deletes it. `QWebEnginePage extends QObject`: `isLoading()`, `url()`, `title()`, and the signal `loadingChanged(QWebEngineLoadingInfo)`, whose callable receives a `QWebEngineLoadingInfo` (a copy; methods `status()`, `url()`, `errorString()`, `errorCode()`, `isErrorPage()`). `status()` returns `QWebEngineLoadingInfo\LoadStatus`: `LOAD_STARTED_STATUS` 0, `LOAD_STOPPED_STATUS` 1, `LOAD_SUCCEEDED_STATUS` 2, `LOAD_FAILED_STATUS` 3. `isLoading()` is true inside the started callback and false after the succeeded one; a `file:///` path that does not exist reports `LOAD_FAILED_STATUS` with Qt's error string.

`QWebEnginePage::runJavaScript(string $scriptSource, int $worldId = 0, ?callable $resultCallback = null)` (`qwebenginepage.h:290`) runs a script in the page, in the JavaScript world `$worldId` (0 is the page's own; each other number is a world of its own, whose globals the page never sees). The callback receives the script's last value as Qt hands it over, through the [signal argument conversion](/architecture/signals.md): a JavaScript object arrives as an array by key, an array as a list, a number as a float or int, null and undefined as null. With no callback the result is dropped. A non-callable callback is a `TypeError`. The callback is held by a slot that request end deletes, so a result arriving after it is dropped.

`QWebEngineView::setPage(QWebEnginePage $page)` (`qwebengineview.h:51`) shows `$page` in place of the view's page; the view does not own it, so give the page the view as its parent. `QWebEngineConsolePage extends QWebEnginePage` is glue: `new QWebEngineConsolePage(callable $consoleMessage, ?QObject $parent = null)`, whose `javaScriptConsoleMessage()` override (`qwebenginepage.h:411`, the virtual Qt calls for each `console.*` call of the page's scripts) calls `$consoleMessage(QWebEnginePage\JavaScriptConsoleMessageLevel $level, string $message, int $lineNumber, string $sourceID)`. `console.log` and `console.info` are `INFO_MESSAGE_LEVEL` 0, `console.warn` `WARNING_MESSAGE_LEVEL` 1, `console.error` `ERROR_MESSAGE_LEVEL` 2; the line counts from 1 in the page's source, and the source is the page's URL. Made with no `QGuiApplication`, Qt WebEngine aborts (qFatal from `QFontDatabase`), so the constructor throws `QtException` (site `qguiapp-web-engine-console-page`, probe `tests/Probes/ApplicationFirstTest.php`); a `QGuiApplication` is enough.

`QWebEnginePage::settings(): QWebEngineSettings` and `scripts(): QWebEngineScriptCollection` (`qwebenginepage.h:292`, `:291`) lend the page's own: the wrappers hold no copy and read as deleted (`QtException`) once the page is gone. `QWebEngineSettings::setAttribute(QWebEngineSettings\WebAttribute $attr, bool $on)` and `testAttribute()` (`qwebenginesettings.h:104`, `:105`) change only that page's settings. `WebAttribute` is generated from Qt 6.11.2's header, its newer values checked only on the Qt that has them (`READING_FROM_CANVAS_ENABLED` 6.6, `FORCE_DARK_MODE` 6.7, `PRINT_HEADER_AND_FOOTER`, `PREFER_CSS_MARGINS_FOR_PRINTING`, `TOUCH_EVENTS_API_ENABLED` 6.9, `BACK_FORWARD_CACHE_ENABLED` 6.10, `TRIM_ACCESSIBILITY_IDENTIFIERS` 6.11, per Qt's qdoc). `PLAYBACK_REQUIRES_USER_GESTURE` reads false until it is set, while Chromium keeps its own autoplay policy (a script's `play()` with sound refused, NotAllowedError); Qt hands the attribute to Chromium only once it is set explicitly (`web_engine_settings.cpp`), and set false a script's `play()` plays (measured, shown view).

`QWebEngineScript` is a value: `new QWebEngineScript()`, `setName()`, `setSourceCode()`, `setInjectionPoint(QWebEngineScript\InjectionPoint)` (`DEFERRED` 0, `DOCUMENT_READY` 1, `DOCUMENT_CREATION` 2), `setWorldId(int)` (`QWebEngineScript\ScriptWorldId`: `MAIN_WORLD` 0, `APPLICATION_WORLD` 1, `USER_WORLD` 2), `setRunsOnSubFrames(bool)` (`qwebenginescript.h:48`–`:70`). `QWebEngineScriptCollection::insert(QWebEngineScript)` keeps a copy; `remove()` is true when it held an equal script; `count()`, `clear()` (`qwebenginescriptcollection.h:22`–`:28`). A DOCUMENT_CREATION script runs before the document has a body, a DOCUMENT_READY one once it is parsed (measured).

Build: `config.m4` requires `Qt6WebEngineCore >= 6.4 Qt6WebEngineWidgets >= 6.4`. Homebrew: `qtwebengine` (its `QtWebEngineProcess.app` helper ships in QtWebEngineCore.framework). Debian trixie: `qt6-webengine-dev`.[^config]

On macOS Qt 6.11.2 both cases pass, but each wait runs to its guard timer: the signals arrive while `processEvents(WaitForMoreEvents)` waits, without waking it.[^test]

[^source]: QWebEngineView
[^config]: Module check
[^test]: HTML with a base URL, an unloadable page
