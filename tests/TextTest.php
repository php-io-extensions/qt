<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('paints extra selections over a plain text edit\'s document without changing it', function (): void {
    $edit = new QPlainTextEdit();
    $edit->setPlainText("one\ntwo\nthree");
    $doc = $edit->document();
    $block = $doc->findBlockByNumber(1);
    $line = new QTextCursor($doc);
    $line->setPosition($block->position());
    $full = new QTextCharFormat();
    $full->setBackground(new QBrush(new QColor(255, 0, 0)));
    $full->setProperty(QTextFormat::FULL_WIDTH_SELECTION, true);
    $range = new QTextCursor($doc);
    $range->setPosition(9);
    $range->setPosition(11, QTextCursor\MoveMode::KEEP_ANCHOR);
    $green = new QTextCharFormat();
    $green->setForeground(new QBrush(new QColor(0, 255, 0, 128)));
    $edit->setExtraSelections([new QTextEdit\ExtraSelection($line, $full), new QTextEdit\ExtraSelection($range, $green)]);
    $back = $edit->extraSelections();

    expect($doc)->toBeInstanceOf(QTextDocument::class)
        ->and([$doc->blockCount(), $doc->characterCount()])->toBe([3, 14])
        ->and([$block->position(), $block->length(), $block->blockNumber()])->toBe([4, 4, 1])
        ->and($block->isValid())->toBeTrue()
        ->and($doc->findBlockByNumber(3)->isValid())->toBeFalse()
        ->and($doc->findBlockByNumber(-1)->isValid())->toBeFalse()
        ->and($back)->toHaveCount(2)
        ->and($back[0]->format->boolProperty(QTextFormat::FULL_WIDTH_SELECTION))->toBeTrue()
        ->and($back[0]->format->hasProperty(QTextFormat::FULL_WIDTH_SELECTION))->toBeTrue()
        ->and($back[0]->format->background()->color()->red())->toBe(255)
        ->and([$back[1]->cursor->selectionStart(), $back[1]->cursor->selectionEnd(), $back[1]->cursor->hasSelection()])->toBe([9, 11, true])
        ->and($back[1]->format->foreground()->color()->alpha())->toBe(128)
        ->and($edit->toPlainText())->toBe("one\ntwo\nthree")
        ->and(fn () => $edit->setExtraSelections(['x']))->toThrow(TypeError::class, 'QTextEdit\ExtraSelection');

    // Qt answers these itself: a position past the document warns and leaves the cursor where it
    // was, a component past 255 makes an invalid colour, and an edit takes a cursor of another document.
    $range->setPosition(99);
    $foreign = new QPlainTextEdit();
    $foreign->setTextCursor($line);

    expect([$range->anchor(), $range->position()])->toBe([9, 11])
        ->and((new QColor(256, 0, 0))->isValid())->toBeFalse()
        ->and((new QColor(255, 0, 0))->isValid())->toBeTrue()
        ->and($foreign->textCursor()->position())->toBe($line->position())
        ->and($foreign->toPlainText())->toBe('');
});

it('moves a plain text edit\'s cursor, stops wrapping, and scrolls by its scroll bars', function (): void {
    $edit = new QPlainTextEdit();
    $edit->setPlainText(implode("\n", range(1, 300)));
    $edit->resize(200, 120);
    $edit->show();
    processUntil(fn (): bool => $edit->verticalScrollBar()->maximum() > 0);
    $cursor = new QTextCursor($edit->document());
    $cursor->setPosition(2);
    $cursor->setPosition(5, QTextCursor\MoveMode::KEEP_ANCHOR);
    $edit->setTextCursor($cursor);
    $edit->ensureCursorVisible();
    $edit->setLineWrapMode(QPlainTextEdit\LineWrapMode::NO_WRAP);
    $edit->setTextInteractionFlags(Qt\TextInteractionFlag::TEXT_SELECTABLE_BY_MOUSE->value | Qt\TextInteractionFlag::TEXT_SELECTABLE_BY_KEYBOARD->value);
    $bar = $edit->verticalScrollBar();
    $moved = [];
    QObject::connect($bar, 'valueChanged(int)', function (int $value) use (&$moved): void { $moved[] = $value; });
    $bar->setValue(40);
    $edit->close();

    expect([$edit->textCursor()->anchor(), $edit->textCursor()->position(), $edit->textCursor()->hasSelection()])->toBe([2, 5, true])
        ->and($edit->lineWrapMode())->toBe(QPlainTextEdit\LineWrapMode::NO_WRAP)
        ->and($edit->textInteractionFlags())->toBe(3)
        ->and($bar)->toBeInstanceOf(QScrollBar::class)
        ->and($edit->horizontalScrollBar())->toBeInstanceOf(QScrollBar::class)
        ->and($bar->pageStep())->toBeGreaterThan(0)
        ->and($moved)->toBe([40])
        ->and($edit->document()->findBlockByNumber(40)->firstLineNumber())->toBe(40);
});

it('names the fixed-pitch system font', function (): void {
    $fixed = QFontDatabase::systemFont(QFontDatabase\SystemFont::FIXED_FONT);

    expect($fixed)->toBeInstanceOf(QFont::class)
        ->and($fixed->family())->not->toBe('');
});

it('reads Qt\'s null cursor and invalid block once their document goes away', function (): void {
    $edit = new QPlainTextEdit();
    $edit->setPlainText("one\ntwo\nthree");
    $doc = $edit->document();
    $block = $doc->findBlockByNumber(1);
    $cursor = new QTextCursor($doc);
    $cursor->setPosition(5);
    $cursor->setPosition(7, QTextCursor\MoveMode::KEEP_ANCHOR);
    $selection = new QTextEdit\ExtraSelection($cursor, new QTextCharFormat());
    $other = new QPlainTextEdit();

    $edit->setPlainText("zero\none\ntwo\nthree");
    $after = [$block->position(), $block->blockNumber()];

    $edit->deleteLater();
    QCoreApplication::sendPostedEvents(null, QEvent\Type::DEFERRED_DELETE->value);

    $cursor->setPosition(0);
    $other->setTextCursor($cursor);

    expect($after[0])->toBeInt()
        ->and($after[1])->toBeInt()
        ->and($block->isValid())->toBeFalse()
        ->and([$block->position(), $block->length(), $block->blockNumber(), $block->firstLineNumber()])->toBe([0, 0, -1, -1])
        ->and($cursor->isNull())->toBeTrue()
        ->and([$cursor->position(), $cursor->anchor(), $cursor->selectionStart(), $cursor->selectionEnd()])->toBe([-1, -1, -1, -1])
        ->and($selection->cursor->position())->toBe(-1)
        ->and($other->toPlainText())->toBe('');

    // Qt takes a cursor of a deleted document as the null cursor it now is.
    $other->setExtraSelections([$selection]);

    expect($other->extraSelections())->toHaveCount(1)
        ->and($other->extraSelections()[0]->cursor->isNull())->toBeTrue();
});

it('holds the struct fields as properties a caller may replace', function (): void {
    $edit = new QPlainTextEdit();
    $edit->setPlainText('one two');
    $first = new QTextCursor($edit->document());
    $first->setPosition(1);
    $second = new QTextCursor($edit->document());
    $second->setPosition(4);
    $second->setPosition(7, QTextCursor\MoveMode::KEEP_ANCHOR);
    $selection = new QTextEdit\ExtraSelection($first, new QTextCharFormat());
    $selection->cursor = $second;
    $edit->setExtraSelections([$selection]);

    expect([$edit->extraSelections()[0]->cursor->selectionStart(), $edit->extraSelections()[0]->cursor->selectionEnd()])->toBe([4, 7])
        ->and(fn () => $edit->setExtraSelections([(new ReflectionClass(QTextEdit\ExtraSelection::class))->newInstanceWithoutConstructor()]))
        ->toThrow(Error::class, 'must not be accessed before initialization');
});

it('moves a cursor by blocks, characters and laid-out rows', function (): void {
    $edit = new QPlainTextEdit();
    $edit->setPlainText("one\ntwo\nthree\n".str_repeat('wrapping words ', 40));
    $edit->resize(160, 200);
    $edit->show();
    processUntil(fn (): bool => $edit->verticalScrollBar()->maximum() > 0);
    $cursor = new QTextCursor($edit->document());
    $moves = [
        $cursor->movePosition(QTextCursor\MoveOperation::NEXT_BLOCK),
        $cursor->position(),
        $cursor->movePosition(QTextCursor\MoveOperation::END_OF_BLOCK, QTextCursor\MoveMode::KEEP_ANCHOR),
        [$cursor->anchor(), $cursor->position()],
    ];
    $cursor->setPosition(0);
    $moves[] = $cursor->movePosition(QTextCursor\MoveOperation::NEXT_CHARACTER, QTextCursor\MoveMode::MOVE_ANCHOR, 3);
    $moves[] = [$cursor->anchor(), $cursor->position()];
    $last = $edit->document()->findBlockByNumber(3);
    $cursor->movePosition(QTextCursor\MoveOperation::END);
    $end = $cursor->position();
    $cursor->movePosition(QTextCursor\MoveOperation::START_OF_LINE);
    $row = $cursor->position();
    $past = $cursor->movePosition(QTextCursor\MoveOperation::END) && ! $cursor->movePosition(QTextCursor\MoveOperation::NEXT_CHARACTER);
    $edit->close();

    expect($moves)->toBe([true, 4, true, [4, 7], true, [3, 3]])
        ->and($end)->toBe($edit->document()->characterCount() - 1)
        ->and($row)->toBeGreaterThan($last->position())
        ->and($row)->toBeLessThan($end)
        ->and($past)->toBeTrue()
        ->and(fn () => $cursor->movePosition(QTextCursor\MoveOperation::START, QTextCursor\MoveMode::MOVE_ANCHOR, 2 ** 40))->toThrow(ValueError::class, 'between')
        ->and(QTextCursor\MoveOperation::PREVIOUS_ROW->value)->toBe(24);

    $edit->deleteLater();
    QCoreApplication::sendPostedEvents(null, QEvent\Type::DEFERRED_DELETE->value);
    expect($cursor->movePosition(QTextCursor\MoveOperation::START))->toBeFalse();
});

it('hands out a plain text edit\'s viewport, which resizes with it', function (): void {
    $edit = new QPlainTextEdit();
    $edit->resize(200, 120);
    $edit->show();
    $viewport = $edit->viewport();
    $resized = 0;
    $filter = new QEventFilter(function (QObject $watched, QEvent $event) use (&$resized): bool {
        if ($event->type() === QEvent\Type::RESIZE) {
            $resized++;
        }

        return false;
    });
    $viewport->installEventFilter($filter);
    $edit->resize(260, 120);
    processUntil(fn (): bool => $resized > 0);
    $width = $viewport->size()->width();
    $edit->close();

    expect($viewport)->toBeInstanceOf(QWidget::class)
        ->and($resized)->toBeGreaterThan(0)
        ->and($width)->toBeGreaterThan(0)
        ->and($width)->toBeLessThanOrEqual(260);
});
