<?php

/** @generate-class-entries */

/**
 * @not-serializable
 */
class QObject
{
    public function __construct(?QObject $parent = null) {}

    public function objectName(): string {}

    public function setObjectName(string $name): void {}

    public function inherits(string $className): bool {}

    public function parent(): ?QObject {}

    public function setParent(?QObject $parent): void {}

    public function deleteLater(): void {}

    /** The object's address, for handing it to another extension. */
    public function pointer(): int {}

    /**
     * The string-signature form of connect(): $signal as SIGNAL() spells it, e.g. "timeout()".
     * @param callable $functor called with the signal's arguments
     */
    public static function connect(QObject $sender, string $signal, callable $functor): QMetaObject\Connection {}

    public static function disconnect(QMetaObject\Connection $connection): bool {}
}
