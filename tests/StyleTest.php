<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('gives a widget the application\'s style, the same object each time', function (): void {
    $a = new QWidget();
    $b = new QPushButton('b');

    expect($a->style())->toBeInstanceOf(QStyle::class)
        ->and($a->style())->toBe($a->style())
        ->and($b->style())->toBe($a->style());
});

it('measures a push button\'s contents rect inside the button, from an option filled from it', function (): void {
    $button = new QPushButton('Previous');
    $button->resize(120, 60);
    $button->show();
    QCoreApplication::processEvents();
    $option = new QStyleOptionButton();
    $option->initFrom($button);

    $rect = $button->style()->subElementRect(QStyle\SubElement::PUSH_BUTTON_CONTENTS, $option, $button);

    expect($option)->toBeInstanceOf(QStyleOption::class)
        ->and($rect->isValid())->toBeTrue()
        ->and($rect->x())->toBeGreaterThanOrEqual(0)
        ->and($rect->y())->toBeGreaterThanOrEqual(0)
        ->and($rect->x() + $rect->width())->toBeLessThanOrEqual(120)
        ->and($rect->y() + $rect->height())->toBeLessThanOrEqual(60)
        ->and($rect->width() * $rect->height())->toBeLessThan(120 * 60);
    $button->close();
});

it('measures from a plain option with no widget, and refuses a second construction', function (): void {
    $option = new QStyleOption();
    $rect = (new QWidget())->style()->subElementRect(QStyle\SubElement::PUSH_BUTTON_CONTENTS, $option);

    expect($rect)->toBeInstanceOf(QRect::class)
        ->and(fn () => $option->__construct())->toThrow(QtException::class, 'called twice');
});
