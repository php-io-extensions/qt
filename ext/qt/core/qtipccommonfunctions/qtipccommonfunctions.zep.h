
extern zend_class_entry *qt_core_qtipccommonfunctions_qtipccommonfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTipccommonFunctions_QTipccommonFunctions);

PHP_METHOD(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, swap);
PHP_METHOD(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, comparesEqual);
PHP_METHOD(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, qHash);
PHP_METHOD(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, qHashQNativeIpcKeySizeT);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtipccommonfunctions_qtipccommonfunctions_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, value1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value2, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtipccommonfunctions_qtipccommonfunctions_comparesequal, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, lhs, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rhs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtipccommonfunctions_qtipccommonfunctions_qhash, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ipcKey, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtipccommonfunctions_qtipccommonfunctions_qhashqnativeipckeysizet, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ipcKey, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seed, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtipccommonfunctions_qtipccommonfunctions_method_entry) {
	PHP_ME(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, swap, arginfo_qt_core_qtipccommonfunctions_qtipccommonfunctions_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, comparesEqual, arginfo_qt_core_qtipccommonfunctions_qtipccommonfunctions_comparesequal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, qHash, arginfo_qt_core_qtipccommonfunctions_qtipccommonfunctions_qhash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, qHashQNativeIpcKeySizeT, arginfo_qt_core_qtipccommonfunctions_qtipccommonfunctions_qhashqnativeipckeysizet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
