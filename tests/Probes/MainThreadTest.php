<?php

declare(strict_types=1);

// Site main-thread-macos (outcome 2): an application, widget or window made off the process main
// thread on macOS, where Qt's cocoa platform calls AppKit, which raises an uncaught NSException.
// Task 1 probe P1. On Linux the same calls return (widgets hang, which is none of the three
// outcomes), and the gate compiles out.

beforeEach(function (): void {
    requireProbeBuild();
    if (PHP_OS_FAMILY !== 'Darwin') {
        $this->markTestSkipped('the site is macOS only: on Linux the gate compiles out');
    }
    if (! PHP_ZTS) {
        $this->markTestSkipped('needs a ZTS PHP: only a parallel\Runtime worker runs PHP off the main thread');
    }
    if (! is_file(probeExtension('parallel'))) {
        $this->markTestSkipped('needs ext-parallel at '.probeExtension('parallel').' (or env PHPQT_PROBE_PARALLEL)');
    }
});

it('refuses the call off the main thread, which AppKit aborts on without the refusal', function (string $worker, bool $app): void {
    $code = <<<PHP
        return (new parallel\\Runtime())->run(function (): string {
            {$worker}
            QCoreApplication::processEvents();

            return 'worker finished';
        })->value();
    PHP;

    $kept = qtChild($code, null, parallel: true, app: $app);
    $off = qtChild($code, 'main-thread-macos', parallel: true, app: $app);

    expect($kept['signal'])->toBeNull()
        ->and($kept['threw'])->toContain('must be called on the main thread')
        ->and($off['signal'])->toBe(PROBE_SIGABRT);
})->with([
    'the first application' => ['$n = 1; $a = new QApplication($n, ["w"]); (new QWidget())->show();', false],
    'a widget' => ['(new QWidget())->show();', true],
    'a window' => ['(new QWindow())->show();', true],
    'a menu bar' => ['new QMenuBar();', true],
    'an OpenGL widget' => ['$w = new QOpenGLWidget(); $w->show();', true],
]);
