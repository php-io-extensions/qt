
extern zend_class_entry *qt_core_qchildevent_qchildevent_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QChildEvent_QChildEvent);

PHP_METHOD(Qt_Core_QChildEvent_QChildEvent, new_);
PHP_METHOD(Qt_Core_QChildEvent_QChildEvent, clone_);
PHP_METHOD(Qt_Core_QChildEvent_QChildEvent, newQEventTypeQObject);
PHP_METHOD(Qt_Core_QChildEvent_QChildEvent, child);
PHP_METHOD(Qt_Core_QChildEvent_QChildEvent, added);
PHP_METHOD(Qt_Core_QChildEvent_QChildEvent, polished);
PHP_METHOD(Qt_Core_QChildEvent_QChildEvent, removed);
PHP_METHOD(Qt_Core_QChildEvent_QChildEvent, c);
PHP_METHOD(Qt_Core_QChildEvent_QChildEvent, setC);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchildevent_qchildevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchildevent_qchildevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchildevent_qchildevent_newqeventtypeqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchildevent_qchildevent_child, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchildevent_qchildevent_added, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchildevent_qchildevent_polished, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchildevent_qchildevent_removed, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchildevent_qchildevent_c, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qchildevent_qchildevent_setc, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qchildevent_qchildevent_method_entry) {
	PHP_ME(Qt_Core_QChildEvent_QChildEvent, new_, arginfo_qt_core_qchildevent_qchildevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChildEvent_QChildEvent, clone_, arginfo_qt_core_qchildevent_qchildevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChildEvent_QChildEvent, newQEventTypeQObject, arginfo_qt_core_qchildevent_qchildevent_newqeventtypeqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChildEvent_QChildEvent, child, arginfo_qt_core_qchildevent_qchildevent_child, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChildEvent_QChildEvent, added, arginfo_qt_core_qchildevent_qchildevent_added, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChildEvent_QChildEvent, polished, arginfo_qt_core_qchildevent_qchildevent_polished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChildEvent_QChildEvent, removed, arginfo_qt_core_qchildevent_qchildevent_removed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChildEvent_QChildEvent, c, arginfo_qt_core_qchildevent_qchildevent_c, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QChildEvent_QChildEvent, setC, arginfo_qt_core_qchildevent_qchildevent_setc, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
