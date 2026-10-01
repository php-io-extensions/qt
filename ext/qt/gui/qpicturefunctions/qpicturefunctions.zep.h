
extern zend_class_entry *qt_gui_qpicturefunctions_qpicturefunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPictureFunctions_QPictureFunctions);

PHP_METHOD(Qt_Gui_QPictureFunctions_QPictureFunctions, swap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpicturefunctions_qpicturefunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpicturefunctions_qpicturefunctions_method_entry) {
	PHP_ME(Qt_Gui_QPictureFunctions_QPictureFunctions, swap, arginfo_qt_gui_qpicturefunctions_qpicturefunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
