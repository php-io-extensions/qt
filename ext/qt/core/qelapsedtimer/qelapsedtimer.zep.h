
extern zend_class_entry *qt_core_qelapsedtimer_qelapsedtimer_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QElapsedTimer_QElapsedTimer);

PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, new_);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, clockType);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, isMonotonic);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, start);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, restart);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, invalidate);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, isValid);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, nsecsElapsed);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, elapsed);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, hasExpired);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, msecsSinceReference);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, msecsTo);
PHP_METHOD(Qt_Core_QElapsedTimer_QElapsedTimer, secsTo);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_clocktype, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_ismonotonic, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_restart, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_invalidate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_nsecselapsed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_elapsed, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_hasexpired, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_msecssincereference, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_msecsto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qelapsedtimer_qelapsedtimer_secsto, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qelapsedtimer_qelapsedtimer_method_entry) {
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, new_, arginfo_qt_core_qelapsedtimer_qelapsedtimer_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, clockType, arginfo_qt_core_qelapsedtimer_qelapsedtimer_clocktype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, isMonotonic, arginfo_qt_core_qelapsedtimer_qelapsedtimer_ismonotonic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, start, arginfo_qt_core_qelapsedtimer_qelapsedtimer_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, restart, arginfo_qt_core_qelapsedtimer_qelapsedtimer_restart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, invalidate, arginfo_qt_core_qelapsedtimer_qelapsedtimer_invalidate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, isValid, arginfo_qt_core_qelapsedtimer_qelapsedtimer_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, nsecsElapsed, arginfo_qt_core_qelapsedtimer_qelapsedtimer_nsecselapsed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, elapsed, arginfo_qt_core_qelapsedtimer_qelapsedtimer_elapsed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, hasExpired, arginfo_qt_core_qelapsedtimer_qelapsedtimer_hasexpired, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, msecsSinceReference, arginfo_qt_core_qelapsedtimer_qelapsedtimer_msecssincereference, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, msecsTo, arginfo_qt_core_qelapsedtimer_qelapsedtimer_msecsto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QElapsedTimer_QElapsedTimer, secsTo, arginfo_qt_core_qelapsedtimer_qelapsedtimer_secsto, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
