
extern zend_class_entry *qt_core_qevent_qevent_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QEvent_QEvent);

PHP_METHOD(Qt_Core_QEvent_QEvent, staticMetaObject);
PHP_METHOD(Qt_Core_QEvent_QEvent, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QEvent_QEvent, new_);
PHP_METHOD(Qt_Core_QEvent_QEvent, newQEventType);
PHP_METHOD(Qt_Core_QEvent_QEvent, type);
PHP_METHOD(Qt_Core_QEvent_QEvent, spontaneous);
PHP_METHOD(Qt_Core_QEvent_QEvent, setAccepted);
PHP_METHOD(Qt_Core_QEvent_QEvent, isAccepted);
PHP_METHOD(Qt_Core_QEvent_QEvent, accept);
PHP_METHOD(Qt_Core_QEvent_QEvent, ignore);
PHP_METHOD(Qt_Core_QEvent_QEvent, isInputEvent);
PHP_METHOD(Qt_Core_QEvent_QEvent, isPointerEvent);
PHP_METHOD(Qt_Core_QEvent_QEvent, isSinglePointEvent);
PHP_METHOD(Qt_Core_QEvent_QEvent, registerEventType);
PHP_METHOD(Qt_Core_QEvent_QEvent, clone_);
PHP_METHOD(Qt_Core_QEvent_QEvent, t);
PHP_METHOD(Qt_Core_QEvent_QEvent, setT);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_newqeventtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_spontaneous, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_setaccepted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, accepted, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_isaccepted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_accept, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_ignore, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_isinputevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_ispointerevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_issinglepointevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_registereventtype, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hint, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_t, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qevent_qevent_sett, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qevent_qevent_method_entry) {
	PHP_ME(Qt_Core_QEvent_QEvent, staticMetaObject, arginfo_qt_core_qevent_qevent_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, qt_check_for_QGADGET_macro, arginfo_qt_core_qevent_qevent_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, new_, arginfo_qt_core_qevent_qevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, newQEventType, arginfo_qt_core_qevent_qevent_newqeventtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, type, arginfo_qt_core_qevent_qevent_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, spontaneous, arginfo_qt_core_qevent_qevent_spontaneous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, setAccepted, arginfo_qt_core_qevent_qevent_setaccepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, isAccepted, arginfo_qt_core_qevent_qevent_isaccepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, accept, arginfo_qt_core_qevent_qevent_accept, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, ignore, arginfo_qt_core_qevent_qevent_ignore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, isInputEvent, arginfo_qt_core_qevent_qevent_isinputevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, isPointerEvent, arginfo_qt_core_qevent_qevent_ispointerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, isSinglePointEvent, arginfo_qt_core_qevent_qevent_issinglepointevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, registerEventType, arginfo_qt_core_qevent_qevent_registereventtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, clone_, arginfo_qt_core_qevent_qevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, t, arginfo_qt_core_qevent_qevent_t, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEvent_QEvent, setT, arginfo_qt_core_qevent_qevent_sett, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
