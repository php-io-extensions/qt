
extern zend_class_entry *qt_core_qwritelocker_qwritelocker_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QWriteLocker_QWriteLocker);

PHP_METHOD(Qt_Core_QWriteLocker_QWriteLocker, new_);
PHP_METHOD(Qt_Core_QWriteLocker_QWriteLocker, unlock);
PHP_METHOD(Qt_Core_QWriteLocker_QWriteLocker, relock);
PHP_METHOD(Qt_Core_QWriteLocker_QWriteLocker, readWriteLock);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwritelocker_qwritelocker_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, readWriteLock, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwritelocker_qwritelocker_unlock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwritelocker_qwritelocker_relock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qwritelocker_qwritelocker_readwritelock, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qwritelocker_qwritelocker_method_entry) {
	PHP_ME(Qt_Core_QWriteLocker_QWriteLocker, new_, arginfo_qt_core_qwritelocker_qwritelocker_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWriteLocker_QWriteLocker, unlock, arginfo_qt_core_qwritelocker_qwritelocker_unlock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWriteLocker_QWriteLocker, relock, arginfo_qt_core_qwritelocker_qwritelocker_relock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QWriteLocker_QWriteLocker, readWriteLock, arginfo_qt_core_qwritelocker_qwritelocker_readwritelock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
