<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('creates, names and parents objects', function (): void {
    $parent = new QObject();
    $child = new QObject($parent);
    $child->setObjectName('child');

    expect($child->objectName())->toBe('child')
        ->and($child->parent())->toBe($parent)
        ->and($child->inherits('QObject'))->toBeTrue()
        ->and($child->inherits('QTimer'))->toBeFalse()
        ->and($child->pointer())->toBeGreaterThan(0);

    $child->setParent(null);
    expect($child->parent())->toBeNull();
});

it('names the thread an object lives in', function (): void {
    $object = new QObject();

    expect($object->thread())->toBeInstanceOf(QThread::class)
        ->and($object->thread())->toBe(QThread::currentThread())
        ->and((new QThread())->thread())->toBe(QThread::currentThread());
});

it('throws on a wrapper whose object Qt deleted', function (): void {
    $parent = new QObject();
    $child = new QObject($parent);

    unset($parent); // PHP owned the parentless parent: deleting it deletes the child

    expect(fn () => $child->objectName())->toThrow(QtException::class, 'has been deleted');
});

it('deletes later through posted events', function (): void {
    $object = new QObject();
    $object->deleteLater();
    QCoreApplication::sendPostedEvents(null, DEFERRED_DELETE);

    expect(fn () => $object->objectName())->toThrow(QtException::class);
});

it('connects a signal by signature and passes its arguments', function (): void {
    $object = new QObject();
    $names = [];

    $connection = QObject::connect($object, 'objectNameChanged(QString)', function (string $name) use (&$names): void {
        $names[] = $name;
    });

    $object->setObjectName('first');
    $object->setObjectName('second');

    expect($connection->isValid())->toBeTrue()
        ->and($names)->toBe(['first', 'second'])
        ->and(QObject::disconnect($connection))->toBeTrue()
        ->and($connection->isValid())->toBeFalse();

    $object->setObjectName('third');
    expect($names)->toBe(['first', 'second'])
        ->and(QObject::disconnect($connection))->toBeFalse();
});

it('boxes QObject* signal arguments as the same PHP object', function (): void {
    $object = new QObject();
    $seen = null;

    QObject::connect($object, 'destroyed(QObject*)', function (?QObject $destroyed) use (&$seen): void {
        $seen = $destroyed;
    });

    $object->deleteLater();
    QCoreApplication::sendPostedEvents(null, DEFERRED_DELETE);

    expect($seen)->toBe($object);
});

it('answers a signal the class does not have with Qt\'s invalid connection', function (): void {
    $connection = QObject::connect(new QObject(), 'timeout()', fn () => null);

    expect($connection)->toBeInstanceOf(QMetaObject\Connection::class)
        ->and($connection->isValid())->toBeFalse()
        ->and(QObject::disconnect($connection))->toBeFalse()
        ->and(fn () => QObject::connect(new QObject(), 'destroyed(QObject*)', 'no_such_function'))->toThrow(TypeError::class);
});

it('lets a disconnect inside the slot stop further calls', function (): void {
    $object = new QObject();
    $calls = 0;
    $connection = null;

    $connection = QObject::connect($object, 'objectNameChanged(QString)', function () use (&$calls, &$connection): void {
        $calls++;
        QObject::disconnect($connection);
    });

    $object->setObjectName('a');
    $object->setObjectName('b');

    expect($calls)->toBe(1);
});

it('invokes a method or emits a signal by name', function (): void {
    testApplication();
    $edit = new QLineEdit();
    $returns = 0;
    QObject::connect($edit, 'returnPressed()', function () use (&$returns): void { $returns++; });

    $direct = Qt\ConnectionType::DIRECT_CONNECTION;

    expect(QMetaObject::invokeMethod($edit, 'returnPressed', $direct))->toBeTrue()
        ->and($returns)->toBe(1)
        ->and(QMetaObject::invokeMethod($edit, 'clear', $direct))->toBeTrue()
        ->and(QMetaObject::invokeMethod($edit, 'noSuchMember', $direct))->toBeFalse()
        ->and(fn () => new QMetaObject())->toThrow(Error::class);
});

it('queues an invocation for the event loop', function (): void {
    testApplication();
    $slider = new QSlider(Qt\Orientation::HORIZONTAL);

    expect(QMetaObject::invokeMethod($slider, 'setValue', Qt\ConnectionType::QUEUED_CONNECTION, 42))->toBeTrue()
        ->and($slider->value())->toBe(0);

    QCoreApplication::processEvents();

    expect($slider->value())->toBe(42);
});

it('invokes a member with arguments converted to its parameter types', function (): void {
    testApplication();
    $slider = new QSlider(Qt\Orientation::HORIZONTAL);
    $edit = new QDateEdit();
    $edit->setCalendarPopup(true);
    $clicked = [];
    QObject::connect($edit->calendarWidget(), 'clicked(QDate)', function (QDate $date) use (&$clicked): void { $clicked[] = $date->toString(Qt\DateFormat::ISO_DATE); });

    $direct = Qt\ConnectionType::DIRECT_CONNECTION;

    expect(QMetaObject::invokeMethod($slider, 'setValue', $direct, 42))->toBeTrue()
        ->and($slider->value())->toBe(42)
        ->and(QMetaObject::invokeMethod($edit->calendarWidget(), 'clicked', $direct, new QDate(2026, 10, 2)))->toBeTrue()
        ->and($clicked)->toBe(['2026-10-02'])
        ->and(QMetaObject::invokeMethod($slider, 'setValue', $direct, 1, 2))->toBeFalse()
        ->and(fn () => QMetaObject::invokeMethod($slider, 'setValue', $direct, 'many'))->toThrow(TypeError::class)
        ->and(fn () => QMetaObject::invokeMethod($edit->calendarWidget(), 'clicked', $direct, '2026-10-02'))->toThrow(TypeError::class, 'must be of type QDate');
});

it('hands value-class signal arguments over as their classes, both ways', function (): void {
    testApplication();
    $direct = Qt\ConnectionType::DIRECT_CONNECTION;
    $widget = new QWidget();
    $player = new QMediaPlayer();
    $got = [];
    QObject::connect($widget, 'customContextMenuRequested(QPoint)', function (QPoint $pos) use (&$got): void { $got[] = [$pos->x(), $pos->y()]; });
    QObject::connect($player, 'sourceChanged(QUrl)', function (QUrl $url) use (&$got): void { $got[] = $url->toString(); });

    expect(QMetaObject::invokeMethod($widget, 'customContextMenuRequested', $direct, new QPoint(3, 4)))->toBeTrue()
        ->and(QMetaObject::invokeMethod($player, 'sourceChanged', $direct, new QUrl('https://example.com/clip.mp4')))->toBeTrue()
        ->and($got)->toBe([[3, 4], 'https://example.com/clip.mp4'])
        ->and(fn () => QMetaObject::invokeMethod($widget, 'customContextMenuRequested', $direct, new QPointF(3.0, 4.0)))->toThrow(TypeError::class, 'must be of type QPoint');
});
