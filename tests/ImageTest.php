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

it('copies a pixmap whole or the part in a rect', function (): void {
    $bytes = new QByteArray(str_repeat("\xff\x80\x00\xff", 6));
    $pixmap = QPixmap::fromImage(new QImage($bytes->pointer(), 3, 2, 12, QImage\Format::RGBX8888));
    $part = $pixmap->copy(new QRect(1, 0, 2, 1));

    expect([$pixmap->copy()->width(), $pixmap->copy()->height()])->toBe([3, 2])
        ->and([$part->width(), $part->height()])->toBe([2, 1]);
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

/** A $size × $size pixmap of one opaque colour, from an RGBX8888 buffer (copied: the buffer goes with this call). */
function solidPixmap(int $size, string $rgb): QPixmap
{
    $bytes = new QByteArray(str_repeat($rgb . "\xff", $size * $size), $size * $size * 4); // a size: the bytes may hold a NUL

    return QPixmap::fromImage((new QImage($bytes->pointer(), $size, $size, $size * 4, QImage\Format::RGBX8888))->copy());
}

it('fills a pixmap with a colour, white by default, transparent with alpha 0', function (): void {
    $pixmap = solidPixmap(4, "\x00\x00\xff");

    $pixmap->fill();
    expect($pixmap->toImage()->pixel(1, 1))->toBe(0xffffffff);

    $pixmap->fill(new QColor(0, 0, 0, 0));
    $image = $pixmap->toImage();
    expect($image->pixelColor(1, 1)->alpha())->toBe(0)
        ->and($image->pixel(1, 1) >> 24)->toBe(0);
});

it('reads Qt\'s answers for a pixel outside the image', function (): void {
    $image = solidPixmap(2, "\xff\x00\x00")->toImage();

    expect($image->pixel(0, 0))->toBe(0xffff0000)
        ->and($image->pixelColor(0, 0)->red())->toBe(255)
        ->and($image->pixel(5, 5))->toBe(12345)
        ->and($image->pixelColor(5, 5)->isValid())->toBeFalse();
});

it('paints a pixmap through a path rounded at the bottom corners only into a transparent pixmap', function (): void {
    $size = 20;
    $r = 8;
    $source = solidPixmap($size, "\xff\x00\x00");
    $target = solidPixmap($size, "\x00\x00\x00");
    $target->fill(new QColor(0, 0, 0, 0));

    $path = new QPainterPath();
    $path->moveTo(0, 0);
    $path->lineTo($size, 0);
    $path->lineTo($size, $size - $r);
    $path->arcTo($size - 2 * $r, $size - 2 * $r, 2 * $r, 2 * $r, 0, -90);
    $path->lineTo($r, $size);
    $path->arcTo(0, $size - 2 * $r, 2 * $r, 2 * $r, -90, -90);
    $path->closeSubpath();

    $painter = new QPainter($target);
    expect($painter->isActive())->toBeTrue();
    $painter->setRenderHint(QPainter\RenderHint::ANTIALIASING);
    $painter->setClipPath($path);
    $painter->drawPixmap(new QRect(0, 0, $size, $size), $source);
    expect($painter->end())->toBeTrue()
        ->and($painter->isActive())->toBeFalse();

    $image = $target->toImage();
    expect($image->pixelColor(0, 0)->alpha())->toBe(255)
        ->and($image->pixelColor($size - 1, 0)->alpha())->toBe(255)
        ->and($image->pixel(0, 0))->toBe(0xffff0000)
        ->and($image->pixelColor(0, $size - 1)->alpha())->toBe(0)
        ->and($image->pixelColor($size - 1, $size - 1)->alpha())->toBe(0)
        ->and($image->pixelColor($size / 2, $size / 2)->alpha())->toBe(255);
});

it('clips to a rounded rect and ends the painting when the painter is freed', function (): void {
    $target = solidPixmap(20, "\x00\x00\x00");
    $target->fill(new QColor(0, 0, 0, 0));
    $path = new QPainterPath();
    $path->addRoundedRect(new QRectF(0.0, 0.0, 20.0, 20.0), 8.0, 8.0);

    $painter = new QPainter($target);
    $painter->setClipPath($path, Qt\ClipOperation::REPLACE_CLIP);
    $painter->drawPixmap(new QRect(0, 0, 20, 20), solidPixmap(20, "\x00\xff\x00"));
    unset($painter);

    $image = $target->toImage();
    expect($image->pixelColor(0, 0)->alpha())->toBe(0)
        ->and($image->pixelColor(19, 19)->alpha())->toBe(0)
        ->and($image->pixel(10, 10))->toBe(0xff00ff00);
});

it('keeps the device a painter paints on after its PHP variable is gone', function (): void {
    $painter = new QPainter(solidPixmap(4, "\x00\x00\x00"));
    $painter->fillRect(new QRect(0, 0, 4, 4), new QColor(255, 255, 255));

    expect($painter->isActive())->toBeTrue()
        ->and($painter->end())->toBeTrue();
});

it('paints on an image, and makes an inactive painter with no device', function (): void {
    $bytes = new QByteArray(str_repeat("\x00", 16), 16);
    $image = new QImage($bytes->pointer(), 2, 2, 8, QImage\Format::RGBA8888);
    $painter = new QPainter($image);
    $painter->fillRect(new QRect(0, 0, 2, 2), new QColor(0, 0, 255));
    $painter->end();

    expect($image->pixel(1, 1))->toBe(0xff0000ff)
        ->and((new QPainter())->isActive())->toBeFalse()
        ->and((new QPainter(null))->end())->toBeFalse();
});

it('carries a QRectF and Qt\'s clip operations', function (): void {
    $rect = new QRectF(0.5, 1.5, 10.25, 0.0);

    expect([$rect->x(), $rect->y(), $rect->width(), $rect->height()])->toBe([0.5, 1.5, 10.25, 0.0])
        ->and($rect->isValid())->toBeFalse()
        ->and((new QRectF(0.0, 0.0, 1.0, 1.0))->isValid())->toBeTrue()
        ->and(array_map(fn (Qt\ClipOperation $o): int => $o->value, Qt\ClipOperation::cases()))->toBe([0, 1, 2]);
});

it('refuses a second construction of a painter or a path', function (): void {
    $painter = new QPainter();
    $path = new QPainterPath();

    expect(fn () => $painter->__construct())->toThrow(QtException::class, 'called twice')
        ->and(fn () => $path->__construct())->toThrow(QtException::class, 'called twice');
});
