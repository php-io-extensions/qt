
extern zend_class_entry *qt_gui_qchildwindowevent_qchildwindowevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QChildWindowEvent_QChildWindowEvent);

PHP_METHOD(Qt_Gui_QChildWindowEvent_QChildWindowEvent, new_);
PHP_METHOD(Qt_Gui_QChildWindowEvent_QChildWindowEvent, clone_);
PHP_METHOD(Qt_Gui_QChildWindowEvent_QChildWindowEvent, newQEventTypeQWindow);
PHP_METHOD(Qt_Gui_QChildWindowEvent_QChildWindowEvent, child);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qchildwindowevent_qchildwindowevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qchildwindowevent_qchildwindowevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qchildwindowevent_qchildwindowevent_newqeventtypeqwindow, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childWindow, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qchildwindowevent_qchildwindowevent_child, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qchildwindowevent_qchildwindowevent_method_entry) {
	PHP_ME(Qt_Gui_QChildWindowEvent_QChildWindowEvent, new_, arginfo_qt_gui_qchildwindowevent_qchildwindowevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QChildWindowEvent_QChildWindowEvent, clone_, arginfo_qt_gui_qchildwindowevent_qchildwindowevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QChildWindowEvent_QChildWindowEvent, newQEventTypeQWindow, arginfo_qt_gui_qchildwindowevent_qchildwindowevent_newqeventtypeqwindow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QChildWindowEvent_QChildWindowEvent, child, arginfo_qt_gui_qchildwindowevent_qchildwindowevent_child, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
