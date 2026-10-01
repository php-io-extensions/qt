
extern zend_class_entry *qt_gui_qnativegestureevent_qnativegestureevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent);

PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, new_);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, clone_);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, newQtNativeGestureTypeQPointingDeviceQPointFQPointFQPointFQrealQuint64Quint64);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, newQtNativeGestureTypeQPointingDeviceIntQPointFQPointFQPointFQrealQPointFQuint64);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, gestureType);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, fingerCount);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, value);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, delta);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_sequenceId);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_sequenceId);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_delta);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_delta);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_realValue);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_realValue);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_gestureType);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_gestureType);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_fingerCount);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_fingerCount);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_reserved);
PHP_METHOD(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_reserved);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_newqtnativegesturetypeqpointingdeviceqpointfqpointfqpointfqrealquint64quint64, 0, 11, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, localPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sequenceId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, intArgument, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_newqtnativegesturetypeqpointingdeviceintqpointfqpointfqpointfqrealqpointfquint64, 0, 12, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fingerCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, localPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, deltaX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, deltaY, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, sequenceId)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_gesturetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_fingercount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_value, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_delta, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_sequenceid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_sequenceid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_delta, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_delta, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_realvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_realvalue, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_gesturetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_gesturetype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_fingercount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_fingercount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_reserved, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_reserved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qnativegestureevent_qnativegestureevent_method_entry) {
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, new_, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, clone_, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, newQtNativeGestureTypeQPointingDeviceQPointFQPointFQPointFQrealQuint64Quint64, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_newqtnativegesturetypeqpointingdeviceqpointfqpointfqpointfqrealquint64quint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, newQtNativeGestureTypeQPointingDeviceIntQPointFQPointFQPointFQrealQPointFQuint64, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_newqtnativegesturetypeqpointingdeviceintqpointfqpointfqpointfqrealqpointfquint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, gestureType, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_gesturetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, fingerCount, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_fingercount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, value, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, delta, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_delta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_sequenceId, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_sequenceid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_sequenceId, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_sequenceid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_delta, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_delta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_delta, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_delta, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_realValue, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_realvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_realValue, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_realvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_gestureType, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_gesturetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_gestureType, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_gesturetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_fingerCount, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_fingercount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_fingerCount, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_fingercount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, m_reserved, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_m_reserved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QNativeGestureEvent_QNativeGestureEvent, setM_reserved, arginfo_qt_gui_qnativegestureevent_qnativegestureevent_setm_reserved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
