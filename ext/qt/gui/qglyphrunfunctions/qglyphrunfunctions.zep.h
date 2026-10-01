
extern zend_class_entry *qt_gui_qglyphrunfunctions_qglyphrunfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QGlyphrunFunctions_QGlyphrunFunctions);

PHP_METHOD(Qt_Gui_QGlyphrunFunctions_QGlyphrunFunctions, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qglyphrunfunctions_qglyphrunfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qglyphrunfunctions_qglyphrunfunctions_method_entry) {
	PHP_ME(Qt_Gui_QGlyphrunFunctions_QGlyphrunFunctions, swap, arginfo_qt_gui_qglyphrunfunctions_qglyphrunfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
