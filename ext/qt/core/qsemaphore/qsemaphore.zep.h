
extern zend_class_entry *qt_core_qsemaphore_qsemaphore_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSemaphore_QSemaphore);

PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, new_);
PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, acquire);
PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, tryAcquire);
PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, tryAcquireIntInt);
PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, tryAcquireIntQDeadlineTimer);
PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, release);
PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, available);
PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, try_acquire);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphore_qsemaphore_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphore_qsemaphore_acquire, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphore_qsemaphore_tryacquire, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphore_qsemaphore_tryacquireintint, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphore_qsemaphore_tryacquireintqdeadlinetimer, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphore_qsemaphore_release, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphore_qsemaphore_available, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsemaphore_qsemaphore_try_acquire, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsemaphore_qsemaphore_method_entry) {
	PHP_ME(Qt_Core_QSemaphore_QSemaphore, new_, arginfo_qt_core_qsemaphore_qsemaphore_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphore_QSemaphore, acquire, arginfo_qt_core_qsemaphore_qsemaphore_acquire, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphore_QSemaphore, tryAcquire, arginfo_qt_core_qsemaphore_qsemaphore_tryacquire, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphore_QSemaphore, tryAcquireIntInt, arginfo_qt_core_qsemaphore_qsemaphore_tryacquireintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphore_QSemaphore, tryAcquireIntQDeadlineTimer, arginfo_qt_core_qsemaphore_qsemaphore_tryacquireintqdeadlinetimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphore_QSemaphore, release, arginfo_qt_core_qsemaphore_qsemaphore_release, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphore_QSemaphore, available, arginfo_qt_core_qsemaphore_qsemaphore_available, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSemaphore_QSemaphore, try_acquire, arginfo_qt_core_qsemaphore_qsemaphore_try_acquire, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
