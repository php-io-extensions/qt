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
    $filter = new QEventFilter(function (QObject $watched, QEvent\Type|int $type) use (&$seen, $window): bool {
        $seen[] = [$watched === $window, $type];

        return false;
    }, [QEvent\Type::CLOSE]);
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

it('hands every event over when no types are listed', function (): void {
    $window = new QWidget();
    $types = [];
    $filter = new QEventFilter(function (QObject $watched, QEvent\Type|int $type) use (&$types): bool {
        $types[] = $type;

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

it('refuses filter types that are not event types', function (): void {
    expect(fn () => new QEventFilter(fn () => false, ['close']))->toThrow(TypeError::class)
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
