
extern zend_class_entry *qt_core_qbindingstorage_qbindingstorage_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QBindingStorage_QBindingStorage);

PHP_METHOD(Qt_Core_QBindingStorage_QBindingStorage, new_);
PHP_METHOD(Qt_Core_QBindingStorage_QBindingStorage, isEmpty);
PHP_METHOD(Qt_Core_QBindingStorage_QBindingStorage, isValid);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbindingstorage_qbindingstorage_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbindingstorage_qbindingstorage_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbindingstorage_qbindingstorage_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qbindingstorage_qbindingstorage_method_entry) {
	PHP_ME(Qt_Core_QBindingStorage_QBindingStorage, new_, arginfo_qt_core_qbindingstorage_qbindingstorage_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBindingStorage_QBindingStorage, isEmpty, arginfo_qt_core_qbindingstorage_qbindingstorage_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBindingStorage_QBindingStorage, isValid, arginfo_qt_core_qbindingstorage_qbindingstorage_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
