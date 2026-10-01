
extern zend_class_entry *qt_core_qsocketdescriptor_qsocketdescriptor_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSocketDescriptor_QSocketDescriptor);

PHP_METHOD(Qt_Core_QSocketDescriptor_QSocketDescriptor, new_);
PHP_METHOD(Qt_Core_QSocketDescriptor_QSocketDescriptor, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketdescriptor_qsocketdescriptor_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, descriptor)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsocketdescriptor_qsocketdescriptor_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsocketdescriptor_qsocketdescriptor_method_entry) {
	PHP_ME(Qt_Core_QSocketDescriptor_QSocketDescriptor, new_, arginfo_qt_core_qsocketdescriptor_qsocketdescriptor_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSocketDescriptor_QSocketDescriptor, isValid, arginfo_qt_core_qsocketdescriptor_qsocketdescriptor_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
