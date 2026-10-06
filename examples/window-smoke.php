<?php

declare(strict_types=1);

/*
 * A window with a menu bar on a real display, macOS or Linux:
 *
 *   php examples/window-smoke.php [--hold=SECONDS]
 *
 * 1. a QMainWindow comes up; an event filter sees it activate
 * 2. its menuBar() gets App (About, Quit with their roles) and View (Refresh, Show Grid checkable);
 *    on macOS Qt shows the active window's bar in the global menu bar
 * 3. triggering Refresh and toggling Show Grid reach PHP through triggered(bool) and toggled(bool)
 * 4. close() on a delete-on-close window: the filter sees CLOSE, Qt deletes it, destroyed() fires
 *
 * --hold leaves the window up that long before step 4, to click around in.
 * Prints SMOKE_OK when every step held.
 */

use QEventLoop\ProcessEventsFlag;

$hold = 0.0;
foreach (array_slice($argv, 1) as $arg) {
    if (str_starts_with($arg, '--hold=')) {
        $hold = (float) substr($arg, 7);
    }
}

function check(bool $ok, string $what): void
{
    printf("%s %s\n", $ok ? 'ok  ' : 'FAIL', $what);
    if (! $ok) {
        exit(1);
    }
}

function process(float $seconds): void
{
    $until = microtime(true) + $seconds;
    while (microtime(true) < $until) {
        QCoreApplication::processEvents(ProcessEventsFlag::ALL_EVENTS, 10);
    }
}

$app = new QApplication([PHP_BINARY]);
QGuiApplication::setQuitOnLastWindowClosed(false);
$log = [];

// 1. window
$window = new QMainWindow();
$window->setWindowTitle('ext-qt window smoke');
$window->resize(480, 320);
$window->setAttribute(Qt\WidgetAttribute::DELETE_ON_CLOSE);
$window->setCentralWidget(new QWidget());

$filter = new QEventFilter(function (QObject $watched, QEvent\Type|int $type) use (&$log): bool {
    $log[] = $type instanceof QEvent\Type ? $type->name : (string) $type;

    return false;
}, [QEvent\Type::WINDOW_ACTIVATE, QEvent\Type::CLOSE]);
$window->installEventFilter($filter);
QObject::connect($window, 'destroyed(QObject*)', function () use (&$log): void {
    $log[] = 'destroyed';
});

// 2. menu bar
$bar = $window->menuBar();
$appMenu = $bar->addMenu('App');
$about = $appMenu->addAction('About');
$about->setMenuRole(QAction\MenuRole::ABOUT_ROLE);
$appMenu->addSeparator();
$quit = $appMenu->addAction('Quit');
$quit->setMenuRole(QAction\MenuRole::QUIT_ROLE);
$quit->setShortcut('Ctrl+Q');

$view = $bar->addMenu('View');
$refresh = $view->addAction('Refresh');
$refresh->setShortcut('Ctrl+R');
$grid = $view->addAction('Show Grid');
$grid->setCheckable(true);

QObject::connect($refresh, 'triggered(bool)', function () use (&$log): void {
    $log[] = 'refresh';
});
QObject::connect($grid, 'toggled(bool)', function (bool $on) use (&$log): void {
    $log[] = 'grid:' . ($on ? 'on' : 'off');
});
QObject::connect($about, 'triggered(bool)', function () use ($window): void {
    $box = new QMessageBox($window);
    $box->setWindowTitle('About');
    $box->setText('ext-qt window smoke');
    $box->setModal(false);
    $box->show();
});

$window->show();
$window->activateWindow();
$window->raise();
process(0.5);
check($window->isVisible(), 'window is up');
check(in_array('WINDOW_ACTIVATE', $log, true), 'the filter saw it activate');
check($bar->parentWidget() === $window && $view->title() === 'View', 'menu bar holds App and View');

// 3. actions
$refresh->trigger();
$grid->trigger();
check(in_array('refresh', $log, true), 'Refresh reached PHP through triggered(bool)');
check($grid->isChecked() && in_array('grid:on', $log, true), 'Show Grid reached PHP through toggled(bool) and is checked');

if ($hold > 0) {
    echo "holding for {$hold}s: try the menu\n";
    process($hold);
}

// 4. close
$window->close();
process(0.1);
check(in_array('CLOSE', $log, true), 'the filter saw the close');
check(in_array('destroyed', $log, true), 'Qt deleted the window and destroyed() fired');

echo "SMOKE_OK\n";
