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

namespace {
    /**
     * A value in Qt; here a heap copy owned by the PHP object.
     *
     * @not-serializable
     */
    final class QColor
    {
        /** Each component 0..255 (ValueError otherwise). */
        public function __construct(int $red, int $green, int $blue, int $alpha = 255) {}

        public function red(): int {}

        public function green(): int {}

        public function blue(): int {}

        public function alpha(): int {}
    }

    /**
     * A solid brush of one colour.
     *
     * @not-serializable
     */
    final class QBrush
    {
        public function __construct(QColor $color) {}

        public function color(): QColor {}
    }

    /** QTextFormat's property ids; the formats themselves are QTextCharFormat values. */
    final class QTextFormat
    {
        /** @cvalue QTextFormat::FullWidthSelection */
        public const int FULL_WIDTH_SELECTION = UNKNOWN;

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
        public function setProperty(int $propertyId, bool|int|float|string $value): void {}

        public function boolProperty(int $propertyId): bool {}

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
    }

    /**
     * QTextEdit::ExtraSelection: a format painted over a cursor's selection, or over its line with
     * QTextFormat::FULL_WIDTH_SELECTION; the document is not changed.
     *
     * @not-serializable
     */
    final class QTextEditExtraSelection
    {
        public function __construct(QTextCursor $cursor, QTextCharFormat $format) {}

        public function cursor(): QTextCursor {}

        public function format(): QTextCharFormat {}
    }

    /**
     * A text edit's document (QPlainTextEdit::document()).
     *
     * @not-serializable
     */
    class QTextDocument extends QObject
    {
        private function __construct() {}

        /** Null past the last block. */
        public function findBlockByNumber(int $blockNumber): ?QTextBlock {}

        public function blockCount(): int {}

        /** Characters, the final paragraph separator included. */
        public function characterCount(): int {}
    }
}
