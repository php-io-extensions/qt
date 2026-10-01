
extern zend_class_entry *qt_core_qfactoryinterface_qfactoryinterface_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QFactoryInterface_QFactoryInterface);

PHP_METHOD(Qt_Core_QFactoryInterface_QFactoryInterface, keys);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfactoryinterface_qfactoryinterface_keys, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qfactoryinterface_qfactoryinterface_method_entry) {
	PHP_ME(Qt_Core_QFactoryInterface_QFactoryInterface, keys, arginfo_qt_core_qfactoryinterface_qfactoryinterface_keys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
