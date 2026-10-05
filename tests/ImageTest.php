<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('makes an image from bytes, as a copy', function (): void {
    $bytes = str_repeat("\xff\x80\x00\xff", 6);
    $image = new QImage($bytes, 3, 2, 12, QImage\Format::RGBX8888);
    unset($bytes);

    expect($image->isNull())->toBeFalse()
        ->and([$image->width(), $image->height()])->toBe([3, 2])
        ->and($image->format())->toBe(QImage\Format::RGBX8888)
        ->and((new QImage(str_repeat('x', 14), 2, 2, 8, QImage\Format::RGB888))->width())->toBe(2);   // a padded line; the last needs no padding
});

it('copies an image from an address', function (): void {
    $buffer = new FbBuffer(new FbFormat(FB_LAYOUT_RGBA8888, channelOrder: FB_CHANNELS_RGBA), 4, 2);

    $image = new QImage($buffer->pointer(), 4, 2, 16, QImage\Format::RGBX8888);

    expect([$image->width(), $image->height(), $image->format()])->toBe([4, 2, QImage\Format::RGBX8888])
        ->and($image->isNull())->toBeFalse();
})->skip(! class_exists(FbBuffer::class), 'needs ext-fb for a native address');

it('refuses a null address', function (): void {
    new QImage(0, 4, 2, 16, QImage\Format::RGBX8888);
})->throws(ValueError::class, 'must not be a null address');

it('carries Qt\'s values for the image formats', function (): void {
    expect(array_map(fn (QImage\Format $f): int => $f->value, QImage\Format::cases()))->toBe([4, 5, 6, 13, 16, 17, 18, 29]);
});

it('refuses bytes that do not hold the image', function (Closure $new, string $message): void {
    expect($new)->toThrow(ValueError::class, $message);
})->with([
    'too few bytes' => [fn () => new QImage(str_repeat('x', 23), 3, 2, 12, QImage\Format::RGBA8888), 'must hold every line (24 bytes), 23 given'],
    'a line shorter than its pixels' => [fn () => new QImage(str_repeat('x', 24), 3, 2, 11, QImage\Format::RGBA8888), 'must hold a line: at least 12 bytes'],
    'three-byte pixels' => [fn () => new QImage(str_repeat('x', 8), 3, 1, 9, QImage\Format::BGR888), 'must hold every line (9 bytes), 8 given'],
    'no width' => [fn () => new QImage('', 0, 2, 0, QImage\Format::RGBA8888), 'must be between 1 and 32767'],
    'no height' => [fn () => new QImage('', 2, 0, 8, QImage\Format::RGBA8888), 'must be between 1 and 32767'],
]);

it('turns an image into a pixmap a label shows', function (): void {
    $pixmap = QPixmap::fromImage(new QImage(str_repeat("\xff\x80\x00\xff", 6), 3, 2, 12, QImage\Format::RGBX8888));
    $label = new QLabel();
    $label->setScaledContents(true);
    $label->setPixmap($pixmap);

    expect($pixmap->isNull())->toBeFalse()
        ->and([$pixmap->width(), $pixmap->height()])->toBe([3, 2])
        ->and($label->devicePixelRatioF())->toBeGreaterThanOrEqual(1.0);
});

it('refuses a second construction', function (): void {
    $image = new QImage("\x01\x02\x03\x04", 1, 1, 4, QImage\Format::RGBA8888);

    expect(fn () => $image->__construct("\x01\x02\x03\x04", 1, 1, 4, QImage\Format::RGBA8888))->toThrow(QtException::class, 'called twice');
});
