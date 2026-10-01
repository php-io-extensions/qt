
extern zend_class_entry *qt_gui_qexposeevent_qexposeevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QExposeEvent_QExposeEvent);

PHP_METHOD(Qt_Gui_QExposeEvent_QExposeEvent, new_);
PHP_METHOD(Qt_Gui_QExposeEvent_QExposeEvent, clone_);
PHP_METHOD(Qt_Gui_QExposeEvent_QExposeEvent, newQRegion);
PHP_METHOD(Qt_Gui_QExposeEvent_QExposeEvent, m_region);
PHP_METHOD(Qt_Gui_QExposeEvent_QExposeEvent, setM_region);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qexposeevent_qexposeevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qexposeevent_qexposeevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qexposeevent_qexposeevent_newqregion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m_region, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qexposeevent_qexposeevent_m_region, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qexposeevent_qexposeevent_setm_region, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qexposeevent_qexposeevent_method_entry) {
	PHP_ME(Qt_Gui_QExposeEvent_QExposeEvent, new_, arginfo_qt_gui_qexposeevent_qexposeevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QExposeEvent_QExposeEvent, clone_, arginfo_qt_gui_qexposeevent_qexposeevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QExposeEvent_QExposeEvent, newQRegion, arginfo_qt_gui_qexposeevent_qexposeevent_newqregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QExposeEvent_QExposeEvent, m_region, arginfo_qt_gui_qexposeevent_qexposeevent_m_region, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QExposeEvent_QExposeEvent, setM_region, arginfo_qt_gui_qexposeevent_qexposeevent_setm_region, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
