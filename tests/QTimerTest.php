<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('configures a timer', function (): void {
    $timer = new QTimer();
    $timer->setInterval(250);
    $timer->setSingleShot(true);
    $timer->setTimerType(Qt\TimerType::VERY_COARSE_TIMER);

    expect($timer->interval())->toBe(250)
        ->and($timer->isSingleShot())->toBeTrue()
        ->and($timer->timerType())->toBe(Qt\TimerType::VERY_COARSE_TIMER)
        ->and($timer->isActive())->toBeFalse()
        ->and($timer->remainingTime())->toBe(-1);

    // A very coarse timer reports remainingTime() in whole seconds: measure with a precise one.
    $timer->setTimerType(Qt\TimerType::PRECISE_TIMER);
    $timer->start();
    expect($timer->isActive())->toBeTrue()
        ->and($timer->remainingTime())->toBeGreaterThan(0)
        ->and($timer->timerId())->toBeGreaterThan(0);

    $timer->stop();
    expect($timer->isActive())->toBeFalse();
});

it('fires timeout() at its interval while events are processed', function (): void {
    $timer = new QTimer();
    $timer->setSingleShot(true);
    $timer->setTimerType(Qt\TimerType::PRECISE_TIMER);
    $fired = false;
    QObject::connect($timer, 'timeout()', function () use (&$fired): void {
        $fired = true;
    });

    $timer->start(40);
    $t = hrtime(true);
    processUntil(function () use (&$fired): bool { return $fired; });
    $ms = (hrtime(true) - $t) / 1e6;

    expect($fired)->toBeTrue()
        ->and($ms)->toBeGreaterThanOrEqual(35.0)->toBeLessThan(150.0);
});

it('runs a singleShot functor once', function (): void {
    $calls = 0;
    QTimer::singleShot(5, function () use (&$calls): void {
        $calls++;
    });

    processUntil(function () use (&$calls): bool { return $calls > 0; });
    usleep(20_000);
    QCoreApplication::processEvents();

    expect($calls)->toBe(1);
});

it('lets an exception thrown by a slot surface from processEvents', function (): void {
    QTimer::singleShot(0, function (): never {
        throw new LogicException('from the slot');
    });

    expect(fn () => processUntil(fn (): bool => false, 200))->toThrow(LogicException::class, 'from the slot');
});

it('rejects out-of-range intervals', function (): void {
    expect(fn () => (new QTimer())->start(-1))->toThrow(ValueError::class)
        ->and(fn () => QTimer::singleShot(-1, fn () => null))->toThrow(ValueError::class);
});
