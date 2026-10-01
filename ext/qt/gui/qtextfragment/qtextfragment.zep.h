
extern zend_class_entry *qt_gui_qtextfragment_qtextfragment_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextFragment_QTextFragment);

PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, new_);
PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, newQTextFragment);
PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, isValid);
PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, position);
PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, length);
PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, contains);
PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, charFormat);
PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, charFormatIndex);
PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, text);
PHP_METHOD(Qt_Gui_QTextFragment_QTextFragment, glyphRuns);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_newqtextfragment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_position, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_charformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_charformatindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextfragment_qtextfragment_glyphruns, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextfragment_qtextfragment_method_entry) {
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, new_, arginfo_qt_gui_qtextfragment_qtextfragment_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, newQTextFragment, arginfo_qt_gui_qtextfragment_qtextfragment_newqtextfragment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, isValid, arginfo_qt_gui_qtextfragment_qtextfragment_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, position, arginfo_qt_gui_qtextfragment_qtextfragment_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, length, arginfo_qt_gui_qtextfragment_qtextfragment_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, contains, arginfo_qt_gui_qtextfragment_qtextfragment_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, charFormat, arginfo_qt_gui_qtextfragment_qtextfragment_charformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, charFormatIndex, arginfo_qt_gui_qtextfragment_qtextfragment_charformatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, text, arginfo_qt_gui_qtextfragment_qtextfragment_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFragment_QTextFragment, glyphRuns, arginfo_qt_gui_qtextfragment_qtextfragment_glyphruns, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
