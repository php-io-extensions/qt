
extern zend_class_entry *qt_core_qgenericargument_qgenericargument_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QGenericArgument_QGenericArgument);

PHP_METHOD(Qt_Core_QGenericArgument_QGenericArgument, name);

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qgenericargument_qgenericargument_name, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qgenericargument_qgenericargument_method_entry) {
	PHP_ME(Qt_Core_QGenericArgument_QGenericArgument, name, arginfo_qt_core_qgenericargument_qgenericargument_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
