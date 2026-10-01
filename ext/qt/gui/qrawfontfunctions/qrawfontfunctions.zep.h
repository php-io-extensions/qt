
extern zend_class_entry *qt_gui_qrawfontfunctions_qrawfontfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QRawfontFunctions_QRawfontFunctions);

PHP_METHOD(Qt_Gui_QRawfontFunctions_QRawfontFunctions, swap);
PHP_METHOD(Qt_Gui_QRawfontFunctions_QRawfontFunctions, qHash);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfontfunctions_qrawfontfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrawfontfunctions_qrawfontfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qrawfontfunctions_qrawfontfunctions_method_entry) {
	PHP_ME(Qt_Gui_QRawfontFunctions_QRawfontFunctions, swap, arginfo_qt_gui_qrawfontfunctions_qrawfontfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRawfontFunctions_QRawfontFunctions, qHash, arginfo_qt_gui_qrawfontfunctions_qrawfontfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
