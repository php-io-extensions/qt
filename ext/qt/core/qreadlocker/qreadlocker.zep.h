
extern zend_class_entry *qt_core_qreadlocker_qreadlocker_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QReadLocker_QReadLocker);

PHP_METHOD(Qt_Core_QReadLocker_QReadLocker, new_);
PHP_METHOD(Qt_Core_QReadLocker_QReadLocker, unlock);
PHP_METHOD(Qt_Core_QReadLocker_QReadLocker, relock);
PHP_METHOD(Qt_Core_QReadLocker_QReadLocker, readWriteLock);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadlocker_qreadlocker_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, readWriteLock, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadlocker_qreadlocker_unlock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadlocker_qreadlocker_relock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qreadlocker_qreadlocker_readwritelock, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qreadlocker_qreadlocker_method_entry) {
	PHP_ME(Qt_Core_QReadLocker_QReadLocker, new_, arginfo_qt_core_qreadlocker_qreadlocker_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadLocker_QReadLocker, unlock, arginfo_qt_core_qreadlocker_qreadlocker_unlock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadLocker_QReadLocker, relock, arginfo_qt_core_qreadlocker_qreadlocker_relock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QReadLocker_QReadLocker, readWriteLock, arginfo_qt_core_qreadlocker_qreadlocker_readwritelock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
