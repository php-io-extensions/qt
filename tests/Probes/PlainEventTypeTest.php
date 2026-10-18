<?php

declare(strict_types=1);

// Site qevent-plain-type (outcome 1): a plain QEvent of a type Qt delivers as a subclass. The
// receiver casts it to that subclass and reads past the plain event. Task 1 probe P9.

beforeEach(fn () => requireProbeBuild());

it('refuses a plain event of a mouse type, which the widget reads past without the refusal', function (): void {
    $code = <<<'PHP'
        $widget = new QWidget();
        $widget->show();
        QCoreApplication::processEvents();

        return QCoreApplication::sendEvent($widget, new QEvent(QEvent\Type::MOUSE_BUTTON_PRESS));
    PHP;

    $kept = qtChild($code, null);
    $off = qtChild($code, 'qevent-plain-type');

    expect($kept['signal'])->toBeNull()
        ->and($kept['threw'])->toContain('subclass')
        ->and($off['signal'])->toBe(PROBE_SIGSEGV);
});
