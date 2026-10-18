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

it('nests a menu under a menu by title', function (): void {
    $bar = new QMenuBar();
    $menu = $bar->addMenu('Tools');
    $sub = $menu->addMenu('Nested');

    expect($sub)->toBeInstanceOf(QMenu::class)
        ->and($sub->title())->toBe('Nested')
        ->and($sub->parentWidget())->toBe($menu)
        ->and($menu->isEmpty())->toBeFalse();

    $bar->clear();
});

it('pops a menu up at a global point without waiting for a choice', function (): void {
    $menu = new QMenu();
    $menu->addAction('Download');

    $menu->popup(new QPoint(40, 60));
    $shown = $menu->isVisible();
    $menu->hide();

    expect($shown)->toBeTrue()
        ->and($menu->isVisible())->toBeFalse();
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
    $action->setShortcut(QKeySequence::fromString('Ctrl+Q'));

    expect($action->text())->toBe('Quit')
        ->and($action->menuRole())->toBe(QAction\MenuRole::QUIT_ROLE)
        ->and($action->shortcut()->toString())->toBe('Ctrl+Q');

    $action->setShortcut(new QKeySequence(''));
    expect($action->shortcut()->isEmpty())->toBeTrue();
});
