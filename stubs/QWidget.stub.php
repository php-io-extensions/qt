<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QWidget extends QObject
{
    public function __construct(?QWidget $parent = null, Qt\WindowType|int $f = 0) {}

    /** A widget that embeds $window; the container owns the window. */
    public static function createWindowContainer(QWindow $window, ?QWidget $parent = null, Qt\WindowType|int $flags = 0): QWidget {}

    public function show(): void {}

    public function hide(): void {}

    public function close(): bool {}

    public function isVisible(): bool {}

    public function setVisible(bool $visible): void {}

    public function isWindow(): bool {}

    public function isActiveWindow(): bool {}

    public function activateWindow(): void {}

    public function setFocus(): void {}

    public function clearFocus(): void {}

    public function hasFocus(): bool {}

    public function focusPolicy(): Qt\FocusPolicy {}

    public function setFocusPolicy(Qt\FocusPolicy $policy): void {}

    /** QWidget::setTabOrder(first, second): Tab moves from $first to $second. */
    public static function setTabOrder(QWidget $first, QWidget $second): void {}

    public function raise(): void {}

    public function windowTitle(): string {}

    public function setWindowTitle(string $title): void {}

    public function resize(int $w, int $h): void {}

    public function width(): int {}

    public function height(): int {}

    public function parentWidget(): ?QWidget {}

    /** The global (screen) point in this widget's coordinates. */
    public function mapFromGlobal(QPointF $pos): QPointF {}

    /** This widget's point in global (screen) coordinates. */
    public function mapToGlobal(QPointF $pos): QPointF {}

    public function accessibleName(): string {}

    public function setAccessibleName(string $name): void {}

    public function setAttribute(Qt\WidgetAttribute $attribute, bool $on = true): void {}

    public function testAttribute(Qt\WidgetAttribute $attribute): bool {}

    public function setLayout(QLayout $layout): void {}

    public function layout(): ?QLayout {}

    public function style(): QStyle {}

    public function setMinimumSize(int $minw, int $minh): void {}

    public function minimumWidth(): int {}

    public function minimumHeight(): int {}

    public function setFixedSize(int $w, int $h): void {}

    public function sizeHint(): QSize {}

    public function size(): QSize {}

    public function setSizePolicy(QSizePolicy\Policy $horizontal, QSizePolicy\Policy $vertical): void {}

    public function move(int $x, int $y): void {}

    public function setGeometry(int $x, int $y, int $w, int $h): void {}

    public function geometry(): QRect {}

    public function pos(): QPoint {}

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

    /** @return int Qt::WindowFlags: Qt\WindowType values or-ed together */
    public function windowFlags(): int {}

    public function setWindowFlags(Qt\WindowType|int $type): void {}

    public function windowModality(): Qt\WindowModality {}

    public function setWindowModality(Qt\WindowModality $windowModality): void {}

    /** The window the widget is in: the widget itself when it is a window. */
    public function window(): QWidget {}
}
