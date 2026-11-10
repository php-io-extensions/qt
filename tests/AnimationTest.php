<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('keeps the opacity an effect is given and hands it to the widget that owns it', function (): void {
    $widget = new QWidget();
    $effect = new QGraphicsOpacityEffect();
    $effect->setOpacity(0.4);

    $widget->setGraphicsEffect($effect);

    expect($effect->opacity())->toEqualWithDelta(0.4, 0.0001)
        ->and($widget->graphicsEffect())->toBe($effect);

    $widget->setGraphicsEffect(null);

    expect($widget->graphicsEffect())->toBeNull();
});

it('animates an effect\'s opacity from its start value to its end value over its duration', function (): void {
    $widget = new QWidget();
    $effect = new QGraphicsOpacityEffect();
    $widget->setGraphicsEffect($effect);

    $animation = new QPropertyAnimation($effect, 'opacity');
    $animation->setDuration(60);
    $animation->setStartValue(0.0);
    $animation->setEndValue(1.0);
    $animation->start();

    expect($animation->duration())->toBe(60);

    $landed = processUntil(fn (): bool => $effect->opacity() >= 0.999, 1000);

    expect($landed)->toBeTrue();
});

it('animates a widget\'s position between two points', function (): void {
    $widget = new QWidget();
    $widget->resize(50, 50);

    $animation = new QPropertyAnimation($widget, 'pos');
    $animation->setDuration(40);
    $animation->setStartValue(new QPoint(0, 30));
    $animation->setEndValue(new QPoint(10, 0));
    $animation->start(QAbstractAnimation\DeletionPolicy::KEEP_WHEN_STOPPED);

    $landed = processUntil(fn (): bool => $widget->pos()->x() === 10 && $widget->pos()->y() === 0, 1000);

    expect($landed)->toBeTrue();
});

it('rejects a value Qt cannot hold as a QVariant', function (): void {
    $animation = new QPropertyAnimation(new QGraphicsOpacityEffect(), 'opacity');

    expect(fn () => $animation->setStartValue(new stdClass()))->toThrow(TypeError::class);
});
