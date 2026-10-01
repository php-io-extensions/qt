
extern zend_class_entry *qt_core_qbasictimer_qbasictimer_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QBasicTimer_QBasicTimer);

PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, new_);
PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, swap);
PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, isActive);
PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, timerId);
PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, id);
PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, start);
PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, startIntQtTimerTypeQObject);
PHP_METHOD(Qt_Core_QBasicTimer_QBasicTimer, stop);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasictimer_qbasictimer_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasictimer_qbasictimer_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasictimer_qbasictimer_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasictimer_qbasictimer_timerid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasictimer_qbasictimer_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasictimer_qbasictimer_start, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasictimer_qbasictimer_startintqttimertypeqobject, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timerType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasictimer_qbasictimer_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qbasictimer_qbasictimer_method_entry) {
	PHP_ME(Qt_Core_QBasicTimer_QBasicTimer, new_, arginfo_qt_core_qbasictimer_qbasictimer_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicTimer_QBasicTimer, swap, arginfo_qt_core_qbasictimer_qbasictimer_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicTimer_QBasicTimer, isActive, arginfo_qt_core_qbasictimer_qbasictimer_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicTimer_QBasicTimer, timerId, arginfo_qt_core_qbasictimer_qbasictimer_timerid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicTimer_QBasicTimer, id, arginfo_qt_core_qbasictimer_qbasictimer_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicTimer_QBasicTimer, start, arginfo_qt_core_qbasictimer_qbasictimer_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicTimer_QBasicTimer, startIntQtTimerTypeQObject, arginfo_qt_core_qbasictimer_qbasictimer_startintqttimertypeqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicTimer_QBasicTimer, stop, arginfo_qt_core_qbasictimer_qbasictimer_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
