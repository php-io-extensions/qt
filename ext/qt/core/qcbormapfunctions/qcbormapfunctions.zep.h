
extern zend_class_entry *qt_core_qcbormapfunctions_qcbormapfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCbormapFunctions_QCbormapFunctions);

PHP_METHOD(Qt_Core_QCbormapFunctions_QCbormapFunctions, swap);
PHP_METHOD(Qt_Core_QCbormapFunctions_QCbormapFunctions, qHash);
PHP_METHOD(Qt_Core_QCbormapFunctions_QCbormapFunctions, compareThreeWay);
PHP_METHOD(Qt_Core_QCbormapFunctions_QCbormapFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QCbormapFunctions_QCbormapFunctions, compareThreeWayQCborMapQCborValue);
PHP_METHOD(Qt_Core_QCbormapFunctions_QCbormapFunctions, comparesEqualQCborMapQCborValue);
PHP_METHOD(Qt_Core_QCbormapFunctions_QCbormapFunctions, compareThreeWayQCborMapQCborMap);
PHP_METHOD(Qt_Core_QCbormapFunctions_QCbormapFunctions, comparesEqualQCborMapQCborMap);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, map, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparethreeway, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparethreewayqcbormapqcborvalue, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparesequalqcbormapqcborvalue, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparethreewayqcbormapqcbormap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparesequalqcbormapqcbormap, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcbormapfunctions_qcbormapfunctions_method_entry) {
	PHP_ME(Qt_Core_QCbormapFunctions_QCbormapFunctions, swap, arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCbormapFunctions_QCbormapFunctions, qHash, arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCbormapFunctions_QCbormapFunctions, compareThreeWay, arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparethreeway, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCbormapFunctions_QCbormapFunctions, comparesEqual, arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCbormapFunctions_QCbormapFunctions, compareThreeWayQCborMapQCborValue, arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparethreewayqcbormapqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCbormapFunctions_QCbormapFunctions, comparesEqualQCborMapQCborValue, arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparesequalqcbormapqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCbormapFunctions_QCbormapFunctions, compareThreeWayQCborMapQCborMap, arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparethreewayqcbormapqcbormap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCbormapFunctions_QCbormapFunctions, comparesEqualQCborMapQCborMap, arginfo_qt_core_qcbormapfunctions_qcbormapfunctions_comparesequalqcbormapqcbormap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
