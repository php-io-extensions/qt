<?php

/** @generate-class-entries */

namespace QPlainTextEdit {
    enum LineWrapMode: int
    {
        case NO_WRAP = 0;
        case WIDGET_WIDTH = 1;
    }
}

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

    enum ScrollHint: int
    {
        case ENSURE_VISIBLE = 0;
        case POSITION_AT_TOP = 1;
        case POSITION_AT_BOTTOM = 2;
        case POSITION_AT_CENTER = 3;
    }
}

namespace {
    /**
     * Signals linkActivated(QString), linkHovered(QString).
     *
     * @not-serializable
     */
    class QLabel extends QWidget
    {
        public function __construct(string $text = "", ?QWidget $parent = null, Qt\WindowType|int $f = 0) {}

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

        public function openExternalLinks(): bool {}

        /** True: Qt opens an activated link itself (QDesktopServices) instead of emitting linkActivated. */
        public function setOpenExternalLinks(bool $open): void {}

        /** Qt::TextInteractionFlags as an int. */
        public function textInteractionFlags(): int {}

        public function setTextInteractionFlags(Qt\TextInteractionFlag|int $flags): void {}

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
    abstract class QAbstractButton extends QWidget
    {
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

        public function isDefault(): bool {}

        public function setDefault(bool $default): void {}
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
     * A scroll area's bar; signal valueChanged(int).
     *
     * @not-serializable
     */
    class QScrollBar extends QAbstractSlider
    {
        private function __construct() {}
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

        /** @param mixed $userData null, bool, int, float or string, held as a QVariant */
        public function addItem(string $text, mixed $userData = null): void {}

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

        public function cut(): void {}

        public function copy(): void {}

        public function paste(): void {}

        public function selectAll(): void {}

        public function undo(): void {}

        public function redo(): void {}

        public function selectedText(): string {}
    }

    /**
     * Signals textChanged(), cursorPositionChanged().
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

        public function cut(): void {}

        public function copy(): void {}

        public function paste(): void {}

        public function selectAll(): void {}

        public function undo(): void {}

        public function redo(): void {}

        public function document(): QTextDocument {}

        public function textCursor(): QTextCursor {}

        /** A cursor on this edit's document (ValueError otherwise). */
        public function setTextCursor(QTextCursor $cursor): void {}

        public function ensureCursorVisible(): void {}

        /** @param array $selections list of QTextEdit\ExtraSelection */
        public function setExtraSelections(array $selections): void {}

        /** @return list<QTextEdit\ExtraSelection> */
        public function extraSelections(): array {}

        public function lineWrapMode(): QPlainTextEdit\LineWrapMode {}

        public function setLineWrapMode(QPlainTextEdit\LineWrapMode $mode): void {}

        /** Qt::TextInteractionFlags as an int. */
        public function textInteractionFlags(): int {}

        public function setTextInteractionFlags(Qt\TextInteractionFlag|int $flags): void {}

        /** Its value counts lines (blocks' visual lines); pageStep is the lines in view. */
        public function verticalScrollBar(): QScrollBar {}

        /** Its value counts pixels. */
        public function horizontalScrollBar(): QScrollBar {}

        /**
         * QAbstractScrollArea::viewport(): the widget the text is laid out in and drawn on; it
         * resizes with the edit and as the scroll bars come and go.
         */
        public function viewport(): QWidget {}
    }

    /**
     * A date edit's calendar popup (QDateEdit::calendarWidget()).
     *
     * @not-serializable
     */
    class QCalendarWidget extends QWidget
    {
        private function __construct() {}
    }

    /**
     * @not-serializable
     */
    class QDateEdit extends QWidget
    {
        public function __construct(?QWidget $parent = null) {}

        public function date(): QDate {}

        public function setDate(QDate $date): void {}

        public function setCalendarPopup(bool $enable): void {}

        public function calendarWidget(): ?QCalendarWidget {}

        public function minimumDate(): QDate {}

        public function setMinimumDate(QDate $min): void {}

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
        public function __construct(?QWidget $parent = null, Qt\WindowType|int $f = 0) {}

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
    abstract class QAbstractItemView extends QFrame
    {
        /** @cvalue QAbstractItemView::NoEditTriggers */
        public const int NO_EDIT_TRIGGERS = UNKNOWN;

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

    /**
     * Signals currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*), itemSelectionChanged(), itemActivated(QTreeWidgetItem*,int),
     * itemExpanded(QTreeWidgetItem*), itemCollapsed(QTreeWidgetItem*); their items arrive as the wrappers PHP already holds.
     * Parented to QAbstractItemView here because QTreeView is not bound.
     *
     * @not-serializable
     */
    class QTreeWidget extends QAbstractItemView
    {
        public function __construct(?QWidget $parent = null) {}

        public function columnCount(): int {}

        public function setColumnCount(int $columns): void {}

        /** @param string[] $labels */
        public function setHeaderLabels(array $labels): void {}

        /**
         * The tree owns the item once Qt stored it; its wrapper reports "deleted" once Qt deletes it.
         * Qt ignores an item that already has a tree or a parent item, which then stays where it is.
         */
        public function addTopLevelItem(QTreeWidgetItem $item): void {}

        /** Qt deletes every item the tree holds. */
        public function clear(): void {}

        public function currentItem(): ?QTreeWidgetItem {}

        public function setCurrentItem(?QTreeWidgetItem $item): void {}

        public function scrollToItem(QTreeWidgetItem $item, QAbstractItemView\ScrollHint $hint = QAbstractItemView\ScrollHint::ENSURE_VISIBLE): void {}

        public function expandItem(QTreeWidgetItem $item): void {}

        public function collapseItem(QTreeWidgetItem $item): void {}

        /** @return QTreeWidgetItem[] the selected items, as Qt lists them */
        public function selectedItems(): array {}
    }

    /**
     * Signal splitterMoved(int pos, int index): emitted for the user's handle drags only, not setSizes().
     *
     * @not-serializable
     */
    class QSplitter extends QFrame
    {
        public function __construct(Qt\Orientation $orientation, ?QWidget $parent = null) {}

        public function orientation(): Qt\Orientation {}

        public function setOrientation(Qt\Orientation $orientation): void {}

        /** The splitter takes ownership of the widget; one already here moves to the end. */
        public function addWidget(QWidget $widget): void {}

        /** An index outside 0 .. count() appends */
        public function insertWidget(int $index, QWidget $widget): void {}

        public function count(): int {}

        public function widget(int $index): ?QWidget {}

        /** -1 when $widget is not here */
        public function indexOf(QWidget $widget): int {}

        /** @param int[] $sizes negative sizes count as 0 */
        public function setSizes(array $sizes): void {}

        /** @return int[] */
        public function sizes(): array {}

        public function handleWidth(): int {}

        public function setHandleWidth(int $width): void {}

        public function opaqueResize(): bool {}

        public function setOpaqueResize(bool $opaque): void {}

        public function childrenCollapsible(): bool {}

        public function setChildrenCollapsible(bool $collapsible): void {}

        /** An index that is not a widget does nothing */
        public function setStretchFactor(int $index, int $stretch): void {}

        /** null outside 0 .. count() - 1; handle 0 exists and is hidden */
        public function handle(int $index): ?QSplitterHandle {}
    }

    /**
     * Made by its QSplitter, one before each widget.
     *
     * @not-serializable
     */
    class QSplitterHandle extends QWidget
    {
        private function __construct() {}

        public function splitter(): ?QSplitter {}
    }

    /**
     * Signal currentChanged(int index): emitted for every change of the current page, programmatic too.
     *
     * @not-serializable
     */
    class QTabWidget extends QWidget
    {
        public function __construct(?QWidget $parent = null) {}

        /** The tab widget takes ownership of the page; the new tab's index. */
        public function addTab(QWidget $page, string $label): int {}

        /** An index that is not a tab does nothing; the page is not deleted */
        public function removeTab(int $index): void {}

        /** -1 when $page is not here */
        public function indexOf(QWidget $page): int {}

        public function count(): int {}

        /** -1 with no tabs */
        public function currentIndex(): int {}

        /** An index that is not a tab does nothing */
        public function setCurrentIndex(int $index): void {}

        public function currentWidget(): ?QWidget {}

        /** An index that is not a tab does nothing */
        public function setTabText(int $index, string $label): void {}

        /** "" for an index that is not a tab */
        public function tabText(int $index): string {}

        public function widget(int $index): ?QWidget {}

        public function documentMode(): bool {}

        public function setDocumentMode(bool $set): void {}
    }
}
