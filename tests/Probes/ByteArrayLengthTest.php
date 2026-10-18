<?php

declare(strict_types=1);

// Site qbytearray-string-length (outcome 1): QByteArray(data, size) with a size beyond the PHP
// string. Qt copies size bytes from the string's buffer and reads past its end.

beforeEach(function (): void {
    requireProbeBuild();
    if (PHP_OS_FAMILY !== 'Darwin') {
        $this->markTestSkipped('the probe faults its over-read at a libgmalloc guard page, which only macOS has');
    }
});

it('refuses a size beyond the string, which Qt reads past without the refusal', function (): void {
    $code = '$bytes = new QByteArray(str_repeat("x", 16), 1 << 20); return $bytes->size();';

    $kept = qtChild($code, null, gmalloc: true, app: false);
    $off = qtChild($code, 'qbytearray-string-length', gmalloc: true, app: false);

    expect($kept['signal'])->toBeNull()
        ->and($kept['threw'])->toContain('must not be greater than the string')
        ->and($off['signal'])->toBe(PROBE_SIGSEGV);
});
