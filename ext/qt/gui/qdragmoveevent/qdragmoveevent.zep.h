
extern zend_class_entry *qt_gui_qdragmoveevent_qdragmoveevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QDragMoveEvent_QDragMoveEvent);

PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, new_);
PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, clone_);
PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, newQPointQtDropActionsQMimeDataQtMouseButtonsQtKeyboardModifiersQEventType);
PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, answerRect);
PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, accept);
PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, ignore);
PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, acceptQRect);
PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, ignoreQRect);
PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, m_rect);
PHP_METHOD(Qt_Gui_QDragMoveEvent_QDragMoveEvent, setM_rect);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_newqpointqtdropactionsqmimedataqtmousebuttonsqtkeyboardmodifiersqeventtype, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, actions, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_answerrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_accept, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_ignore, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_acceptqrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_ignoreqrect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_m_rect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragmoveevent_qdragmoveevent_setm_rect, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, valueHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qdragmoveevent_qdragmoveevent_method_entry) {
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, new_, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, clone_, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, newQPointQtDropActionsQMimeDataQtMouseButtonsQtKeyboardModifiersQEventType, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_newqpointqtdropactionsqmimedataqtmousebuttonsqtkeyboardmodifiersqeventtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, answerRect, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_answerrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, accept, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_accept, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, ignore, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_ignore, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, acceptQRect, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_acceptqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, ignoreQRect, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_ignoreqrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, m_rect, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_m_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragMoveEvent_QDragMoveEvent, setM_rect, arginfo_qt_gui_qdragmoveevent_qdragmoveevent_setm_rect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
