<?php

declare(strict_types=1);

use QKeySequence\SequenceFormat;
use Qt\DateFormat;

it('holds a QPoint', function (): void {
    $point = new QPoint(3, -4);
    $point->setX(7);

    expect([$point->x(), $point->y(), $point->isNull()])->toBe([7, -4, false])
        ->and((new QPoint(0, 0))->isNull())->toBeTrue();
});

it('holds a QPointF', function (): void {
    $point = new QPointF(1.5, 2.25);
    $point->setY(-0.5);

    expect([$point->x(), $point->y(), $point->isNull()])->toBe([1.5, -0.5, false]);
});

it('holds a QSize, Qt deciding validity', function (): void {
    expect([(new QSize(3, 4))->width(), (new QSize(3, 4))->height()])->toBe([3, 4])
        ->and((new QSize(-1, 4))->isValid())->toBeFalse()
        ->and((new QSize(0, 4))->isEmpty())->toBeTrue();
});

it('holds a QRect', function (): void {
    $rect = new QRect(1, 2, 30, 40);

    expect([$rect->x(), $rect->y(), $rect->width(), $rect->height(), $rect->isValid()])->toBe([1, 2, 30, 40, true])
        ->and((new QRect(0, 0, 0, 0))->isValid())->toBeFalse();
});

it('holds a QDate, Qt deciding validity', function (): void {
    $date = new QDate(2026, 10, 18);

    expect([$date->year(), $date->month(), $date->day(), $date->isValid()])->toBe([2026, 10, 18, true])
        ->and($date->toString(DateFormat::ISO_DATE))->toBe('2026-10-18')
        ->and((new QDate(2026, 2, 30))->isValid())->toBeFalse()
        ->and((new QDate(2026, 2, 30))->toString(DateFormat::ISO_DATE))->toBe('');
});

it('parses a QDate as Qt does', function (): void {
    expect(QDate::fromString('2026-10-18', DateFormat::ISO_DATE)->day())->toBe(18)
        ->and(QDate::fromString('not a date', DateFormat::ISO_DATE)->isValid())->toBeFalse();
});

it('holds a QKeySequence', function (): void {
    expect((new QKeySequence('Ctrl+Q', SequenceFormat::PORTABLE_TEXT))->toString())->toBe('Ctrl+Q')
        ->and(QKeySequence::fromString('Ctrl+Shift+S')->toString(SequenceFormat::PORTABLE_TEXT))->toBe('Ctrl+Shift+S')
        ->and((new QKeySequence(''))->isEmpty())->toBeTrue();
});

it('refuses a second construction of a value', function (): void {
    (new QPoint(1, 2))->__construct(3, 4);
})->throws(QtException::class, 'QPoint::__construct() called twice');

it('carries Qt\'s values for the formats', function (): void {
    expect(array_map(fn (DateFormat $f): int => $f->value, DateFormat::cases()))->toBe([0, 1, 8, 9])
        ->and(array_map(fn (SequenceFormat $f): int => $f->value, SequenceFormat::cases()))->toBe([0, 1]);
});
