
extern zend_class_entry *qt_gui_qtransformfunctions_qtransformfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTransformFunctions_QTransformFunctions);

PHP_METHOD(Qt_Gui_QTransformFunctions_QTransformFunctions, qHash);
PHP_METHOD(Qt_Gui_QTransformFunctions_QTransformFunctions, qFuzzyCompare);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransformfunctions_qtransformfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtransformfunctions_qtransformfunctions_qfuzzycompare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, t1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, t2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtransformfunctions_qtransformfunctions_method_entry) {
	PHP_ME(Qt_Gui_QTransformFunctions_QTransformFunctions, qHash, arginfo_qt_gui_qtransformfunctions_qtransformfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTransformFunctions_QTransformFunctions, qFuzzyCompare, arginfo_qt_gui_qtransformfunctions_qtransformfunctions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
