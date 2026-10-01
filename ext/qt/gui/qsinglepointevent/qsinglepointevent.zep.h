
extern zend_class_entry *qt_gui_qsinglepointevent_qsinglepointevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QSinglePointEvent_QSinglePointEvent);

PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, staticMetaObject);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, new_);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, clone_);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, button);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, buttons);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, position);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, scenePosition);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, globalPosition);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, isBeginEvent);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, isUpdateEvent);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, isEndEvent);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, exclusivePointGrabber);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setExclusivePointGrabber);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, newQEventTypeQPointingDeviceQEventPointQtMouseButtonQtMouseButtonsQtKeyboardModifiersQtMouseEventSource);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, newQEventTypeQPointingDeviceQPointFQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQtMouseEventSource);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_button);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_button);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_mouseState);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_mouseState);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_source);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_source);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_reserved);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_reserved);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_reserved2);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_reserved2);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_doubleClick);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_doubleClick);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_phase);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_phase);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_invertedScrolling);
PHP_METHOD(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_invertedScrolling);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_button, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_buttons, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_position, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_sceneposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_globalposition, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_isbeginevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_isupdateevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_isendevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_exclusivepointgrabber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setexclusivepointgrabber, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, exclusiveGrabber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_newqeventtypeqpointingdeviceqeventpointqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqtmouseeventsource, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_newqeventtypeqpointingdeviceqpointfqpointfqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqtmouseeventsource, 0, 11, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dev, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, localPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_INFO(0, source)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_button, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_button, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_mousestate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_mousestate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_source, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_source, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_reserved, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_reserved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_reserved2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_reserved2, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_doubleclick, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_doubleclick, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_phase, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_phase, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_invertedscrolling, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_invertedscrolling, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qsinglepointevent_qsinglepointevent_method_entry) {
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, staticMetaObject, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, qt_check_for_QGADGET_macro, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, new_, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, clone_, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, button, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, buttons, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_buttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, position, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, scenePosition, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_sceneposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, globalPosition, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_globalposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, isBeginEvent, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_isbeginevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, isUpdateEvent, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_isupdateevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, isEndEvent, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_isendevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, exclusivePointGrabber, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_exclusivepointgrabber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setExclusivePointGrabber, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setexclusivepointgrabber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, newQEventTypeQPointingDeviceQEventPointQtMouseButtonQtMouseButtonsQtKeyboardModifiersQtMouseEventSource, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_newqeventtypeqpointingdeviceqeventpointqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqtmouseeventsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, newQEventTypeQPointingDeviceQPointFQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQtMouseEventSource, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_newqeventtypeqpointingdeviceqpointfqpointfqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqtmouseeventsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_button, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_button, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_mouseState, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_mousestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_mouseState, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_mousestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_source, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_source, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_source, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_source, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_reserved, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_reserved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_reserved, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_reserved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_reserved2, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_reserved2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_reserved2, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_reserved2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_doubleClick, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_doubleclick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_doubleClick, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_doubleclick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_phase, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_phase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_phase, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_phase, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, m_invertedScrolling, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_m_invertedscrolling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSinglePointEvent_QSinglePointEvent, setM_invertedScrolling, arginfo_qt_gui_qsinglepointevent_qsinglepointevent_setm_invertedscrolling, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
