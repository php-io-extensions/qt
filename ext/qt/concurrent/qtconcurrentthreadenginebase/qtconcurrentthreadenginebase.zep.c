
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "src/concurrent-qtconcurrentthreadenginebase.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Concurrent\\QtConcurrentThreadEngineBase, QtConcurrentThreadEngineBase, qt, concurrent_qtconcurrentthreadenginebase_qtconcurrentthreadenginebase, qt_concurrent_qtconcurrentthreadenginebase_qtconcurrentthreadenginebase_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, new_)
{
	zval *pool_param = NULL, _0;
	zend_long pool;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pool)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pool_param);
	ZVAL_LONG(&_0, pool);
	RETURN_LONG(phpqt_qtconcurrentthreadenginebase_new(&_0));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, startSingleThreaded)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentthreadenginebase_start_single_threaded(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, startThread)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentthreadenginebase_start_thread(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, isCanceled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtconcurrentthreadenginebase_is_canceled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, waitForResume)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentthreadenginebase_wait_for_resume(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, isProgressReportingEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtconcurrentthreadenginebase_is_progress_reporting_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, setProgressValue)
{
	zval *handle_param = NULL, *progress_param = NULL, _0, _1;
	zend_long handle, progress;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(progress)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &progress_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, progress);
	phpqt_qtconcurrentthreadenginebase_set_progress_value(&_0, &_1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, setProgressRange)
{
	zval *handle_param = NULL, *minimum_param = NULL, *maximum_param = NULL, _0, _1, _2;
	zend_long handle, minimum, maximum;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(minimum)
		Z_PARAM_LONG(maximum)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &minimum_param, &maximum_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, minimum);
	ZVAL_LONG(&_2, maximum);
	phpqt_qtconcurrentthreadenginebase_set_progress_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, acquireBarrierSemaphore)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentthreadenginebase_acquire_barrier_semaphore(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, reportIfSuspensionDone)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentthreadenginebase_report_if_suspension_done(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, start)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentthreadenginebase_start(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, finish)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentthreadenginebase_finish(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, threadFunction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrentthreadenginebase_thread_function(&_0));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, shouldStartThread)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtconcurrentthreadenginebase_should_start_thread(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, shouldThrottleThread)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtconcurrentthreadenginebase_should_throttle_thread(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, futureInterface)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrentthreadenginebase_future_interface(&_0));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, setFutureInterface)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qtconcurrentthreadenginebase_set_future_interface(&_0, &_1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, threadPool)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrentthreadenginebase_thread_pool(&_0));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, setThreadPool)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qtconcurrentthreadenginebase_set_thread_pool(&_0, &_1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, barrier)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrentthreadenginebase_barrier(&_0));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBase_QtConcurrentThreadEngineBase, mutex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrentthreadenginebase_mutex(&_0));
}

