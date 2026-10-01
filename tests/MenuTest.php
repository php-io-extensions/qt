<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('builds a menu bar with menus, actions and separators', function (): void {
    $window = new QMainWindow();
    $bar = $window->menuBar();
    $app = $bar->addMenu('App');
    $about = $app->addAction('About');
    $separator = $app->addSeparator();
    $quit = $app->addAction('Quit');

    expect($bar)->toBeInstanceOf(QMenuBar::class)
        ->and($window->menuBar())->toBe($bar)
        ->and($bar->parentWidget())->toBe($window)
        ->and($app)->toBeInstanceOf(QMenu::class)
        ->and($app->title())->toBe('App')
        ->and($app->isEmpty())->toBeFalse()
        ->and($about->text())->toBe('About')
        ->and($separator->isSeparator())->toBeTrue()
        ->and($quit->isSeparator())->toBeFalse()
        ->and($app->menuAction()->text())->toBe('App');

    $app->clear();
    expect($app->isEmpty())->toBeTrue();
});

it('adds a menu made separately and hands back its menu action', function (): void {
    $bar = new QMenuBar();
    $menu = new QMenu('Tools');

    $action = $bar->addMenu($menu);
    $sub = $menu->addMenu('Nested');

    expect($action)->toBeInstanceOf(QAction::class)
        ->and($action)->toBe($menu->menuAction())
        ->and($sub)->toBeInstanceOf(QMenu::class)
        ->and($sub->title())->toBe('Nested')
        ->and(fn () => $bar->addMenu(new QWidget()))->toThrow(TypeError::class);

    $bar->clear();
});

it('toggles a checkable action and reports it through toggled(bool)', function (): void {
    $action = new QAction('Show Grid');
    $states = [];
    QObject::connect($action, 'toggled(bool)', function (bool $on) use (&$states): void {
        $states[] = $on;
    });

    $action->setCheckable(true);
    $action->trigger();
    $action->toggle();
    $action->setChecked(true);

    expect($states)->toBe([true, false, true])
        ->and($action->isCheckable())->toBeTrue()
        ->and($action->isChecked())->toBeTrue();
});

it('triggers a plain action and reports it through triggered(bool)', function (): void {
    $action = new QAction('Refresh');
    $hits = 0;
    QObject::connect($action, 'triggered(bool)', function (bool $checked) use (&$hits): void {
        $hits++;
    });

    $action->trigger();
    $action->setEnabled(false);
    $action->trigger();

    expect($hits)->toBe(1)
        ->and($action->isEnabled())->toBeFalse();
});

it('sets roles, shortcuts and text', function (): void {
    $action = new QAction();
    $action->setText('Quit');
    $action->setMenuRole(QAction\MenuRole::QUIT_ROLE);
    $action->setShortcut('Ctrl+Q');

    expect($action->text())->toBe('Quit')
        ->and($action->menuRole())->toBe(QAction\MenuRole::QUIT_ROLE)
        ->and($action->shortcut())->toBe('Ctrl+Q')
        ->and(fn () => $action->setShortcut('Ctrl+Nope'))->toThrow(ValueError::class)
        ->and($action->shortcut())->toBe('Ctrl+Q');

    $action->setShortcut('');
    expect($action->shortcut())->toBe('');
});
