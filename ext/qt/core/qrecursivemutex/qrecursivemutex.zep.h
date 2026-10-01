
extern zend_class_entry *qt_core_qrecursivemutex_qrecursivemutex_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QRecursiveMutex_QRecursiveMutex);

PHP_METHOD(Qt_Core_QRecursiveMutex_QRecursiveMutex, new_);
PHP_METHOD(Qt_Core_QRecursiveMutex_QRecursiveMutex, lock);
PHP_METHOD(Qt_Core_QRecursiveMutex_QRecursiveMutex, tryLock);
PHP_METHOD(Qt_Core_QRecursiveMutex_QRecursiveMutex, tryLockQDeadlineTimer);
PHP_METHOD(Qt_Core_QRecursiveMutex_QRecursiveMutex, unlock);
PHP_METHOD(Qt_Core_QRecursiveMutex_QRecursiveMutex, try_lock);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrecursivemutex_qrecursivemutex_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrecursivemutex_qrecursivemutex_lock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrecursivemutex_qrecursivemutex_trylock, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrecursivemutex_qrecursivemutex_trylockqdeadlinetimer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, timer)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrecursivemutex_qrecursivemutex_unlock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qrecursivemutex_qrecursivemutex_try_lock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qrecursivemutex_qrecursivemutex_method_entry) {
	PHP_ME(Qt_Core_QRecursiveMutex_QRecursiveMutex, new_, arginfo_qt_core_qrecursivemutex_qrecursivemutex_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRecursiveMutex_QRecursiveMutex, lock, arginfo_qt_core_qrecursivemutex_qrecursivemutex_lock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRecursiveMutex_QRecursiveMutex, tryLock, arginfo_qt_core_qrecursivemutex_qrecursivemutex_trylock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRecursiveMutex_QRecursiveMutex, tryLockQDeadlineTimer, arginfo_qt_core_qrecursivemutex_qrecursivemutex_trylockqdeadlinetimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRecursiveMutex_QRecursiveMutex, unlock, arginfo_qt_core_qrecursivemutex_qrecursivemutex_unlock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QRecursiveMutex_QRecursiveMutex, try_lock, arginfo_qt_core_qrecursivemutex_qrecursivemutex_try_lock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
