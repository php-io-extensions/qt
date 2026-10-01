
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
#include "src/core-qfuturewatcherbase.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QFutureWatcherBase_QFutureWatcherBase)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QFutureWatcherBase, QFutureWatcherBase, qt, core_qfuturewatcherbase_qfuturewatcherbase, qt_core_qfuturewatcherbase_qfuturewatcherbase_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, staticMetaObject)
{

	RETURN_LONG(phpqt_qfuturewatcherbase_static_meta_object());
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qfuturewatcherbase_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfuturewatcherbase_progress_value(&_0));
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressMinimum)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfuturewatcherbase_progress_minimum(&_0));
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressMaximum)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfuturewatcherbase_progress_maximum(&_0));
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressText)
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
	phpqt_qfuturewatcherbase_progress_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isStarted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfuturewatcherbase_is_started(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isFinished)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfuturewatcherbase_is_finished(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isRunning)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfuturewatcherbase_is_running(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isCanceled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfuturewatcherbase_is_canceled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isSuspending)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfuturewatcherbase_is_suspending(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, isSuspended)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfuturewatcherbase_is_suspended(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, waitForFinished)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_wait_for_finished(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, setPendingResultsLimit)
{
	zval *handle_param = NULL, *limit_param = NULL, _0, _1;
	zend_long handle, limit;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(limit)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &limit_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, limit);
	phpqt_qfuturewatcherbase_set_pending_results_limit(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, event)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = phpqt_qfuturewatcherbase_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, started)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_started(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, finished)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_finished(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, canceled)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_canceled(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, suspending)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_suspending(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, suspended)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_suspended(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resumed)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_resumed(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resultReadyAt)
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
	phpqt_qfuturewatcherbase_result_ready_at(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resultsReadyAt)
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
	phpqt_qfuturewatcherbase_results_ready_at(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressRangeChanged)
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
	phpqt_qfuturewatcherbase_progress_range_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressValueChanged)
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
	phpqt_qfuturewatcherbase_progress_value_changed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, progressTextChanged)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval progressText;
	zval *handle_param = NULL, *progressText_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&progressText);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(progressText)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &progressText_param);
	zephir_get_strval(&progressText, progressText_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_progress_text_changed(&_0, &progressText);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, cancel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_cancel(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, setSuspended)
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
	phpqt_qfuturewatcherbase_set_suspended(&_0, &_1);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, suspend)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_suspend(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, resume)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_resume(&_0);
}

PHP_METHOD(Qt_Core_QFutureWatcherBase_QFutureWatcherBase, toggleSuspended)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfuturewatcherbase_toggle_suspended(&_0);
}

