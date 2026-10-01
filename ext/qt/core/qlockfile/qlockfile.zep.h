
extern zend_class_entry *qt_core_qlockfile_qlockfile_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLockFile_QLockFile);

PHP_METHOD(Qt_Core_QLockFile_QLockFile, new_);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, fileName);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, lock);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, tryLock);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, unlock);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, setStaleLockTime);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, staleLockTime);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, isLocked);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, getLockInfo);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, removeStaleLockFile);
PHP_METHOD(Qt_Core_QLockFile_QLockFile, error);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_lock, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_trylock, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_unlock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_setstalelocktime, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_stalelocktime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_islocked, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_getlockinfo, 0, 4, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, pid)
	ZEND_ARG_INFO(0, hostname)
	ZEND_ARG_INFO(0, appname)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_removestalelockfile, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlockfile_qlockfile_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qlockfile_qlockfile_method_entry) {
	PHP_ME(Qt_Core_QLockFile_QLockFile, new_, arginfo_qt_core_qlockfile_qlockfile_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, fileName, arginfo_qt_core_qlockfile_qlockfile_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, lock, arginfo_qt_core_qlockfile_qlockfile_lock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, tryLock, arginfo_qt_core_qlockfile_qlockfile_trylock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, unlock, arginfo_qt_core_qlockfile_qlockfile_unlock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, setStaleLockTime, arginfo_qt_core_qlockfile_qlockfile_setstalelocktime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, staleLockTime, arginfo_qt_core_qlockfile_qlockfile_stalelocktime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, isLocked, arginfo_qt_core_qlockfile_qlockfile_islocked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, getLockInfo, arginfo_qt_core_qlockfile_qlockfile_getlockinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, removeStaleLockFile, arginfo_qt_core_qlockfile_qlockfile_removestalelockfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLockFile_QLockFile, error, arginfo_qt_core_qlockfile_qlockfile_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
