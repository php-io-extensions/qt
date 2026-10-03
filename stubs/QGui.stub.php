<?php

/** @generate-class-entries */

namespace QFont {
    enum Weight: int
    {
        case THIN = 100;
        case EXTRA_LIGHT = 200;
        case LIGHT = 300;
        case NORMAL = 400;
        case MEDIUM = 500;
        case DEMI_BOLD = 600;
        case BOLD = 700;
        case EXTRA_BOLD = 800;
        case BLACK = 900;
    }
}

namespace {
    /**
     * A value in Qt; here a heap copy owned by the PHP object.
     *
     * @not-serializable
     */
    final class QFont
    {
        /**
         * @param float $pointSize greater than 0, or -1 for the default size
         * @param int $weight 1 to 1000 (QFont\Weight values are points on that scale), or -1 for the default
         */
        public function __construct(string $family = "", float $pointSize = -1.0, int $weight = -1) {}

        public function family(): string {}

        public function setFamily(string $family): void {}

        public function pointSizeF(): float {}

        /** @param float $pointSize greater than 0 */
        public function setPointSizeF(float $pointSize): void {}

        /** A weight between the named ones (a font match can produce one) comes back as the int. */
        public function weight(): QFont\Weight|int {}

        /** @param QFont\Weight|int $weight a named weight, or any point on the 1 to 1000 scale */
        public function setWeight(QFont\Weight|int $weight): void {}
    }

    /**
     * A value in Qt; here a heap copy owned by the PHP object.
     *
     * @not-serializable
     */
    final class QPixmap
    {
        /** Needs a QGuiApplication (or QApplication) first. */
        public function __construct() {}

        public function load(string $fileName): bool {}

        public function isNull(): bool {}

        public function width(): int {}

        public function height(): int {}

        public function scaled(int $width, int $height, Qt\AspectRatioMode $aspectRatioMode, Qt\TransformationMode $transformMode = Qt\TransformationMode::FAST_TRANSFORMATION): QPixmap {}

        public function devicePixelRatio(): float {}

        /** @param float $scaleFactor greater than 0 */
        public function setDevicePixelRatio(float $scaleFactor): void {}
    }

    /**
     * Heap item: PHP owns it until QTableWidget::setItem() hands it to a table.
     *
     * @not-serializable
     */
    final class QTableWidgetItem
    {
        public function __construct(string $text = "") {}

        public function text(): string {}

        public function setText(string $text): void {}

        /** The item's row in its table; -1 when no table holds it. */
        public function row(): int {}
    }
}
