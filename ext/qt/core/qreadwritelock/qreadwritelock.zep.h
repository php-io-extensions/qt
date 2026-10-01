
extern zend_class_entry *qt_core_qreadwritelock_qreadwritelock_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QReadWriteLock_QReadWriteLock);

PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, new_);
PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, lockForRead);
PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForRead);
PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForReadQDeadlineTimer);
PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, lockForWrite);
PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForWrite);
PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForWriteQDeadlineTimer);
PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, unlock);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadwritelock_qreadwritelock_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_INFO(0, recursionMode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadwritelock_qreadwritelock_lockforread, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadwritelock_qreadwritelock_trylockforread, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadwritelock_qreadwritelock_trylockforreadqdeadlinetimer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, timeout)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadwritelock_qreadwritelock_lockforwrite, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadwritelock_qreadwritelock_trylockforwrite, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadwritelock_qreadwritelock_trylockforwriteqdeadlinetimer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, timeout)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadwritelock_qreadwritelock_unlock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qreadwritelock_qreadwritelock_method_entry) {
	PHP_ME(Qt_Core_QReadWriteLock_QReadWriteLock, new_, arginfo_qt_core_qreadwritelock_qreadwritelock_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadWriteLock_QReadWriteLock, lockForRead, arginfo_qt_core_qreadwritelock_qreadwritelock_lockforread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForRead, arginfo_qt_core_qreadwritelock_qreadwritelock_trylockforread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForReadQDeadlineTimer, arginfo_qt_core_qreadwritelock_qreadwritelock_trylockforreadqdeadlinetimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadWriteLock_QReadWriteLock, lockForWrite, arginfo_qt_core_qreadwritelock_qreadwritelock_lockforwrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForWrite, arginfo_qt_core_qreadwritelock_qreadwritelock_trylockforwrite, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForWriteQDeadlineTimer, arginfo_qt_core_qreadwritelock_qreadwritelock_trylockforwriteqdeadlinetimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadWriteLock_QReadWriteLock, unlock, arginfo_qt_core_qreadwritelock_qreadwritelock_unlock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
