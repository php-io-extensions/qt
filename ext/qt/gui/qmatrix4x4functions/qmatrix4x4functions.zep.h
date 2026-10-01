
extern zend_class_entry *qt_gui_qmatrix4x4functions_qmatrix4x4functions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QMatrix4x4Functions_QMatrix4x4Functions);

PHP_METHOD(Qt_Gui_QMatrix4x4Functions_QMatrix4x4Functions, qFuzzyCompare);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qmatrix4x4functions_qmatrix4x4functions_qfuzzycompare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, m1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qmatrix4x4functions_qmatrix4x4functions_method_entry) {
	PHP_ME(Qt_Gui_QMatrix4x4Functions_QMatrix4x4Functions, qFuzzyCompare, arginfo_qt_gui_qmatrix4x4functions_qmatrix4x4functions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
