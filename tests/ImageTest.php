<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('borrows the bytes of a byte array', function (): void {
    $bytes = new QByteArray(str_repeat("\xff\x80\x00\xff", 6));
    $image = new QImage($bytes->pointer(), 3, 2, 12, QImage\Format::RGBX8888);

    expect($image->isNull())->toBeFalse()
        ->and([$image->width(), $image->height()])->toBe([3, 2])
        ->and($image->format())->toBe(QImage\Format::RGBX8888);
});

it('borrows an image from a framebuffer address', function (): void {
    $buffer = new FbBuffer(new FbFormat(FB_LAYOUT_RGBA8888, channelOrder: FB_CHANNELS_RGBA), 4, 2);

    $image = new QImage($buffer->pointer(), 4, 2, 16, QImage\Format::RGBX8888);

    expect([$image->width(), $image->height(), $image->format()])->toBe([4, 2, QImage\Format::RGBX8888])
        ->and($image->isNull())->toBeFalse();
})->skip(! class_exists(FbBuffer::class), 'needs ext-fb for a native address');

it('makes Qt\'s null image from a null address or no width or height', function (int $data, int $width, int $height): void {
    $bytes = new QByteArray(str_repeat('x', 16));

    expect((new QImage($data === 0 ? 0 : $bytes->pointer(), $width, $height, 8, QImage\Format::RGBX8888))->isNull())->toBeTrue();
})->with([
    'a null address' => [0, 2, 2],
    'no width' => [1, 0, 2],
    'no height' => [1, 2, 0],
]);

it('calls the cleanup function with its info once the image goes', function (): void {
    $bytes = new QByteArray(str_repeat("\x01\x02\x03\x04", 4));
    $calls = [];
    $image = new QImage($bytes->pointer(), 2, 2, 8, QImage\Format::RGBA8888, function (mixed $info) use (&$calls): void { $calls[] = $info; }, 'the buffer');
    $copy = $image->copy();
    $before = $calls;
    unset($image);

    expect($before)->toBe([])
        ->and($calls)->toBe(['the buffer'])
        ->and($copy->isNull())->toBeFalse();
});

it('never calls the cleanup function of a null image', function (): void {
    $calls = 0;
    $image = new QImage(0, 2, 2, 8, QImage\Format::RGBA8888, function () use (&$calls): void { $calls++; });
    unset($image);

    expect($calls)->toBe(0);
});

it('copies an image whole or a rectangle of it', function (): void {
    $bytes = new QByteArray(str_repeat("\xff\x80\x00\xff", 6));
    $image = new QImage($bytes->pointer(), 3, 2, 12, QImage\Format::RGBX8888);

    expect([$image->copy()->width(), $image->copy()->height()])->toBe([3, 2])
        ->and([$image->copy(new QRect(1, 0, 2, 1))->width(), $image->copy(new QRect(1, 0, 2, 1))->height()])->toBe([2, 1]);
});

it('carries Qt\'s values for the image formats', function (): void {
    expect(array_map(fn (QImage\Format $f): int => $f->value, QImage\Format::cases()))->toBe([4, 5, 6, 13, 16, 17, 18, 29]);
});

it('turns an image into a pixmap a label shows', function (): void {
    $bytes = new QByteArray(str_repeat("\xff\x80\x00\xff", 6));
    $pixmap = QPixmap::fromImage(new QImage($bytes->pointer(), 3, 2, 12, QImage\Format::RGBX8888));
    $label = new QLabel();
    $label->setScaledContents(true);
    $label->setPixmap($pixmap);

    expect($pixmap->isNull())->toBeFalse()
        ->and([$pixmap->width(), $pixmap->height()])->toBe([3, 2])
        ->and($label->devicePixelRatioF())->toBeGreaterThanOrEqual(1.0);
});

it('refuses a second construction', function (): void {
    $bytes = new QByteArray("\x01\x02\x03\x04");
    $image = new QImage($bytes->pointer(), 1, 1, 4, QImage\Format::RGBA8888);

    expect(fn () => $image->__construct($bytes->pointer(), 1, 1, 4, QImage\Format::RGBA8888))->toThrow(QtException::class, 'called twice');
});

it('copies a string into a byte array, to the first NUL when no size is given', function (): void {
    expect((new QByteArray("abc\0def"))->size())->toBe(3)
        ->and((new QByteArray("abc\0def", 7))->size())->toBe(7)
        ->and((new QByteArray('abcdef', 2))->size())->toBe(2)
        ->and((new QByteArray('abc', 0))->size())->toBe(0)
        ->and(fn () => new QByteArray('abc', 4))->toThrow(ValueError::class, 'must not be greater than the string');
});
