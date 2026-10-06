<?php

declare(strict_types=1);

use QSurface\SurfaceType;

beforeEach(fn () => testApplication());

it('makes a window with a surface type and a native handle once created', function (): void {
    $window = new QWindow();

    expect($window)->toBeInstanceOf(QObject::class)
        ->and($window->surfaceType())->toBe(SurfaceType::RASTER_SURFACE);

    $window->setSurfaceType(SurfaceType::METAL_SURFACE);
    $window->create();

    expect($window->surfaceType())->toBe(SurfaceType::METAL_SURFACE)
        ->and($window->winId())->not->toBe(0)
        ->and($window->devicePixelRatio())->toBeGreaterThanOrEqual(1.0);
})->skip(PHP_OS_FAMILY !== 'Darwin', 'a Metal surface is macOS');

it('containers a window into a widget', function (): void {
    $host = new QWidget();
    $window = new QWindow();

    $container = QWidget::createWindowContainer($window, $host);

    expect($container)->toBeInstanceOf(QWidget::class)
        ->and($container->parentWidget())->toBe($host)
        ->and($window->winId())->not->toBe(0);
});

it('names every surface type Qt has', function (): void {
    expect(array_map(fn (SurfaceType $t): int => $t->value, SurfaceType::cases()))->toBe([0, 1, 2, 3, 4, 5, 6]);
});
