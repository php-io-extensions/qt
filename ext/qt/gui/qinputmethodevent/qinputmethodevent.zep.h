
extern zend_class_entry *qt_gui_qinputmethodevent_qinputmethodevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QInputMethodEvent_QInputMethodEvent);

PHP_METHOD(Qt_Gui_QInputMethodEvent_QInputMethodEvent, new_);
PHP_METHOD(Qt_Gui_QInputMethodEvent_QInputMethodEvent, clone_);
PHP_METHOD(Qt_Gui_QInputMethodEvent_QInputMethodEvent, new2);
PHP_METHOD(Qt_Gui_QInputMethodEvent_QInputMethodEvent, setCommitString);
PHP_METHOD(Qt_Gui_QInputMethodEvent_QInputMethodEvent, attributes);
PHP_METHOD(Qt_Gui_QInputMethodEvent_QInputMethodEvent, preeditString);
PHP_METHOD(Qt_Gui_QInputMethodEvent_QInputMethodEvent, commitString);
PHP_METHOD(Qt_Gui_QInputMethodEvent_QInputMethodEvent, replacementStart);
PHP_METHOD(Qt_Gui_QInputMethodEvent_QInputMethodEvent, replacementLength);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethodevent_qinputmethodevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethodevent_qinputmethodevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethodevent_qinputmethodevent_new2, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethodevent_qinputmethodevent_setcommitstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, commitString, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, replaceFrom, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, replaceLength, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethodevent_qinputmethodevent_attributes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethodevent_qinputmethodevent_preeditstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethodevent_qinputmethodevent_commitstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethodevent_qinputmethodevent_replacementstart, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputmethodevent_qinputmethodevent_replacementlength, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qinputmethodevent_qinputmethodevent_method_entry) {
	PHP_ME(Qt_Gui_QInputMethodEvent_QInputMethodEvent, new_, arginfo_qt_gui_qinputmethodevent_qinputmethodevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethodEvent_QInputMethodEvent, clone_, arginfo_qt_gui_qinputmethodevent_qinputmethodevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethodEvent_QInputMethodEvent, new2, arginfo_qt_gui_qinputmethodevent_qinputmethodevent_new2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethodEvent_QInputMethodEvent, setCommitString, arginfo_qt_gui_qinputmethodevent_qinputmethodevent_setcommitstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethodEvent_QInputMethodEvent, attributes, arginfo_qt_gui_qinputmethodevent_qinputmethodevent_attributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethodEvent_QInputMethodEvent, preeditString, arginfo_qt_gui_qinputmethodevent_qinputmethodevent_preeditstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethodEvent_QInputMethodEvent, commitString, arginfo_qt_gui_qinputmethodevent_qinputmethodevent_commitstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethodEvent_QInputMethodEvent, replacementStart, arginfo_qt_gui_qinputmethodevent_qinputmethodevent_replacementstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputMethodEvent_QInputMethodEvent, replacementLength, arginfo_qt_gui_qinputmethodevent_qinputmethodevent_replacementlength, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
