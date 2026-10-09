<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QWidget extends QObject
{
    public function __construct(?QWidget $parent = null) {}

    /** QWidget::createWindowContainer: a widget that embeds $window; the container owns the window. */
    public static function createWindowContainer(QWindow $window, ?QWidget $parent = null): QWidget {}

    public function show(): void {}

    public function hide(): void {}

    public function close(): bool {}

    public function isVisible(): bool {}

    public function setVisible(bool $visible): void {}

    public function isWindow(): bool {}

    public function isActiveWindow(): bool {}

    public function activateWindow(): void {}

    public function raise(): void {}

    public function windowTitle(): string {}

    public function setWindowTitle(string $title): void {}

    public function resize(int $w, int $h): void {}

    public function width(): int {}

    public function height(): int {}

    public function parentWidget(): ?QWidget {}

    /** @return array{0: float, 1: float} the global (screen) point in this widget's coordinates */
    public function mapFromGlobal(float $x, float $y): array {}

    public function setAttribute(Qt\WidgetAttribute $attribute, bool $on = true): void {}

    public function testAttribute(Qt\WidgetAttribute $attribute): bool {}

    public function setLayout(QLayout $layout): void {}

    public function layout(): ?QLayout {}

    public function setMinimumSize(int $minw, int $minh): void {}

    public function minimumWidth(): int {}

    public function minimumHeight(): int {}

    public function setFixedSize(int $w, int $h): void {}

    /** @return array{int, int} width, height */
    public function sizeHint(): array {}

    /** @return array{int, int} width, height */
    public function size(): array {}

    public function setSizePolicy(QSizePolicy\Policy $horizontal, QSizePolicy\Policy $vertical): void {}

    public function move(int $x, int $y): void {}

    public function setGeometry(int $x, int $y, int $w, int $h): void {}

    /** @return array{x: int, y: int, width: int, height: int} */
    public function geometry(): array {}

    /** @return array{int, int} x, y */
    public function pos(): array {}

    public function setEnabled(bool $enabled): void {}

    public function isEnabled(): bool {}

    public function setStyleSheet(string $styleSheet): void {}

    public function styleSheet(): string {}

    public function devicePixelRatioF(): float {}

    public function setFont(QFont $font): void {}

    /** A copy of the widget's font. */
    public function font(): QFont {}

    /** QWidget::setParent(QWidget *): a parent that is not a widget is a TypeError. */
    public function setParent(?QObject $parent): void {}
}
