<?php

declare(strict_types=1);

use QContextMenuEvent\Reason;
use QEvent\Type;
use QInputDevice\DeviceType;

beforeEach(fn () => testApplication());

it('hands a filter the event as its third argument, alive only during the call', function (): void {
    $widget = new QWidget();
    $seen = null;
    $filter = new QEventFilter(function (QObject $watched, Type|int $type, QEvent $event) use (&$seen): bool {
        $seen = $event;
        $read = [$event::class, $event->type(), $event->reason(), $event->pos(), $event->globalPos()];
        $event->accept();
        $seen = [$event, $read, $event->isAccepted()];

        return false;
    }, [Type::CONTEXT_MENU]);
    $widget->installEventFilter($filter);
    QCoreApplication::sendEvent($widget, new QContextMenuEvent(Reason::MOUSE, 3, 4, 103, 104));
    [$event, $read, $accepted] = $seen;

    expect($read)->toBe([QContextMenuEvent::class, Type::CONTEXT_MENU, Reason::MOUSE, [3, 4], [103, 104]])
        ->and($accepted)->toBeTrue()
        ->and(fn () => $event->pos())->toThrow(QtException::class);
});

it('reads a mouse event\'s button, buttons, positions and device type', function (): void {
    $widget = new QWidget();
    $read = null;
    $filter = new QEventFilter(function (QObject $watched, Type|int $type, QEvent $event) use (&$read): bool {
        $read = [$event::class, $event->button(), $event->buttons(), $event->position(), $event->globalPosition(), $event->modifiers(), $event->deviceType() instanceof DeviceType];

        return false;
    }, [Type::MOUSE_BUTTON_PRESS]);
    $widget->installEventFilter($filter);
    QCoreApplication::sendEvent($widget, new QMouseEvent(Type::MOUSE_BUTTON_PRESS, 5.0, 6.0, 105.0, 106.0, 2, 2, 0));

    expect($read)->toBe([QMouseEvent::class, 2, 2, [5.0, 6.0], [105.0, 106.0], 0, true]);
});

it('names the context-menu reasons and input device types at their C values', function (): void {
    expect([Reason::MOUSE->value, Reason::KEYBOARD->value, Reason::OTHER->value])->toBe([0, 1, 2])
        ->and([DeviceType::MOUSE->value, DeviceType::TOUCH_SCREEN->value, DeviceType::TOUCH_PAD->value])->toBe([1, 2, 4]);
});

it('finds the widget at a screen point, maps points from the screen, and reads the press-and-hold hints', function (): void {
    $hints = QGuiApplication::styleHints();
    $widget = new QWidget();

    expect(QApplication::widgetAt(-100000, -100000))->toBeNull()
        ->and($widget->mapFromGlobal(10.0, 20.0))->toHaveCount(2)
        ->and($hints)->toBeInstanceOf(QStyleHints::class)
        ->and($hints->mousePressAndHoldInterval())->toBeGreaterThan(0)
        ->and($hints->startDragDistance())->toBeGreaterThan(0);
});
