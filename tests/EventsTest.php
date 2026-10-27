<?php

declare(strict_types=1);

use QContextMenuEvent\Reason;
use QEvent\Type;
use QInputDevice\DeviceType;

beforeEach(fn () => testApplication());

it('hands a filter the event, alive only during the call', function (): void {
    $widget = new QWidget();
    $seen = null;
    $filter = new QEventFilter(function (QObject $watched, QEvent $event) use (&$seen): bool {
        if ($event->type() !== Type::CONTEXT_MENU) {
            return false;
        }
        $seen = $event;
        $read = [$event::class, $event->type(), $event->reason(), [$event->pos()->x(), $event->pos()->y()], [$event->globalPos()->x(), $event->globalPos()->y()]];
        $event->accept();
        $seen = [$event, $read, $event->isAccepted()];

        return false;
    });
    $widget->installEventFilter($filter);
    QCoreApplication::sendEvent($widget, new QContextMenuEvent(Reason::MOUSE, new QPoint(3, 4), new QPoint(103, 104)));
    [$event, $read, $accepted] = $seen;

    expect($read)->toBe([QContextMenuEvent::class, Type::CONTEXT_MENU, Reason::MOUSE, [3, 4], [103, 104]])
        ->and($accepted)->toBeTrue()
        ->and(fn () => $event->pos())->toThrow(QtException::class);
});

it('reads a mouse event\'s button, buttons, positions and device type', function (): void {
    $widget = new QWidget();
    $read = null;
    $filter = new QEventFilter(function (QObject $watched, QEvent $event) use (&$read): bool {
        if ($event->type() !== Type::MOUSE_BUTTON_PRESS) {
            return false;
        }
        $read = [$event::class, $event->button(), $event->buttons(), [$event->position()->x(), $event->position()->y()],
            [$event->globalPosition()->x(), $event->globalPosition()->y()], $event->modifiers(), $event->deviceType() instanceof DeviceType];

        return false;
    });
    $widget->installEventFilter($filter);
    QCoreApplication::sendEvent($widget, new QMouseEvent(Type::MOUSE_BUTTON_PRESS, new QPointF(5.0, 6.0), new QPointF(105.0, 106.0), 2, 2, 0,
        QPointingDevice::primaryPointingDevice()));

    expect($read)->toBe([QMouseEvent::class, 2, 2, [5.0, 6.0], [105.0, 106.0], 0, true]);
});

it('hands out the primary pointing device Qt registered', function (): void {
    expect(QPointingDevice::primaryPointingDevice())->toBeInstanceOf(QPointingDevice::class)
        ->and(QPointingDevice::primaryPointingDevice())->toBe(QPointingDevice::primaryPointingDevice());
});

it('names the context-menu reasons and input device types at their C values', function (): void {
    expect([Reason::MOUSE->value, Reason::KEYBOARD->value, Reason::OTHER->value])->toBe([0, 1, 2])
        ->and([DeviceType::MOUSE->value, DeviceType::TOUCH_SCREEN->value, DeviceType::TOUCH_PAD->value])->toBe([1, 2, 4]);
});

it('finds the widget at a screen point, maps points from the screen, and reads the press-and-hold hints', function (): void {
    $hints = QGuiApplication::styleHints();
    $widget = new QWidget();

    expect(QApplication::widgetAt(-100000, -100000))->toBeNull()
        ->and($widget->mapFromGlobal(new QPointF(10.0, 20.0)))->toBeInstanceOf(QPointF::class)
        ->and($hints)->toBeInstanceOf(QStyleHints::class)
        ->and($hints->mousePressAndHoldInterval())->toBeGreaterThan(0)
        ->and($hints->startDragDistance())->toBeGreaterThan(0);
});

it('sets an input event\'s timestamp', function (): void {
    testApplication();
    $event = new QMouseEvent(Type::MOUSE_BUTTON_PRESS, new QPointF(1.0, 1.0), new QPointF(1.0, 1.0), 1, 1, 0, QPointingDevice::primaryPointingDevice());
    $event->setTimestamp(123456);

    expect($event->timestamp())->toBe(123456)
        ->and(fn () => $event->setTimestamp(-1))->toThrow(ValueError::class);
});

it('makes a plain event of a type Qt sends as one, and refuses the rest', function (): void {
    $widget = new QWidget();
    $seen = [];
    $filter = new QEventFilter(function (QObject $watched, QEvent $event) use (&$seen): bool {
        if ($event->type() === Type::WINDOW_ACTIVATE) {
            $seen[] = [$event::class, $event->type()];
        }

        return false;
    });
    $widget->installEventFilter($filter);
    $event = new QEvent(Type::WINDOW_ACTIVATE);
    QCoreApplication::sendEvent($widget, $event);

    expect($seen)->toBe([[QEvent::class, Type::WINDOW_ACTIVATE]])
        ->and($event->type())->toBe(Type::WINDOW_ACTIVATE)
        ->and(fn () => new QEvent(Type::MOUSE_BUTTON_PRESS))->toThrow(ValueError::class, 'subclass')
        ->and(fn () => new QEvent(Type::UPDATE_LATER))->toThrow(ValueError::class, 'subclass')
        ->and(fn () => new QInputEvent(Type::LEAVE))->toThrow(Error::class, 'QInputEvent');
});

it('makes key events and hands a filter Qt\'s key press and release as QKeyEvents', function (): void {
    $made = new QKeyEvent(Type::KEY_PRESS, Qt\Key::RETURN->value, 0);
    $widget = new QWidget();
    $read = [];
    $filter = new QEventFilter(function (QObject $watched, QEvent $event) use (&$read): bool {
        if ($event->type() === Type::KEY_PRESS || $event->type() === Type::KEY_RELEASE) {
            $read[] = [$event::class, $event->type(), $event->key(), $event->modifiers()];
        }

        return false;
    });
    $widget->installEventFilter($filter);
    QCoreApplication::sendEvent($widget, new QKeyEvent(Type::KEY_PRESS, Qt\Key::ENTER->value, 0x04000000, "\r", true, 2));
    QCoreApplication::sendEvent($widget, new QKeyEvent(Type::KEY_RELEASE, Qt\Key::ENTER->value, 0));

    expect($made->key())->toBe(Qt\Key::RETURN->value)
        ->and($read)->toBe([[QKeyEvent::class, Type::KEY_PRESS, Qt\Key::ENTER->value, 0x04000000], [QKeyEvent::class, Type::KEY_RELEASE, Qt\Key::ENTER->value, 0]])
        ->and(fn () => new QKeyEvent(Type::KEY_PRESS, 0, 0, '', false, 65536))->toThrow(ValueError::class);
});

it('reads a key event\'s text, repeat flag and native codes', function (): void {
    $event = new QKeyEvent(Type::KEY_PRESS, Qt\Key::A->value, 0, 'a', true);

    expect($event->text())->toBe('a')
        ->and($event->isAutoRepeat())->toBeTrue()
        ->and($event->nativeScanCode())->toBe(0)
        ->and($event->nativeVirtualKey())->toBe(0)
        ->and((new QKeyEvent(Type::KEY_PRESS, Qt\Key::F5->value, 0))->text())->toBe('');
});

it('refuses event ints wider than the C int they become, rather than truncating them', function (): void {
    $wide = (1 << 32) | Qt\Key::RETURN->value;
    $device = QPointingDevice::primaryPointingDevice();
    $at = new QPointF(1.0, 1.0);

    expect(fn () => new QKeyEvent(Type::KEY_PRESS, $wide, 0))->toThrow(ValueError::class)
        ->and(fn () => new QKeyEvent(Type::KEY_PRESS, 0, 1 << 32))->toThrow(ValueError::class)
        ->and(fn () => new QMouseEvent(Type::MOUSE_BUTTON_PRESS, $at, $at, 1 << 32, 1, 0, $device))->toThrow(ValueError::class)
        ->and(fn () => new QMouseEvent(Type::MOUSE_BUTTON_PRESS, $at, $at, 1, 1 << 32, 0, $device))->toThrow(ValueError::class)
        ->and(fn () => new QMouseEvent(Type::MOUSE_BUTTON_PRESS, $at, $at, 1, 1, 1 << 32, $device))->toThrow(ValueError::class)
        ->and(fn () => new QContextMenuEvent(Reason::MOUSE, new QPoint(0, 0), new QPoint(0, 0), 1 << 32))->toThrow(ValueError::class)
        ->and((new QKeyEvent(Type::KEY_PRESS, Qt\Key::RETURN->value, 0x04000000))->modifiers())->toBe(0x04000000);
});

it('names Qt\'s keys at their C values, digits and case-only pairs included', function (): void {
    expect([Qt\Key::ESCAPE->value, Qt\Key::RETURN->value, Qt\Key::ENTER->value, Qt\Key::A->value, Qt\Key::F1->value])
        ->toBe([0x01000000, 0x01000004, 0x01000005, 0x41, 0x01000030])
        ->and([Qt\Key::KEY_0->value, Qt\Key::KEY_9->value])->toBe([0x30, 0x39])
        ->and([Qt\Key::DEAD_a->value, Qt\Key::DEAD_A->value])->toBe([0x01001280, 0x01001281])
        ->and(Qt\Key::MICRO->value)->toBe(0xb5);
});

it('makes a wheel event and reads its deltas, positions, source and modifiers', function (): void {
    $event = new QWheelEvent(new QPointF(5.0, 6.0), new QPointF(105.0, 106.0), new QPoint(0, -3), new QPoint(0, -120), 0, 0x02000000,
        Qt\ScrollPhase::SCROLL_UPDATE, false, Qt\MouseEventSource::MOUSE_EVENT_SYNTHESIZED_BY_SYSTEM, QPointingDevice::primaryPointingDevice());

    expect([$event->pixelDelta()->x(), $event->pixelDelta()->y()])->toBe([0, -3])
        ->and([$event->angleDelta()->x(), $event->angleDelta()->y()])->toBe([0, -120])
        ->and([$event->position()->x(), $event->position()->y()])->toBe([5.0, 6.0])
        ->and([$event->globalPosition()->x(), $event->globalPosition()->y()])->toBe([105.0, 106.0])
        ->and($event->source())->toBe(Qt\MouseEventSource::MOUSE_EVENT_SYNTHESIZED_BY_SYSTEM)
        ->and($event->modifiers())->toBe(0x02000000)
        ->and($event->type())->toBe(Type::WHEEL);
});

it('refuses wheel buttons and modifiers wider than 32 bits', function (): void {
    $at = new QPointF(0.0, 0.0);
    $none = new QPoint(0, 0);
    $wheel = fn (int $buttons, int $modifiers) => new QWheelEvent($at, $at, $none, $none, $buttons, $modifiers, Qt\ScrollPhase::NO_SCROLL_PHASE, false,
        Qt\MouseEventSource::MOUSE_EVENT_NOT_SYNTHESIZED, QPointingDevice::primaryPointingDevice());

    expect(fn () => $wheel(1 << 32, 0))->toThrow(ValueError::class)
        ->and(fn () => $wheel(0, 1 << 32))->toThrow(ValueError::class)
        ->and($wheel(0, 0x04000000)->modifiers())->toBe(0x04000000);
});

it('hands a filter a wheel event as a QWheelEvent', function (): void {
    $widget = new QWidget();
    $read = null;
    $filter = new QEventFilter(function (QObject $watched, QEvent $event) use (&$read): bool {
        if ($event->type() === Type::WHEEL) {
            $read = [$event::class, $event->angleDelta()->y(), $event->source()];
        }

        return false;
    });
    $widget->installEventFilter($filter);
    QCoreApplication::sendEvent($widget, new QWheelEvent(new QPointF(1.0, 1.0), new QPointF(1.0, 1.0), new QPoint(0, 0), new QPoint(0, -120), 0, 0,
        Qt\ScrollPhase::NO_SCROLL_PHASE, false, Qt\MouseEventSource::MOUSE_EVENT_NOT_SYNTHESIZED, QPointingDevice::primaryPointingDevice()));

    expect($read)->toBe([QWheelEvent::class, -120, Qt\MouseEventSource::MOUSE_EVENT_NOT_SYNTHESIZED]);
});

it('reads the double-click hints', function (): void {
    $hints = QGuiApplication::styleHints();

    expect($hints->mouseDoubleClickInterval())->toBeGreaterThan(0)
        ->and($hints->mouseDoubleClickDistance())->toBeGreaterThanOrEqual(0);
});

it('names the scroll phases and mouse event sources at their C values', function (): void {
    expect(array_map(fn (Qt\ScrollPhase $p): int => $p->value, Qt\ScrollPhase::cases()))->toBe([0, 1, 2, 3, 4])
        ->and([Qt\ScrollPhase::NO_SCROLL_PHASE, Qt\ScrollPhase::SCROLL_MOMENTUM])->toBe([Qt\ScrollPhase::from(0), Qt\ScrollPhase::from(4)])
        ->and(array_map(fn (Qt\MouseEventSource $s): string => $s->name, Qt\MouseEventSource::cases()))
        ->toBe(['MOUSE_EVENT_NOT_SYNTHESIZED', 'MOUSE_EVENT_SYNTHESIZED_BY_SYSTEM', 'MOUSE_EVENT_SYNTHESIZED_BY_QT', 'MOUSE_EVENT_SYNTHESIZED_BY_APPLICATION'])
        ->and(Qt\MouseEventSource::MOUSE_EVENT_SYNTHESIZED_BY_APPLICATION->value)->toBe(3);
});

it('matches a key event against a standard key sequence', function (): void {
    // Qt::ControlModifier 0x04000000 (Cmd on macOS), Qt::ShiftModifier 0x02000000.
    $ctrlA = new QKeyEvent(Type::KEY_PRESS, Qt\Key::A->value, 0x04000000, 'a');
    $shiftLeft = new QKeyEvent(Type::KEY_PRESS, Qt\Key::LEFT->value, 0x02000000);

    expect($ctrlA->matches(QKeySequence\StandardKey::SELECT_ALL))->toBeTrue()
        ->and($ctrlA->matches(QKeySequence\StandardKey::COPY))->toBeFalse()
        ->and($shiftLeft->matches(QKeySequence\StandardKey::SELECT_PREVIOUS_CHAR))->toBeTrue()
        ->and($shiftLeft->matches(QKeySequence\StandardKey::MOVE_TO_PREVIOUS_CHAR))->toBeFalse()
        ->and(QKeySequence\StandardKey::UNKNOWN_KEY->value)->toBe(0)
        ->and(QKeySequence\StandardKey::CANCEL->name)->toBe('CANCEL');
});

it('makes an input method event, sets its commit string and hands it to a filter as its class', function (): void {
    $event = new QInputMethodEvent('e', [new QInputMethodEvent\Attribute(QInputMethodEvent\AttributeType::CURSOR, 1, 0, null)]);
    expect($event->preeditString())->toBe('e')
        ->and($event->commitString())->toBe('')
        ->and($event->type())->toBe(Type::INPUT_METHOD);

    $event->setCommitString('é');
    expect($event->commitString())->toBe('é');

    $widget = new QWidget();
    $seen = [];
    $filter = new QEventFilter(function (QObject $watched, QEvent $event) use (&$seen): bool {
        if ($event->type() === Type::INPUT_METHOD) {
            $seen[] = [get_class($event), $event instanceof QInputMethodEvent ? $event->commitString() : null];
        }

        return false;
    });
    $widget->installEventFilter($filter);
    QCoreApplication::sendEvent($widget, $event);
    expect($seen)->toBe([[QInputMethodEvent::class, 'é']]);
});
