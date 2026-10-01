
extern zend_class_entry *qt_gui_qdragleaveevent_qdragleaveevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QDragLeaveEvent_QDragLeaveEvent);

PHP_METHOD(Qt_Gui_QDragLeaveEvent_QDragLeaveEvent, new_);
PHP_METHOD(Qt_Gui_QDragLeaveEvent_QDragLeaveEvent, clone_);
PHP_METHOD(Qt_Gui_QDragLeaveEvent_QDragLeaveEvent, new2);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragleaveevent_qdragleaveevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragleaveevent_qdragleaveevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragleaveevent_qdragleaveevent_new2, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qdragleaveevent_qdragleaveevent_method_entry) {
	PHP_ME(Qt_Gui_QDragLeaveEvent_QDragLeaveEvent, new_, arginfo_qt_gui_qdragleaveevent_qdragleaveevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragLeaveEvent_QDragLeaveEvent, clone_, arginfo_qt_gui_qdragleaveevent_qdragleaveevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragLeaveEvent_QDragLeaveEvent, new2, arginfo_qt_gui_qdragleaveevent_qdragleaveevent_new2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
