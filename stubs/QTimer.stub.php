<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QTimer extends QObject
{
    public function __construct(?QObject $parent = null) {}

    /** start() or, with $msec, start(msec) */
    public function start(?int $msec = null): void {}

    public function stop(): void {}

    public function isActive(): bool {}

    public function interval(): int {}

    public function setInterval(int $msec): void {}

    public function isSingleShot(): bool {}

    public function setSingleShot(bool $singleShot): void {}

    public function timerType(): Qt\TimerType {}

    public function setTimerType(Qt\TimerType $atype): void {}

    public function remainingTime(): int {}

    public function timerId(): int {}

    /** The functor overload: $functor runs once, $msec from now. */
    public static function singleShot(int $msec, callable $functor): void {}
}
