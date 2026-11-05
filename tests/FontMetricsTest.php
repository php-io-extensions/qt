<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('measures the fixed system font', function (): void {
    $metrics = new QFontMetricsF(QFontDatabase::systemFont(QFontDatabase\SystemFont::FIXED_FONT));

    expect($metrics->ascent())->toBeGreaterThan(0.0)
        ->and($metrics->descent())->toBeGreaterThan(0.0)
        ->and($metrics->averageCharWidth())->toBeGreaterThan(0.0)
        ->and($metrics->lineSpacing())->toBeGreaterThanOrEqual($metrics->ascent() + $metrics->descent())
        ->and($metrics->horizontalAdvance(' '))->toBeGreaterThan(0.0);
});

it('measures a string\'s advance, all of it or its first len characters', function (): void {
    $metrics = new QFontMetricsF(QFontDatabase::systemFont(QFontDatabase\SystemFont::FIXED_FONT));
    $one = $metrics->horizontalAdvance(' ');

    expect($metrics->horizontalAdvance('    '))->toEqualWithDelta(4 * $one, 0.01)
        ->and($metrics->horizontalAdvance('    ', 2))->toEqualWithDelta(2 * $one, 0.01);
});

it('tells the fixed system font from the general one', function (): void {
    expect((new QFontInfo(QFontDatabase::systemFont(QFontDatabase\SystemFont::FIXED_FONT)))->fixedPitch())->toBeTrue()
        ->and((new QFontInfo(QFontDatabase::systemFont(QFontDatabase\SystemFont::GENERAL_FONT)))->fixedPitch())->toBeFalse();
});

it('aligns a line edit and spaces a plain text edit\'s tab stops', function (): void {
    $line = new QLineEdit();
    $line->setAlignment(Qt\AlignmentFlag::RIGHT->value | Qt\AlignmentFlag::V_CENTER->value);
    $edit = new QPlainTextEdit();
    $edit->setTabStopDistance(32.0);

    expect($line->alignment() & Qt\AlignmentFlag::RIGHT->value)->toBe(Qt\AlignmentFlag::RIGHT->value)
        ->and($line->alignment() & Qt\AlignmentFlag::V_CENTER->value)->toBe(Qt\AlignmentFlag::V_CENTER->value)
        ->and($edit->tabStopDistance())->toBe(32.0);
});

it('sets and reads a char format\'s font weight, italic, strike-out and underline style by property id', function (): void {
    $format = new QTextCharFormat();
    $format->setProperty(QTextFormat::FONT_WEIGHT, 700);
    $format->setProperty(QTextFormat::FONT_ITALIC, true);
    $format->setProperty(QTextFormat::FONT_STRIKE_OUT, true);
    $format->setProperty(QTextFormat::TEXT_UNDERLINE_STYLE, 1);

    expect([QTextFormat::FONT_WEIGHT, QTextFormat::FONT_ITALIC, QTextFormat::FONT_STRIKE_OUT, QTextFormat::TEXT_UNDERLINE_STYLE])->toBe([0x2003, 0x2004, 0x2007, 0x2023])
        ->and($format->intProperty(QTextFormat::FONT_WEIGHT))->toBe(700)
        ->and($format->boolProperty(QTextFormat::FONT_ITALIC))->toBeTrue()
        ->and($format->boolProperty(QTextFormat::FONT_STRIKE_OUT))->toBeTrue()
        ->and($format->intProperty(QTextFormat::TEXT_UNDERLINE_STYLE))->toBe(1)
        ->and((new QTextCharFormat())->intProperty(QTextFormat::FONT_WEIGHT))->toBe(0);
});

it('gives a block\'s layout format ranges that last through a relayout, leaving out what is not a range', function (): void {
    $edit = new QPlainTextEdit();
    $edit->setPlainText("one\ntwo");
    $block = $edit->document()->findBlockByNumber(1);
    $bold = new QTextCharFormat();
    $bold->setProperty(QTextFormat::FONT_WEIGHT, 700);

    $block->layout()->setFormats([new QTextLayout\FormatRange(0, 2, $bold), 'not a range']);
    $edit->document()->markContentsDirty($block->position(), $block->length());
    $ranges = $block->layout()->formats();

    expect($ranges)->toHaveCount(1)
        ->and([$ranges[0]->start, $ranges[0]->length])->toBe([0, 2])
        ->and($ranges[0]->format->intProperty(QTextFormat::FONT_WEIGHT))->toBe(700)
        ->and($edit->document()->findBlockByNumber(5)->layout())->toBeNull();
});

it('gives a document a default text option', function (): void {
    $edit = new QPlainTextEdit();
    $option = new QTextOption();
    $option->setAlignment(Qt\AlignmentFlag::RIGHT);
    $edit->document()->setDefaultTextOption($option);

    expect($option->alignment())->toBe(Qt\AlignmentFlag::RIGHT->value)
        ->and($edit->document()->defaultTextOption()->alignment())->toBe(Qt\AlignmentFlag::RIGHT->value);
});
