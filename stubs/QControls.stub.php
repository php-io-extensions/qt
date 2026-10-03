<?php

/** @generate-class-entries */

namespace QLineEdit {
    enum EchoMode: int
    {
        case NORMAL = 0;
        case NO_ECHO = 1;
        case PASSWORD = 2;
        case PASSWORD_ECHO_ON_EDIT = 3;
    }
}

namespace QFrame {
    enum Shape: int
    {
        case NO_FRAME = 0;
        case BOX = 1;
        case PANEL = 2;
        case WIN_PANEL = 3;
        case H_LINE = 4;
        case V_LINE = 5;
        case STYLED_PANEL = 6;
    }

    enum Shadow: int
    {
        case PLAIN = 16;
        case RAISED = 32;
        case SUNKEN = 48;
    }
}

namespace QAbstractItemView {
    enum SelectionBehavior: int
    {
        case SELECT_ITEMS = 0;
        case SELECT_ROWS = 1;
        case SELECT_COLUMNS = 2;
    }

    enum SelectionMode: int
    {
        case NO_SELECTION = 0;
        case SINGLE_SELECTION = 1;
        case MULTI_SELECTION = 2;
        case EXTENDED_SELECTION = 3;
        case CONTIGUOUS_SELECTION = 4;
    }
}

namespace {
    /**
     * @not-serializable
     */
    class QLabel extends QWidget
    {
        public function __construct(string $text = "", ?QWidget $parent = null) {}

        public function text(): string {}

        public function setText(string $text): void {}

        /** Qt::Alignment flags as an int. */
        public function alignment(): int {}

        public function setAlignment(Qt\AlignmentFlag|int $alignment): void {}

        public function wordWrap(): bool {}

        public function setWordWrap(bool $on): void {}

        public function setScaledContents(bool $scaled): void {}

        public function textFormat(): Qt\TextFormat {}

        public function setTextFormat(Qt\TextFormat $format): void {}

        /** null clears the pixmap, as setPixmap(QPixmap()) does. */
        public function setPixmap(?QPixmap $pixmap): void {}

        /** A copy of the label's pixmap; null when none is set. */
        public function pixmap(): QPixmap {}
    }

    /**
     * Abstract in Qt: made through QPushButton or QCheckBox. Signals clicked(bool), toggled(bool).
     *
     * @not-serializable
     */
    class QAbstractButton extends QWidget
    {
        private function __construct() {}

        public function text(): string {}

        public function setText(string $text): void {}

        public function isCheckable(): bool {}

        public function setCheckable(bool $checkable): void {}

        public function isChecked(): bool {}

        public function setChecked(bool $checked): void {}

        public function click(): void {}

        public function toggle(): void {}
    }

    /**
     * @not-serializable
     */
    class QPushButton extends QAbstractButton
    {
        public function __construct(string $text = "", ?QWidget $parent = null) {}
    }

    /**
     * @not-serializable
     */
    class QCheckBox extends QAbstractButton
    {
        public function __construct(string $text = "", ?QWidget $parent = null) {}
    }

    /**
     * Abstract in Qt: made through QSlider. Signal valueChanged(int).
     *
     * @not-serializable
     */
    class QAbstractSlider extends QWidget
    {
        private function __construct() {}

        public function minimum(): int {}

        public function maximum(): int {}

        public function setRange(int $min, int $max): void {}

        public function value(): int {}

        public function setValue(int $value): void {}

        public function orientation(): Qt\Orientation {}

        public function setOrientation(Qt\Orientation $orientation): void {}

        public function singleStep(): int {}

        public function setSingleStep(int $step): void {}

        public function pageStep(): int {}

        public function setPageStep(int $step): void {}
    }

    /**
     * @not-serializable
     */
    class QSlider extends QAbstractSlider
    {
        /** No orientation is Qt's QSlider(QWidget *) overload: vertical. */
        public function __construct(Qt\Orientation $orientation = Qt\Orientation::VERTICAL, ?QWidget $parent = null) {}
    }

    /**
     * Signal currentIndexChanged(int).
     *
     * @not-serializable
     */
    class QComboBox extends QWidget
    {
        public function __construct(?QWidget $parent = null) {}

        public function addItem(string $text): void {}

        /** @param string[] $texts */
        public function addItems(array $texts): void {}

        public function clear(): void {}

        public function count(): int {}

        public function currentIndex(): int {}

        public function setCurrentIndex(int $index): void {}

        public function currentText(): string {}

        public function itemText(int $index): string {}
    }

    /**
     * Signals textChanged(QString), returnPressed().
     *
     * @not-serializable
     */
    class QLineEdit extends QWidget
    {
        public function __construct(string $text = "", ?QWidget $parent = null) {}

        public function text(): string {}

        public function setText(string $text): void {}

        public function placeholderText(): string {}

        public function setPlaceholderText(string $text): void {}

        public function echoMode(): QLineEdit\EchoMode {}

        public function setEchoMode(QLineEdit\EchoMode $mode): void {}

        public function isReadOnly(): bool {}

        public function setReadOnly(bool $readOnly): void {}
    }

    /**
     * Signal textChanged().
     *
     * @not-serializable
     */
    class QPlainTextEdit extends QWidget
    {
        public function __construct(?QWidget $parent = null) {}

        public function toPlainText(): string {}

        public function setPlainText(string $text): void {}

        public function isReadOnly(): bool {}

        public function setReadOnly(bool $readOnly): void {}
    }

    /**
     * Dates cross as ISO 8601 strings (yyyy-MM-dd): date(), setDate(), and the dateChanged(QDate) signal.
     *
     * @not-serializable
     */
    class QDateEdit extends QWidget
    {
        public function __construct(?QWidget $parent = null) {}

        public function date(): string {}

        /** @param string $date an ISO 8601 date; anything else is a ValueError */
        public function setDate(string $date): void {}

        public function setCalendarPopup(bool $enable): void {}

        /** The popup's QCalendarWidget (boxed as QWidget, the nearest bound class); null until setCalendarPopup(true). */
        public function calendarWidget(): ?QWidget {}

        public function minimumDate(): string {}

        /** @param string $min an ISO 8601 date */
        public function setMinimumDate(string $min): void {}

        public function setDisplayFormat(string $format): void {}
    }

    /**
     * @not-serializable
     */
    class QProgressBar extends QWidget
    {
        public function __construct(?QWidget $parent = null) {}

        public function minimum(): int {}

        public function maximum(): int {}

        public function setRange(int $minimum, int $maximum): void {}

        public function value(): int {}

        public function setValue(int $value): void {}

        public function setTextVisible(bool $visible): void {}

        public function reset(): void {}
    }

    /**
     * @not-serializable
     */
    class QFrame extends QWidget
    {
        public function __construct(?QWidget $parent = null) {}

        public function frameShape(): QFrame\Shape {}

        public function setFrameShape(QFrame\Shape $shape): void {}

        public function setFrameShadow(QFrame\Shadow $shadow): void {}
    }

    /**
     * @not-serializable
     */
    class QScrollArea extends QFrame
    {
        public function __construct(?QWidget $parent = null) {}

        /** The area takes ownership of the widget. */
        public function setWidget(QWidget $widget): void {}

        public function widget(): ?QWidget {}

        public function setWidgetResizable(bool $resizable): void {}

        public function setHorizontalScrollBarPolicy(Qt\ScrollBarPolicy $policy): void {}

        public function setVerticalScrollBarPolicy(Qt\ScrollBarPolicy $policy): void {}
    }

    /**
     * Abstract in Qt: made through QTableWidget. Parented to QFrame here because QAbstractScrollArea is not bound.
     *
     * @not-serializable
     */
    class QAbstractItemView extends QFrame
    {
        /** @cvalue QAbstractItemView::NoEditTriggers */
        public const int NO_EDIT_TRIGGERS = UNKNOWN;

        private function __construct() {}

        public function setSelectionBehavior(QAbstractItemView\SelectionBehavior $behavior): void {}

        public function setSelectionMode(QAbstractItemView\SelectionMode $mode): void {}

        /** QAbstractItemView::EditTrigger flags as an int. */
        public function setEditTriggers(int $triggers): void {}

        public function clearSelection(): void {}
    }

    /**
     * Signals itemSelectionChanged(), cellClicked(int,int). Parented to QAbstractItemView here because QTableView is not bound.
     *
     * @not-serializable
     */
    class QTableWidget extends QAbstractItemView
    {
        public function __construct(int $rows = 0, int $columns = 0, ?QWidget $parent = null) {}

        public function rowCount(): int {}

        public function setRowCount(int $rows): void {}

        public function columnCount(): int {}

        public function setColumnCount(int $columns): void {}

        /** @param string[] $labels */
        public function setHorizontalHeaderLabels(array $labels): void {}

        /**
         * The table owns the item from here on; its wrapper reports "deleted" once the table drops it.
         * A cell outside the table, or an item another table holds, is a ValueError.
         */
        public function setItem(int $row, int $column, QTableWidgetItem $item): void {}

        public function item(int $row, int $column): ?QTableWidgetItem {}

        /** @return QTableWidgetItem[] the selected items, as Qt lists them */
        public function selectedItems(): array {}

        /** The header item setHorizontalHeaderLabels() made (or setItem-style ownership: the table's). */
        public function horizontalHeaderItem(int $column): ?QTableWidgetItem {}

        public function clearContents(): void {}

        public function currentRow(): int {}

        public function selectRow(int $row): void {}
    }
}
