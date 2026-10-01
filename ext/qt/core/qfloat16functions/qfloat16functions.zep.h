
extern zend_class_entry *qt_core_qfloat16functions_qfloat16functions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QFloat16Functions_QFloat16Functions);

PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFloatToFloat16);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFloatFromFloat16);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIsInf);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIsNaN);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIsFinite);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFpClassify);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qSqrt);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qRound);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qRound64);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFuzzyCompare);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qFuzzyIsNull);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIsNull);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qIntCast);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qHypot);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qHypotQfloat16Qfloat16Qfloat16);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWay);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqual);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWayQfloat16Double);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqualQfloat16Double);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWayQfloat16LongDouble);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqualQfloat16LongDouble);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWayQfloat16Qfloat16);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqualQfloat16Qfloat16);
PHP_METHOD(Qt_Core_QFloat16Functions_QFloat16Functions, qHash);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qfloattofloat16, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg1)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qfloatfromfloat16, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_INFO(0, arg0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qisinf, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qisnan, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qisfinite, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qfpclassify, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qsqrt, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qround, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qround64, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, d, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qfuzzycompare, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, p1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qfuzzyisnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qisnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qintcast, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qhypot, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qhypotqfloat16qfloat16qfloat16, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, z, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_comparethreeway, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_comparethreewayqfloat16double, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_comparesequalqfloat16double, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_comparethreewayqfloat16longdouble, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_comparesequalqfloat16longdouble, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_comparethreewayqfloat16qfloat16, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_comparesequalqfloat16qfloat16, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfloat16functions_qfloat16functions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qfloat16functions_qfloat16functions_method_entry) {
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qFloatToFloat16, arginfo_qt_core_qfloat16functions_qfloat16functions_qfloattofloat16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qFloatFromFloat16, arginfo_qt_core_qfloat16functions_qfloat16functions_qfloatfromfloat16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qIsInf, arginfo_qt_core_qfloat16functions_qfloat16functions_qisinf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qIsNaN, arginfo_qt_core_qfloat16functions_qfloat16functions_qisnan, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qIsFinite, arginfo_qt_core_qfloat16functions_qfloat16functions_qisfinite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qFpClassify, arginfo_qt_core_qfloat16functions_qfloat16functions_qfpclassify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qSqrt, arginfo_qt_core_qfloat16functions_qfloat16functions_qsqrt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qRound, arginfo_qt_core_qfloat16functions_qfloat16functions_qround, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qRound64, arginfo_qt_core_qfloat16functions_qfloat16functions_qround64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qFuzzyCompare, arginfo_qt_core_qfloat16functions_qfloat16functions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qFuzzyIsNull, arginfo_qt_core_qfloat16functions_qfloat16functions_qfuzzyisnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qIsNull, arginfo_qt_core_qfloat16functions_qfloat16functions_qisnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qIntCast, arginfo_qt_core_qfloat16functions_qfloat16functions_qintcast, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qHypot, arginfo_qt_core_qfloat16functions_qfloat16functions_qhypot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qHypotQfloat16Qfloat16Qfloat16, arginfo_qt_core_qfloat16functions_qfloat16functions_qhypotqfloat16qfloat16qfloat16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWay, arginfo_qt_core_qfloat16functions_qfloat16functions_comparethreeway, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqual, arginfo_qt_core_qfloat16functions_qfloat16functions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWayQfloat16Double, arginfo_qt_core_qfloat16functions_qfloat16functions_comparethreewayqfloat16double, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqualQfloat16Double, arginfo_qt_core_qfloat16functions_qfloat16functions_comparesequalqfloat16double, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWayQfloat16LongDouble, arginfo_qt_core_qfloat16functions_qfloat16functions_comparethreewayqfloat16longdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqualQfloat16LongDouble, arginfo_qt_core_qfloat16functions_qfloat16functions_comparesequalqfloat16longdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, compareThreeWayQfloat16Qfloat16, arginfo_qt_core_qfloat16functions_qfloat16functions_comparethreewayqfloat16qfloat16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, comparesEqualQfloat16Qfloat16, arginfo_qt_core_qfloat16functions_qfloat16functions_comparesequalqfloat16qfloat16, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFloat16Functions_QFloat16Functions, qHash, arginfo_qt_core_qfloat16functions_qfloat16functions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
