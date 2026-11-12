<?php

/** @generate-class-entries */

/**
 * qwebengineview.h (QtWebEngineWidgets). Signals loadStarted(), loadFinished(bool),
 * titleChanged(QString), urlChanged(QUrl).
 *
 * @not-serializable
 */
class QWebEngineView extends QWidget
{
    /** qwebengineview.h:43 */
    public function __construct(?QWidget $parent = null) {}

    /** qwebengineview.h:53 */
    public function load(QUrl $url): void {}

    /** qwebengineview.h:55 */
    public function setHtml(string $html, QUrl $baseUrl): void {}

    /** qwebengineview.h:61 */
    public function title(): string {}

    /** qwebengineview.h:63 */
    public function url(): QUrl {}

    /** qwebengineview.h:100 */
    public function stop(): void {}

    /** qwebengineview.h:101 */
    public function back(): void {}

    /** qwebengineview.h:102 */
    public function forward(): void {}

    /** qwebengineview.h:103 */
    public function reload(): void {}
}
