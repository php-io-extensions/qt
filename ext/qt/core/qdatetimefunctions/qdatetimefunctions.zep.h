
extern zend_class_entry *qt_core_qdatetimefunctions_qdatetimefunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDatetimeFunctions_QDatetimeFunctions);

PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, swap);
PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, qHash);
PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, qHashQDateSizeT);
PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, qHashQTimeSizeT);
PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, compareThreeWay);
PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, compareThreeWayQTimeQTime);
PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, comparesEqualQTimeQTime);
PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, compareThreeWayQDateTimeQDateTime);
PHP_METHOD(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, comparesEqualQDateTimeQDateTime);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_qhashqdatesizet, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_qhashqtimesizet, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparethreeway, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparethreewayqtimeqtime, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparesequalqtimeqtime, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparethreewayqdatetimeqdatetime, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparesequalqdatetimeqdatetime, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdatetimefunctions_qdatetimefunctions_method_entry) {
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, swap, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, qHash, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, qHashQDateSizeT, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_qhashqdatesizet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, qHashQTimeSizeT, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_qhashqtimesizet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, compareThreeWay, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparethreeway, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, comparesEqual, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, compareThreeWayQTimeQTime, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparethreewayqtimeqtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, comparesEqualQTimeQTime, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparesequalqtimeqtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, compareThreeWayQDateTimeQDateTime, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparethreewayqdatetimeqdatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDatetimeFunctions_QDatetimeFunctions, comparesEqualQDateTimeQDateTime, arginfo_qt_core_qdatetimefunctions_qdatetimefunctions_comparesequalqdatetimeqdatetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
