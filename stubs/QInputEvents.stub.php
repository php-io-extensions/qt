<?php

/** @generate-class-entries */

/**
 * A Qt event. One handed to a QEventFilter callback is Qt's own and lives only during the call:
 * reading it afterwards throws. One made in PHP (QMouseEvent, QContextMenuEvent) is PHP's, for
 * QCoreApplication::sendEvent().
 *
 * @not-serializable
 */
class QEvent
{
    public function type(): QEvent\Type|int {}

    public function accept(): void {}

    public function ignore(): void {}

    public function isAccepted(): bool {}

    public function spontaneous(): bool {}
}

/**
 * @not-serializable
 */
class QInputEvent extends QEvent
{
    /** Qt::KeyboardModifiers as an int. */
    public function modifiers(): int {}

    public function timestamp(): int {}

    /** The kind of device the event came from: a touch synthesised into a mouse event reads TOUCH_SCREEN. */
    public function deviceType(): QInputDevice\DeviceType {}
}

/**
 * @not-serializable
 */
class QMouseEvent extends QInputEvent
{
    /** $button and $buttons: Qt::MouseButton(s) as ints; $modifiers Qt::KeyboardModifiers. */
    public function __construct(QEvent\Type $type, float $x, float $y, float $globalX, float $globalY, int $button, int $buttons, int $modifiers = 0) {}

    /** Qt::MouseButton as an int. */
    public function button(): int {}

    /** Qt::MouseButtons as an int. */
    public function buttons(): int {}

    /** @return array{0: float, 1: float} in the receiving widget */
    public function position(): array {}

    /** @return array{0: float, 1: float} on the screen */
    public function globalPosition(): array {}
}

/**
 * @not-serializable
 */
class QContextMenuEvent extends QInputEvent
{
    public function __construct(QContextMenuEvent\Reason $reason, int $x, int $y, int $globalX, int $globalY, int $modifiers = 0) {}

    public function reason(): QContextMenuEvent\Reason {}

    /** @return array{0: int, 1: int} in the receiving widget */
    public function pos(): array {}

    /** @return array{0: int, 1: int} on the screen */
    public function globalPos(): array {}
}

/**
 * @not-serializable
 */
class QStyleHints extends QObject
{
    public function mousePressAndHoldInterval(): int {}

    public function startDragDistance(): int {}
}
