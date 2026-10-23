<?php

declare(strict_types=1);

require_once __DIR__ . '/../scripts/support.php';

$fixtures = __DIR__ . '/fixtures/support';

it('counts the public, live member names of QtCore, QtGui and QtWidgets classes', function () use ($fixtures): void {
    // Out: the signal, the protected member, the destructor, operator=, metaObject, the deprecated
    // member, the implicit one, QString (a value class), a member private by default, a non-Qt class.
    expect(support_counted("{$fixtures}/mini.ast"))->toBe([
        'QPaintDevice' => ['QPaintDevice::devicePixelRatioF'],
        'QTabWidget' => ['QTabWidget::QTabWidget', 'QTabWidget::count', 'QTabWidget::setCurrentIndex'],
        'QWidget' => ['QWidget::setFocus'],
    ]);
});

it('reads each class public bases from the dump', function () use ($fixtures): void {
    expect(support_parents("{$fixtures}/mini.ast"))->toBe(['QTabWidget' => ['QWidget'], 'QWidget' => ['QObject', 'QPaintDevice']]);
});

it('names a member as its binding: a constructor as __construct, a nested class in its PHP namespace', function (): void {
    expect(support_php_name('QTabWidget', 'QTabWidget::insertTab'))->toBe(['QTabWidget', 'insertTab'])
        ->and(support_php_name('QTabWidget', 'QTabWidget::QTabWidget'))->toBe(['QTabWidget', '__construct'])
        ->and(support_php_name('QMetaObject::Connection', 'QMetaObject::Connection::isValid'))->toBe(['QMetaObject\\Connection', 'isValid']);
});

it('renders the members, counts a subclass method for its ancestor, and lists the bindings that match none', function () use ($fixtures): void {
    $md = support_render(support_counted("{$fixtures}/mini.ast"), support_bound($fixtures), 'Qt 6.0.0: QtCore, QtGui, QtWidgets', '2026-10-22', support_parents("{$fixtures}/mini.ast"));

    expect($md)->toContain('- [x] `QTabWidget::QTabWidget`')
        ->toContain('- [x] `QWidget::setFocus`')
        ->toContain('- [ ] `QTabWidget::setCurrentIndex`')
        ->toContain('- [x] `QPaintDevice::devicePixelRatioF`')
        ->toContain('4 / 5')
        ->toContain('- `QTabWidget::nothing`')
        ->not->toContain('`QTabWidget::setFocus`');
});

it('computes the badge from the counts', function (): void {
    expect(support_badge('Qt API', 512, 12149))
        ->toBe('[![Qt API](https://img.shields.io/badge/Qt_API-4.2%25_%28512%2F12149%29-blue?style=flat-square)](SUPPORT.md)');
});
