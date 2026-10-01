
extern zend_class_entry *qt_core_qthreadstoragedata_qthreadstoragedata_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QThreadStorageData_QThreadStorageData);

PHP_METHOD(Qt_Core_QThreadStorageData_QThreadStorageData, id);
PHP_METHOD(Qt_Core_QThreadStorageData_QThreadStorageData, setId);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadstoragedata_qthreadstoragedata_id, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadstoragedata_qthreadstoragedata_setid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qthreadstoragedata_qthreadstoragedata_method_entry) {
	PHP_ME(Qt_Core_QThreadStorageData_QThreadStorageData, id, arginfo_qt_core_qthreadstoragedata_qthreadstoragedata_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadStorageData_QThreadStorageData, setId, arginfo_qt_core_qthreadstoragedata_qthreadstoragedata_setid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
