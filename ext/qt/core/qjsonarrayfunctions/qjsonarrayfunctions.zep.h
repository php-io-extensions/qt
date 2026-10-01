
extern zend_class_entry *qt_core_qjsonarrayfunctions_qjsonarrayfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QJsonarrayFunctions_QJsonarrayFunctions);

PHP_METHOD(Qt_Core_QJsonarrayFunctions_QJsonarrayFunctions, swap);
PHP_METHOD(Qt_Core_QJsonarrayFunctions_QJsonarrayFunctions, qHash);
PHP_METHOD(Qt_Core_QJsonarrayFunctions_QJsonarrayFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QJsonarrayFunctions_QJsonarrayFunctions, comparesEqualQJsonArrayQJsonArray);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarrayfunctions_qjsonarrayfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarrayfunctions_qjsonarrayfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, array_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarrayfunctions_qjsonarrayfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonarrayfunctions_qjsonarrayfunctions_comparesequalqjsonarrayqjsonarray, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qjsonarrayfunctions_qjsonarrayfunctions_method_entry) {
	PHP_ME(Qt_Core_QJsonarrayFunctions_QJsonarrayFunctions, swap, arginfo_qt_core_qjsonarrayfunctions_qjsonarrayfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonarrayFunctions_QJsonarrayFunctions, qHash, arginfo_qt_core_qjsonarrayfunctions_qjsonarrayfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonarrayFunctions_QJsonarrayFunctions, comparesEqual, arginfo_qt_core_qjsonarrayfunctions_qjsonarrayfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonarrayFunctions_QJsonarrayFunctions, comparesEqualQJsonArrayQJsonArray, arginfo_qt_core_qjsonarrayfunctions_qjsonarrayfunctions_comparesequalqjsonarrayqjsonarray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
