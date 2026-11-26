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
        ->and($column->itemAt(0)->widget())->toBe($b)
        ->and($a->size()->width())->toBeGreaterThanOrEqual(50)
        ->and($a->minimumWidth())->toBe(50);

    $column->removeWidget($a);
    $a->setParent(null);
    expect($column->count())->toBe(1);

    $grid = new QGridLayout();
    $c = new QWidget();
    $grid->addWidget($c, 1, 2, 1, 2);
    expect($grid->rowCount())->toBe(2)->and($grid->columnCount())->toBe(4)->and($grid->itemAtPosition(1, 2)->widget())->toBe($c);
    $host->close();
});

it('moves a widget absolutely when its parent has no layout', function (): void {
    $host = new QWidget();
    $child = new QWidget($host);
    $child->setGeometry(10, 20, 30, 40);
    $child->move(15, 25);

    $geometry = $child->geometry();

    expect(xy($child->pos()))->toBe([15, 25])
        ->and([$geometry->x(), $geometry->y(), $geometry->width(), $geometry->height()])->toBe([15, 25, 30, 40])
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

    expect($column->itemAt(0)->widget()->text())->toBe('first')
        ->and($column->itemAt(0)->widget()->parentWidget())->toBe($host)
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

it('lets Qt answer an insert past the end of a box layout', function (): void {
    $child = qtChild(<<<'PHP'
        $column = new QVBoxLayout();
        $column->addWidget(new QWidget());
        $column->insertWidget(5, new QWidget());
        $column->insertWidget(-1, new QWidget());

        return $column->count();
    PHP);

    expect($child['threw'])->toBeNull()
        ->and($child['result'])->toBe(3)
        ->and($child['stderr'])->toContain('QBoxLayout::insert: index 5 out of range');
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

    expect(wh($spacer->sizeHint()))->toBe([40, 20]);

    $grid->addItem($spacer, 0, 0);
    expect(wh($host->sizeHint()))->toBe([40, 20])
        ->and(fn () => (new QGridLayout($other = new QWidget()))->addItem($spacer, 0, 0))->toThrow(ValueError::class, 'already belongs');

    $spacer->changeSize(10, 5, QSizePolicy\Policy::PREFERRED, QSizePolicy\Policy::PREFERRED);
    $grid->invalidate();
    expect(wh($spacer->sizeHint()))->toBe([10, 5])
        ->and(wh($host->sizeHint()))->toBe([10, 5]);

    $host->deleteLater();
    QCoreApplication::sendPostedEvents(null, DEFERRED_DELETE);
    expect(fn () => $spacer->sizeHint())->toThrow(QtException::class, 'deleted');
});

it('lends the items a layout holds, each alive while the layout holds it', function (): void {
    $host = new QWidget();
    $column = new QVBoxLayout($host);
    $label = new QLabel('a');
    $column->addWidget($label);
    $column->addStretch(1);
    $inner = new QHBoxLayout();
    $column->addLayout($inner);

    $item = $column->itemAt(0);
    $stretch = $column->itemAt(1);

    expect($item)->toBeInstanceOf(QLayoutItem::class)
        ->and($item->widget())->toBe($label)
        ->and($item->layout())->toBeNull()
        ->and($item->spacerItem())->toBeNull()
        ->and($stretch)->toBeInstanceOf(QSpacerItem::class)
        ->and($stretch->widget())->toBeNull()
        ->and($stretch->spacerItem())->toBeInstanceOf(QSpacerItem::class)
        ->and($column->itemAt(2)->layout())->toBe($inner)
        ->and($column->itemAt(3))->toBeNull();

    $column->removeWidget($label);
    expect(fn () => $item->widget())->toThrow(QtException::class, 'QLayoutItem has been deleted by Qt')
        ->and($stretch->spacerItem())->toBeInstanceOf(QSpacerItem::class);
});

it('hands back the spacer PHP made as the same object', function (): void {
    $grid = new QGridLayout();
    $spacer = new QSpacerItem(4, 8);
    $grid->addItem($spacer, 0, 0);

    expect($grid->itemAtPosition(0, 0))->toBe($spacer)
        ->and($grid->itemAt(0)->spacerItem())->toBe($spacer)
        ->and($grid->itemAtPosition(5, 5))->toBeNull();
});

it('reads QWIDGETSIZE_MAX as a widget\'s maximum by default and sets the maximum width, height and size', function (): void {
    $widget = new QWidget();

    expect(wh($widget->maximumSize()))->toBe([16777215, 16777215])
        ->and($widget->maximumWidth())->toBe(16777215)
        ->and($widget->maximumHeight())->toBe(16777215);

    $widget->setMaximumWidth(120);
    $widget->setMaximumHeight(40);
    expect(wh($widget->maximumSize()))->toBe([120, 40]);

    $widget->setMaximumSize(300, 16777215);
    expect([$widget->maximumWidth(), $widget->maximumHeight()])->toBe([300, 16777215]);
});

it('caps a widget in a layout at its maximum width, centred in the space it leaves', function (): void {
    $host = new QWidget();
    $row = new QHBoxLayout($host);
    $row->setContentsMargins(0, 0, 0, 0);
    // An aligned item gets its size hint, bounded by its maximum: a line of text far wider than 200.
    $column = new QLabel(str_repeat('a column of text ', 20));
    $column->setMaximumWidth(200);
    $row->addWidget($column, 1, Qt\AlignmentFlag::H_CENTER);
    $host->resize(500, 100);
    $host->show();
    QCoreApplication::processEvents();

    expect($column->sizeHint()->width())->toBeGreaterThan(500)
        ->and($column->width())->toBe(200)
        ->and($column->pos()->x())->toBe(150);

    $column->setMaximumWidth(16777215);
    QCoreApplication::processEvents();
    expect($column->width())->toBeGreaterThan(200); // no limit: the text's own width
    $host->close();
});

it('refuses a maximum outside C int as a ValueError and leaves Qt\'s bounds to Qt', function (): void {
    $widget = new QWidget();

    expect(fn () => $widget->setMaximumWidth(PHP_INT_MAX))->toThrow(ValueError::class)
        ->and(fn () => $widget->setMaximumHeight(PHP_INT_MIN))->toThrow(ValueError::class)
        ->and(fn () => $widget->setMaximumSize(1, PHP_INT_MAX))->toThrow(ValueError::class);

    $widget->setMaximumSize(-5, 20000000); // Qt warns and bounds both
    expect(wh($widget->maximumSize()))->toBe([0, 16777215]);
});

it('nests a layout in a grid cell, spanning cells, and the grid owns it', function (): void {
    $host = new QWidget();
    $grid = new QGridLayout($host);
    $inner = new QVBoxLayout();
    $inner->setContentsMargins(4, 6, 8, 10);
    $label = new QLabel('overlay');
    $inner->addWidget($label);
    $corner = new QHBoxLayout();

    $grid->addLayout($inner, 1, 2, 2, 3);
    $grid->addLayout($corner, 0, 0, alignment: Qt\AlignmentFlag::LEFT);

    expect($inner->parent())->toBe($grid)
        ->and($corner->parent())->toBe($grid)
        ->and($grid->itemAtPosition(1, 2)->layout())->toBe($inner)
        ->and($grid->itemAtPosition(2, 4)->layout())->toBe($inner)
        ->and($grid->itemAtPosition(0, 0)->layout())->toBe($corner)
        ->and($grid->rowCount())->toBe(3)
        ->and($grid->columnCount())->toBe(5)
        ->and($label->parentWidget())->toBe($host);

    unset($inner, $corner);

    $held = $grid->itemAtPosition(1, 2)->layout();
    expect($held)->toBeInstanceOf(QVBoxLayout::class)
        ->and($held->parent())->toBe($grid)
        ->and($held->itemAt(0)->widget())->toBe($label);
});

it('inserts a nested layout at an index of a box layout, and the box owns it', function (): void {
    $host = new QWidget();
    $column = new QVBoxLayout($host);
    $a = new QLabel('a');
    $b = new QLabel('b');
    $c = new QLabel('c');
    $column->addWidget($a);
    $column->addWidget($b);
    $column->addWidget($c);
    $row = new QHBoxLayout();
    $inside = new QLabel('inside');
    $row->addWidget($inside);

    $column->insertLayout(1, $row, 3);

    expect($column->count())->toBe(4)
        ->and($column->itemAt(0)->widget())->toBe($a)
        ->and($column->itemAt(1)->layout())->toBe($row)
        ->and($column->itemAt(2)->widget())->toBe($b)
        ->and($column->itemAt(3)->widget())->toBe($c)
        ->and($column->indexOf($b))->toBe(2)
        ->and($column->stretch(1))->toBe(3)
        ->and($row->parent())->toBe($column)
        ->and($inside->parentWidget())->toBe($host);

    unset($row);
    QCoreApplication::processEvents();
    $kept = $column->itemAt(1)->layout();
    expect($kept)->toBeInstanceOf(QHBoxLayout::class)
        ->and($kept->itemAt(0)->widget())->toBe($inside);

    $column->insertLayout(-1, new QVBoxLayout());
    expect($column->count())->toBe(5)->and($column->itemAt(4)->layout())->toBeInstanceOf(QVBoxLayout::class);
});

it('takes a nested layout out again with removeItem, and its widget goes back into the box', function (): void {
    $host = new QWidget();
    $column = new QVBoxLayout($host);
    $first = new QLabel('first');
    $wide = new QLabel('wide');
    $column->addWidget($first);
    $row = new QHBoxLayout();
    $row->addStretch(1);
    $row->addWidget($wide);
    $row->addStretch(1);
    $column->insertLayout(1, $row);
    $host->resize(300, 120);
    $host->show();
    QCoreApplication::processEvents();

    $destroyed = false;
    QObject::connect($row, 'destroyed(QObject*)', function () use (&$destroyed): void { $destroyed = true; });
    $item = $column->itemAt(1);
    expect($item->layout())->toBe($row);

    $column->removeItem($item);

    expect($column->count())->toBe(1)
        ->and($row->parent())->toBeNull()
        ->and($row->count())->toBe(3)
        ->and($row->itemAt(1)->widget())->toBe($wide)
        ->and($destroyed)->toBeFalse();
    expect(fn () => $item->layout())->toThrow(QtException::class);

    $row->removeWidget($wide);
    $column->addWidget($wide);
    QCoreApplication::processEvents();
    expect($column->indexOf($wide))->toBe(1)->and($wide->parentWidget())->toBe($host)->and($row->count())->toBe(2);

    unset($row, $item);
    QCoreApplication::processEvents();
    expect($destroyed)->toBeTrue()
        ->and($column->itemAt(1)->widget())->toBe($wide)
        ->and($wide->isVisible())->toBeTrue();

    $host->close();
});

it('removes a nested layout given as itself, and ignores one the box does not hold', function (): void {
    $host = new QWidget();
    $column = new QVBoxLayout($host);
    $first = new QLabel('first');
    $wide = new QLabel('wide');
    $column->addWidget($first);
    $row = new QHBoxLayout();
    $row->addStretch(1);
    $row->addWidget($wide);
    $row->addStretch(1);
    $column->insertLayout(1, $row);
    $host->resize(300, 120);
    $host->show();
    QCoreApplication::processEvents();

    $destroyed = 0;
    QObject::connect($row, 'destroyed(QObject*)', function () use (&$destroyed): void { ++$destroyed; });

    $stranger = new QHBoxLayout();
    $column->removeItem($stranger);
    expect($column->count())->toBe(2)->and($row->parent())->toBe($column);

    $column->removeItem($row);
    expect($column->count())->toBe(1)
        ->and($row->parent())->toBeNull()
        ->and($row->itemAt(1)->widget())->toBe($wide)
        ->and($destroyed)->toBe(0);

    $column->removeItem($row);
    expect($column->count())->toBe(1);

    $row->removeWidget($wide);
    $column->addWidget($wide);
    unset($row);
    QCoreApplication::processEvents();

    expect($destroyed)->toBe(1)
        ->and($column->itemAt(1)->widget())->toBe($wide)
        ->and($wide->parentWidget())->toBe($host)
        ->and($wide->isVisible())->toBeTrue();

    $host->close();
});

it('gives a removed layout back to PHP even when only the box listed it, and deletes what Qt made', function (): void {
    $host = new QWidget();
    $column = new QVBoxLayout($host);
    $column->addWidget(new QLabel('x'));
    $column->insertLayout(0, new QHBoxLayout());
    $column->addStretch(1);
    $stretch = $column->itemAt(2);
    $mine = new QSpacerItem(5, 5);
    expect($column->itemAt(0)->layout()->parent())->toBe($column);

    $column->removeItem($column->itemAt(0));
    $column->removeItem($stretch);

    expect($column->count())->toBe(1)->and($column->itemAt(0)->widget())->toBeInstanceOf(QLabel::class);
    expect(fn () => $stretch->layout())->toThrow(QtException::class);
    $column->removeItem($mine);
});

it('lays a width-capped, centred wrapping label out for the width it gets once it sits in a stretch row', function (): void {
    $place = function (bool $inRow): array {
        $text = str_repeat('The quick brown fox jumps over the lazy dog near the quiet river bank. ', 14);
        $capped = new QWidget();
        $inner = new QVBoxLayout($capped);
        $inner->setContentsMargins(0, 0, 0, 0);
        $inner->setSpacing(10);
        $label = new QLabel($text);
        $label->setWordWrap(true);
        $inner->addWidget($label);
        $block = new QWidget();
        $block->setMinimumSize(0, 200);
        $inner->addWidget($block);
        $credit = new QLabel('credit line');
        $inner->addWidget($credit);
        $capped->setMaximumWidth(400);

        $content = new QWidget();
        $outer = new QVBoxLayout($content);
        $outer->setContentsMargins(0, 0, 0, 0);
        if ($inRow) {
            $row = new QHBoxLayout();
            $row->addStretch(1);
            $row->addWidget($capped);
            $row->addStretch(1);
            $outer->insertLayout(0, $row);
        } else {
            $outer->addWidget($capped, 0, Qt\AlignmentFlag::H_CENTER);
        }

        $area = new QScrollArea();
        $area->setWidgetResizable(true);
        $area->setWidget($content);
        $area->resize(900, 400);
        $area->show();
        $until = microtime(true) + 0.5;
        while (microtime(true) < $until) {
            QCoreApplication::processEvents();
        }
        $blockBottom = $block->geometry()->y() + $block->geometry()->height();
        $result = ['gap' => $credit->geometry()->y() - $blockBottom, 'width' => $capped->width(), 'text' => $label->geometry()->height()];
        $area->close();

        return $result;
    };

    $flag = $place(false);
    $row = $place(true);

    expect($flag['width'])->toBe(400)->and($row['width'])->toBe(400)
        ->and($flag['gap'])->toBeLessThan(0)
        ->and($row['gap'])->toBeGreaterThanOrEqual(0)
        ->and($row['text'])->toBeGreaterThan($flag['text']);
});
