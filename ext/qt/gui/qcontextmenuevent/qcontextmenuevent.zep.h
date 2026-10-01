
extern zend_class_entry *qt_gui_qcontextmenuevent_qcontextmenuevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QContextMenuEvent_QContextMenuEvent);

PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, new_);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, clone_);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, newQContextMenuEventReasonQPointQPointQtKeyboardModifiers);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, newQContextMenuEventReasonQPoint);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, x);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, y);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, globalX);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, globalY);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, pos);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, globalPos);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, reason);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, m_pos);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, setM_pos);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, m_globalPos);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, setM_globalPos);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, m_reason);
PHP_METHOD(Qt_Gui_QContextMenuEvent_QContextMenuEvent, setM_reason);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_newqcontextmenueventreasonqpointqpointqtkeyboardmodifiers, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reason, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_LONG, 0)
	ZEND_ARG_INFO(0, modifiers)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_newqcontextmenueventreasonqpoint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, reason, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_x, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_y, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_globalx, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_globaly, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_pos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_globalpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_reason, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_m_pos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_setm_pos, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_m_globalpos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_setm_globalpos, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_m_reason, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_setm_reason, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qcontextmenuevent_qcontextmenuevent_method_entry) {
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, new_, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, clone_, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, newQContextMenuEventReasonQPointQPointQtKeyboardModifiers, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_newqcontextmenueventreasonqpointqpointqtkeyboardmodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, newQContextMenuEventReasonQPoint, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_newqcontextmenueventreasonqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, x, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_x, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, y, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_y, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, globalX, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_globalx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, globalY, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_globaly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, pos, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, globalPos, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_globalpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, reason, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_reason, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, m_pos, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_m_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, setM_pos, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_setm_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, m_globalPos, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_m_globalpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, setM_globalPos, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_setm_globalpos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, m_reason, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_m_reason, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QContextMenuEvent_QContextMenuEvent, setM_reason, arginfo_qt_gui_qcontextmenuevent_qcontextmenuevent_setm_reason, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
