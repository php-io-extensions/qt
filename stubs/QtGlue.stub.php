<?php

/** @generate-class-entries */

/**
 * The trampoline QObject::installEventFilter() needs: Qt hands the filter every event of each
 * watched object, and this one hands each to PHP as eventFilter(watched, event). Returning true
 * stops the event, as eventFilter() does.
 *
 * @not-serializable
 */
final class QEventFilter extends QObject
{
    /** @param callable $filter called as $filter(QObject $watched, QEvent $event): bool; $event lives only during the call */
    public function __construct(callable $filter) {}
}

/**
 * The QStyledItemDelegate subclass a view needs to draw its rows: Qt calls paint(), sizeHint()
 * and editorEvent() on it, and each goes to the PHP callable given for it. A null callable
 * leaves that call to QStyledItemDelegate. $painter, $option and $event live only during the call.
 *
 * @not-serializable
 */
final class QPaintDelegate extends QStyledItemDelegate
{
    /**
     * @param callable|null $paint called as $paint(QPainter $painter, QStyleOptionViewItem $option, QModelIndex $index): void
     * @param callable|null $sizeHint called as $sizeHint(QStyleOptionViewItem $option, QModelIndex $index): QSize
     * @param callable|null $editorEvent called as $editorEvent(QEvent $event, QAbstractItemModel $model, QStyleOptionViewItem $option, QModelIndex $index): bool
     */
    public function __construct(?callable $paint, ?callable $sizeHint = null, ?callable $editorEvent = null, ?QObject $parent = null) {}
}
