
extern zend_class_entry *qt_core_qlinefunctions_qlinefunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLineFunctions_QLineFunctions);

PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, qFuzzyIsNull);
PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, qFuzzyCompare);
PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, comparesEqualQLineFQLine);
PHP_METHOD(Qt_Core_QLineFunctions_QLineFunctions, comparesEqualQLineFQLineF);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinefunctions_qlinefunctions_comparesequal, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhsY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhsX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhsY2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinefunctions_qlinefunctions_qfuzzyisnull, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lineX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lineY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinefunctions_qlinefunctions_qfuzzycompare, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinefunctions_qlinefunctions_comparesequalqlinefqline, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsX1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsY1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsX2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsY2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlinefunctions_qlinefunctions_comparesequalqlinefqlinef, 0, 8, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsY2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsX1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsY1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsX2, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsY2, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qlinefunctions_qlinefunctions_method_entry) {
	PHP_ME(Qt_Core_QLineFunctions_QLineFunctions, comparesEqual, arginfo_qt_core_qlinefunctions_qlinefunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineFunctions_QLineFunctions, qFuzzyIsNull, arginfo_qt_core_qlinefunctions_qlinefunctions_qfuzzyisnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineFunctions_QLineFunctions, qFuzzyCompare, arginfo_qt_core_qlinefunctions_qlinefunctions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineFunctions_QLineFunctions, comparesEqualQLineFQLine, arginfo_qt_core_qlinefunctions_qlinefunctions_comparesequalqlinefqline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLineFunctions_QLineFunctions, comparesEqualQLineFQLineF, arginfo_qt_core_qlinefunctions_qlinefunctions_comparesequalqlinefqlinef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
