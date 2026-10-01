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

it('rejects a signal the class does not have', function (): void {
    expect(fn () => QObject::connect(new QObject(), 'timeout()', fn () => null))->toThrow(ValueError::class)
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
