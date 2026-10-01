
extern zend_class_entry *qt_gui_qdragenterevent_qdragenterevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QDragEnterEvent_QDragEnterEvent);

PHP_METHOD(Qt_Gui_QDragEnterEvent_QDragEnterEvent, new_);
PHP_METHOD(Qt_Gui_QDragEnterEvent_QDragEnterEvent, clone_);
PHP_METHOD(Qt_Gui_QDragEnterEvent_QDragEnterEvent, newQPointQtDropActionsQMimeDataQtMouseButtonsQtKeyboardModifiers);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragenterevent_qdragenterevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragenterevent_qdragenterevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdragenterevent_qdragenterevent_newqpointqtdropactionsqmimedataqtmousebuttonsqtkeyboardmodifiers, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, actions, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qdragenterevent_qdragenterevent_method_entry) {
	PHP_ME(Qt_Gui_QDragEnterEvent_QDragEnterEvent, new_, arginfo_qt_gui_qdragenterevent_qdragenterevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragEnterEvent_QDragEnterEvent, clone_, arginfo_qt_gui_qdragenterevent_qdragenterevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDragEnterEvent_QDragEnterEvent, newQPointQtDropActionsQMimeDataQtMouseButtonsQtKeyboardModifiers, arginfo_qt_gui_qdragenterevent_qdragenterevent_newqpointqtdropactionsqmimedataqtmousebuttonsqtkeyboardmodifiers, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
