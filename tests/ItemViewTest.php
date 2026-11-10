<?php

declare(strict_types=1);

use QListView\Flow;
use QListView\Movement;
use QListView\ResizeMode;
use QListView\ViewMode;

beforeEach(fn () => testApplication());

it('keeps rows and their data in a QStandardItemModel', function (): void {
    $model = new QStandardItemModel(2, 1);

    expect($model->rowCount())->toBe(2)
        ->and($model->columnCount())->toBe(1);

    $index = $model->index(1, 0);
    expect($index->isValid())->toBeTrue()
        ->and($index->row())->toBe(1)
        ->and($model->setData($index, 'Horsehead Nebula'))->toBeTrue()
        ->and($model->data($index))->toBe('Horsehead Nebula')
        ->and($index->data())->toBe('Horsehead Nebula');

    expect($model->insertRows(0, 3))->toBeTrue()
        ->and($model->rowCount())->toBe(5)
        ->and($model->removeRows(0, 4))->toBeTrue()
        ->and($model->rowCount())->toBe(1);

    $model->clear();
    expect($model->rowCount())->toBe(0)
        ->and((new QModelIndex())->isValid())->toBeFalse();
});

it('sets a QListView up as an icon grid over a model', function (): void {
    $model = new QStandardItemModel(3, 1);
    $view = new QListView();
    $view->setModel($model);
    $view->setViewMode(ViewMode::ICON_MODE);
    $view->setFlow(Flow::LEFT_TO_RIGHT);
    $view->setWrapping(true);
    $view->setResizeMode(ResizeMode::ADJUST);
    $view->setMovement(Movement::STATIC);
    $view->setGridSize(new QSize(180, 200));
    $view->setSpacing(8);
    $view->setUniformItemSizes(true);
    $view->setIconSize(new QSize(160, 120));

    expect($view->model())->toBe($model)
        ->and($view->viewMode())->toBe(ViewMode::ICON_MODE)
        ->and($view->flow())->toBe(Flow::LEFT_TO_RIGHT)
        ->and($view->isWrapping())->toBeTrue()
        ->and($view->resizeMode())->toBe(ResizeMode::ADJUST)
        ->and($view->movement())->toBe(Movement::STATIC)
        ->and($view->gridSize()->width())->toBe(180)
        ->and($view->spacing())->toBe(8)
        ->and($view->uniformItemSizes())->toBeTrue()
        ->and($view->iconSize()->height())->toBe(120);
});

it('hands a view a QPaintDelegate and keeps it', function (): void {
    $view = new QListView();
    $delegate = new QPaintDelegate(fn (QPainter $p, QStyleOptionViewItem $o, QModelIndex $i) => null, null, null, $view);
    $view->setItemDelegate($delegate);

    expect($delegate)->toBeInstanceOf(QStyledItemDelegate::class)
        ->and($view->itemDelegate())->toBe($delegate)
        ->and(new QPaintDelegate(null))->toBeInstanceOf(QAbstractItemDelegate::class);
});

it('refuses a QPaintDelegate callable that is not callable', function (): void {
    new QPaintDelegate('no such function');
})->throws(TypeError::class);

it('builds a QToolBar and puts it on a QMainWindow', function (): void {
    $window = new QMainWindow();
    $bar = new QToolBar();
    $bar->setMovable(false);
    $bar->setFloatable(false);
    $bar->setIconSize(new QSize(16, 16));
    $bar->setToolButtonStyle(Qt\ToolButtonStyle::TOOL_BUTTON_TEXT_UNDER_ICON);

    $action = $bar->addWidget(new QLabel('Today'));
    $separator = $bar->addSeparator();
    $window->addToolBar($bar);

    expect($action)->toBeInstanceOf(QAction::class)
        ->and($separator->isSeparator())->toBeTrue()
        ->and($bar->isMovable())->toBeFalse()
        ->and($bar->isFloatable())->toBeFalse()
        ->and($bar->iconSize()->width())->toBe(16)
        ->and($bar->toolButtonStyle())->toBe(Qt\ToolButtonStyle::TOOL_BUTTON_TEXT_UNDER_ICON);
});
