
extern zend_class_entry *qt_gui_qt_qt_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_Qt_Qt);

PHP_METHOD(Qt_Gui_Qt_Qt, mightBeRichText);
PHP_METHOD(Qt_Gui_Qt_Qt, convertFromPlainText);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qt_qt_mightberichtext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qt_qt_convertfromplaintext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, plain, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qt_qt_method_entry) {
	PHP_ME(Qt_Gui_Qt_Qt, mightBeRichText, arginfo_qt_gui_qt_qt_mightberichtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_Qt_Qt, convertFromPlainText, arginfo_qt_gui_qt_qt_convertfromplaintext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
