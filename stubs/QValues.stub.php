<?php

/** @generate-class-entries */

namespace QKeySequence {
    enum SequenceFormat: int
    {
        case NATIVE_TEXT = 0;
        case PORTABLE_TEXT = 1;
    }
}

namespace {
    /**
     * A copy of a QPoint.
     *
     * @not-serializable
     */
    final class QPoint
    {
        public function __construct(int $xpos, int $ypos) {}

        public function x(): int {}

        public function y(): int {}

        public function setX(int $x): void {}

        public function setY(int $y): void {}

        public function isNull(): bool {}
    }

    /**
     * A copy of a QPointF.
     *
     * @not-serializable
     */
    final class QPointF
    {
        public function __construct(float $xpos, float $ypos) {}

        public function x(): float {}

        public function y(): float {}

        public function setX(float $x): void {}

        public function setY(float $y): void {}

        public function isNull(): bool {}
    }

    /**
     * A copy of a QSize.
     *
     * @not-serializable
     */
    final class QSize
    {
        public function __construct(int $w, int $h) {}

        public function width(): int {}

        public function height(): int {}

        public function isValid(): bool {}

        public function isEmpty(): bool {}
    }

    /**
     * A copy of a QRect.
     *
     * @not-serializable
     */
    final class QRect
    {
        public function __construct(int $left, int $top, int $width, int $height) {}

        public function x(): int {}

        public function y(): int {}

        public function width(): int {}

        public function height(): int {}

        public function isValid(): bool {}
    }

    /**
     * A copy of a QDate.
     *
     * @not-serializable
     */
    final class QDate
    {
        public function __construct(int $y, int $m, int $d) {}

        public function year(): int {}

        public function month(): int {}

        public function day(): int {}

        public function isValid(): bool {}

        public function toString(Qt\DateFormat $format = Qt\DateFormat::TEXT_DATE): string {}

        public static function fromString(string $string, Qt\DateFormat $format = Qt\DateFormat::TEXT_DATE): QDate {}
    }

    /**
     * A copy of a QKeySequence.
     *
     * @not-serializable
     */
    final class QKeySequence
    {
        public function __construct(string $key, QKeySequence\SequenceFormat $format = QKeySequence\SequenceFormat::NATIVE_TEXT) {}

        public function toString(QKeySequence\SequenceFormat $format = QKeySequence\SequenceFormat::PORTABLE_TEXT): string {}

        public function isEmpty(): bool {}

        public static function fromString(string $str, QKeySequence\SequenceFormat $format = QKeySequence\SequenceFormat::PORTABLE_TEXT): QKeySequence {}
    }

    /**
     * A QByteArray: QByteArray(data, size) copies $size bytes of $data (a negative size reads to the
     * first NUL, as Qt does).
     *
     * @not-serializable
     */
    final class QByteArray
    {
        public function __construct(string $data, int $size = -1) {}

        public function size(): int {}

        /**
         * The address of the array's bytes (data()), for an API that borrows them, such as
         * QImage's constructor; valid while this object lives and is not resized.
         */
        public function pointer(): int {}
    }
}
