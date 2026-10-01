
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
#include "src/core-qfutureinterfacebase.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QFutureInterfaceBase, QFutureInterfaceBase, qt, core_qfutureinterfacebase_qfutureinterfacebase, qt_core_qfutureinterfacebase_qfutureinterfacebase_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, new_)
{
	zval *initialState = NULL, initialState_sub, __$null;

	ZVAL_UNDEF(&initialState_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(initialState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &initialState);
	if (!initialState) {
		initialState = &initialState_sub;
		initialState = &__$null;
	}
	RETURN_LONG(phpqt_qfutureinterfacebase_new(initialState));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, newQFutureInterfaceBase)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qfutureinterfacebase_new_q_future_interface_base(&_0));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, reportStarted)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_report_started(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, reportFinished)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_report_finished(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, reportCanceled)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_report_canceled(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, reportException)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qfutureinterfacebase_report_exception(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, reportResultsReady)
{
	zval *handle_param = NULL, *beginIndex_param = NULL, *endIndex_param = NULL, _0, _1, _2;
	zend_long handle, beginIndex, endIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(beginIndex)
		Z_PARAM_LONG(endIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &beginIndex_param, &endIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, beginIndex);
	ZVAL_LONG(&_2, endIndex);
	phpqt_qfutureinterfacebase_report_results_ready(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, setRunnable)
{
	zval *handle_param = NULL, *runnable_param = NULL, _0, _1;
	zend_long handle, runnable;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(runnable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &runnable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, runnable);
	phpqt_qfutureinterfacebase_set_runnable(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, setThreadPool)
{
	zval *handle_param = NULL, *pool_param = NULL, _0, _1;
	zend_long handle, pool;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pool)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pool_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pool);
	phpqt_qfutureinterfacebase_set_thread_pool(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, threadPool)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfutureinterfacebase_thread_pool(&_0));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, setFilterMode)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qfutureinterfacebase_set_filter_mode(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, setProgressRange)
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
	phpqt_qfutureinterfacebase_set_progress_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, progressMinimum)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfutureinterfacebase_progress_minimum(&_0));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, progressMaximum)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfutureinterfacebase_progress_maximum(&_0));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isProgressUpdateNeeded)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_progress_update_needed(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, setProgressValue)
{
	zval *handle_param = NULL, *progressValue_param = NULL, _0, _1;
	zend_long handle, progressValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(progressValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &progressValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, progressValue);
	phpqt_qfutureinterfacebase_set_progress_value(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, progressValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfutureinterfacebase_progress_value(&_0));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, setProgressValueAndText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval progressText;
	zval *handle_param = NULL, *progressValue_param = NULL, *progressText_param = NULL, _0, _1;
	zend_long handle, progressValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&progressText);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(progressValue)
		Z_PARAM_STR(progressText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &progressValue_param, &progressText_param);
	zephir_get_strval(&progressText, progressText_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, progressValue);
	phpqt_qfutureinterfacebase_set_progress_value_and_text(&_0, &_1, &progressText);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, progressText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_progress_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, setExpectedResultCount)
{
	zval *handle_param = NULL, *resultCount_param = NULL, _0, _1;
	zend_long handle, resultCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(resultCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &resultCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, resultCount);
	phpqt_qfutureinterfacebase_set_expected_result_count(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, expectedResultCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfutureinterfacebase_expected_result_count(&_0));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, resultCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfutureinterfacebase_result_count(&_0));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, queryState)
{
	zval *handle_param = NULL, *state_param = NULL, _0, _1;
	zend_long handle, state, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, state);
	r = phpqt_qfutureinterfacebase_query_state(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isRunning)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_running(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isStarted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_started(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isCanceled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_canceled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isFinished)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_finished(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isSuspending)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_suspending(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isSuspended)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_suspended(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isThrottled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_throttled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isResultReadyAt)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = phpqt_qfutureinterfacebase_is_result_ready_at(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, loadState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfutureinterfacebase_load_state(&_0));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, cancel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_cancel(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, cancelAndFinish)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_cancel_and_finish(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, setSuspended)
{
	zend_bool suspend;
	zval *handle_param = NULL, *suspend_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(suspend)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &suspend_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (suspend ? 1 : 0));
	phpqt_qfutureinterfacebase_set_suspended(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, toggleSuspended)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_toggle_suspended(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, reportSuspended)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_report_suspended(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, setThrottled)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qfutureinterfacebase_set_throttled(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, waitForFinished)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_wait_for_finished(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, waitForNextResult)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_wait_for_next_result(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, waitForResult)
{
	zval *handle_param = NULL, *resultIndex_param = NULL, _0, _1;
	zend_long handle, resultIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(resultIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &resultIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, resultIndex);
	phpqt_qfutureinterfacebase_wait_for_result(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, waitForResume)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_wait_for_resume(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, suspendIfRequested)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfutureinterfacebase_suspend_if_requested(&_0);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, mutex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfutureinterfacebase_mutex(&_0));
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, hasException)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_has_exception(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qfutureinterfacebase_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureInterfaceBase_QFutureInterfaceBase, isChainCanceled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfutureinterfacebase_is_chain_canceled(&_0);
	RETURN_BOOL(r == 1);
}

