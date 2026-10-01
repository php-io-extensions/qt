
extern zend_class_entry *qt_core_qsizefunctions_qsizefunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSizeFunctions_QSizeFunctions);

PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, qHash);
PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, comparesEqualQSizeFQSize);
PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, comparesEqualQSizeFQSizeF);
PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, qFuzzyIsNull);
PHP_METHOD(Qt_Core_QSizeFunctions_QSizeFunctions, qFuzzyCompare);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizefunctions_qsizefunctions_qhash, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizefunctions_qsizefunctions_comparesequal, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, s1Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s1Height, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s2Width, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, s2Height, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizefunctions_qsizefunctions_comparesequalqsizefqsize, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhsHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizefunctions_qsizefunctions_comparesequalqsizefqsizef, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhsWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, lhsHeight, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rhsHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizefunctions_qsizefunctions_qfuzzyisnull, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsizefunctions_qsizefunctions_qfuzzycompare, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, s1Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, s1Height, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, s2Width, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, s2Height, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsizefunctions_qsizefunctions_method_entry) {
	PHP_ME(Qt_Core_QSizeFunctions_QSizeFunctions, qHash, arginfo_qt_core_qsizefunctions_qsizefunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeFunctions_QSizeFunctions, comparesEqual, arginfo_qt_core_qsizefunctions_qsizefunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeFunctions_QSizeFunctions, comparesEqualQSizeFQSize, arginfo_qt_core_qsizefunctions_qsizefunctions_comparesequalqsizefqsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeFunctions_QSizeFunctions, comparesEqualQSizeFQSizeF, arginfo_qt_core_qsizefunctions_qsizefunctions_comparesequalqsizefqsizef, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeFunctions_QSizeFunctions, qFuzzyIsNull, arginfo_qt_core_qsizefunctions_qsizefunctions_qfuzzyisnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSizeFunctions_QSizeFunctions, qFuzzyCompare, arginfo_qt_core_qsizefunctions_qsizefunctions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
