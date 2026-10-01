
extern zend_class_entry *qt_core_qthreadpool_qthreadpool_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QThreadPool_QThreadPool);

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, staticMetaObject);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, tr);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, new_);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, globalInstance);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, start);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, tryStart);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, startOnReservedThread);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, expiryTimeout);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, setExpiryTimeout);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, maxThreadCount);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, setMaxThreadCount);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, activeThreadCount);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, setStackSize);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, stackSize);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, setThreadPriority);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, threadPriority);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, reserveThread);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, releaseThread);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, waitForDone);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, waitForDoneQDeadlineTimer);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, clear);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, contains);
PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, tryTake);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_globalinstance, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_start, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, runnable, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_trystart, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, runnable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_startonreservedthread, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, runnable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_expirytimeout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_setexpirytimeout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expiryTimeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_maxthreadcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_setmaxthreadcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxThreadCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_activethreadcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_setstacksize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stackSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_stacksize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_setthreadpriority, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_threadpriority, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_reservethread, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_releasethread, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_waitfordone, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, msecs, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_waitfordoneqdeadlinetimer, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, deadline)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, thread, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthreadpool_qthreadpool_trytake, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, runnable, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qthreadpool_qthreadpool_method_entry) {
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, staticMetaObject, arginfo_qt_core_qthreadpool_qthreadpool_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, tr, arginfo_qt_core_qthreadpool_qthreadpool_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, new_, arginfo_qt_core_qthreadpool_qthreadpool_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, globalInstance, arginfo_qt_core_qthreadpool_qthreadpool_globalinstance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, start, arginfo_qt_core_qthreadpool_qthreadpool_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, tryStart, arginfo_qt_core_qthreadpool_qthreadpool_trystart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, startOnReservedThread, arginfo_qt_core_qthreadpool_qthreadpool_startonreservedthread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, expiryTimeout, arginfo_qt_core_qthreadpool_qthreadpool_expirytimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, setExpiryTimeout, arginfo_qt_core_qthreadpool_qthreadpool_setexpirytimeout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, maxThreadCount, arginfo_qt_core_qthreadpool_qthreadpool_maxthreadcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, setMaxThreadCount, arginfo_qt_core_qthreadpool_qthreadpool_setmaxthreadcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, activeThreadCount, arginfo_qt_core_qthreadpool_qthreadpool_activethreadcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, setStackSize, arginfo_qt_core_qthreadpool_qthreadpool_setstacksize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, stackSize, arginfo_qt_core_qthreadpool_qthreadpool_stacksize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, setThreadPriority, arginfo_qt_core_qthreadpool_qthreadpool_setthreadpriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, threadPriority, arginfo_qt_core_qthreadpool_qthreadpool_threadpriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, reserveThread, arginfo_qt_core_qthreadpool_qthreadpool_reservethread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, releaseThread, arginfo_qt_core_qthreadpool_qthreadpool_releasethread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, waitForDone, arginfo_qt_core_qthreadpool_qthreadpool_waitfordone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, waitForDoneQDeadlineTimer, arginfo_qt_core_qthreadpool_qthreadpool_waitfordoneqdeadlinetimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, clear, arginfo_qt_core_qthreadpool_qthreadpool_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, contains, arginfo_qt_core_qthreadpool_qthreadpool_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThreadPool_QThreadPool, tryTake, arginfo_qt_core_qthreadpool_qthreadpool_trytake, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
