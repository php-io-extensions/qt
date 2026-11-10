<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QGraphicsEffect extends QObject
{
}

/**
 * Draws its widget (QWidget::setGraphicsEffect()) at opacity(). The widget owns the effect it is given.
 *
 * @not-serializable
 */
class QGraphicsOpacityEffect extends QGraphicsEffect
{
    public function __construct(?QObject $parent = null) {}

    public function opacity(): float {}

    public function setOpacity(float $opacity): void {}
}
