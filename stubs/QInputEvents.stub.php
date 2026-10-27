<?php

/** @generate-class-entries */

/**
 * A Qt event. One handed to a QEventFilter callback is Qt's own and lives only during the call:
 * reading it afterwards throws. One made in PHP (QMouseEvent, QKeyEvent, QWheelEvent, QContextMenuEvent) is PHP's, for
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
    /** $button and $buttons: Qt::MouseButton(s) as 32-bit ints; $modifiers Qt::KeyboardModifiers. A wider value is a ValueError. */
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
class QKeyEvent extends QInputEvent
{
    /** $key: a Qt\Key value (a C int); $modifiers Qt::KeyboardModifiers as a 32-bit int; $count a quint16. A value wider than its C type is a ValueError. */
    public function __construct(QEvent\Type $type, int $key, int $modifiers, string $text = "", bool $autorep = false, int $count = 1) {}

    /** A Qt\Key value. */
    public function key(): int {}

    /** The Unicode text the key produced; '' for none. */
    public function text(): string {}

    public function isAutoRepeat(): bool {}

    /** The platform's scan code (X11: the evdev code + 8); 0 when unknown, and 1 or 0 on macOS. */
    public function nativeScanCode(): int {}

    /** The platform's virtual key (macOS: the kVK_ key code); 0 when unknown. */
    public function nativeVirtualKey(): int {}

    /** Whether the key and modifiers are the platform's sequence for $key (an exact match). */
    public function matches(QKeySequence\StandardKey $key): bool {}
}

/**
 * Text an input method composes (dead keys, candidate windows): Qt sends one to a widget with
 * Qt\WidgetAttribute::INPUT_METHOD_ENABLED.
 *
 * @not-serializable
 */
class QInputMethodEvent extends QEvent
{
    /** @param QInputMethodEvent\Attribute[] $attributes */
    public function __construct(string $preeditText, array $attributes) {}

    public function setCommitString(string $commitString, int $replaceFrom = 0, int $replaceLength = 0): void {}

    public function commitString(): string {}

    public function preeditString(): string {}
}

/**
 * @not-serializable
 */
class QWheelEvent extends QInputEvent
{
    /**
     * $buttons: Qt::MouseButtons as a 32-bit int; $modifiers Qt::KeyboardModifiers. A wider value is a
     * ValueError. $device is required, as QMouseEvent's: PHP cannot write primaryPointingDevice() as a
     * default, so $source before it is required too.
     */
    public function __construct(QPointF $pos, QPointF $globalPos, QPoint $pixelDelta, QPoint $angleDelta, int $buttons, int $modifiers, Qt\ScrollPhase $phase, bool $inverted, Qt\MouseEventSource $source, QPointingDevice $device) {}

    /** In screen pixels: (0, 0) when the device reports none. */
    public function pixelDelta(): QPoint {}

    /** In eighths of a degree: 120 is one notch of most mouse wheels. */
    public function angleDelta(): QPoint {}

    /** In the receiving widget. */
    public function position(): QPointF {}

    /** On the screen. */
    public function globalPosition(): QPointF {}

    public function source(): Qt\MouseEventSource {}

    public function phase(): Qt\ScrollPhase {}
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

    /** Milliseconds. */
    public function mouseDoubleClickInterval(): int {}

    /** Pixels. */
    public function mouseDoubleClickDistance(): int {}
}
