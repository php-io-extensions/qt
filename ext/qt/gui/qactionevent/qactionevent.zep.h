
extern zend_class_entry *qt_gui_qactionevent_qactionevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QActionEvent_QActionEvent);

PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, new_);
PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, clone_);
PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, newIntQActionQAction);
PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, action);
PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, before);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactionevent_qactionevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactionevent_qactionevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactionevent_qactionevent_newintqactionqaction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactionevent_qactionevent_action, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactionevent_qactionevent_before, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qactionevent_qactionevent_method_entry) {
	PHP_ME(Qt_Gui_QActionEvent_QActionEvent, new_, arginfo_qt_gui_qactionevent_qactionevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionEvent_QActionEvent, clone_, arginfo_qt_gui_qactionevent_qactionevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionEvent_QActionEvent, newIntQActionQAction, arginfo_qt_gui_qactionevent_qactionevent_newintqactionqaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionEvent_QActionEvent, action, arginfo_qt_gui_qactionevent_qactionevent_action, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionEvent_QActionEvent, before, arginfo_qt_gui_qactionevent_qactionevent_before, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
