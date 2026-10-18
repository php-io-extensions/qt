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
    /**
     * A plain QEvent of $type, for QCoreApplication::sendEvent(). Only a type Qt delivers as a
     * plain QEvent (window activation, the *_CHANGE notices, LEAVE, POLISH, LAYOUT_REQUEST,
     * UPDATE_REQUEST, QUIT, …): a receiver casts the others to their subclass, so they are a
     * ValueError. QInputEvent and its subclasses have their own constructors (Error otherwise).
     */
    public function __construct(QEvent\Type $type) {}

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

    /** Milliseconds, as Qt's own events carry them; not negative. */
    public function setTimestamp(int $timestamp): void {}

    /** The kind of device the event came from: a touch synthesised into a mouse event reads TOUCH_SCREEN. */
    public function deviceType(): QInputDevice\DeviceType {}
}

/**
 * @not-serializable
 */
class QMouseEvent extends QInputEvent
{
    /** $button and $buttons: Qt::MouseButton(s) as ints; $modifiers Qt::KeyboardModifiers. */
    public function __construct(QEvent\Type $type, QPointF $localPos, QPointF $globalPos, int $button, int $buttons, int $modifiers, QPointingDevice $device) {}

    /** Qt::MouseButton as an int. */
    public function button(): int {}

    /** Qt::MouseButtons as an int. */
    public function buttons(): int {}

    /** In the receiving widget. */
    public function position(): QPointF {}

    /** On the screen. */
    public function globalPosition(): QPointF {}
}

/**
 * @not-serializable
 */
class QContextMenuEvent extends QInputEvent
{
    public function __construct(QContextMenuEvent\Reason $reason, QPoint $pos, QPoint $globalPos, int $modifiers = 0) {}

    public function reason(): QContextMenuEvent\Reason {}

    /** In the receiving widget. */
    public function pos(): QPoint {}

    /** On the screen. */
    public function globalPos(): QPoint {}
}

/**
 * @not-serializable
 */
class QStyleHints extends QObject
{
    public function mousePressAndHoldInterval(): int {}

    public function startDragDistance(): int {}
}
