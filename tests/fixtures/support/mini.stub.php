<?php

namespace {
    class QTabWidget extends QWidget
    {
        public function __construct(?QWidget $parent = null) {}

        public function count(): int {}

        /** QWidget::setFocus, declared on the subclass. */
        public function setFocus(): void {}

        /** QPaintDevice::devicePixelRatioF: QWidget's second base. */
        public function devicePixelRatioF(): float {}

        public function nothing(): void {}
    }
}
