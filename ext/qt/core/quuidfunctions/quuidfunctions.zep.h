
extern zend_class_entry *qt_core_quuidfunctions_quuidfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QUuidFunctions_QUuidFunctions);

PHP_METHOD(Qt_Core_QUuidFunctions_QUuidFunctions, qHash);
PHP_METHOD(Qt_Core_QUuidFunctions_QUuidFunctions, compareThreeWay);
PHP_METHOD(Qt_Core_QUuidFunctions_QUuidFunctions, comparesEqual);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuidfunctions_quuidfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, uuid, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuidfunctions_quuidfunctions_comparethreeway, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_quuidfunctions_quuidfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_quuidfunctions_quuidfunctions_method_entry) {
	PHP_ME(Qt_Core_QUuidFunctions_QUuidFunctions, qHash, arginfo_qt_core_quuidfunctions_quuidfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuidFunctions_QUuidFunctions, compareThreeWay, arginfo_qt_core_quuidfunctions_quuidfunctions_comparethreeway, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QUuidFunctions_QUuidFunctions, comparesEqual, arginfo_qt_core_quuidfunctions_quuidfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
