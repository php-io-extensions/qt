
extern zend_class_entry *qt_gui_qmouseevent_qmouseevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QMouseEvent_QMouseEvent);

PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, new_);
PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, clone_);
PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQPointingDevice);
PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQPointingDevice);
PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQPointingDevice);
PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQtMouseEventSourceQPointingDevice);
PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, pos);
PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, source);
PHP_METHOD(Qt_Gui_QMouseEvent_QMouseEvent, flags);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmouseevent_qmouseevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmouseevent_qmouseevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmouseevent_qmouseevent_newqeventtypeqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqpointingdevice, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, localPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmouseevent_qmouseevent_newqeventtypeqpointfqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqpointingdevice, 0, 8, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, localPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmouseevent_qmouseevent_newqeventtypeqpointfqpointfqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqpointingdevice, 0, 10, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, localPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmouseevent_qmouseevent_newqeventtypeqpointfqpointfqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqtmouseeventsourceqpointingdevice, 0, 11, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, localPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, source, IS_LONG, 0)
	ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmouseevent_qmouseevent_pos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmouseevent_qmouseevent_source, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmouseevent_qmouseevent_flags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qmouseevent_qmouseevent_method_entry) {
	PHP_ME(Qt_Gui_QMouseEvent_QMouseEvent, new_, arginfo_qt_gui_qmouseevent_qmouseevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMouseEvent_QMouseEvent, clone_, arginfo_qt_gui_qmouseevent_qmouseevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQPointingDevice, arginfo_qt_gui_qmouseevent_qmouseevent_newqeventtypeqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqpointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQPointingDevice, arginfo_qt_gui_qmouseevent_qmouseevent_newqeventtypeqpointfqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqpointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQPointingDevice, arginfo_qt_gui_qmouseevent_qmouseevent_newqeventtypeqpointfqpointfqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqpointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMouseEvent_QMouseEvent, newQEventTypeQPointFQPointFQPointFQtMouseButtonQtMouseButtonsQtKeyboardModifiersQtMouseEventSourceQPointingDevice, arginfo_qt_gui_qmouseevent_qmouseevent_newqeventtypeqpointfqpointfqpointfqtmousebuttonqtmousebuttonsqtkeyboardmodifiersqtmouseeventsourceqpointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMouseEvent_QMouseEvent, pos, arginfo_qt_gui_qmouseevent_qmouseevent_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMouseEvent_QMouseEvent, source, arginfo_qt_gui_qmouseevent_qmouseevent_source, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QMouseEvent_QMouseEvent, flags, arginfo_qt_gui_qmouseevent_qmouseevent_flags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
