
extern zend_class_entry *qt_core_qnumericfunctions_qnumericfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QNumericFunctions_QNumericFunctions);

PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsInf);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNaN);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsFinite);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFpClassify);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsInfFloat);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNaNFloat);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsFiniteFloat);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFpClassifyFloat);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qSNaN);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qQNaN);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qInf);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFloatDistance);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFloatDistanceDoubleDouble);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qRound);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qRoundFloat);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qRound64);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qRound64Float);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyCompare);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyCompareFloatFloat);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyIsNull);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyIsNullFloat);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNull);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNullFloat);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIntCast);
PHP_METHOD(Qt_Core_QNumericFunctions_QNumericFunctions, qIntCastFloat);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisinf, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisnan, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisfinite, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfpclassify, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisinffloat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisnanfloat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisfinitefloat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfpclassifyfloat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, val, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qsnan, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qqnan, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qinf, 0, 0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfloatdistance, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfloatdistancedoubledouble, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qround, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qroundfloat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qround64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qround64float, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfuzzycompare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, p1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfuzzycomparefloatfloat, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, p1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfuzzyisnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfuzzyisnullfloat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisnullfloat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qintcast, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qnumericfunctions_qnumericfunctions_qintcastfloat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qnumericfunctions_qnumericfunctions_method_entry) {
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIsInf, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisinf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNaN, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisnan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIsFinite, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisfinite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qFpClassify, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfpclassify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIsInfFloat, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisinffloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNaNFloat, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisnanfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIsFiniteFloat, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisfinitefloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qFpClassifyFloat, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfpclassifyfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qSNaN, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qsnan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qQNaN, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qqnan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qInf, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qinf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qFloatDistance, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfloatdistance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qFloatDistanceDoubleDouble, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfloatdistancedoubledouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qRound, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qround, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qRoundFloat, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qroundfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qRound64, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qround64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qRound64Float, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qround64float, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyCompare, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyCompareFloatFloat, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfuzzycomparefloatfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyIsNull, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfuzzyisnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qFuzzyIsNullFloat, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qfuzzyisnullfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNull, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIsNullFloat, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qisnullfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIntCast, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qintcast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QNumericFunctions_QNumericFunctions, qIntCastFloat, arginfo_qt_core_qnumericfunctions_qnumericfunctions_qintcastfloat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
