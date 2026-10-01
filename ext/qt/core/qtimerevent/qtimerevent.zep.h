
extern zend_class_entry *qt_core_qtimerevent_qtimerevent_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTimerEvent_QTimerEvent);

PHP_METHOD(Qt_Core_QTimerEvent_QTimerEvent, new_);
PHP_METHOD(Qt_Core_QTimerEvent_QTimerEvent, clone_);
PHP_METHOD(Qt_Core_QTimerEvent_QTimerEvent, newInt);
PHP_METHOD(Qt_Core_QTimerEvent_QTimerEvent, newQtTimerId);
PHP_METHOD(Qt_Core_QTimerEvent_QTimerEvent, timerId);
PHP_METHOD(Qt_Core_QTimerEvent_QTimerEvent, id);
PHP_METHOD(Qt_Core_QTimerEvent_QTimerEvent, m_id);
PHP_METHOD(Qt_Core_QTimerEvent_QTimerEvent, setM_id);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimerevent_qtimerevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimerevent_qtimerevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimerevent_qtimerevent_newint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timerId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimerevent_qtimerevent_newqttimerid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timerId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimerevent_qtimerevent_timerid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimerevent_qtimerevent_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimerevent_qtimerevent_m_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtimerevent_qtimerevent_setm_id, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtimerevent_qtimerevent_method_entry) {
	PHP_ME(Qt_Core_QTimerEvent_QTimerEvent, new_, arginfo_qt_core_qtimerevent_qtimerevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimerEvent_QTimerEvent, clone_, arginfo_qt_core_qtimerevent_qtimerevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimerEvent_QTimerEvent, newInt, arginfo_qt_core_qtimerevent_qtimerevent_newint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimerEvent_QTimerEvent, newQtTimerId, arginfo_qt_core_qtimerevent_qtimerevent_newqttimerid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimerEvent_QTimerEvent, timerId, arginfo_qt_core_qtimerevent_qtimerevent_timerid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimerEvent_QTimerEvent, id, arginfo_qt_core_qtimerevent_qtimerevent_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimerEvent_QTimerEvent, m_id, arginfo_qt_core_qtimerevent_qtimerevent_m_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTimerEvent_QTimerEvent, setM_id, arginfo_qt_core_qtimerevent_qtimerevent_setm_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
