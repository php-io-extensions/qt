
extern zend_class_entry *qt_gui_qfonttag_qfonttag_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QFontTag_QFontTag);

PHP_METHOD(Qt_Gui_QFontTag_QFontTag, new_);
PHP_METHOD(Qt_Gui_QFontTag_QFontTag, isValid);
PHP_METHOD(Qt_Gui_QFontTag_QFontTag, value);
PHP_METHOD(Qt_Gui_QFontTag_QFontTag, toString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfonttag_qfonttag_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfonttag_qfonttag_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfonttag_qfonttag_value, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qfonttag_qfonttag_tostring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qfonttag_qfonttag_method_entry) {
	PHP_ME(Qt_Gui_QFontTag_QFontTag, new_, arginfo_qt_gui_qfonttag_qfonttag_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontTag_QFontTag, isValid, arginfo_qt_gui_qfonttag_qfonttag_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontTag_QFontTag, value, arginfo_qt_gui_qfonttag_qfonttag_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QFontTag_QFontTag, toString, arginfo_qt_gui_qfonttag_qfonttag_tostring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
