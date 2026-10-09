<?php

/** @generate-class-entries */

/**
 * The trampoline QObject::installEventFilter() needs: Qt hands the filter every
 * event of each watched object, and this one hands those of the listed types
 * to PHP. Returning true stops the event, as eventFilter() does.
 *
 * @not-serializable
 */
final class QEventFilter extends QObject
{
    /**
     * @param callable $filter called as $filter(QObject $watched, QEvent\Type|int $type, QEvent $event): bool; $event lives only during the call
     * @param array|null $types QEvent\Type cases or ints to hand over; null hands over every event
     */
    public function __construct(callable $filter, ?array $types = null) {}
}
