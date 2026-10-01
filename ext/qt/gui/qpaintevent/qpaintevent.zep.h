
extern zend_class_entry *qt_gui_qpaintevent_qpaintevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPaintEvent_QPaintEvent);

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, new_);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, clone_);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, newQRegion);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, newQRect);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, rect);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, region);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, m_rect);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, setM_rect);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, m_region);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, setM_region);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, m_erased);
PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, setM_erased);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_newqregion, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paintRegion, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_newqrect, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paintRectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paintRectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paintRectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, paintRectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_region, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_m_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_setm_rect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_m_region, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_setm_region, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_m_erased, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintevent_qpaintevent_setm_erased, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpaintevent_qpaintevent_method_entry) {
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, new_, arginfo_qt_gui_qpaintevent_qpaintevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, clone_, arginfo_qt_gui_qpaintevent_qpaintevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, newQRegion, arginfo_qt_gui_qpaintevent_qpaintevent_newqregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, newQRect, arginfo_qt_gui_qpaintevent_qpaintevent_newqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, rect, arginfo_qt_gui_qpaintevent_qpaintevent_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, region, arginfo_qt_gui_qpaintevent_qpaintevent_region, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, m_rect, arginfo_qt_gui_qpaintevent_qpaintevent_m_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, setM_rect, arginfo_qt_gui_qpaintevent_qpaintevent_setm_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, m_region, arginfo_qt_gui_qpaintevent_qpaintevent_m_region, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, setM_region, arginfo_qt_gui_qpaintevent_qpaintevent_setm_region, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, m_erased, arginfo_qt_gui_qpaintevent_qpaintevent_m_erased, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintEvent_QPaintEvent, setM_erased, arginfo_qt_gui_qpaintevent_qpaintevent_setm_erased, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
