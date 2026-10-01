
extern zend_class_entry *qt_gui_qpixmapcachefunctions_qpixmapcachefunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPixmapcacheFunctions_QPixmapcacheFunctions);

PHP_METHOD(Qt_Gui_QPixmapcacheFunctions_QPixmapcacheFunctions, swap);
PHP_METHOD(Qt_Gui_QPixmapcacheFunctions_QPixmapcacheFunctions, qHash);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcachefunctions_qpixmapcachefunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpixmapcachefunctions_qpixmapcachefunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, k, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpixmapcachefunctions_qpixmapcachefunctions_method_entry) {
	PHP_ME(Qt_Gui_QPixmapcacheFunctions_QPixmapcacheFunctions, swap, arginfo_qt_gui_qpixmapcachefunctions_qpixmapcachefunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPixmapcacheFunctions_QPixmapcacheFunctions, qHash, arginfo_qt_gui_qpixmapcachefunctions_qpixmapcachefunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
