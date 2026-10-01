
extern zend_class_entry *qt_core_qmutex_qmutex_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMutex_QMutex);

PHP_METHOD(Qt_Core_QMutex_QMutex, new_);
PHP_METHOD(Qt_Core_QMutex_QMutex, try_lock);
PHP_METHOD(Qt_Core_QMutex_QMutex, tryLock);
PHP_METHOD(Qt_Core_QMutex_QMutex, tryLockInt);
PHP_METHOD(Qt_Core_QMutex_QMutex, tryLockQDeadlineTimer);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmutex_qmutex_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmutex_qmutex_try_lock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmutex_qmutex_trylock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmutex_qmutex_trylockint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmutex_qmutex_trylockqdeadlinetimer, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmutex_qmutex_method_entry) {
	PHP_ME(Qt_Core_QMutex_QMutex, new_, arginfo_qt_core_qmutex_qmutex_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMutex_QMutex, try_lock, arginfo_qt_core_qmutex_qmutex_try_lock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMutex_QMutex, tryLock, arginfo_qt_core_qmutex_qmutex_trylock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMutex_QMutex, tryLockInt, arginfo_qt_core_qmutex_qmutex_trylockint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMutex_QMutex, tryLockQDeadlineTimer, arginfo_qt_core_qmutex_qmutex_trylockqdeadlinetimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
