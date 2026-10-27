<?php

declare(strict_types=1);

use QEventLoop\ProcessEventsFlag;

beforeEach(fn () => testApplication());

/** Process events for $seconds. */
function processFor(float $seconds): void
{
    $until = microtime(true) + $seconds;
    while (microtime(true) < $until) {
        QCoreApplication::processEvents(ProcessEventsFlag::ALL_EVENTS, 10);
    }
}

it('creates a main window with title, size and central widget', function (): void {
    $window = new QMainWindow();
    $central = new QWidget();
    $window->setWindowTitle('Probe');
    $window->resize(400, 300);
    $window->setCentralWidget($central);

    expect($window->windowTitle())->toBe('Probe')
        ->and($window->width())->toBe(400)
        ->and($window->height())->toBe(300)
        ->and($window->centralWidget())->toBe($central)
        ->and($central->parentWidget())->toBe($window)
        ->and($window->isWindow())->toBeTrue()
        ->and($central->isWindow())->toBeFalse()
        ->and($window->isVisible())->toBeFalse();

    $window->show();
    expect($window->isVisible())->toBeTrue();

    $window->hide();
    expect($window->isVisible())->toBeFalse();
});

it('sets and tests widget attributes', function (): void {
    $widget = new QWidget();

    expect($widget->testAttribute(Qt\WidgetAttribute::DELETE_ON_CLOSE))->toBeFalse();

    $widget->setAttribute(Qt\WidgetAttribute::DELETE_ON_CLOSE);
    expect($widget->testAttribute(Qt\WidgetAttribute::DELETE_ON_CLOSE))->toBeTrue();

    $widget->setAttribute(Qt\WidgetAttribute::DELETE_ON_CLOSE, false);
    expect($widget->testAttribute(Qt\WidgetAttribute::DELETE_ON_CLOSE))->toBeFalse();
});

it('deletes a delete-on-close window after close and reports it', function (): void {
    $window = new QMainWindow();
    $window->setAttribute(Qt\WidgetAttribute::DELETE_ON_CLOSE);
    $destroyed = false;
    QObject::connect($window, 'destroyed(QObject*)', function () use (&$destroyed): void {
        $destroyed = true;
    });

    $window->show();
    expect($window->close())->toBeTrue();

    processFor(0.05);
    expect($destroyed)->toBeTrue()
        ->and(fn () => $window->windowTitle())->toThrow(QtException::class, 'has been deleted');
});

it('hands the listed events of a watched object to the filter', function (): void {
    $window = new QWidget();
    $other = new QWidget();
    $seen = [];
    $filter = new QEventFilter(function (QObject $watched, QEvent $event) use (&$seen, $window): bool {
        if ($event->type() === QEvent\Type::CLOSE) {
            $seen[] = [$watched === $window, $event->type()];
        }

        return false;
    });
    $window->installEventFilter($filter);

    $window->show();
    $other->show();
    $window->setWindowTitle('not a close event');
    $other->close();

    expect($window->close())->toBeTrue()
        ->and($seen)->toBe([[true, QEvent\Type::CLOSE]]);

    $window->removeEventFilter($filter);
    $window->show();
    $window->close();
    expect($seen)->toHaveCount(1);
});

it('hands every event over', function (): void {
    $window = new QWidget();
    $types = [];
    $filter = new QEventFilter(function (QObject $watched, QEvent $event) use (&$types): bool {
        $types[] = $event->type();

        return false;
    });
    $window->installEventFilter($filter);
    $window->setWindowTitle('Probe');
    $window->show();
    $window->close();

    expect($types)->toContain(QEvent\Type::WINDOW_TITLE_CHANGE)
        ->and($types)->toContain(QEvent\Type::SHOW)
        ->and($types)->toContain(QEvent\Type::CLOSE);
});

it('stops the event its filter returns true for', function (): void {
    $click = function (QPushButton $button): int {
        $clicks = 0;
        $connection = QObject::connect($button, 'clicked(bool)', function () use (&$clicks): void { $clicks++; });
        $device = QPointingDevice::primaryPointingDevice();
        foreach ([QEvent\Type::MOUSE_BUTTON_PRESS, QEvent\Type::MOUSE_BUTTON_RELEASE] as $type) {
            QCoreApplication::sendEvent($button, new QMouseEvent($type, new QPointF(5.0, 5.0), new QPointF(5.0, 5.0), 1, $type === QEvent\Type::MOUSE_BUTTON_PRESS ? 1 : 0, 0, $device));
        }
        QObject::disconnect($connection);

        return $clicks;
    };
    $plain = new QPushButton('plain');
    $plain->resize(80, 30);
    $stopped = new QPushButton('stopped');
    $stopped->resize(80, 30);
    $filter = new QEventFilter(fn (QObject $watched, QEvent $event): bool => $event->type() === QEvent\Type::MOUSE_BUTTON_PRESS);
    $stopped->installEventFilter($filter);

    expect($click($plain))->toBe(1)
        ->and($click($stopped))->toBe(0)
        ->and(fn () => new QEventFilter('no_such_function'))->toThrow(TypeError::class);
});

it('shows a non-modal message box', function (): void {
    $window = new QMainWindow();
    $box = new QMessageBox($window);
    $box->setWindowTitle('About');
    $box->setText('Probe');
    $box->setInformativeText('0.10');
    $box->setModal(false);
    $box->show();

    expect($box->text())->toBe('Probe')
        ->and($box->informativeText())->toBe('0.10')
        ->and($box->isModal())->toBeFalse()
        ->and($box->isVisible())->toBeTrue()
        ->and($box->parentWidget())->toBe($window);

    $box->done(1);
    expect($box->result())->toBe(1)
        ->and($box->isVisible())->toBeFalse();
});

it('makes a child window with window flags and a window modality', function (): void {
    $main = new QMainWindow();
    $child = new QMainWindow();
    $child->setParent($main);

    expect($child->isWindow())->toBeFalse();

    $child->setWindowFlags(Qt\WindowType::DIALOG);
    $child->setWindowModality(Qt\WindowModality::WINDOW_MODAL);

    expect($child->isWindow())->toBeTrue()
        ->and($child->parentWidget())->toBe($main)
        ->and($child->windowFlags() & Qt\WindowType::WINDOW_TYPE_MASK->value)->toBe(Qt\WindowType::DIALOG->value)
        ->and($child->windowModality())->toBe(Qt\WindowModality::WINDOW_MODAL);
});

it('reads the active modal widget: a shown window-modal child, then none', function (): void {
    $main = new QMainWindow();
    $main->show();
    $child = new QMainWindow();
    $child->setParent($main);
    $child->setWindowFlags(Qt\WindowType::DIALOG);
    $child->setWindowModality(Qt\WindowModality::WINDOW_MODAL);

    expect(QApplication::activeModalWidget())->toBeNull();

    $child->show();
    expect(processUntil(fn (): bool => QApplication::activeModalWidget() === $child))->toBeTrue();

    $child->hide();
    expect(processUntil(fn (): bool => is_null(QApplication::activeModalWidget())))->toBeTrue();
    $main->close();
});

it('adds message box buttons, sets the default and reads the clicked one', function (): void {
    $box = new QMessageBox();
    $save = $box->addButton('Save', QMessageBox\ButtonRole::ACTION_ROLE);
    $box->addButton('Cancel', QMessageBox\ButtonRole::ACTION_ROLE);
    $box->setDefaultButton($save);
    $box->setEscapeButton(null);

    expect($save)->toBeInstanceOf(QPushButton::class)
        ->and($save->text())->toBe('Save')
        ->and($save->isDefault())->toBeTrue()
        ->and($box->clickedButton())->toBeNull();

    $box->setDefaultButton(null);
    $save->click();

    expect($box->clickedButton())->toBe($save);
});

it('sets and reads back a message box icon and check box', function (): void {
    $box = new QMessageBox();
    expect($box->icon())->toBe(QMessageBox\Icon::NO_ICON)
        ->and($box->checkBox())->toBeNull();

    $box->setIcon(QMessageBox\Icon::WARNING);
    $check = new QCheckBox('Don\'t ask again');
    $box->setCheckBox($check);

    expect($box->icon())->toBe(QMessageBox\Icon::WARNING)
        ->and($box->checkBox())->toBe($check)
        ->and($check->text())->toBe('Don\'t ask again');
});

it('sets and reads back a file dialog\'s name filters and QDir filter', function (): void {
    $dialog = new QFileDialog();
    $dialog->setNameFilters(['Text (*.txt *.md)', 'All (*)']);
    $dialog->setFilter(QDir\Filter::ALL_ENTRIES->value | QDir\Filter::HIDDEN->value);

    expect($dialog->nameFilters())->toBe(['Text (*.txt *.md)', 'All (*)'])
        ->and($dialog->filter() & QDir\Filter::HIDDEN->value)->toBe(QDir\Filter::HIDDEN->value)
        ->and($dialog->filter() & QDir\Filter::ALL_ENTRIES->value)->toBe(QDir\Filter::ALL_ENTRIES->value);

    $dialog->setFilter(QDir\Filter::DIRS);
    expect($dialog->filter())->toBe(QDir\Filter::DIRS->value);
});

it('backs the dialog enums with the Qt values', function (): void {
    expect(QMessageBox\ButtonRole::cases())->toHaveCount(11)
        ->and(QMessageBox\ButtonRole::INVALID_ROLE->value)->toBe(-1)
        ->and(QMessageBox\ButtonRole::N_ROLES->value)->toBe(9)
        ->and(QFileDialog\FileMode::DIRECTORY->value)->toBe(2)
        ->and(QFileDialog\FileMode::EXISTING_FILES->value)->toBe(3)
        ->and(QFileDialog\AcceptMode::ACCEPT_SAVE->value)->toBe(1)
        ->and(QFileDialog\Option::SHOW_DIRS_ONLY->value)->toBe(1)
        ->and(QClipboard\Mode::CLIPBOARD->value)->toBe(0);
});

it('sets a file dialog and reads back the file it selects', function (): void {
    $dialog = new QFileDialog(null, 'Pick', __DIR__);
    foreach (QFileDialog\FileMode::cases() as $mode) {
        $dialog->setFileMode($mode);
    }
    $dialog->setOption(QFileDialog\Option::SHOW_DIRS_ONLY);
    $dialog->setOption(QFileDialog\Option::SHOW_DIRS_ONLY, false);
    $dialog->setFileMode(QFileDialog\FileMode::ANY_FILE);
    // An unshown native dialog keeps no selection; Qt's own dialog holds it at once.
    $dialog->setOption(QFileDialog\Option::DONT_USE_NATIVE_DIALOG);
    $dialog->setDirectory(__DIR__);
    $dialog->setAcceptMode(QFileDialog\AcceptMode::ACCEPT_SAVE);
    $dialog->selectFile('a.txt');

    expect($dialog)->toBeInstanceOf(QDialog::class)
        ->and($dialog->selectedFiles())->toBe([__DIR__ . '/a.txt']);
});

it('finds the window of a widget', function (): void {
    $window = new QMainWindow();
    $central = new QWidget();
    $label = new QLabel('x', $central);
    $window->setCentralWidget($central);

    expect($label->window())->toBe($window)
        ->and($window->window())->toBe($window);
});

it('sets and reads a focus policy', function (): void {
    $widget = new QWidget();

    expect($widget->focusPolicy())->toBe(Qt\FocusPolicy::NO_FOCUS);
    $widget->setFocusPolicy(Qt\FocusPolicy::STRONG_FOCUS);
    expect($widget->focusPolicy())->toBe(Qt\FocusPolicy::STRONG_FOCUS);
});

it('moves Tab focus in the order setTabOrder gives', function (): void {
    $window = new QWidget();
    $a = new QLineEdit('', $window);
    $b = new QLineEdit('', $window);
    $c = new QLineEdit('', $window);
    QWidget::setTabOrder($a, $c);
    $window->show();
    $window->activateWindow();
    $a->setFocus();
    processUntil(fn (): bool => QApplication::focusWidget() === $a);

    QCoreApplication::sendEvent($a, new QKeyEvent(QEvent\Type::KEY_PRESS, Qt\Key::TAB->value, 0));

    expect(QApplication::focusWidget())->toBe($c)
        ->and($b->hasFocus())->toBeFalse();
    $window->close();
});

it('takes keyboard focus away with clearFocus', function (): void {
    $window = new QWidget();
    $edit = new QLineEdit('', $window);
    $window->show();
    $window->activateWindow();
    $edit->setFocus();
    processUntil(fn (): bool => $edit->hasFocus());

    $edit->clearFocus();

    expect($edit->hasFocus())->toBeFalse();
    $window->close();
});
