
extern zend_class_entry *qt_core_qfuturewatcherbase_qfuturewatcherbase_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QFutureWatcherBase_QFutureWatcherBase);

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, staticMetaObject);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, tr);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressValue);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressMinimum);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressMaximum);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressText);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isStarted);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isFinished);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isRunning);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isCanceled);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isSuspending);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isSuspended);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, waitForFinished);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, setPendingResultsLimit);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, event);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, started);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, finished);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, canceled);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, suspending);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, suspended);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resumed);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resultReadyAt);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resultsReadyAt);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressRangeChanged);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressValueChanged);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressTextChanged);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, cancel);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, setSuspended);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, suspend);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resume);
PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, toggleSuspended);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressvalue, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressminimum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressmaximum, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progresstext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_isstarted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_isfinished, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_isrunning, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_iscanceled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_issuspending, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_issuspended, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_waitforfinished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_setpendingresultslimit, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, limit, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_started, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_finished, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_canceled, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_suspending, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_suspended, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_resumed, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_resultreadyat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resultIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_resultsreadyat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, beginIndex, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, endIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressrangechanged, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, minimum, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressvaluechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, progressValue, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progresstextchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, progressText, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_cancel, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_setsuspended, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, suspend, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_suspend, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_resume, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_togglesuspended, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qfuturewatcherbase_qfuturewatcherbase_method_entry) {
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, staticMetaObject, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, tr, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressValue, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressMinimum, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressminimum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressMaximum, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressmaximum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressText, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progresstext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isStarted, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_isstarted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isFinished, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_isfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isRunning, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_isrunning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isCanceled, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_iscanceled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isSuspending, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_issuspending, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isSuspended, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_issuspended, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, waitForFinished, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_waitforfinished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, setPendingResultsLimit, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_setpendingresultslimit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, event, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, started, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_started, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, finished, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_finished, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, canceled, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_canceled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, suspending, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_suspending, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, suspended, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_suspended, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resumed, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_resumed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resultReadyAt, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_resultreadyat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resultsReadyAt, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_resultsreadyat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressRangeChanged, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressrangechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressValueChanged, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progressvaluechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressTextChanged, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_progresstextchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, cancel, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_cancel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, setSuspended, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_setsuspended, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, suspend, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_suspend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resume, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_resume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, toggleSuspended, arginfo_qt_core_qfuturewatcherbase_qfuturewatcherbase_togglesuspended, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
