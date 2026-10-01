
extern zend_class_entry *qt_gui_qinputevent_qinputevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QInputEvent_QInputEvent);

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, new_);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, clone_);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, newQEventTypeQInputDeviceQtKeyboardModifiers);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, device);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, deviceType);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, modifiers);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setModifiers);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, timestamp);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setTimestamp);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, m_dev);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, m_timeStamp);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setM_timeStamp);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, m_modState);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setM_modState);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, m_reserved);
PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setM_reserved);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_newqeventtypeqinputdeviceqtkeyboardmodifiers, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m_dev, IS_LONG, 0)
	ZEND_ARG_INFO(0, modifiers)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_device, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_devicetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_modifiers, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_setmodifiers, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_timestamp, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_settimestamp, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_m_dev, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_m_timestamp, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_setm_timestamp, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_m_modstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_setm_modstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_m_reserved, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputevent_qinputevent_setm_reserved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qinputevent_qinputevent_method_entry) {
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, new_, arginfo_qt_gui_qinputevent_qinputevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, clone_, arginfo_qt_gui_qinputevent_qinputevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, newQEventTypeQInputDeviceQtKeyboardModifiers, arginfo_qt_gui_qinputevent_qinputevent_newqeventtypeqinputdeviceqtkeyboardmodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, device, arginfo_qt_gui_qinputevent_qinputevent_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, deviceType, arginfo_qt_gui_qinputevent_qinputevent_devicetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, modifiers, arginfo_qt_gui_qinputevent_qinputevent_modifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, setModifiers, arginfo_qt_gui_qinputevent_qinputevent_setmodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, timestamp, arginfo_qt_gui_qinputevent_qinputevent_timestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, setTimestamp, arginfo_qt_gui_qinputevent_qinputevent_settimestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, m_dev, arginfo_qt_gui_qinputevent_qinputevent_m_dev, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, m_timeStamp, arginfo_qt_gui_qinputevent_qinputevent_m_timestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, setM_timeStamp, arginfo_qt_gui_qinputevent_qinputevent_setm_timestamp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, m_modState, arginfo_qt_gui_qinputevent_qinputevent_m_modstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, setM_modState, arginfo_qt_gui_qinputevent_qinputevent_setm_modstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, m_reserved, arginfo_qt_gui_qinputevent_qinputevent_m_reserved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputEvent_QInputEvent, setM_reserved, arginfo_qt_gui_qinputevent_qinputevent_setm_reserved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
