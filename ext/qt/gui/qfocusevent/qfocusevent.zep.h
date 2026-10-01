
extern zend_class_entry *qt_gui_qfocusevent_qfocusevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFocusEvent_QFocusEvent);

PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, new_);
PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, clone_);
PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, newQEventTypeQtFocusReason);
PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, gotFocus);
PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, lostFocus);
PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, reason);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfocusevent_qfocusevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfocusevent_qfocusevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfocusevent_qfocusevent_newqeventtypeqtfocusreason, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_INFO(0, reason)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfocusevent_qfocusevent_gotfocus, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfocusevent_qfocusevent_lostfocus, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfocusevent_qfocusevent_reason, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfocusevent_qfocusevent_method_entry) {
	PHP_ME(Qt_Gui_QFocusEvent_QFocusEvent, new_, arginfo_qt_gui_qfocusevent_qfocusevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFocusEvent_QFocusEvent, clone_, arginfo_qt_gui_qfocusevent_qfocusevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFocusEvent_QFocusEvent, newQEventTypeQtFocusReason, arginfo_qt_gui_qfocusevent_qfocusevent_newqeventtypeqtfocusreason, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFocusEvent_QFocusEvent, gotFocus, arginfo_qt_gui_qfocusevent_qfocusevent_gotfocus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFocusEvent_QFocusEvent, lostFocus, arginfo_qt_gui_qfocusevent_qfocusevent_lostfocus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFocusEvent_QFocusEvent, reason, arginfo_qt_gui_qfocusevent_qfocusevent_reason, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
