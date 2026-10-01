
extern zend_class_entry *qt_gui_qtextlistformat_qtextlistformat_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextListFormat_QTextListFormat);

PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, new_);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, isValid);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, setStyle);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, style);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, setIndent);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, indent);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, setNumberPrefix);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, numberPrefix);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, setNumberSuffix);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, numberSuffix);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, setStart);
PHP_METHOD(Qt_Gui_QTextListFormat_QTextListFormat, start);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_setstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_style, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_setindent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_indent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_setnumberprefix, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numberPrefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_numberprefix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_setnumbersuffix, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, numberSuffix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_numbersuffix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_setstart, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, indent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlistformat_qtextlistformat_start, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextlistformat_qtextlistformat_method_entry) {
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, new_, arginfo_qt_gui_qtextlistformat_qtextlistformat_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, isValid, arginfo_qt_gui_qtextlistformat_qtextlistformat_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, setStyle, arginfo_qt_gui_qtextlistformat_qtextlistformat_setstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, style, arginfo_qt_gui_qtextlistformat_qtextlistformat_style, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, setIndent, arginfo_qt_gui_qtextlistformat_qtextlistformat_setindent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, indent, arginfo_qt_gui_qtextlistformat_qtextlistformat_indent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, setNumberPrefix, arginfo_qt_gui_qtextlistformat_qtextlistformat_setnumberprefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, numberPrefix, arginfo_qt_gui_qtextlistformat_qtextlistformat_numberprefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, setNumberSuffix, arginfo_qt_gui_qtextlistformat_qtextlistformat_setnumbersuffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, numberSuffix, arginfo_qt_gui_qtextlistformat_qtextlistformat_numbersuffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, setStart, arginfo_qt_gui_qtextlistformat_qtextlistformat_setstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextListFormat_QTextListFormat, start, arginfo_qt_gui_qtextlistformat_qtextlistformat_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
