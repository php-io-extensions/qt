<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QWidget extends QObject
{
    public function __construct(?QWidget $parent = null) {}

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

    public function setAttribute(Qt\WidgetAttribute $attribute, bool $on = true): void {}

    public function testAttribute(Qt\WidgetAttribute $attribute): bool {}
}
