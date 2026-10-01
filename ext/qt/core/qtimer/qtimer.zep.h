
extern zend_class_entry *qt_core_qtimer_qtimer_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTimer_QTimer);

PHP_METHOD(Qt_Core_QTimer_QTimer, staticMetaObject);
PHP_METHOD(Qt_Core_QTimer_QTimer, tr);
PHP_METHOD(Qt_Core_QTimer_QTimer, new_);
PHP_METHOD(Qt_Core_QTimer_QTimer, isActive);
PHP_METHOD(Qt_Core_QTimer_QTimer, timerId);
PHP_METHOD(Qt_Core_QTimer_QTimer, id);
PHP_METHOD(Qt_Core_QTimer_QTimer, setInterval);
PHP_METHOD(Qt_Core_QTimer_QTimer, interval);
PHP_METHOD(Qt_Core_QTimer_QTimer, remainingTime);
PHP_METHOD(Qt_Core_QTimer_QTimer, setTimerType);
PHP_METHOD(Qt_Core_QTimer_QTimer, timerType);
PHP_METHOD(Qt_Core_QTimer_QTimer, setSingleShot);
PHP_METHOD(Qt_Core_QTimer_QTimer, isSingleShot);
PHP_METHOD(Qt_Core_QTimer_QTimer, singleShot);
PHP_METHOD(Qt_Core_QTimer_QTimer, singleShotIntQtTimerTypeQObjectChar);
PHP_METHOD(Qt_Core_QTimer_QTimer, start);
PHP_METHOD(Qt_Core_QTimer_QTimer, start2);
PHP_METHOD(Qt_Core_QTimer_QTimer, stop);
PHP_METHOD(Qt_Core_QTimer_QTimer, timerEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_timerid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_setinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_interval, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_remainingtime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_settimertype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atype, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_timertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_setsingleshot, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, singleShot, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_issingleshot, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_singleshot, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_singleshotintqttimertypeqobjectchar, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timerType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_start, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_start2, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimer_qtimer_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtimer_qtimer_method_entry) {
	PHP_ME(Qt_Core_QTimer_QTimer, staticMetaObject, arginfo_qt_core_qtimer_qtimer_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, tr, arginfo_qt_core_qtimer_qtimer_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, new_, arginfo_qt_core_qtimer_qtimer_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, isActive, arginfo_qt_core_qtimer_qtimer_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, timerId, arginfo_qt_core_qtimer_qtimer_timerid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, id, arginfo_qt_core_qtimer_qtimer_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, setInterval, arginfo_qt_core_qtimer_qtimer_setinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, interval, arginfo_qt_core_qtimer_qtimer_interval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, remainingTime, arginfo_qt_core_qtimer_qtimer_remainingtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, setTimerType, arginfo_qt_core_qtimer_qtimer_settimertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, timerType, arginfo_qt_core_qtimer_qtimer_timertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, setSingleShot, arginfo_qt_core_qtimer_qtimer_setsingleshot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, isSingleShot, arginfo_qt_core_qtimer_qtimer_issingleshot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, singleShot, arginfo_qt_core_qtimer_qtimer_singleshot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, singleShotIntQtTimerTypeQObjectChar, arginfo_qt_core_qtimer_qtimer_singleshotintqttimertypeqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, start, arginfo_qt_core_qtimer_qtimer_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, start2, arginfo_qt_core_qtimer_qtimer_start2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, stop, arginfo_qt_core_qtimer_qtimer_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimer_QTimer, timerEvent, arginfo_qt_core_qtimer_qtimer_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
