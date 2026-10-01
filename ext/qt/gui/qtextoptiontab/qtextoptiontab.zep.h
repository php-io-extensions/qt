
extern zend_class_entry *qt_gui_qtextoptiontab_qtextoptiontab_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextOptionTab_QTextOptionTab);

PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, new_);
PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, newQrealQTextOptionTabTypeQChar);
PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, position);
PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, setPosition);
PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, type);
PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, setType);
PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, delimiter);
PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, setDelimiter);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoptiontab_qtextoptiontab_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoptiontab_qtextoptiontab_newqrealqtextoptiontabtypeqchar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, tabType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, delim, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoptiontab_qtextoptiontab_position, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoptiontab_qtextoptiontab_setposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoptiontab_qtextoptiontab_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoptiontab_qtextoptiontab_settype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoptiontab_qtextoptiontab_delimiter, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextoptiontab_qtextoptiontab_setdelimiter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextoptiontab_qtextoptiontab_method_entry) {
	PHP_ME(Qt_Gui_QTextOptionTab_QTextOptionTab, new_, arginfo_qt_gui_qtextoptiontab_qtextoptiontab_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOptionTab_QTextOptionTab, newQrealQTextOptionTabTypeQChar, arginfo_qt_gui_qtextoptiontab_qtextoptiontab_newqrealqtextoptiontabtypeqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOptionTab_QTextOptionTab, position, arginfo_qt_gui_qtextoptiontab_qtextoptiontab_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOptionTab_QTextOptionTab, setPosition, arginfo_qt_gui_qtextoptiontab_qtextoptiontab_setposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOptionTab_QTextOptionTab, type, arginfo_qt_gui_qtextoptiontab_qtextoptiontab_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOptionTab_QTextOptionTab, setType, arginfo_qt_gui_qtextoptiontab_qtextoptiontab_settype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOptionTab_QTextOptionTab, delimiter, arginfo_qt_gui_qtextoptiontab_qtextoptiontab_delimiter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextOptionTab_QTextOptionTab, setDelimiter, arginfo_qt_gui_qtextoptiontab_qtextoptiontab_setdelimiter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
