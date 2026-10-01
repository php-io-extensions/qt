<?php

declare(strict_types=1);

/*
 * Every stub declaration is what the loaded extension exposes: the stubs are
 * the source of truth, so a binding missing from the build fails here.
 */

function stubDeclarations(): array
{
    $declared = ['functions' => [], 'classes' => []];

    foreach (glob(__DIR__ . '/../stubs/*.stub.php') as $stub) {
        $namespace = '';
        $class = null;
        foreach (file($stub) as $line) {
            if (preg_match('/^namespace\s+(\w+)/', $line, $m)) {
                $namespace = $m[1] . '\\';
            } elseif (preg_match('/^namespace\s*\{/', $line)) {
                $namespace = '';
            } elseif (preg_match('/^\s*(?:final\s+)?(?:class|enum)\s+(\w+)/', $line, $m)) {
                $class = $namespace . $m[1];
                $declared['classes'][$class] ??= [];
            } elseif (preg_match('/^function\s+(\w+)/', $line, $m)) {
                $declared['functions'][] = $m[1];
            } elseif ($class !== null && preg_match('/^\s+(?:public|private)\s+(?:static\s+)?function\s+(\w+)/', $line, $m)) {
                $declared['classes'][$class][] = $m[1];
            }
        }
    }

    return $declared;
}

it('exposes every function, class, enum and method the stubs declare', function (): void {
    $declared = stubDeclarations();

    expect($declared['classes'])->toHaveKeys(['QObject', 'QMetaObject\Connection', 'Qt\TimerType', 'QSocketNotifier\Type', 'QEventLoop\ProcessEventsFlag']);

    foreach ($declared['functions'] as $function) {
        expect(function_exists($function))->toBeTrue("{$function}() is missing");
    }

    foreach ($declared['classes'] as $class => $methods) {
        expect(class_exists($class) || enum_exists($class))->toBeTrue("{$class} is missing");

        foreach ($methods as $method) {
            expect(method_exists($class, $method))->toBeTrue("{$class}::{$method}() is missing");
        }
    }
});

it('reports its version and the Qt runtime', function (): void {
    expect(phpversion('qt'))->toBe('0.10.0')
        ->and(qVersion())->toStartWith('6.');
});

it('keeps the native class hierarchy', function (): void {
    expect(get_parent_class(QApplication::class))->toBe(QGuiApplication::class)
        ->and(get_parent_class(QGuiApplication::class))->toBe(QCoreApplication::class)
        ->and(get_parent_class(QCoreApplication::class))->toBe(QObject::class)
        ->and(get_parent_class(QTimer::class))->toBe(QObject::class)
        ->and(get_parent_class(QSocketNotifier::class))->toBe(QObject::class)
        ->and(get_parent_class(QAbstractEventDispatcher::class))->toBe(QObject::class)
        ->and(get_parent_class(QtException::class))->toBe(RuntimeException::class);
});

it('refuses to clone or serialize a wrapper', function (): void {
    $object = new QObject();

    expect(fn () => clone $object)->toThrow(Error::class)
        ->and(fn () => serialize($object))->toThrow(Exception::class)
        ->and(fn () => new QMetaObject\Connection())->toThrow(Error::class);
});
