<?php

declare(strict_types=1);

beforeEach(fn () => testApplication());

it('reports its descriptor and type', function (): void {
    [$read] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $notifier = new QSocketNotifier($read, QSocketNotifier\Type::READ);

    expect($notifier->socket())->toBeGreaterThan(2)
        ->and($notifier->type())->toBe(QSocketNotifier\Type::READ)
        ->and($notifier->isEnabled())->toBeTrue()
        ->and($notifier->isValid())->toBeTrue();

    $notifier->setEnabled(false);
    expect($notifier->isEnabled())->toBeFalse();
});

it('emits activated when the descriptor turns readable', function (string $as): void {
    [$read, $write] = stream_socket_pair(STREAM_PF_UNIX, STREAM_SOCK_STREAM, 0);
    $notifier = new QSocketNotifier($as === 'Socket' ? socket_import_stream($read) : $read, QSocketNotifier\Type::READ);
    $seen = null;

    QObject::connect($notifier, 'activated(QSocketDescriptor,QSocketNotifier::Type)', function (int $socket, int $type) use (&$seen, $notifier): void {
        $seen ??= [$socket, $type];
        $notifier->setEnabled(false);
    });

    fwrite($write, 'x');

    expect(processUntil(function () use (&$seen): bool { return $seen !== null; }))->toBeTrue()
        ->and($seen)->toBe([$notifier->socket(), QSocketNotifier\Type::READ->value]);
})->with(['stream', 'Socket']);

it('rejects what is not a descriptor', function (): void {
    expect(fn () => new QSocketNotifier('3', QSocketNotifier\Type::READ))->toThrow(TypeError::class)
        ->and(fn () => new QSocketNotifier(-1, QSocketNotifier\Type::READ))->toThrow(ValueError::class);
});
