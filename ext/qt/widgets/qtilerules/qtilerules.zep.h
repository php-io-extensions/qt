
extern zend_class_entry *qt_widgets_qtilerules_qtilerules_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTileRules_QTileRules);

PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, new_);
PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, newQtTileRule);
PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, horizontal);
PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, setHorizontal);
PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, vertical);
PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, setVertical);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtilerules_qtilerules_new_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, horizontalRule, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, verticalRule, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtilerules_qtilerules_newqttilerule, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, rule)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtilerules_qtilerules_horizontal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtilerules_qtilerules_sethorizontal, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtilerules_qtilerules_vertical, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtilerules_qtilerules_setvertical, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtilerules_qtilerules_method_entry) {
	PHP_ME(Qt_Widgets_QTileRules_QTileRules, new_, arginfo_qt_widgets_qtilerules_qtilerules_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTileRules_QTileRules, newQtTileRule, arginfo_qt_widgets_qtilerules_qtilerules_newqttilerule, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTileRules_QTileRules, horizontal, arginfo_qt_widgets_qtilerules_qtilerules_horizontal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTileRules_QTileRules, setHorizontal, arginfo_qt_widgets_qtilerules_qtilerules_sethorizontal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTileRules_QTileRules, vertical, arginfo_qt_widgets_qtilerules_qtilerules_vertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTileRules_QTileRules, setVertical, arginfo_qt_widgets_qtilerules_qtilerules_setvertical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
