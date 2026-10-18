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
