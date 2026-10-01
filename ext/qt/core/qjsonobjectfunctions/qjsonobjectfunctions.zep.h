
extern zend_class_entry *qt_core_qjsonobjectfunctions_qjsonobjectfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions);

PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, swap);
PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, qHash);
PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, comparesEqualQJsonObjectQJsonValue);
PHP_METHOD(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, comparesEqualQJsonObjectQJsonObject);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_comparesequalqjsonobjectqjsonvalue, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_comparesequalqjsonobjectqjsonobject, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qjsonobjectfunctions_qjsonobjectfunctions_method_entry) {
	PHP_ME(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, swap, arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, qHash, arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, comparesEqual, arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, comparesEqualQJsonObjectQJsonValue, arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_comparesequalqjsonobjectqjsonvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonobjectFunctions_QJsonobjectFunctions, comparesEqualQJsonObjectQJsonObject, arginfo_qt_core_qjsonobjectfunctions_qjsonobjectfunctions_comparesequalqjsonobjectqjsonobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
