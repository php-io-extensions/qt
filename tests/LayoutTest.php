<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('lays widgets out in a box, a grid, and reads sizes back', function (): void {
    $host = new QWidget();
    $column = new QVBoxLayout($host);
    $column->setSpacing(4);
    $column->setContentsMargins(2, 2, 2, 2);
    $a = new QWidget();
    $b = new QWidget();
    $a->setMinimumSize(50, 20);
    $column->addWidget($a, 0, Qt\AlignmentFlag::H_CENTER);
    $column->insertWidget(0, $b, 1);
    $b->setSizePolicy(QSizePolicy\Policy::EXPANDING, QSizePolicy\Policy::EXPANDING);
    $host->resize(200, 100);
    $host->show();
    QCoreApplication::processEvents();

    expect($host->layout())->toBe($column)
        ->and($column->count())->toBe(2)
        ->and($column->indexOf($a))->toBe(1)
        ->and($column->itemAtWidget(0))->toBe($b)
        ->and($a->size()[0])->toBeGreaterThanOrEqual(50)
        ->and($a->minimumWidth())->toBe(50);

    $column->removeWidget($a);
    $a->setParent(null);
    expect($column->count())->toBe(1);

    $grid = new QGridLayout();
    $c = new QWidget();
    $grid->addWidget($c, 1, 2, 1, 2);
    expect($grid->rowCount())->toBe(2)->and($grid->columnCount())->toBe(4)->and($grid->itemAtPosition(1, 2))->toBe($c);
    $host->close();
});

it('moves a widget absolutely when its parent has no layout', function (): void {
    $host = new QWidget();
    $child = new QWidget($host);
    $child->setGeometry(10, 20, 30, 40);
    $child->move(15, 25);

    expect($child->pos())->toBe([15, 25])
        ->and($child->geometry())->toBe(['x' => 15, 'y' => 25, 'width' => 30, 'height' => 40])
        ->and($host->layout())->toBeNull()
        ->and($host->children())->toBe([$child]);
});

it('keeps widgets added to a layout that has no host yet, then lays them out once installed', function (): void {
    $host = new QWidget();
    $column = new QVBoxLayout();
    $column->addWidget(new QLabel('first'));
    $inner = new QHBoxLayout();
    $inner->addWidget(new QLabel('nested'));
    $column->addLayout($inner);
    unset($inner);
    $grid = new QGridLayout();
    $grid->addWidget(new QLabel('cell'), 0, 0);
    $column->addLayout($grid);
    unset($grid);
    $host->setLayout($column);
    $host->resize(200, 100);
    $host->show();
    QCoreApplication::processEvents();

    expect($column->itemAtWidget(0)->text())->toBe('first')
        ->and($column->itemAtWidget(0)->parentWidget())->toBe($host)
        ->and(count($host->children()))->toBe(4);
    $host->close();
});

it('deletes the widgets of a layout that is dropped without a host', function (): void {
    $layout = new QVBoxLayout();
    $label = new QLabel('orphan');
    $layout->addWidget($label);
    $destroyed = false;
    QObject::connect($label, 'destroyed(QObject*)', function () use (&$destroyed): void { $destroyed = true; });
    unset($label);

    expect($destroyed)->toBeFalse()->and($layout->count())->toBe(1);

    unset($layout);
    expect($destroyed)->toBeTrue();
});

it('lets go of a widget removed from a layout that has no host', function (): void {
    $layout = new QVBoxLayout();
    $label = new QLabel('removed');
    $layout->addWidget($label);
    $destroyed = false;
    QObject::connect($label, 'destroyed(QObject*)', function () use (&$destroyed): void { $destroyed = true; });
    $layout->removeWidget($label);
    unset($label);

    expect($destroyed)->toBeTrue()->and($layout->count())->toBe(0);
});

it('refuses to insert past the end of a box layout', function (): void {
    $column = new QVBoxLayout();
    $column->addWidget(new QWidget());

    expect(fn () => $column->insertWidget(2, new QWidget()))->toThrow(ValueError::class, 'between -1 and 1')
        ->and($column->count())->toBe(1);

    $column->insertWidget(1, new QWidget());
    $column->insertWidget(-1, new QWidget());
    expect($column->count())->toBe(3);
});

it('refuses a parent that is not a widget', function (): void {
    expect(fn () => (new QWidget())->setParent(new QObject()))->toThrow(TypeError::class, '?QWidget');
});

it('refuses a second constructor call and keeps the first object', function (): void {
    $widget = new QWidget();
    $widget->setWindowTitle('kept');

    expect(fn () => $widget->__construct())->toThrow(QtException::class, 'called twice')
        ->and($widget->windowTitle())->toBe('kept')
        ->and(fn () => (new QVBoxLayout())->__construct())->toThrow(QtException::class, 'called twice');
});

it('sets stretch factors on box and grid layouts', function (): void {
    $host = new QWidget();
    $box = new QVBoxLayout($host);
    $box->addWidget(new QWidget());
    $box->addStretch(3);
    $box->setStretch(0, 2);

    expect($box->stretch(0))->toBe(2)
        ->and($box->stretch(1))->toBe(3);

    $gridHost = new QWidget();
    $grid = new QGridLayout($gridHost);
    $grid->setRowStretch(1, 4);
    $grid->setColumnStretch(2, 5);
    expect($grid->rowStretch(1))->toBe(4)
        ->and($grid->columnStretch(2))->toBe(5)
        ->and($grid->rowStretch(0))->toBe(0);
});

it('sizes a grid cell with a spacer item the layout owns', function (): void {
    $host = new QWidget();
    $grid = new QGridLayout($host);
    $grid->setContentsMargins(0, 0, 0, 0);
    $spacer = new QSpacerItem(40, 20, QSizePolicy\Policy::PREFERRED, QSizePolicy\Policy::PREFERRED);

    expect($spacer->sizeHint())->toBe([40, 20]);

    $grid->addItem($spacer, 0, 0);
    expect($host->sizeHint())->toBe([40, 20])
        ->and(fn () => (new QGridLayout($other = new QWidget()))->addItem($spacer, 0, 0))->toThrow(ValueError::class, 'already belongs');

    $spacer->changeSize(10, 5, QSizePolicy\Policy::PREFERRED, QSizePolicy\Policy::PREFERRED);
    $grid->invalidate();
    expect($spacer->sizeHint())->toBe([10, 5])
        ->and($host->sizeHint())->toBe([10, 5]);

    $host->deleteLater();
    QCoreApplication::sendPostedEvents(null, DEFERRED_DELETE);
    expect(fn () => $spacer->sizeHint())->toThrow(QtException::class, 'deleted');
});
