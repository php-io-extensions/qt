
extern zend_class_entry *qt_core_qthread_qthread_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QThread_QThread);

PHP_METHOD(Qt_Core_QThread_QThread, staticMetaObject);
PHP_METHOD(Qt_Core_QThread_QThread, tr);
PHP_METHOD(Qt_Core_QThread_QThread, currentThread);
PHP_METHOD(Qt_Core_QThread_QThread, isMainThread);
PHP_METHOD(Qt_Core_QThread_QThread, idealThreadCount);
PHP_METHOD(Qt_Core_QThread_QThread, yieldCurrentThread);
PHP_METHOD(Qt_Core_QThread_QThread, new_);
PHP_METHOD(Qt_Core_QThread_QThread, setPriority);
PHP_METHOD(Qt_Core_QThread_QThread, priority);
PHP_METHOD(Qt_Core_QThread_QThread, isFinished);
PHP_METHOD(Qt_Core_QThread_QThread, isRunning);
PHP_METHOD(Qt_Core_QThread_QThread, requestInterruption);
PHP_METHOD(Qt_Core_QThread_QThread, isInterruptionRequested);
PHP_METHOD(Qt_Core_QThread_QThread, setStackSize);
PHP_METHOD(Qt_Core_QThread_QThread, stackSize);
PHP_METHOD(Qt_Core_QThread_QThread, eventDispatcher);
PHP_METHOD(Qt_Core_QThread_QThread, setEventDispatcher);
PHP_METHOD(Qt_Core_QThread_QThread, event);
PHP_METHOD(Qt_Core_QThread_QThread, loopLevel);
PHP_METHOD(Qt_Core_QThread_QThread, isCurrentThread);
PHP_METHOD(Qt_Core_QThread_QThread, start);
PHP_METHOD(Qt_Core_QThread_QThread, terminate);
PHP_METHOD(Qt_Core_QThread_QThread, exit_);
PHP_METHOD(Qt_Core_QThread_QThread, quit);
PHP_METHOD(Qt_Core_QThread_QThread, wait);
PHP_METHOD(Qt_Core_QThread_QThread, waitLongUnsignedInt);
PHP_METHOD(Qt_Core_QThread_QThread, sleep);
PHP_METHOD(Qt_Core_QThread_QThread, msleep);
PHP_METHOD(Qt_Core_QThread_QThread, usleep);
PHP_METHOD(Qt_Core_QThread_QThread, run);
PHP_METHOD(Qt_Core_QThread_QThread, exec);
PHP_METHOD(Qt_Core_QThread_QThread, setTerminationEnabled);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_currentthread, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_ismainthread, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_idealthreadcount, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_yieldcurrentthread, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_setpriority, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, priority, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_priority, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_isfinished, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_isrunning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_requestinterruption, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_isinterruptionrequested, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_setstacksize, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stackSize, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_stacksize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_eventdispatcher, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_seteventdispatcher, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, eventDispatcher, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_looplevel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_iscurrentthread, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_start, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_terminate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_exit_, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, retcode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_quit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_wait, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, deadline)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_waitlongunsignedint, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_sleep, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_msleep, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_usleep, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_run, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_exec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qthread_qthread_setterminationenabled, 0, 0, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qthread_qthread_method_entry) {
	PHP_ME(Qt_Core_QThread_QThread, staticMetaObject, arginfo_qt_core_qthread_qthread_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, tr, arginfo_qt_core_qthread_qthread_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, currentThread, arginfo_qt_core_qthread_qthread_currentthread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, isMainThread, arginfo_qt_core_qthread_qthread_ismainthread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, idealThreadCount, arginfo_qt_core_qthread_qthread_idealthreadcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, yieldCurrentThread, arginfo_qt_core_qthread_qthread_yieldcurrentthread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, new_, arginfo_qt_core_qthread_qthread_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, setPriority, arginfo_qt_core_qthread_qthread_setpriority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, priority, arginfo_qt_core_qthread_qthread_priority, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, isFinished, arginfo_qt_core_qthread_qthread_isfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, isRunning, arginfo_qt_core_qthread_qthread_isrunning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, requestInterruption, arginfo_qt_core_qthread_qthread_requestinterruption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, isInterruptionRequested, arginfo_qt_core_qthread_qthread_isinterruptionrequested, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, setStackSize, arginfo_qt_core_qthread_qthread_setstacksize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, stackSize, arginfo_qt_core_qthread_qthread_stacksize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, eventDispatcher, arginfo_qt_core_qthread_qthread_eventdispatcher, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, setEventDispatcher, arginfo_qt_core_qthread_qthread_seteventdispatcher, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, event, arginfo_qt_core_qthread_qthread_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, loopLevel, arginfo_qt_core_qthread_qthread_looplevel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, isCurrentThread, arginfo_qt_core_qthread_qthread_iscurrentthread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, start, arginfo_qt_core_qthread_qthread_start, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, terminate, arginfo_qt_core_qthread_qthread_terminate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, exit_, arginfo_qt_core_qthread_qthread_exit_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, quit, arginfo_qt_core_qthread_qthread_quit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, wait, arginfo_qt_core_qthread_qthread_wait, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, waitLongUnsignedInt, arginfo_qt_core_qthread_qthread_waitlongunsignedint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, sleep, arginfo_qt_core_qthread_qthread_sleep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, msleep, arginfo_qt_core_qthread_qthread_msleep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, usleep, arginfo_qt_core_qthread_qthread_usleep, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, run, arginfo_qt_core_qthread_qthread_run, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, exec, arginfo_qt_core_qthread_qthread_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QThread_QThread, setTerminationEnabled, arginfo_qt_core_qthread_qthread_setterminationenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
