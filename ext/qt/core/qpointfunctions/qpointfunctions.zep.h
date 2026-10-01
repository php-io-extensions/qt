
extern zend_class_entry *qt_core_qpointfunctions_qpointfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QPointFunctions_QPointFunctions);

PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, qHash);
PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, comparesEqualQPointFQPoint);
PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, comparesEqualQPointFQPointF);
PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, qFuzzyIsNull);
PHP_METHOD(Qt_Core_QPointFunctions_QPointFunctions, qFuzzyCompare);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointfunctions_qpointfunctions_qhash, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointfunctions_qpointfunctions_comparesequal, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointfunctions_qpointfunctions_comparesequalqpointfqpoint, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointfunctions_qpointfunctions_comparesequalqpointfqpointf, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointfunctions_qpointfunctions_qfuzzyisnull, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpointfunctions_qpointfunctions_qfuzzycompare, 0, 4, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, p1X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p1Y, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2X, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, p2Y, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qpointfunctions_qpointfunctions_method_entry) {
	PHP_ME(Qt_Core_QPointFunctions_QPointFunctions, qHash, arginfo_qt_core_qpointfunctions_qpointfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointFunctions_QPointFunctions, comparesEqual, arginfo_qt_core_qpointfunctions_qpointfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointFunctions_QPointFunctions, comparesEqualQPointFQPoint, arginfo_qt_core_qpointfunctions_qpointfunctions_comparesequalqpointfqpoint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointFunctions_QPointFunctions, comparesEqualQPointFQPointF, arginfo_qt_core_qpointfunctions_qpointfunctions_comparesequalqpointfqpointf, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointFunctions_QPointFunctions, qFuzzyIsNull, arginfo_qt_core_qpointfunctions_qpointfunctions_qfuzzyisnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPointFunctions_QPointFunctions, qFuzzyCompare, arginfo_qt_core_qpointfunctions_qpointfunctions_qfuzzycompare, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
