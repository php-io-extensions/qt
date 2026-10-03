<?php

/** @generate-class-entries */

namespace QMetaObject {
    /**
     * @not-serializable
     */
    final class Connection
    {
        private function __construct() {}

        /** operator bool */
        public function isValid(): bool {}
    }
}

namespace {
    /**
     * @not-serializable
     */
    final class QMetaObject
    {
        private function __construct() {}

        /**
         * QMetaObject::invokeMethod(object, member, Q_ARG…): call a slot or invokable, or emit a signal, by name.
         * Arguments convert to the member's parameter types as signal arguments come out: int/bool/float
         * scalars, QString as string, QDate as an ISO 8601 string, enums as their case or int, QObject
         * pointers as wrappers. False when the object has no member of that name taking that many arguments.
         */
        public static function invokeMethod(QObject $object, string $member, mixed ...$args): bool {}
    }
}
