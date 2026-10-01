
extern zend_class_entry *qt_gui_qstatustipevent_qstatustipevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QStatusTipEvent_QStatusTipEvent);

PHP_METHOD(Qt_Gui_QStatusTipEvent_QStatusTipEvent, new_);
PHP_METHOD(Qt_Gui_QStatusTipEvent_QStatusTipEvent, clone_);
PHP_METHOD(Qt_Gui_QStatusTipEvent_QStatusTipEvent, newQString);
PHP_METHOD(Qt_Gui_QStatusTipEvent_QStatusTipEvent, tip);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatustipevent_qstatustipevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatustipevent_qstatustipevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatustipevent_qstatustipevent_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qstatustipevent_qstatustipevent_tip, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qstatustipevent_qstatustipevent_method_entry) {
	PHP_ME(Qt_Gui_QStatusTipEvent_QStatusTipEvent, new_, arginfo_qt_gui_qstatustipevent_qstatustipevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStatusTipEvent_QStatusTipEvent, clone_, arginfo_qt_gui_qstatustipevent_qstatustipevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStatusTipEvent_QStatusTipEvent, newQString, arginfo_qt_gui_qstatustipevent_qstatustipevent_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QStatusTipEvent_QStatusTipEvent, tip, arginfo_qt_gui_qstatustipevent_qstatustipevent_tip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
