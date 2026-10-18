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

namespace QFontDatabase {
    enum SystemFont: int
    {
        case GENERAL_FONT = 0;
        case FIXED_FONT = 1;
        case TITLE_FONT = 2;
        case SMALLEST_READABLE_FONT = 3;
    }
}

namespace QImage {
    /** The QImage::Format layouts with 8 bits a channel. */
    enum Format: int
    {
        case RGB32 = 4;
        case ARGB32 = 5;
        case ARGB32_PREMULTIPLIED = 6;
        case RGB888 = 13;
        /** Four bytes, red first; the fourth is ignored: opaque. */
        case RGBX8888 = 16;
        case RGBA8888 = 17;
        case RGBA8888_PREMULTIPLIED = 18;
        case BGR888 = 29;
    }
}

namespace {
    /**
     * @not-serializable
     */
    final class QDesktopServices
    {
        private function __construct() {}

        /** The URL in its handler (the browser for http and https). */
        public static function openUrl(QUrl $url): bool {}
    }

    final class QFontDatabase
    {
        private function __construct() {}

        /** Needs a QGuiApplication (QtException otherwise). */
        public static function systemFont(QFontDatabase\SystemFont $type): QFont {}
    }

    /**
     * A value in Qt; here a heap copy owned by the PHP object.
     *
     * @not-serializable
     */
    final class QFont
    {
        public function __construct(string $family, int $pointSize = -1, int $weight = -1, bool $italic = false) {}

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

        /** Needs a QGuiApplication (or QApplication) first. */
        public static function fromImage(QImage $image, Qt\ImageConversionFlag|int $flags = Qt\ImageConversionFlag::AUTO_COLOR): QPixmap {}

        public function load(string $fileName, ?string $format = null, Qt\ImageConversionFlag|int $flags = Qt\ImageConversionFlag::AUTO_COLOR): bool {}

        public function isNull(): bool {}

        public function width(): int {}

        public function height(): int {}

        public function scaled(int $width, int $height, Qt\AspectRatioMode $aspectRatioMode = Qt\AspectRatioMode::IGNORE_ASPECT_RATIO, Qt\TransformationMode $transformMode = Qt\TransformationMode::FAST_TRANSFORMATION): QPixmap {}

        public function devicePixelRatio(): float {}

        /** @param float $scaleFactor greater than 0 */
        public function setDevicePixelRatio(float $scaleFactor): void {}
    }

    /**
     * A value in Qt; here a heap copy owned by the PHP object.
     *
     * @not-serializable
     */
    final class QImage
    {
        /**
         * QImage(data, width, height, bytesPerLine, format, cleanupFunction, cleanupInfo): Qt borrows
         * the buffer at the address $data (a QByteArray's or a framebuffer's pointer()), which must
         * outlive every image sharing it; copy() makes an image of its own. Once the last image
         * sharing the buffer goes, Qt calls $cleanupFunction($cleanupInfo), on the thread that
         * made the image. A null address or bad dimensions make Qt's null image.
         */
        public function __construct(int $data, int $width, int $height, int $bytesPerLine, QImage\Format $format, ?callable $cleanupFunction = null, mixed $cleanupInfo = null) {}

        public function isNull(): bool {}

        public function width(): int {}

        public function height(): int {}

        public function format(): QImage\Format {}

        /** $rect null is Qt's default QRect(): the whole image. */
        public function copy(?QRect $rect = null): QImage {}
    }

    /**
     * Heap item: PHP owns it until QTableWidget::setItem() hands it to a table.
     *
     * @not-serializable
     */
    final class QTableWidgetItem
    {
        /** @cvalue QTableWidgetItem::Type */
        public const int TYPE = UNKNOWN;
        /** @cvalue QTableWidgetItem::UserType */
        public const int USER_TYPE = UNKNOWN;

        public function __construct(string $text = "", int $type = QTableWidgetItem::TYPE) {}

        public function text(): string {}

        public function setText(string $text): void {}

        public function type(): int {}

        /** The item's row in its table; -1 when no table holds it. */
        public function row(): int {}
    }
}
