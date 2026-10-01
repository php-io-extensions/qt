
extern zend_class_entry *qt_core_qchronotimer_qchronotimer_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QChronoTimer_QChronoTimer);

PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, staticMetaObject);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, tr);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, new_);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, isActive);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, id);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, setTimerType);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, timerType);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, setSingleShot);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, isSingleShot);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, start);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, stop);
PHP_METHOD(Qt_Core_QChronoTimer_QChronoTimer, timerEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_isactive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_settimertype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, atype, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_timertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_setsingleshot, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, singleShot, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_issingleshot, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_stop, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchronotimer_qchronotimer_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qchronotimer_qchronotimer_method_entry) {
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, staticMetaObject, arginfo_qt_core_qchronotimer_qchronotimer_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, tr, arginfo_qt_core_qchronotimer_qchronotimer_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, new_, arginfo_qt_core_qchronotimer_qchronotimer_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, isActive, arginfo_qt_core_qchronotimer_qchronotimer_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, id, arginfo_qt_core_qchronotimer_qchronotimer_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, setTimerType, arginfo_qt_core_qchronotimer_qchronotimer_settimertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, timerType, arginfo_qt_core_qchronotimer_qchronotimer_timertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, setSingleShot, arginfo_qt_core_qchronotimer_qchronotimer_setsingleshot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, isSingleShot, arginfo_qt_core_qchronotimer_qchronotimer_issingleshot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, start, arginfo_qt_core_qchronotimer_qchronotimer_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, stop, arginfo_qt_core_qchronotimer_qchronotimer_stop, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChronoTimer_QChronoTimer, timerEvent, arginfo_qt_core_qchronotimer_qchronotimer_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
