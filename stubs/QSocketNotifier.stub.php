<?php

/** @generate-class-entries */

namespace QSocketNotifier {
    enum Type: int
    {
        case READ = 0;
        case WRITE = 1;
        case EXCEPTION = 2;
    }
}

namespace {
    /**
     * @not-serializable
     */
    class QSocketNotifier extends QObject
    {
        /** @param int|resource|Socket $socket */
        public function __construct(mixed $socket, QSocketNotifier\Type $type, ?QObject $parent = null) {}

        public function socket(): int {}

        public function type(): QSocketNotifier\Type {}

        public function isEnabled(): bool {}

        public function setEnabled(bool $enable): void {}

        public function isValid(): bool {}
    }
}
