
extern zend_class_entry *qt_core_qbasicmutex_qbasicmutex_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QBasicMutex_QBasicMutex);

PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, tryLock);
PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, new_);
PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, lock);
PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, unlock);
PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, try_lock);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasicmutex_qbasicmutex_trylock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasicmutex_qbasicmutex_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasicmutex_qbasicmutex_lock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasicmutex_qbasicmutex_unlock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qbasicmutex_qbasicmutex_try_lock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qbasicmutex_qbasicmutex_method_entry) {
	PHP_ME(Qt_Core_QBasicMutex_QBasicMutex, tryLock, arginfo_qt_core_qbasicmutex_qbasicmutex_trylock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicMutex_QBasicMutex, new_, arginfo_qt_core_qbasicmutex_qbasicmutex_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicMutex_QBasicMutex, lock, arginfo_qt_core_qbasicmutex_qbasicmutex_lock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicMutex_QBasicMutex, unlock, arginfo_qt_core_qbasicmutex_qbasicmutex_unlock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QBasicMutex_QBasicMutex, try_lock, arginfo_qt_core_qbasicmutex_qbasicmutex_try_lock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
