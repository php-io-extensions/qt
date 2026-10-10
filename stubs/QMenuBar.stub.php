<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QMenuBar extends QWidget
{
    public function __construct(?QWidget $parent = null) {}

    /** addMenu(const QString &) returns the new QMenu; addMenu(QMenu *) returns its menu action. */
    public function addMenu(QMenu|string $menuOrTitle): QMenu|QAction {}

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

    /** addMenu(const QString &) returns the new QMenu; addMenu(QMenu *) returns its menu action. */
    public function addMenu(QMenu|string $menuOrTitle): QMenu|QAction {}

    public function addSeparator(): QAction {}

    public function clear(): void {}

    public function isEmpty(): bool {}

    public function menuAction(): QAction {}

    /** popup(QPoint(x, y)): shows the menu at a global point and returns at once; a chosen action emits triggered. */
    public function popup(int $x, int $y): void {}
}
