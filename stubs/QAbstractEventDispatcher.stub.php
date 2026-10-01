<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QAbstractEventDispatcher extends QObject
{
    public static function instance(): ?QAbstractEventDispatcher {}

    public function processEvents(QEventLoop\ProcessEventsFlag|int $flags): bool {}

    public function wakeUp(): void {}

    public function interrupt(): void {}
}
