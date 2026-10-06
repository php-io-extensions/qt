<?php

declare(strict_types=1);

/*
 * End-to-end check of the bridge bindings on a real display, macOS or Linux:
 *
 *   php examples/smoke.php [--hold=SECONDS]
 *
 * Linux needs the session's WAYLAND_DISPLAY or DISPLAY.
 *
 * 1. connect      new QApplication: macOS shows the Dock icon; Linux connects to the display server
 * 2. pump         processEvents() drains what is queued
 * 3. budget       a 50ms single-shot QTimer ends processEvents(WaitForMoreEvents) at the budget
 * 4. wakeUp       QAbstractEventDispatcher::wakeUp makes the next blocking processEvents return at once
 * 5. singleShot   the functor overload runs its callable
 * 6. fd wake      a pipe written by a child process ends the wait through a QSocketNotifier
 * 7. nested wake  the same, through a kqueue (macOS) or epoll (Linux) fd
 * 8. exec/quit    QCoreApplication::exec until a timer calls quit
 * 9. disconnect   disconnect the connections, destroy the application
 *
 * --hold keeps pumping that long after step 1, for a look at the Dock / taskbar.
 * Prints SMOKE_OK when every step held.
 */

$hold = 0.0;
foreach (array_slice($argv, 1) as $arg) {
    if (str_starts_with($arg, '--hold=')) {
        $hold = (float) substr($arg, 7);
    }
}

use QEventLoop\ProcessEventsFlag;

function check(bool $ok, string $what): void
{
    printf("%s %s\n", $ok ? 'ok  ' : 'FAIL', $what);
    if (! $ok) {
        exit(1);
    }
}

function dock_type(): ?string
{
    foreach (explode("\n", (string) shell_exec('lsappinfo list 2>/dev/null')) as $line) {
        if (preg_match('/pid = ' . getmypid() . '\b.*?type="([^"]+)"/', $line, $m)) {
            return $m[1];
        }
    }

    return null;
}

/**
 * processEvents(WaitForMoreEvents) until $done() holds or $limit seconds pass; returns elapsed ms.
 * A guard timer bounds the last blocking call when nothing else would end it.
 */
function process_until(callable $done, float $limit): float
{
    $expired = false;
    $guard = new QTimer();
    $guard->setSingleShot(true);
    $connection = QObject::connect($guard, 'timeout()', function () use (&$expired): void {
        $expired = true;
    });
    $guard->start((int) ($limit * 1000));

    $t = hrtime(true);
    while (! $done() && ! $expired) {
        QCoreApplication::processEvents(ProcessEventsFlag::WAIT_FOR_MORE_EVENTS);
    }
    $ms = (hrtime(true) - $t) / 1e6;

    $guard->stop();
    QObject::disconnect($connection);

    return $ms;
}

/** A child that sleeps, writes one byte to its stdout pipe, and reports when it wrote. */
function delayed_writer(float $delay): array
{
    $proc = proc_open(
        [PHP_BINARY, '-n', '-r', sprintf('usleep(%d); fwrite(STDOUT, "x"); fflush(STDOUT); fwrite(STDERR, (string) microtime(true));', (int) ($delay * 1e6))],
        [1 => ['pipe', 'w'], 2 => ['pipe', 'w']],
        $pipes,
    );

    return [$proc, $pipes[1], $pipes[2]];
}

$mac = PHP_OS_FAMILY === 'Darwin';

// 1. connect
QCoreApplication::setApplicationName('QtSmoke');
QGuiApplication::setDesktopFileName('com.projectsaturnstudios.QtSmoke');
$app = new QApplication([PHP_BINARY]);
QGuiApplication::setQuitOnLastWindowClosed(false);

check(QCoreApplication::instance() === $app, sprintf('QApplication up on the "%s" platform, Qt %s', QGuiApplication::platformName(), qVersion()));

if ($mac) {
    $until = microtime(true) + 2.0;
    while (dock_type() !== 'Foreground' && microtime(true) < $until) {
        QCoreApplication::processEvents(ProcessEventsFlag::ALL_EVENTS, 50);
    }
    check(dock_type() === 'Foreground', 'lsappinfo: type="Foreground" (Dock icon up), pid ' . getmypid());
} else {
    check(in_array(QGuiApplication::platformName(), ['wayland', 'xcb'], true), 'connected to the display server');
}

if ($hold > 0) {
    echo "holding for {$hold}s\n";
    $until = microtime(true) + $hold;
    while (microtime(true) < $until) {
        QCoreApplication::processEvents(ProcessEventsFlag::ALL_EVENTS, 50);
    }
}

// 2. pump
QCoreApplication::processEvents();
QCoreApplication::sendPostedEvents();
check(true, 'pump: processEvents() and sendPostedEvents() drained the queue');

// 3. budget
$fired = false;
$budget = new QTimer();
$budget->setSingleShot(true);
$budget->setTimerType(Qt\TimerType::PRECISE_TIMER);
QObject::connect($budget, 'timeout()', function () use (&$fired): void {
    $fired = true;
});
$budget->start(50);
$ms = process_until(function () use (&$fired): bool {
    return $fired;
}, 2.0);
check($fired && $ms >= 45 && $ms < 80, sprintf('50ms single-shot QTimer ended the blocking wait after %.1fms', $ms));

// 4. wakeUp
$dispatcher = QAbstractEventDispatcher::instance();
$dispatcher->wakeUp();
$t = hrtime(true);
QCoreApplication::processEvents(ProcessEventsFlag::WAIT_FOR_MORE_EVENTS);
$ms = (hrtime(true) - $t) / 1e6;
check($ms < 5, sprintf('wakeUp(): the next blocking processEvents returned in %.2fms', $ms));

// 5. singleShot
$ran = 0;
QTimer::singleShot(0, function () use (&$ran): void {
    $ran++;
});
process_until(function () use (&$ran): bool {
    return $ran > 0;
}, 1.0);
check($ran === 1, 'QTimer::singleShot functor ran once');

// 6. fd wake
[$proc, $out, $err] = delayed_writer(0.2);
$woke = null;
$notifier = new QSocketNotifier($out, QSocketNotifier\Type::READ);
$activated = QObject::connect($notifier, 'activated(QSocketDescriptor,QSocketNotifier::Type)', function (int $socket, int $type) use (&$woke, $notifier): void {
    $woke ??= [microtime(true), $socket, $type];
    $notifier->setEnabled(false);
});
$ms = process_until(function () use (&$woke): bool {
    return $woke !== null;
}, 2.0);
$wrote = (float) stream_get_contents($err);
fread($out, 1);
proc_close($proc);
$latency = ($woke[0] - $wrote) * 1e3;
check($woke !== null && $woke[1] === $notifier->socket() && $woke[2] === QSocketNotifier\Type::READ->value, sprintf('pipe fd ended the wait after %.1fms, %.2fms after the child wrote', $ms, $latency));
check($latency < 5, 'fd wake latency under 5ms');
QObject::disconnect($activated);

// 7. nested wake: the waiter's own descriptor in Qt's dispatcher.
[$proc, $out, $err] = delayed_writer(0.2);
if ($mac && extension_loaded('kqueue')) {
    $waiter = kqueue();
    $kev = new kevent();
    EV_SET($kev, $out, EVFILT_READ, EV_ADD, 0, 0, 0);
    $none = null;
    kevent($waiter, [$kev], 1, $none, 0, null);
    $glance = function () use ($waiter): int {
        $events = [];

        return kevent($waiter, [], 0, $events, 4, new timespec());
    };
    $kind = 'kqueue';
} elseif (! $mac && extension_loaded('epoll')) {
    $waiter = epoll_create1(0);
    epoll_ctl($waiter, EPOLL_CTL_ADD, $out, EPOLLIN, 1);
    $glance = fn (): int => count(epoll_wait($waiter, 4, 0) ?: []);
    $kind = 'epoll';
} else {
    $kind = null;
}

if ($kind !== null) {
    $woke = null;
    $nested = new QSocketNotifier($waiter, QSocketNotifier\Type::READ);
    $nestedConnection = QObject::connect($nested, 'activated(QSocketDescriptor,QSocketNotifier::Type)', function () use (&$woke, $nested): void {
        $woke ??= microtime(true);
        $nested->setEnabled(false);
    });
    $ms = process_until(function () use (&$woke): bool {
        return $woke !== null;
    }, 2.0);
    $wrote = (float) stream_get_contents($err);
    $n = $glance();
    $latency = ($woke - $wrote) * 1e3;
    check($woke !== null && $latency < 5, sprintf('%s fd ended the wait after %.1fms, %.2fms after the child wrote', $kind, $ms, $latency));
    check($n === 1, "the glance after the wake reads the pipe event off the {$kind}");
    QObject::disconnect($nestedConnection);
} else {
    echo "skip nested wake: neither ext-kqueue nor ext-epoll loaded\n";
}
fread($out, 1);
proc_close($proc);

// 8. exec/quit: Qt's own loop, ended from a timer inside it.
QTimer::singleShot(100, function (): void {
    QCoreApplication::quit();
});
$t = hrtime(true);
$status = QCoreApplication::exec();
$ms = (hrtime(true) - $t) / 1e6;
check($status === 0 && $ms >= 90 && $ms < 1000, sprintf('exec() returned %d after %.1fms once a timer called quit()', $status, $ms));

// 9. disconnect
$connection = QObject::connect($budget, 'timeout()', fn () => null);
check(QObject::disconnect($connection) && ! $connection->isValid(), 'disconnect() severed a connection');
unset($budget, $notifier, $nested, $dispatcher);
$app = null;
check(QCoreApplication::instance() === null, 'application destroyed: QCoreApplication::instance() is null');

echo "SMOKE_OK\n";
