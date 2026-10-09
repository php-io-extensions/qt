<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QCoreApplication extends QObject
{
    /** @param array $argv string arguments, argv[0] first; Qt keeps them for the application's life */
    public function __construct(array $argv) {}

    public static function instance(): ?QCoreApplication {}

    public static function sendEvent(QObject $receiver, QEvent $event): bool {}

    /** processEvents(flags) or, with $maxtime, processEvents(flags, maxtime) */
    public static function processEvents(QEventLoop\ProcessEventsFlag|int $flags = 0, ?int $maxtime = null): void {}

    public static function sendPostedEvents(?QObject $receiver = null, int $eventType = 0): void {}

    public static function exec(): int {}

    public static function quit(): void {}

    public static function exit(int $returnCode = 0): void {}

    public static function applicationName(): string {}

    public static function setApplicationName(string $application): void {}

    public static function applicationPid(): int {}

    public static function closingDown(): bool {}

    public static function startingUp(): bool {}
}

/**
 * @not-serializable
 */
class QGuiApplication extends QCoreApplication
{
    /** @param array $argv string arguments, argv[0] first; Qt keeps them for the application's life */
    public function __construct(array $argv) {}

    public static function platformName(): string {}

    public static function desktopFileName(): string {}

    public static function setDesktopFileName(string $name): void {}

    public static function applicationDisplayName(): string {}

    public static function setApplicationDisplayName(string $name): void {}

    public static function quitOnLastWindowClosed(): bool {}

    public static function styleHints(): QStyleHints {}

    public static function setQuitOnLastWindowClosed(bool $quit): void {}
}

/**
 * @not-serializable
 */
class QApplication extends QGuiApplication
{
    /** @param array $argv string arguments, argv[0] first; Qt keeps them for the application's life */
    public function __construct(array $argv) {}

    /** The innermost visible widget at the global (screen) point, or null. */
    public static function widgetAt(int $x, int $y): ?QWidget {}
}
