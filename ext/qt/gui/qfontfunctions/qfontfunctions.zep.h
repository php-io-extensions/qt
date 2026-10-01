
extern zend_class_entry *qt_gui_qfontfunctions_qfontfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFontFunctions_QFontFunctions);

PHP_METHOD(Qt_Gui_QFontFunctions_QFontFunctions, swap);
PHP_METHOD(Qt_Gui_QFontFunctions_QFontFunctions, qHash);
PHP_METHOD(Qt_Gui_QFontFunctions_QFontFunctions, compareThreeWay);
PHP_METHOD(Qt_Gui_QFontFunctions_QFontFunctions, comparesEqual);
PHP_METHOD(Qt_Gui_QFontFunctions_QFontFunctions, qHashQFontTagSizeT);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontfunctions_qfontfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontfunctions_qfontfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontfunctions_qfontfunctions_comparethreeway, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontfunctions_qfontfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfontfunctions_qfontfunctions_qhashqfonttagsizet, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfontfunctions_qfontfunctions_method_entry) {
	PHP_ME(Qt_Gui_QFontFunctions_QFontFunctions, swap, arginfo_qt_gui_qfontfunctions_qfontfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontFunctions_QFontFunctions, qHash, arginfo_qt_gui_qfontfunctions_qfontfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontFunctions_QFontFunctions, compareThreeWay, arginfo_qt_gui_qfontfunctions_qfontfunctions_comparethreeway, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontFunctions_QFontFunctions, comparesEqual, arginfo_qt_gui_qfontfunctions_qfontfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontFunctions_QFontFunctions, qHashQFontTagSizeT, arginfo_qt_gui_qfontfunctions_qfontfunctions_qhashqfonttagsizet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
