<?php

declare(strict_types=1);

use QEventLoop\ProcessEventsFlag;

if (! extension_loaded('qt')) {
    throw new RuntimeException('The qt extension is not loaded; run pest with -d extension=/path/to/qt.so');
}

/** The one application a process may hold. */
function testApplication(): QApplication
{
    static $app = null;

    if ($app === null) {
        $argc = 1;
        $app = new QApplication($argc, [PHP_BINARY]);
        QGuiApplication::setQuitOnLastWindowClosed(false);
    }

    return $app;
}

/** processEvents(WaitForMoreEvents) until $done() holds; a guard timer bounds the wait at $limitMs. */
function processUntil(callable $done, int $limitMs = 2000): bool
{
    $expired = false;
    $guard = new QTimer();
    $guard->setSingleShot(true);
    $connection = QObject::connect($guard, 'timeout()', function () use (&$expired): void {
        $expired = true;
    });
    $guard->start($limitMs);

    while (! $done() && ! $expired) {
        QCoreApplication::processEvents(ProcessEventsFlag::WAIT_FOR_MORE_EVENTS);
    }

    $guard->stop();
    QObject::disconnect($connection);

    return $done();
}

/** @return array{int, int} */
function wh(QSize $size): array
{
    return [$size->width(), $size->height()];
}

/** @return array{int|float, int|float} */
function xy(QPoint|QPointF $point): array
{
    return [$point->x(), $point->y()];
}

/** Signal numbers a child process dies by (SIGBUS is 10 on macOS, 7 on Linux). */
const PROBE_SIGABRT = 6;
const PROBE_SIGBUS = PHP_OS_FAMILY === 'Darwin' ? 10 : 7;
const PROBE_SIGSEGV = 11;

/**
 * Skips a tests/Probes test unless the loaded ext-qt is a probe build (--enable-qt-probes),
 * the only build where env PHPQT_PROBE_OFF turns a kept refusal off.
 */
function requireProbeBuild(): void
{
    if (! defined('PHPQT_PROBES')) {
        test()->markTestSkipped('ext-qt is not a probe build (configure --enable-qt-probes): PHPQT_PROBES is undefined');
    }
}

/**
 * The .so a child process loads: for qt env PHPQT_PROBE_EXT, for another extension
 * env PHPQT_PROBE_<NAME>, else the file in this PHP's extension_dir.
 */
function probeExtension(string $name): string
{
    $given = getenv($name === 'qt' ? 'PHPQT_PROBE_EXT' : 'PHPQT_PROBE_'.strtoupper($name));

    return is_string($given) && $given !== '' ? $given : ini_get('extension_dir').'/'.$name.'.so';
}

/**
 * Runs $code in a child of this PHP with only ext-qt loaded (and ext-parallel when $parallel),
 * after `$app = new QApplication($argc, [...])` unless $app is false. The code is a function body: what it
 * returns comes back as 'result' (JSON), a throw as 'threw' ("Class: message"). Qt writes its
 * warnings to the child's stderr. $siteOff names the kept site env PHPQT_PROBE_OFF turns off (a probe
 * build only); null keeps every site. $gmalloc runs the child under libgmalloc with Zend's allocator
 * off, so a native read of freed memory faults at the guard page (macOS); elsewhere it runs plain.
 *
 * @return array{signal: ?int, exit: ?int, result: mixed, threw: ?string, survived: bool, stdout: string, stderr: string}
 */
function qtChild(string $code, ?string $siteOff = null, bool $gmalloc = false, bool $parallel = false, bool $app = true, float $limit = 60.0): array
{
    $start = $app ? "\$argc = 1;\n\$app = new QApplication(\$argc, [PHP_BINARY]);\n" : '';
    $script = <<<PHP
    <?php
    declare(strict_types=1);
    {$start}
    try {
        \$result = (static function () {
    {$code}
        })();
        echo "\\nRESULT ", json_encode(\$result, JSON_PRESERVE_ZERO_FRACTION | JSON_PARTIAL_OUTPUT_ON_ERROR), "\\n";
    } catch (Throwable \$t) {
        echo "\\nREFUSED ", get_class(\$t), ': ', \$t->getMessage(), "\\n";
    }
    echo "SURVIVED\\n";
    PHP;

    $base = tempnam(sys_get_temp_dir(), 'qt-child');
    $file = $base.'.php';
    $out = tempnam(sys_get_temp_dir(), 'qt-child-out');
    $err = tempnam(sys_get_temp_dir(), 'qt-child-err');
    file_put_contents($file, $script);

    $env = getenv();
    unset($env['PHPQT_PROBE_OFF'], $env['DYLD_INSERT_LIBRARIES'], $env['USE_ZEND_ALLOC']);
    $env['XDEBUG_MODE'] = 'off';
    if ($siteOff !== null) {
        $env['PHPQT_PROBE_OFF'] = $siteOff;
    }
    if ($gmalloc && PHP_OS_FAMILY === 'Darwin') {
        $env['DYLD_INSERT_LIBRARIES'] = '/usr/lib/libgmalloc.dylib';
        $env['USE_ZEND_ALLOC'] = '0';
    }

    $command = [PHP_BINARY, '-n', '-d', 'memory_limit=128M'];
    if ($parallel) {
        array_push($command, '-d', 'extension='.probeExtension('parallel'));
    }
    array_push($command, '-d', 'extension='.probeExtension('qt'), $file);

    $process = proc_open($command, [0 => ['file', '/dev/null', 'r'], 1 => ['file', $out, 'w'], 2 => ['file', $err, 'w']], $pipes, null, $env);
    $deadline = microtime(true) + $limit;
    $killed = false;
    do {
        $status = proc_get_status($process);
        if ($status['running'] && microtime(true) > $deadline) {
            proc_terminate($process, 9);
            $killed = true;
        }
        if ($status['running']) {
            usleep(20_000);
        }
    } while ($status['running']);
    proc_close($process);

    $stdout = (string) file_get_contents($out);
    $stderr = (string) file_get_contents($err);
    @unlink($file);
    @unlink($base);
    @unlink($out);
    @unlink($err);

    $result = preg_match('/^RESULT (.*)$/m', $stdout, $m) === 1 ? json_decode($m[1], true) : null;
    $threw = preg_match('/^REFUSED (.*)$/m', $stdout, $m) === 1 ? $m[1] : null;

    return [
        'signal' => $status['signaled'] && ! $killed ? $status['termsig'] : null,
        'exit' => $status['signaled'] ? null : $status['exitcode'],
        'result' => $result,
        'threw' => $threw,
        'survived' => str_contains($stdout, 'SURVIVED'),
        'stdout' => $stdout,
        'stderr' => $stderr,
    ];
}

/** QEvent::DeferredDelete */
const DEFERRED_DELETE = 52;
