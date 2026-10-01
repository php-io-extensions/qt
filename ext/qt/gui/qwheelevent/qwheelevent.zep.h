
extern zend_class_entry *qt_gui_qwheelevent_qwheelevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QWheelEvent_QWheelEvent);

PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, staticMetaObject);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, new_);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, clone_);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, newQPointFQPointFQPointQPointQtMouseButtonsQtKeyboardModifiersQtScrollPhaseBoolQtMouseEventSourceQPointingDevice);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, pixelDelta);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, angleDelta);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, phase);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, inverted);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, isInverted);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, hasPixelDelta);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, isBeginEvent);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, isUpdateEvent);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, isEndEvent);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, source);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, m_pixelDelta);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, setM_pixelDelta);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, m_angleDelta);
PHP_METHOD(Qt_Gui_QWheelEvent_QWheelEvent, setM_angleDelta);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_newqpointfqpointfqpointqpointqtmousebuttonsqtkeyboardmodifiersqtscrollphaseboolqtmouseeventsourceqpointingdevice, 0, 12, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pixelDeltaX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixelDeltaY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angleDeltaX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, angleDeltaY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, phase, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, inverted, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, source)
	ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_pixeldelta, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_angledelta, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_phase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_inverted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_isinverted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_haspixeldelta, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_isbeginevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_isupdateevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_isendevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_source, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_m_pixeldelta, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_setm_pixeldelta, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_m_angledelta, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qwheelevent_qwheelevent_setm_angledelta, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qwheelevent_qwheelevent_method_entry) {
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, staticMetaObject, arginfo_qt_gui_qwheelevent_qwheelevent_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, qt_check_for_QGADGET_macro, arginfo_qt_gui_qwheelevent_qwheelevent_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, new_, arginfo_qt_gui_qwheelevent_qwheelevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, clone_, arginfo_qt_gui_qwheelevent_qwheelevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, newQPointFQPointFQPointQPointQtMouseButtonsQtKeyboardModifiersQtScrollPhaseBoolQtMouseEventSourceQPointingDevice, arginfo_qt_gui_qwheelevent_qwheelevent_newqpointfqpointfqpointqpointqtmousebuttonsqtkeyboardmodifiersqtscrollphaseboolqtmouseeventsourceqpointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, pixelDelta, arginfo_qt_gui_qwheelevent_qwheelevent_pixeldelta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, angleDelta, arginfo_qt_gui_qwheelevent_qwheelevent_angledelta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, phase, arginfo_qt_gui_qwheelevent_qwheelevent_phase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, inverted, arginfo_qt_gui_qwheelevent_qwheelevent_inverted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, isInverted, arginfo_qt_gui_qwheelevent_qwheelevent_isinverted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, hasPixelDelta, arginfo_qt_gui_qwheelevent_qwheelevent_haspixeldelta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, isBeginEvent, arginfo_qt_gui_qwheelevent_qwheelevent_isbeginevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, isUpdateEvent, arginfo_qt_gui_qwheelevent_qwheelevent_isupdateevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, isEndEvent, arginfo_qt_gui_qwheelevent_qwheelevent_isendevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, source, arginfo_qt_gui_qwheelevent_qwheelevent_source, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, m_pixelDelta, arginfo_qt_gui_qwheelevent_qwheelevent_m_pixeldelta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, setM_pixelDelta, arginfo_qt_gui_qwheelevent_qwheelevent_setm_pixeldelta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, m_angleDelta, arginfo_qt_gui_qwheelevent_qwheelevent_m_angledelta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QWheelEvent_QWheelEvent, setM_angleDelta, arginfo_qt_gui_qwheelevent_qwheelevent_setm_angledelta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
