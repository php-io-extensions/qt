
extern zend_class_entry *qt_core_qcborarrayfunctions_qcborarrayfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborarrayFunctions_QCborarrayFunctions);

PHP_METHOD(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, swap);
PHP_METHOD(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, qHash);
PHP_METHOD(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, compareThreeWay);
PHP_METHOD(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, compareThreeWayQCborArrayQCborValue);
PHP_METHOD(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, comparesEqualQCborArrayQCborValue);
PHP_METHOD(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, compareThreeWayQCborArrayQCborArray);
PHP_METHOD(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, comparesEqualQCborArrayQCborArray);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, array_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparethreeway, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparethreewayqcborarrayqcborvalue, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparesequalqcborarrayqcborvalue, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparethreewayqcborarrayqcborarray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparesequalqcborarrayqcborarray, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcborarrayfunctions_qcborarrayfunctions_method_entry) {
	PHP_ME(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, swap, arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, qHash, arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, compareThreeWay, arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparethreeway, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, comparesEqual, arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, compareThreeWayQCborArrayQCborValue, arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparethreewayqcborarrayqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, comparesEqualQCborArrayQCborValue, arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparesequalqcborarrayqcborvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, compareThreeWayQCborArrayQCborArray, arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparethreewayqcborarrayqcborarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborarrayFunctions_QCborarrayFunctions, comparesEqualQCborArrayQCborArray, arginfo_qt_core_qcborarrayfunctions_qcborarrayfunctions_comparesequalqcborarrayqcborarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
