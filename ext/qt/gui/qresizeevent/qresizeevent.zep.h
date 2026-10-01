
extern zend_class_entry *qt_gui_qresizeevent_qresizeevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QResizeEvent_QResizeEvent);

PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, new_);
PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, clone_);
PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, newQSizeQSize);
PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, size);
PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, oldSize);
PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, m_size);
PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, setM_size);
PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, m_oldSize);
PHP_METHOD(Qt_Gui_QResizeEvent_QResizeEvent, setM_oldSize);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qresizeevent_qresizeevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qresizeevent_qresizeevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qresizeevent_qresizeevent_newqsizeqsize, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldSizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldSizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qresizeevent_qresizeevent_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qresizeevent_qresizeevent_oldsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qresizeevent_qresizeevent_m_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qresizeevent_qresizeevent_setm_size, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qresizeevent_qresizeevent_m_oldsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qresizeevent_qresizeevent_setm_oldsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qresizeevent_qresizeevent_method_entry) {
	PHP_ME(Qt_Gui_QResizeEvent_QResizeEvent, new_, arginfo_qt_gui_qresizeevent_qresizeevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QResizeEvent_QResizeEvent, clone_, arginfo_qt_gui_qresizeevent_qresizeevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QResizeEvent_QResizeEvent, newQSizeQSize, arginfo_qt_gui_qresizeevent_qresizeevent_newqsizeqsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QResizeEvent_QResizeEvent, size, arginfo_qt_gui_qresizeevent_qresizeevent_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QResizeEvent_QResizeEvent, oldSize, arginfo_qt_gui_qresizeevent_qresizeevent_oldsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QResizeEvent_QResizeEvent, m_size, arginfo_qt_gui_qresizeevent_qresizeevent_m_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QResizeEvent_QResizeEvent, setM_size, arginfo_qt_gui_qresizeevent_qresizeevent_setm_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QResizeEvent_QResizeEvent, m_oldSize, arginfo_qt_gui_qresizeevent_qresizeevent_m_oldsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QResizeEvent_QResizeEvent, setM_oldSize, arginfo_qt_gui_qresizeevent_qresizeevent_setm_oldsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
