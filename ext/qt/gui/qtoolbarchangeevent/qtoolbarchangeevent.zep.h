
extern zend_class_entry *qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QToolBarChangeEvent_QToolBarChangeEvent);

PHP_METHOD(Qt_Gui_QToolBarChangeEvent_QToolBarChangeEvent, new_);
PHP_METHOD(Qt_Gui_QToolBarChangeEvent_QToolBarChangeEvent, clone_);
PHP_METHOD(Qt_Gui_QToolBarChangeEvent_QToolBarChangeEvent, newBool);
PHP_METHOD(Qt_Gui_QToolBarChangeEvent_QToolBarChangeEvent, toggle);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_newbool, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_toggle, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_method_entry) {
	PHP_ME(Qt_Gui_QToolBarChangeEvent_QToolBarChangeEvent, new_, arginfo_qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QToolBarChangeEvent_QToolBarChangeEvent, clone_, arginfo_qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QToolBarChangeEvent_QToolBarChangeEvent, newBool, arginfo_qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_newbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QToolBarChangeEvent_QToolBarChangeEvent, toggle, arginfo_qt_gui_qtoolbarchangeevent_qtoolbarchangeevent_toggle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
