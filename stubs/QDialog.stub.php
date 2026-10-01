<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QDialog extends QWidget
{
    public function __construct(?QWidget $parent = null) {}

    /** Shows the dialog window-modal and returns at once. */
    public function open(): void {}

    public function isModal(): bool {}

    public function setModal(bool $modal): void {}

    public function result(): int {}

    public function done(int $r): void {}

    public function accept(): void {}

    public function reject(): void {}
}

/**
 * @not-serializable
 */
class QMessageBox extends QDialog
{
    public function __construct(?QWidget $parent = null) {}

    public function text(): string {}

    public function setText(string $text): void {}

    public function informativeText(): string {}

    public function setInformativeText(string $text): void {}
}
