<?php

declare(strict_types=1);

// Site second-application-macos (outcome 2): a second QCoreApplication in a process. On macOS the
// process dies at teardown (SIGSEGV); on Linux the second constructor hangs, which is none of the
// three outcomes, so the check compiles out there. Task 1 probe P3.

beforeEach(function (): void {
    requireProbeBuild();
    if (PHP_OS_FAMILY !== 'Darwin') {
        $this->markTestSkipped('the site is macOS only: on Linux Qt hangs in the second constructor and the check compiles out');
    }
});

it('refuses a second application, which Qt dies on at teardown without the refusal', function (): void {
    $code = '$n = 1; $second = new QApplication($n, [PHP_BINARY]); unset($second); return "made";';

    $kept = qtChild($code, null);
    $off = qtChild($code, 'second-application-macos');

    expect($kept['signal'])->toBeNull()
        ->and($kept['threw'])->toContain('already exists')
        ->and($off['signal'])->toBe(PROBE_SIGSEGV);
});
