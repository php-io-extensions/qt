
extern zend_class_entry *qt_gui_qtabletevent_qtabletevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTabletEvent_QTabletEvent);

PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, new_);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, clone_);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, newQEventTypeQPointingDeviceQPointFQPointFQrealFloatFloatFloatQrealFloatQtKeyboardModifiersQtMouseButtonQtMouseButtons);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, pressure);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, rotation);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, z);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, tangentialPressure);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, xTilt);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, yTilt);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, m_tangential);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, setM_tangential);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, m_xTilt);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, setM_xTilt);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, m_yTilt);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, setM_yTilt);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, m_z);
PHP_METHOD(Qt_Gui_QTabletEvent_QTabletEvent, setM_z);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_newqeventtypeqpointingdeviceqpointfqpointfqrealfloatfloatfloatqrealfloatqtkeyboardmodifiersqtmousebuttonqtmousebuttons, 0, 15, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pressure, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, xTilt, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, yTilt, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, tangentialPressure, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rotation, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, keyState, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_pressure, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_rotation, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_z, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_tangentialpressure, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_xtilt, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_ytilt, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_m_tangential, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_setm_tangential, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_m_xtilt, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_setm_xtilt, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_m_ytilt, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_setm_ytilt, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_m_z, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtabletevent_qtabletevent_setm_z, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtabletevent_qtabletevent_method_entry) {
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, new_, arginfo_qt_gui_qtabletevent_qtabletevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, clone_, arginfo_qt_gui_qtabletevent_qtabletevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, newQEventTypeQPointingDeviceQPointFQPointFQrealFloatFloatFloatQrealFloatQtKeyboardModifiersQtMouseButtonQtMouseButtons, arginfo_qt_gui_qtabletevent_qtabletevent_newqeventtypeqpointingdeviceqpointfqpointfqrealfloatfloatfloatqrealfloatqtkeyboardmodifiersqtmousebuttonqtmousebuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, pressure, arginfo_qt_gui_qtabletevent_qtabletevent_pressure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, rotation, arginfo_qt_gui_qtabletevent_qtabletevent_rotation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, z, arginfo_qt_gui_qtabletevent_qtabletevent_z, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, tangentialPressure, arginfo_qt_gui_qtabletevent_qtabletevent_tangentialpressure, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, xTilt, arginfo_qt_gui_qtabletevent_qtabletevent_xtilt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, yTilt, arginfo_qt_gui_qtabletevent_qtabletevent_ytilt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, m_tangential, arginfo_qt_gui_qtabletevent_qtabletevent_m_tangential, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, setM_tangential, arginfo_qt_gui_qtabletevent_qtabletevent_setm_tangential, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, m_xTilt, arginfo_qt_gui_qtabletevent_qtabletevent_m_xtilt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, setM_xTilt, arginfo_qt_gui_qtabletevent_qtabletevent_setm_xtilt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, m_yTilt, arginfo_qt_gui_qtabletevent_qtabletevent_m_ytilt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, setM_yTilt, arginfo_qt_gui_qtabletevent_qtabletevent_setm_ytilt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, m_z, arginfo_qt_gui_qtabletevent_qtabletevent_m_z, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTabletEvent_QTabletEvent, setM_z, arginfo_qt_gui_qtabletevent_qtabletevent_setm_z, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
