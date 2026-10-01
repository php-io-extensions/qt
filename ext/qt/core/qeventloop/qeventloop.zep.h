
extern zend_class_entry *qt_core_qeventloop_qeventloop_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QEventLoop_QEventLoop);

PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, staticMetaObject);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, tr);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, new_);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, processEvents);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, processEventsQEventLoopProcessEventsFlagsInt);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, processEventsQEventLoopProcessEventsFlagsQDeadlineTimer);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, exec);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, isRunning);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, wakeUp);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, event);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, exit_);
PHP_METHOD(Qt_Core_QEventLoop_QEventLoop, quit);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_processevents, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_processeventsqeventloopprocesseventsflagsint, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximumTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_processeventsqeventloopprocesseventsflagsqdeadlinetimer, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, deadline, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_exec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_isrunning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_wakeup, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_exit_, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, returnCode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qeventloop_qeventloop_quit, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qeventloop_qeventloop_method_entry) {
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, staticMetaObject, arginfo_qt_core_qeventloop_qeventloop_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, tr, arginfo_qt_core_qeventloop_qeventloop_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, new_, arginfo_qt_core_qeventloop_qeventloop_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, processEvents, arginfo_qt_core_qeventloop_qeventloop_processevents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, processEventsQEventLoopProcessEventsFlagsInt, arginfo_qt_core_qeventloop_qeventloop_processeventsqeventloopprocesseventsflagsint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, processEventsQEventLoopProcessEventsFlagsQDeadlineTimer, arginfo_qt_core_qeventloop_qeventloop_processeventsqeventloopprocesseventsflagsqdeadlinetimer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, exec, arginfo_qt_core_qeventloop_qeventloop_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, isRunning, arginfo_qt_core_qeventloop_qeventloop_isrunning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, wakeUp, arginfo_qt_core_qeventloop_qeventloop_wakeup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, event, arginfo_qt_core_qeventloop_qeventloop_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, exit_, arginfo_qt_core_qeventloop_qeventloop_exit_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QEventLoop_QEventLoop, quit, arginfo_qt_core_qeventloop_qeventloop_quit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
