<?php

declare(strict_types=1);

// Site spacer-owned (outcome 1): a spacer item a layout already owns, added to a second layout.
// Both layouts delete it, the second time freed memory. Task 1 probe P8.

beforeEach(fn () => requireProbeBuild());

it('refuses a spacer another layout owns, which is deleted twice without the refusal', function (): void {
    $code = <<<'PHP'
        $first = new QGridLayout();
        $second = new QGridLayout();
        $spacer = new QSpacerItem(1, 1);
        $first->addItem($spacer, 0, 0);
        $second->addItem($spacer, 0, 0);
        unset($first, $second);
        QCoreApplication::processEvents();

        return 'deleted';
    PHP;

    $kept = qtChild($code, null);
    $off = qtChild($code, 'spacer-owned');

    expect($kept['signal'])->toBeNull()
        ->and($kept['threw'])->toContain('already belongs to a layout')
        ->and($off['signal'])->toBeIn([PROBE_SIGBUS, PROBE_SIGSEGV]);
});
