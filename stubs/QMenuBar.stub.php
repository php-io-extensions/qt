<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QMenuBar extends QWidget
{
    public function __construct(?QWidget $parent = null) {}

    /** addMenu(const QString &title): the new QMenu. */
    public function addMenu(string $title): QMenu {}

    public function addAction(string $text): QAction {}

    public function clear(): void {}

    public function isNativeMenuBar(): bool {}

    public function setNativeMenuBar(bool $nativeMenuBar): void {}
}

/**
 * @not-serializable
 */
class QMenu extends QWidget
{
    public function __construct(string $title = "", ?QWidget $parent = null) {}

    public function title(): string {}

    public function setTitle(string $title): void {}

    public function addAction(string $text): QAction {}

    /** addMenu(const QString &title): the new QMenu. */
    public function addMenu(string $title): QMenu {}

    public function addSeparator(): QAction {}

    public function clear(): void {}

    public function isEmpty(): bool {}

    public function menuAction(): QAction {}

    /** Shows the menu at a global point and returns at once; a chosen action emits triggered. */
    public function popup(QPoint $pos, ?QAction $at = null): void {}
}
