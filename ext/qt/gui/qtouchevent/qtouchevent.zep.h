
extern zend_class_entry *qt_gui_qtouchevent_qtouchevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTouchEvent_QTouchEvent);

PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, new_);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, clone_);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, newQEventTypeQPointingDeviceQtKeyboardModifiersQListQEventPoint);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, newQEventTypeQPointingDeviceQtKeyboardModifiersQEventPointStatesQListQEventPoint);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, target);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, touchPointStates);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, isBeginEvent);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, isUpdateEvent);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, isEndEvent);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, m_target);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, setM_target);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, m_touchPointStates);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, setM_touchPointStates);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, m_reserved);
PHP_METHOD(Qt_Gui_QTouchEvent_QTouchEvent, setM_reserved);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_newqeventtypeqpointingdeviceqtkeyboardmodifiersqlistqeventpoint, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eventType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_INFO(0, modifiers)
	ZEND_ARG_INFO(0, touchPoints)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_newqeventtypeqpointingdeviceqtkeyboardmodifiersqeventpointstatesqlistqeventpoint, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eventType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, touchPointStates, IS_LONG, 0)
	ZEND_ARG_INFO(0, touchPoints)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_target, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_touchpointstates, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_isbeginevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_isupdateevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_isendevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_m_target, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_setm_target, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_m_touchpointstates, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_setm_touchpointstates, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_m_reserved, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtouchevent_qtouchevent_setm_reserved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtouchevent_qtouchevent_method_entry) {
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, new_, arginfo_qt_gui_qtouchevent_qtouchevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, clone_, arginfo_qt_gui_qtouchevent_qtouchevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, newQEventTypeQPointingDeviceQtKeyboardModifiersQListQEventPoint, arginfo_qt_gui_qtouchevent_qtouchevent_newqeventtypeqpointingdeviceqtkeyboardmodifiersqlistqeventpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, newQEventTypeQPointingDeviceQtKeyboardModifiersQEventPointStatesQListQEventPoint, arginfo_qt_gui_qtouchevent_qtouchevent_newqeventtypeqpointingdeviceqtkeyboardmodifiersqeventpointstatesqlistqeventpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, target, arginfo_qt_gui_qtouchevent_qtouchevent_target, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, touchPointStates, arginfo_qt_gui_qtouchevent_qtouchevent_touchpointstates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, isBeginEvent, arginfo_qt_gui_qtouchevent_qtouchevent_isbeginevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, isUpdateEvent, arginfo_qt_gui_qtouchevent_qtouchevent_isupdateevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, isEndEvent, arginfo_qt_gui_qtouchevent_qtouchevent_isendevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, m_target, arginfo_qt_gui_qtouchevent_qtouchevent_m_target, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, setM_target, arginfo_qt_gui_qtouchevent_qtouchevent_setm_target, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, m_touchPointStates, arginfo_qt_gui_qtouchevent_qtouchevent_m_touchpointstates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, setM_touchPointStates, arginfo_qt_gui_qtouchevent_qtouchevent_setm_touchpointstates, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, m_reserved, arginfo_qt_gui_qtouchevent_qtouchevent_m_reserved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTouchEvent_QTouchEvent, setM_reserved, arginfo_qt_gui_qtouchevent_qtouchevent_setm_reserved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
