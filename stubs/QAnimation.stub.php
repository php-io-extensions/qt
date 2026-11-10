<?php

/** @generate-class-entries */

namespace QAbstractAnimation {
    enum DeletionPolicy: int
    {
        case KEEP_WHEN_STOPPED = 0;
        case DELETE_WHEN_STOPPED = 1;
    }
}

namespace {
    /**
     * @not-serializable
     */
    class QAbstractAnimation extends QObject
    {
        public function start(QAbstractAnimation\DeletionPolicy $policy = QAbstractAnimation\DeletionPolicy::KEEP_WHEN_STOPPED): void {}

        public function stop(): void {}

        public function duration(): int {}
    }

    /**
     * @not-serializable
     */
    class QVariantAnimation extends QAbstractAnimation
    {
        /** $value as a QVariant: null, bool, int, float, string, or one of Qt's value classes (QPoint, QColor, …). */
        public function setStartValue(mixed $value): void {}

        /** $value as a QVariant: null, bool, int, float, string, or one of Qt's value classes (QPoint, QColor, …). */
        public function setEndValue(mixed $value): void {}

        public function setDuration(int $msecs): void {}
    }

    /**
     * Animates $propertyName of $target (a Q_PROPERTY, e.g. a QGraphicsOpacityEffect's "opacity" or a QWidget's "pos").
     *
     * @not-serializable
     */
    class QPropertyAnimation extends QVariantAnimation
    {
        public function __construct(QObject $target, string $propertyName, ?QObject $parent = null) {}
    }
}
