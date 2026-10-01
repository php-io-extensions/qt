
extern zend_class_entry *qt_gui_qvectorndfunctions_qvectorndfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QVectorndFunctions_QVectorndFunctions);

PHP_METHOD(Qt_Gui_QVectorndFunctions_QVectorndFunctions, qFuzzyCompare);
PHP_METHOD(Qt_Gui_QVectorndFunctions_QVectorndFunctions, qFuzzyCompareQVector3DQVector3D);
PHP_METHOD(Qt_Gui_QVectorndFunctions_QVectorndFunctions, qFuzzyCompareQVector4DQVector4D);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvectorndfunctions_qvectorndfunctions_qfuzzycompare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvectorndfunctions_qvectorndfunctions_qfuzzycompareqvector3dqvector3d, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qvectorndfunctions_qvectorndfunctions_qfuzzycompareqvector4dqvector4d, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, v1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, v2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qvectorndfunctions_qvectorndfunctions_method_entry) {
	PHP_ME(Qt_Gui_QVectorndFunctions_QVectorndFunctions, qFuzzyCompare, arginfo_qt_gui_qvectorndfunctions_qvectorndfunctions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVectorndFunctions_QVectorndFunctions, qFuzzyCompareQVector3DQVector3D, arginfo_qt_gui_qvectorndfunctions_qvectorndfunctions_qfuzzycompareqvector3dqvector3d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QVectorndFunctions_QVectorndFunctions, qFuzzyCompareQVector4DQVector4D, arginfo_qt_gui_qvectorndfunctions_qvectorndfunctions_qfuzzycompareqvector4dqvector4d, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
