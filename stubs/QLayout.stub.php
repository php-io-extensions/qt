<?php

/** @generate-class-entries */

namespace QSizePolicy {
    enum Policy: int
    {
        case FIXED = 0;
        case MINIMUM = 1;
        case MAXIMUM = 4;
        case PREFERRED = 5;
        case MINIMUM_EXPANDING = 3;
        case EXPANDING = 7;
        case IGNORED = 13;
    }
}

namespace {
    /**
     * Abstract in Qt: made through QVBoxLayout, QHBoxLayout or QGridLayout.
     *
     * @not-serializable
     */
    class QLayout extends QObject
    {
        private function __construct() {}

        public function setSpacing(int $spacing): void {}

        public function spacing(): int {}

        public function setContentsMargins(int $left, int $top, int $right, int $bottom): void {}

        public function count(): int {}

        /** Takes the widget out of the layout; the widget itself stays. */
        public function removeWidget(QWidget $widget): void {}

        public function indexOf(QWidget $widget): int {}

        /** itemAt(index)->widget(): the widget at that position, or null for a spacer, a nested layout or an index out of range. */
        public function itemAtWidget(int $index): ?QWidget {}

        public function invalidate(): void {}
    }

    /**
     * A layout item that only takes space. PHP owns it until a layout takes it; it reports
     * "deleted" once the layout deletes it.
     *
     * @not-serializable
     */
    final class QSpacerItem
    {
        public function __construct(int $w, int $h, QSizePolicy\Policy $hPolicy = QSizePolicy\Policy::MINIMUM, QSizePolicy\Policy $vPolicy = QSizePolicy\Policy::MINIMUM) {}

        public function changeSize(int $w, int $h, QSizePolicy\Policy $hPolicy = QSizePolicy\Policy::MINIMUM, QSizePolicy\Policy $vPolicy = QSizePolicy\Policy::MINIMUM): void {}

        /** @return array{int, int} width, height */
        public function sizeHint(): array {}
    }

    /**
     * @not-serializable
     */
    class QBoxLayout extends QLayout
    {
        private function __construct() {}

        public function addWidget(QWidget $widget, int $stretch = 0, Qt\AlignmentFlag|int $alignment = 0): void {}

        /** A negative index appends; an index past count() is a ValueError. */
        public function insertWidget(int $index, QWidget $widget, int $stretch = 0, Qt\AlignmentFlag|int $alignment = 0): void {}

        public function addLayout(QLayout $layout, int $stretch = 0): void {}

        public function addStretch(int $stretch = 0): void {}

        public function setStretch(int $index, int $stretch): void {}

        public function stretch(int $index): int {}

        public function setAlignment(QWidget $widget, Qt\AlignmentFlag|int $alignment): bool {}
    }

    /**
     * @not-serializable
     */
    class QVBoxLayout extends QBoxLayout
    {
        public function __construct(?QWidget $parent = null) {}
    }

    /**
     * @not-serializable
     */
    class QHBoxLayout extends QBoxLayout
    {
        public function __construct(?QWidget $parent = null) {}
    }

    /**
     * @not-serializable
     */
    class QGridLayout extends QLayout
    {
        public function __construct(?QWidget $parent = null) {}

        public function addWidget(QWidget $widget, int $row, int $column, int $rowSpan = 1, int $columnSpan = 1, Qt\AlignmentFlag|int $alignment = 0): void {}

        public function rowCount(): int {}

        public function columnCount(): int {}

        public function setHorizontalSpacing(int $spacing): void {}

        public function setVerticalSpacing(int $spacing): void {}

        /** itemAtPosition(row, column)->widget(): the widget there, or null. */
        public function itemAtPosition(int $row, int $column): ?QWidget {}

        public function setRowStretch(int $row, int $stretch): void {}

        public function setColumnStretch(int $column, int $stretch): void {}

        public function rowStretch(int $row): int {}

        public function columnStretch(int $column): int {}

        /** The layout takes the item; one another layout holds is a ValueError. */
        public function addItem(QSpacerItem $item, int $row, int $column, int $rowSpan = 1, int $columnSpan = 1, Qt\AlignmentFlag|int $alignment = 0): void {}
    }
}
