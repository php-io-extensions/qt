
extern zend_class_entry *qt_gui_qdropevent_qdropevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QDropEvent_QDropEvent);

PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, new_);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, clone_);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, newQPointFQtDropActionsQMimeDataQtMouseButtonsQtKeyboardModifiersQEventType);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, position);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, buttons);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, modifiers);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, possibleActions);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, proposedAction);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, acceptProposedAction);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, dropAction);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, setDropAction);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, source);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, mimeData);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, m_pos);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, setM_pos);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, m_mouseState);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, setM_mouseState);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, m_modState);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, setM_modState);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, m_actions);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, setM_actions);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, m_dropAction);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, setM_dropAction);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, m_defaultAction);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, setM_defaultAction);
PHP_METHOD(Qt_Gui_QDropEvent_QDropEvent, m_data);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_newqpointfqtdropactionsqmimedataqtmousebuttonsqtkeyboardmodifiersqeventtype, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, actions, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_position, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_buttons, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_modifiers, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_possibleactions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_proposedaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_acceptproposedaction, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_dropaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_setdropaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_source, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_mimedata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_m_pos, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_setm_pos, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_m_mousestate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_setm_mousestate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_m_modstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_setm_modstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_m_actions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_setm_actions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_m_dropaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_setm_dropaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_m_defaultaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_setm_defaultaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdropevent_qdropevent_m_data, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qdropevent_qdropevent_method_entry) {
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, new_, arginfo_qt_gui_qdropevent_qdropevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, clone_, arginfo_qt_gui_qdropevent_qdropevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, newQPointFQtDropActionsQMimeDataQtMouseButtonsQtKeyboardModifiersQEventType, arginfo_qt_gui_qdropevent_qdropevent_newqpointfqtdropactionsqmimedataqtmousebuttonsqtkeyboardmodifiersqeventtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, position, arginfo_qt_gui_qdropevent_qdropevent_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, buttons, arginfo_qt_gui_qdropevent_qdropevent_buttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, modifiers, arginfo_qt_gui_qdropevent_qdropevent_modifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, possibleActions, arginfo_qt_gui_qdropevent_qdropevent_possibleactions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, proposedAction, arginfo_qt_gui_qdropevent_qdropevent_proposedaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, acceptProposedAction, arginfo_qt_gui_qdropevent_qdropevent_acceptproposedaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, dropAction, arginfo_qt_gui_qdropevent_qdropevent_dropaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, setDropAction, arginfo_qt_gui_qdropevent_qdropevent_setdropaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, source, arginfo_qt_gui_qdropevent_qdropevent_source, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, mimeData, arginfo_qt_gui_qdropevent_qdropevent_mimedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, m_pos, arginfo_qt_gui_qdropevent_qdropevent_m_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, setM_pos, arginfo_qt_gui_qdropevent_qdropevent_setm_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, m_mouseState, arginfo_qt_gui_qdropevent_qdropevent_m_mousestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, setM_mouseState, arginfo_qt_gui_qdropevent_qdropevent_setm_mousestate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, m_modState, arginfo_qt_gui_qdropevent_qdropevent_m_modstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, setM_modState, arginfo_qt_gui_qdropevent_qdropevent_setm_modstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, m_actions, arginfo_qt_gui_qdropevent_qdropevent_m_actions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, setM_actions, arginfo_qt_gui_qdropevent_qdropevent_setm_actions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, m_dropAction, arginfo_qt_gui_qdropevent_qdropevent_m_dropaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, setM_dropAction, arginfo_qt_gui_qdropevent_qdropevent_setm_dropaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, m_defaultAction, arginfo_qt_gui_qdropevent_qdropevent_m_defaultaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, setM_defaultAction, arginfo_qt_gui_qdropevent_qdropevent_setm_defaultaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDropEvent_QDropEvent, m_data, arginfo_qt_gui_qdropevent_qdropevent_m_data, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
