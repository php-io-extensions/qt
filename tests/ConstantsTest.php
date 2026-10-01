<?php

declare(strict_types=1);

it('backs QEventLoop\ProcessEventsFlag with the Qt values', function (): void {
    expect(QEventLoop\ProcessEventsFlag::ALL_EVENTS->value)->toBe(0)
        ->and(QEventLoop\ProcessEventsFlag::EXCLUDE_USER_INPUT_EVENTS->value)->toBe(1)
        ->and(QEventLoop\ProcessEventsFlag::EXCLUDE_SOCKET_NOTIFIERS->value)->toBe(2)
        ->and(QEventLoop\ProcessEventsFlag::WAIT_FOR_MORE_EVENTS->value)->toBe(4)
        ->and(QEventLoop\ProcessEventsFlag::X11_EXCLUDE_TIMERS->value)->toBe(8)
        ->and(QEventLoop\ProcessEventsFlag::EVENT_LOOP_EXEC->value)->toBe(32)
        ->and(QEventLoop\ProcessEventsFlag::DIALOG_EXEC->value)->toBe(64)
        ->and(QEventLoop\ProcessEventsFlag::APPLICATION_EXEC->value)->toBe(128);
});

it('backs Qt\TimerType and QSocketNotifier\Type with the Qt values', function (): void {
    expect(Qt\TimerType::PRECISE_TIMER->value)->toBe(0)
        ->and(Qt\TimerType::COARSE_TIMER->value)->toBe(1)
        ->and(Qt\TimerType::VERY_COARSE_TIMER->value)->toBe(2)
        ->and(QSocketNotifier\Type::READ->value)->toBe(0)
        ->and(QSocketNotifier\Type::WRITE->value)->toBe(1)
        ->and(QSocketNotifier\Type::EXCEPTION->value)->toBe(2);
});

it('backs the generated QEvent\Type and Qt\WidgetAttribute enums with the Qt values', function (): void {
    expect(QEvent\Type::NONE->value)->toBe(0)
        ->and(QEvent\Type::CLOSE->value)->toBe(19)
        ->and(QEvent\Type::WINDOW_ACTIVATE->value)->toBe(24)
        ->and(QEvent\Type::WINDOW_DEACTIVATE->value)->toBe(25)
        ->and(QEvent\Type::USER->value)->toBe(1000)
        ->and(QEvent\Type::MAX_USER->value)->toBe(65535)
        ->and(Qt\WidgetAttribute::DELETE_ON_CLOSE->value)->toBe(55)
        ->and(Qt\WidgetAttribute::QUIT_ON_CLOSE->value)->toBe(76);
});

it('backs QAction\MenuRole with the Qt values', function (): void {
    expect(QAction\MenuRole::NO_ROLE->value)->toBe(0)
        ->and(QAction\MenuRole::ABOUT_ROLE->value)->toBe(4)
        ->and(QAction\MenuRole::QUIT_ROLE->value)->toBe(6);
});
