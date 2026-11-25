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

it('makes an easing curve, linear by default, and sets its type', function (): void {
    $curve = new QEasingCurve();
    expect($curve->type())->toBe(QEasingCurve\Type::LINEAR)
        ->and($curve->valueForProgress(0.25))->toEqualWithDelta(0.25, 1e-9);

    $curve->setType(QEasingCurve\Type::OUT_BOUNCE);
    expect($curve->type())->toBe(QEasingCurve\Type::OUT_BOUNCE)
        ->and((new QEasingCurve(QEasingCurve\Type::IN_OUT_SINE))->type())->toBe(QEasingCurve\Type::IN_OUT_SINE);
});

it('eases progress: out-cubic ahead of linear, in-cubic behind it, clamped to 0..1', function (): void {
    $out = new QEasingCurve(QEasingCurve\Type::OUT_CUBIC);
    $in = new QEasingCurve(QEasingCurve\Type::IN_CUBIC);

    expect($out->valueForProgress(0.5))->toBeGreaterThan(0.5)
        ->and($out->valueForProgress(0.5))->toEqualWithDelta(0.875, 1e-9)
        ->and($in->valueForProgress(0.5))->toBeLessThan(0.5)
        ->and($in->valueForProgress(0.5))->toEqualWithDelta(0.125, 1e-9)
        ->and($in->valueForProgress(2.0))->toEqualWithDelta(1.0, 1e-9)
        ->and($in->valueForProgress(-1.0))->toEqualWithDelta(0.0, 1e-9);
});

it('takes every type and answers 0 and 1 at the ends, the two periodic curves aside', function (): void {
    foreach (QEasingCurve\Type::cases() as $type) {
        $curve = new QEasingCurve($type);
        expect($curve->type())->toBe($type)
            ->and(is_finite($curve->valueForProgress(0.5)))->toBeTrue();
        if ($type === QEasingCurve\Type::SINE_CURVE || $type === QEasingCurve\Type::COSINE_CURVE) {
            continue; // one period of a sine: the curve comes back down
        }
        expect($curve->valueForProgress(0.0))->toEqualWithDelta(0.0, 1e-6)
            ->and($curve->valueForProgress(1.0))->toEqualWithDelta(1.0, 1e-6);
    }

    expect((new QEasingCurve(QEasingCurve\Type::SINE_CURVE))->valueForProgress(0.5))->toEqualWithDelta(1.0, 1e-6)
        ->and((new QEasingCurve(QEasingCurve\Type::SINE_CURVE))->valueForProgress(1.0))->toEqualWithDelta(0.0, 1e-6);

    expect(count(QEasingCurve\Type::cases()))->toBe(47)
        ->and(QEasingCurve\Type::TCB_SPLINE->value)->toBe(46);
});

it('gives a property animation an easing curve and reads a copy back', function (): void {
    $animation = new QPropertyAnimation(new QGraphicsOpacityEffect(), 'opacity');
    expect($animation->easingCurve()->type())->toBe(QEasingCurve\Type::LINEAR);

    $curve = new QEasingCurve(QEasingCurve\Type::OUT_CUBIC);
    $animation->setEasingCurve($curve);
    $curve->setType(QEasingCurve\Type::IN_QUAD);

    $read = $animation->easingCurve();
    expect($read)->toBeInstanceOf(QEasingCurve::class)
        ->and($read)->not->toBe($curve)
        ->and($read->type())->toBe(QEasingCurve\Type::OUT_CUBIC)
        ->and($read->valueForProgress(0.5))->toEqualWithDelta(0.875, 1e-9);
});

/** CSS cubic-bezier(x1, y1, x2, y2) at progress $x: solve x(t) = $x by bisection, answer y(t). */
function cssCubicBezier(float $x1, float $y1, float $x2, float $y2, float $x): float
{
    $at = static fn (float $a, float $b, float $t): float => 3 * (1 - $t) ** 2 * $t * $a + 3 * (1 - $t) * $t ** 2 * $b + $t ** 3;
    [$lo, $hi] = [0.0, 1.0];
    for ($i = 0; $i < 100; $i++) {
        $mid = ($lo + $hi) / 2;
        if ($at($x1, $x2, $mid) < $x) {
            $lo = $mid;
        } else {
            $hi = $mid;
        }
    }

    return $at($y1, $y2, ($lo + $hi) / 2);
}

it('builds a bezier-spline curve from one segment that matches the CSS cubic-bezier', function (float $x1, float $y1, float $x2, float $y2): void {
    $curve = new QEasingCurve(QEasingCurve\Type::BEZIER_SPLINE);
    $curve->addCubicBezierSegment(new QPointF($x1, $y1), new QPointF($x2, $y2), new QPointF(1.0, 1.0));

    expect($curve->type())->toBe(QEasingCurve\Type::BEZIER_SPLINE);
    foreach ([0.1, 0.3, 0.5] as $progress) {
        expect($curve->valueForProgress($progress))->toEqualWithDelta(cssCubicBezier($x1, $y1, $x2, $y2, $progress), 1e-3);
    }

    $spline = $curve->toCubicSpline();
    expect($spline)->toHaveCount(3)
        ->and(array_map(fn (QPointF $p): array => [$p->x(), $p->y()], $spline))->toBe([[$x1, $y1], [$x2, $y2], [1.0, 1.0]]);
})->with([
    'ease out (0.22, 1)-(0.36, 1)' => [0.22, 1.0, 0.36, 1.0],
    'ease in (0.64, 0)-(0.78, 0)' => [0.64, 0.0, 0.78, 0.0],
]);

it('reads no segments back from a curve that has none', function (): void {
    expect((new QEasingCurve(QEasingCurve\Type::OUT_CUBIC))->toCubicSpline())->toBe([]);
});

it('refuses a second construction of an easing curve', function (): void {
    $curve = new QEasingCurve();

    expect(fn () => $curve->__construct(QEasingCurve\Type::IN_QUAD))->toThrow(QtException::class, 'called twice');
});
