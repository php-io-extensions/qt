
extern zend_class_entry *qt_widgets_qstylehintreturn_qstylehintreturn_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleHintReturn_QStyleHintReturn);

PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, new_);
PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, version);
PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, setVersion);
PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, type);
PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, setType);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, version)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_version, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_setversion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_settype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstylehintreturn_qstylehintreturn_method_entry) {
	PHP_ME(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, new_, arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, version, arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_version, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, setVersion, arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_setversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, type, arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, setType, arginfo_qt_widgets_qstylehintreturn_qstylehintreturn_settype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
