<?php

declare(strict_types=1);

// Site table-item-range (outcome 1): QTableWidget::setItem with a row or column outside the
// table. Qt drops the item without storing it but leaves its view pointer on the table, so the
// item reads the freed table once the table goes. Task 1 probe P6.

beforeEach(fn () => requireProbeBuild());

it('refuses an item outside the table, whose later read faults without the refusal', function (): void {
    $code = <<<'PHP'
        $table = new QTableWidget(2, 2);
        $item = new QTableWidgetItem('x');
        $table->setItem(5, 5, $item);
        unset($table);
        QCoreApplication::processEvents();

        return $item->row();
    PHP;

    $kept = qtChild($code, null, gmalloc: true);
    $off = qtChild($code, 'table-item-range', gmalloc: true);

    expect($kept['signal'])->toBeNull()
        ->and($kept['threw'])->toContain('must be a row of the table')
        ->and($off['signal'])->toBe(PROBE_SIGSEGV);
});
