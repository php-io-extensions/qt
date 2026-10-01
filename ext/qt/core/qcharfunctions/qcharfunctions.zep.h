
extern zend_class_entry *qt_core_qcharfunctions_qcharfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCharFunctions_QCharFunctions);

PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, compareThreeWay);
PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, compareThreeWayQLatin1CharQLatin1Char);
PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, comparesEqualQLatin1CharQLatin1Char);
PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, compareThreeWayQCharQChar);
PHP_METHOD(Qt_Core_QCharFunctions_QCharFunctions, comparesEqualQCharQChar);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcharfunctions_qcharfunctions_comparethreeway, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcharfunctions_qcharfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcharfunctions_qcharfunctions_comparethreewayqlatin1charqlatin1char, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcharfunctions_qcharfunctions_comparesequalqlatin1charqlatin1char, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcharfunctions_qcharfunctions_comparethreewayqcharqchar, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcharfunctions_qcharfunctions_comparesequalqcharqchar, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcharfunctions_qcharfunctions_method_entry) {
	PHP_ME(Qt_Core_QCharFunctions_QCharFunctions, compareThreeWay, arginfo_qt_core_qcharfunctions_qcharfunctions_comparethreeway, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCharFunctions_QCharFunctions, comparesEqual, arginfo_qt_core_qcharfunctions_qcharfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCharFunctions_QCharFunctions, compareThreeWayQLatin1CharQLatin1Char, arginfo_qt_core_qcharfunctions_qcharfunctions_comparethreewayqlatin1charqlatin1char, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCharFunctions_QCharFunctions, comparesEqualQLatin1CharQLatin1Char, arginfo_qt_core_qcharfunctions_qcharfunctions_comparesequalqlatin1charqlatin1char, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCharFunctions_QCharFunctions, compareThreeWayQCharQChar, arginfo_qt_core_qcharfunctions_qcharfunctions_comparethreewayqcharqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCharFunctions_QCharFunctions, comparesEqualQCharQChar, arginfo_qt_core_qcharfunctions_qcharfunctions_comparesequalqcharqchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
