<?php

declare(strict_types=1);

/*
 * The C11-C13 bindings: an editable combo with a completer over a string list model, icons on
 * buttons, a tool button with a menu, an action group, a public scroll bar, a wheel phase,
 * widget-to-global mapping and the accessible name, a tab insert.
 */

beforeEach(fn () => testApplication());

function completerIcon(): QIcon
{
    $bytes = new QByteArray(str_repeat("\x20\x40\xff\xff", 32 * 32));
    $image = new QImage($bytes->pointer(), 32, 32, 128, QImage\Format::RGBA8888);
    $pixmap = QPixmap::fromImage($image);
    $pixmap->setDevicePixelRatio(2.0);

    return new QIcon($pixmap);
}

it('shows a completer popup under an editable combo, a new list re-shows it, and the edit text reads back', function (): void {
    $window = new QWidget();
    $combo = new QComboBox($window);
    $combo->setEditable(true);
    $combo->setCompleter(null);
    $combo->setInsertPolicy(QComboBox\InsertPolicy::NO_INSERT);
    $model = new QStringListModel($window);
    $model->setStringList(['/Users/angel', '/Users/Shared', '/Users/Guest']);
    $completer = new QCompleter($model, $window);
    $completer->setWidget($combo->lineEdit());
    $completer->setCompletionMode(QCompleter\CompletionMode::UNFILTERED_POPUP_COMPLETION);
    $completer->setCaseSensitivity(Qt\CaseSensitivity::CASE_SENSITIVE);
    $chosen = [];
    QObject::connect($completer, 'activated(QString)', function (string $text) use (&$chosen): void { $chosen[] = $text; });
    $window->show();
    processUntil(fn (): bool => $window->isVisible());

    $combo->setEditText('/Us');
    $completer->setCompletionPrefix('/Us');
    $completer->complete();
    processUntil(fn (): bool => $completer->popup()?->isVisible() === true);

    expect($combo->isEditable())->toBeTrue()
        ->and($combo->lineEdit())->toBeInstanceOf(QLineEdit::class)
        ->and($combo->currentText())->toBe('/Us')
        ->and($combo->insertPolicy())->toBe(QComboBox\InsertPolicy::NO_INSERT)
        ->and($completer->completionMode())->toBe(QCompleter\CompletionMode::UNFILTERED_POPUP_COMPLETION)
        ->and($completer->completionPrefix())->toBe('/Us')
        ->and($completer->popup()->isVisible())->toBeTrue()
        ->and($model->stringList())->toBe(['/Users/angel', '/Users/Shared', '/Users/Guest']);

    $model->setStringList(['/Users/angel']);
    $completer->complete();
    processUntil(fn (): bool => $completer->popup()->isVisible());
    expect($completer->popup()->isVisible())->toBeTrue();

    $completer->popup()->hide();
    $window->close();
});

it('gives push buttons an icon at a size and a flat look', function (): void {
    $button = new QPushButton('Open');
    $icon = completerIcon();

    $button->setIcon($icon);
    $button->setIconSize(new QSize(16, 16));
    $button->setFlat(true);

    expect($icon->isNull())->toBeFalse()
        ->and(wh($button->iconSize()))->toBe([16, 16])
        ->and($button->isFlat())->toBeTrue();
});

it('gives a tool button a menu it pops at once, a style and no raise', function (): void {
    $button = new QToolButton();
    $menu = new QMenu('Ignore case', $button);
    $menu->addAction('None');

    $button->setText('Ignore case');
    $button->setMenu($menu);
    $button->setPopupMode(QToolButton\ToolButtonPopupMode::INSTANT_POPUP);
    $button->setToolButtonStyle(Qt\ToolButtonStyle::TOOL_BUTTON_TEXT_BESIDE_ICON);
    $button->setAutoRaise(true);

    expect($button->menu())->toBe($menu)
        ->and($button->popupMode())->toBe(QToolButton\ToolButtonPopupMode::INSTANT_POPUP)
        ->and($button->toolButtonStyle())->toBe(Qt\ToolButtonStyle::TOOL_BUTTON_TEXT_BESIDE_ICON)
        ->and($button->autoRaise())->toBeTrue();
});

it('keeps one action of an exclusive group checked', function (): void {
    $menu = new QMenu('View');
    $group = new QActionGroup($menu);
    $actions = [];
    foreach (['None', 'Unimportant', 'All'] as $label) {
        $action = new QAction($label, $menu);
        $action->setCheckable(true);
        $actions[] = $group->addAction($action);
    }

    $actions[0]->setChecked(true);
    $actions[2]->setChecked(true);

    expect($actions[0]->isChecked())->toBeFalse()
        ->and($group->checkedAction())->toBe($actions[2]);
});

it('makes a scroll bar of its own with a range and a page', function (): void {
    $parent = new QWidget();
    $bar = new QScrollBar(Qt\Orientation::VERTICAL, $parent);
    $bar->setRange(0, 900);
    $bar->setPageStep(100);
    $bar->setValue(950);

    expect($bar->orientation())->toBe(Qt\Orientation::VERTICAL)
        ->and($bar->maximum())->toBe(900)
        ->and($bar->pageStep())->toBe(100)
        ->and($bar->value())->toBe(900);
});

it('reads the phase of a wheel event', function (): void {
    $at = new QPointF(1.0, 1.0);
    $event = new QWheelEvent($at, $at, new QPoint(0, 4), new QPoint(0, 0), 0, 0, Qt\ScrollPhase::SCROLL_BEGIN, false,
        Qt\MouseEventSource::MOUSE_EVENT_SYNTHESIZED_BY_SYSTEM, QPointingDevice::primaryPointingDevice());

    expect($event->phase())->toBe(Qt\ScrollPhase::SCROLL_BEGIN);
});

it('maps a widget point to the screen and back, and keeps an accessible name', function (): void {
    $window = new QWidget();
    $window->resize(200, 100);
    $window->show();
    processUntil(fn (): bool => $window->isVisible());

    $global = $window->mapToGlobal(new QPointF(10.0, 20.0));
    $window->setAccessibleName('Above');

    expect(xy($window->mapFromGlobal($global)))->toBe([10.0, 20.0])
        ->and($window->accessibleName())->toBe('Above');
    $window->close();
});

it('inserts a tab at an index', function (): void {
    $tabs = new QTabWidget();
    $tabs->addTab(new QWidget(), 'a');
    $tabs->addTab(new QWidget(), 'b');
    $page = new QWidget();

    expect($tabs->insertTab(1, $page, 'new'))->toBe(1)
        ->and($tabs->widget(1))->toBe($page)
        ->and($tabs->tabText(1))->toBe('new');
});
