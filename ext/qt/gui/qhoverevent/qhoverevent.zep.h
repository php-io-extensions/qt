
extern zend_class_entry *qt_gui_qhoverevent_qhoverevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QHoverEvent_QHoverEvent);

PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, new_);
PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, clone_);
PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, newQEventTypeQPointFQPointFQPointFQtKeyboardModifiersQPointingDevice);
PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, newQEventTypeQPointFQPointFQtKeyboardModifiersQPointingDevice);
PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, isUpdateEvent);
PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, oldPos);
PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, oldPosF);
PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, m_oldPos);
PHP_METHOD(Qt_Gui_QHoverEvent_QHoverEvent, setM_oldPos);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhoverevent_qhoverevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhoverevent_qhoverevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhoverevent_qhoverevent_newqeventtypeqpointfqpointfqpointfqtkeyboardmodifiersqpointingdevice, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, oldPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, oldPosY, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, modifiers)
	ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhoverevent_qhoverevent_newqeventtypeqpointfqpointfqtkeyboardmodifiersqpointingdevice, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, oldPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, oldPosY, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, modifiers)
	ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhoverevent_qhoverevent_isupdateevent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhoverevent_qhoverevent_oldpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhoverevent_qhoverevent_oldposf, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhoverevent_qhoverevent_m_oldpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qhoverevent_qhoverevent_setm_oldpos, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qhoverevent_qhoverevent_method_entry) {
	PHP_ME(Qt_Gui_QHoverEvent_QHoverEvent, new_, arginfo_qt_gui_qhoverevent_qhoverevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHoverEvent_QHoverEvent, clone_, arginfo_qt_gui_qhoverevent_qhoverevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHoverEvent_QHoverEvent, newQEventTypeQPointFQPointFQPointFQtKeyboardModifiersQPointingDevice, arginfo_qt_gui_qhoverevent_qhoverevent_newqeventtypeqpointfqpointfqpointfqtkeyboardmodifiersqpointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHoverEvent_QHoverEvent, newQEventTypeQPointFQPointFQtKeyboardModifiersQPointingDevice, arginfo_qt_gui_qhoverevent_qhoverevent_newqeventtypeqpointfqpointfqtkeyboardmodifiersqpointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHoverEvent_QHoverEvent, isUpdateEvent, arginfo_qt_gui_qhoverevent_qhoverevent_isupdateevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHoverEvent_QHoverEvent, oldPos, arginfo_qt_gui_qhoverevent_qhoverevent_oldpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHoverEvent_QHoverEvent, oldPosF, arginfo_qt_gui_qhoverevent_qhoverevent_oldposf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHoverEvent_QHoverEvent, m_oldPos, arginfo_qt_gui_qhoverevent_qhoverevent_m_oldpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QHoverEvent_QHoverEvent, setM_oldPos, arginfo_qt_gui_qhoverevent_qhoverevent_setm_oldpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
