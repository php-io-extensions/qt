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
         * QMetaObject::invokeMethod(obj, member, c, arguments…): call a slot or invokable, or emit a signal, by name.
         * Arguments convert to the parameter types of the member of that name taking that many arguments, as
         * signal arguments come out: int/bool/float scalars, QString as string, QDate, QPoint, QPointF,
         * QSize, QRect, QUrl and QKeySequence as their classes, enums as their case or int, QObject
         * pointers as wrappers. With no such member each argument takes
         * its PHP value's type and Qt's own lookup answers (false, with Qt's warning).
         */
        public static function invokeMethod(QObject $obj, string $member, Qt\ConnectionType $c, mixed ...$arguments): bool {}
    }
}
