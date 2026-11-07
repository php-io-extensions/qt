<?php

/** @generate-class-entries */

namespace QTextCursor {
    enum MoveMode: int
    {
        case MOVE_ANCHOR = 0;
        case KEEP_ANCHOR = 1;
    }

    /** QTextCursor::MoveOperation: what movePosition() moves the cursor by. */
    enum MoveOperation: int
    {
        case NO_MOVE = 0;
        case START = 1;
        case UP = 2;
        case START_OF_LINE = 3;
        case START_OF_BLOCK = 4;
        case START_OF_WORD = 5;
        case PREVIOUS_BLOCK = 6;
        case PREVIOUS_CHARACTER = 7;
        case PREVIOUS_WORD = 8;
        case LEFT = 9;
        case WORD_LEFT = 10;
        case END = 11;
        case DOWN = 12;
        case END_OF_LINE = 13;
        case END_OF_WORD = 14;
        case END_OF_BLOCK = 15;
        case NEXT_BLOCK = 16;
        case NEXT_CHARACTER = 17;
        case NEXT_WORD = 18;
        case RIGHT = 19;
        case WORD_RIGHT = 20;
        case NEXT_CELL = 21;
        case PREVIOUS_CELL = 22;
        case NEXT_ROW = 23;
        case PREVIOUS_ROW = 24;
    }
}

namespace QPalette {
    /**
     * QPalette::ColorRole. ACCENT is Qt 6.6's; on an older Qt it names no role and color() reads past the
     * palette (qVersion() tells; probed on Qt 6.4.2: no crash, an arbitrary colour).
     */
    enum ColorRole: int
    {
        case WINDOW_TEXT = 0;
        case BUTTON = 1;
        case LIGHT = 2;
        case MIDLIGHT = 3;
        case DARK = 4;
        case MID = 5;
        case TEXT = 6;
        case BRIGHT_TEXT = 7;
        case BUTTON_TEXT = 8;
        case BASE = 9;
        case WINDOW = 10;
        case SHADOW = 11;
        case HIGHLIGHT = 12;
        case HIGHLIGHTED_TEXT = 13;
        case LINK = 14;
        case LINK_VISITED = 15;
        case ALTERNATE_BASE = 16;
        case NO_ROLE = 17;
        case TOOL_TIP_BASE = 18;
        case TOOL_TIP_TEXT = 19;
        case PLACEHOLDER_TEXT = 20;
        case ACCENT = 21;
    }
}

namespace {
    /**
     * A value in Qt; here a heap copy owned by the PHP object.
     *
     * @not-serializable
     */
    final class QColor
    {
        /** Each component 0..255; Qt makes an invalid colour of any other. */
        public function __construct(int $r, int $g, int $b, int $a = 255) {}

        public function red(): int {}

        public function green(): int {}

        public function blue(): int {}

        public function alpha(): int {}

        public function isValid(): bool {}
    }

    /**
     * A solid brush of one colour.
     *
     * @not-serializable
     */
    final class QBrush
    {
        public function __construct(QColor $color, Qt\BrushStyle $bs = Qt\BrushStyle::SOLID_PATTERN) {}

        public function color(): QColor {}

        public function style(): Qt\BrushStyle {}
    }

    /**
     * A copy of a palette, as QGuiApplication::palette() returns it.
     *
     * @not-serializable
     */
    final class QPalette
    {
        private function __construct() {}

        /** The colour of the role in the palette's current group. */
        public function color(QPalette\ColorRole $cr): QColor {}
    }

    /** QTextFormat's property ids; the formats themselves are QTextCharFormat values. */
    final class QTextFormat
    {
        /** @cvalue QTextFormat::FullWidthSelection */
        public const int FULL_WIDTH_SELECTION = UNKNOWN;

        /** @cvalue QTextFormat::FontWeight */
        public const int FONT_WEIGHT = UNKNOWN;

        /** @cvalue QTextFormat::FontItalic */
        public const int FONT_ITALIC = UNKNOWN;

        /** @cvalue QTextFormat::FontStrikeOut */
        public const int FONT_STRIKE_OUT = UNKNOWN;

        /** @cvalue QTextFormat::TextUnderlineStyle */
        public const int TEXT_UNDERLINE_STYLE = UNKNOWN;

        private function __construct() {}
    }

    /**
     * @not-serializable
     */
    final class QTextCharFormat
    {
        public function __construct() {}

        public function setForeground(QBrush $brush): void {}

        public function setBackground(QBrush $brush): void {}

        public function foreground(): QBrush {}

        public function background(): QBrush {}

        /** A QTextFormat property (QTextFormat::FULL_WIDTH_SELECTION, …). */
        /** $value as QVariant: null, bool, int, float or string. */
        public function setProperty(int $propertyId, mixed $value): void {}

        public function boolProperty(int $propertyId): bool {}

        public function intProperty(int $propertyId): int {}

        public function hasProperty(int $propertyId): bool {}
    }

    /**
     * A position and selection in a document, in UTF-16 units; it follows the document's edits.
     *
     * @not-serializable
     */
    final class QTextCursor
    {
        public function __construct(QTextDocument $document) {}

        /** 0 .. characterCount() - 1 (ValueError otherwise). */
        public function setPosition(int $position, QTextCursor\MoveMode $mode = QTextCursor\MoveMode::MOVE_ANCHOR): void {}

        /**
         * movePosition(): moves $n times by $op (Start, End, StartOfLine and EndOfLine once); the
         * line moves go by the laid-out rows. False when a move could not be made. $n outside a
         * C int is a ValueError.
         */
        public function movePosition(QTextCursor\MoveOperation $op, QTextCursor\MoveMode $mode = QTextCursor\MoveMode::MOVE_ANCHOR, int $n = 1): bool {}

        public function position(): int {}

        public function anchor(): int {}

        public function selectionStart(): int {}

        public function selectionEnd(): int {}

        /** A cursor whose document is gone reads -1 positions; hasSelection() may still say true. */
        public function hasSelection(): bool {}

        public function isNull(): bool {}
    }

    /**
     * A paragraph of a document: QTextDocument::findBlockByNumber() hands them out. It follows the
     * document's edits (the block holding its start) and every method throws QtException once the
     * document is deleted.
     *
     * @not-serializable
     */
    final class QTextBlock
    {
        private function __construct() {}

        /** The first character's position in the document. */
        public function position(): int {}

        /** Characters, the block separator included. */
        public function length(): int {}

        public function blockNumber(): int {}

        /** The first visual line's number: equal to the block number when no block wraps. */
        public function firstLineNumber(): int {}

        public function isValid(): bool {}

        /** Null for Qt's invalid block. */
        public function layout(): ?QTextLayout {}
    }

    /**
     * A block's layout (QTextBlock::layout()), held as its block is: by a cursor at the block's start,
     * so it never outlives Qt's layout. Once the block is invalid there is no layout: setFormats() sets
     * nothing and formats() is empty.
     *
     * @not-serializable
     */
    final class QTextLayout
    {
        private function __construct() {}

        /**
         * Formats laid out with the text (so font weight and italic apply, unlike an extra selection's).
         * Qt redraws them after QTextDocument::markContentsDirty() over the block.
         *
         * @param array $overrides list of QTextLayout\FormatRange
         */
        public function setFormats(array $overrides): void {}

        /** @return list<QTextLayout\FormatRange> */
        public function formats(): array {}
    }

    /**
     * A text edit's document (QPlainTextEdit::document()).
     *
     * @not-serializable
     */
    class QTextDocument extends QObject
    {
        private function __construct() {}

        /** Qt's invalid block (isValid() false) past the last block. */
        public function findBlockByNumber(int $blockNumber): QTextBlock {}

        public function blockCount(): int {}

        /** Characters, the final paragraph separator included. */
        public function characterCount(): int {}

        /** A copy of the option every paragraph starts from. */
        public function defaultTextOption(): QTextOption {}

        public function setDefaultTextOption(QTextOption $option): void {}

        /** Lays out and redraws the characters from $from for $length again. */
        public function markContentsDirty(int $from, int $length): void {}
    }

    /**
     * A value in Qt; here a heap copy owned by the PHP object.
     *
     * @not-serializable
     */
    final class QTextOption
    {
        public function __construct() {}

        /** Qt::Alignment flags as an int. */
        public function alignment(): int {}

        public function setAlignment(Qt\AlignmentFlag|int $alignment): void {}
    }
}

namespace QTextEdit {
    /**
     * QTextEdit::ExtraSelection, the struct: a format painted over a cursor's selection, or over its
     * line with QTextFormat::FULL_WIDTH_SELECTION; the document is not changed. The constructor is the
     * struct's aggregate initialisation; setExtraSelections() copies the fields as they are then.
     *
     * @not-serializable
     */
    final class ExtraSelection
    {
        public \QTextCursor $cursor;

        public \QTextCharFormat $format;

        public function __construct(\QTextCursor $cursor, \QTextCharFormat $format) {}
    }
}

namespace QTextLayout {
    /**
     * QTextLayout::FormatRange, the struct: a format over $length characters from $start, counted from
     * the block's start. The constructor is the struct's aggregate initialisation; setFormats() copies
     * the fields as they are then.
     *
     * @not-serializable
     */
    final class FormatRange
    {
        public int $start;

        public int $length;

        public \QTextCharFormat $format;

        public function __construct(int $start, int $length, \QTextCharFormat $format) {}
    }
}
