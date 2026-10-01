
extern zend_class_entry *qt_gui_qtextlength_qtextlength_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextLength_QTextLength);

PHP_METHOD(Qt_Gui_QTextLength_QTextLength, new_);
PHP_METHOD(Qt_Gui_QTextLength_QTextLength, newQTextLengthTypeQreal);
PHP_METHOD(Qt_Gui_QTextLength_QTextLength, type);
PHP_METHOD(Qt_Gui_QTextLength_QTextLength, value);
PHP_METHOD(Qt_Gui_QTextLength_QTextLength, rawValue);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlength_qtextlength_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlength_qtextlength_newqtextlengthtypeqreal, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlength_qtextlength_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlength_qtextlength_value, 0, 2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximumLength, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlength_qtextlength_rawvalue, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextlength_qtextlength_method_entry) {
	PHP_ME(Qt_Gui_QTextLength_QTextLength, new_, arginfo_qt_gui_qtextlength_qtextlength_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLength_QTextLength, newQTextLengthTypeQreal, arginfo_qt_gui_qtextlength_qtextlength_newqtextlengthtypeqreal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLength_QTextLength, type, arginfo_qt_gui_qtextlength_qtextlength_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLength_QTextLength, value, arginfo_qt_gui_qtextlength_qtextlength_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextLength_QTextLength, rawValue, arginfo_qt_gui_qtextlength_qtextlength_rawvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
