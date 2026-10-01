
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
#include "src/core-qthreadpool.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QThreadPool_QThreadPool)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QThreadPool, QThreadPool, qt, core_qthreadpool_qthreadpool, qt_core_qthreadpool_qthreadpool_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, staticMetaObject)
{

	RETURN_LONG(phpqt_qthreadpool_static_meta_object());
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, tr)
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
	phpqt_qthreadpool_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qthreadpool_new(&_0));
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, globalInstance)
{

	RETURN_LONG(phpqt_qthreadpool_global_instance());
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, start)
{
	zval *handle_param = NULL, *runnable_param = NULL, *priority_param = NULL, _0, _1, _2;
	zend_long handle, runnable, priority;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(runnable)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(priority)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &runnable_param, &priority_param);
	if (!priority_param) {
		priority = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, runnable);
	ZVAL_LONG(&_2, priority);
	phpqt_qthreadpool_start(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, tryStart)
{
	zval *handle_param = NULL, *runnable_param = NULL, _0, _1;
	zend_long handle, runnable, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(runnable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &runnable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, runnable);
	r = phpqt_qthreadpool_try_start(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, startOnReservedThread)
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
	phpqt_qthreadpool_start_on_reserved_thread(&_0, &_1);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, expiryTimeout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthreadpool_expiry_timeout(&_0));
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, setExpiryTimeout)
{
	zval *handle_param = NULL, *expiryTimeout_param = NULL, _0, _1;
	zend_long handle, expiryTimeout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(expiryTimeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &expiryTimeout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, expiryTimeout);
	phpqt_qthreadpool_set_expiry_timeout(&_0, &_1);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, maxThreadCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthreadpool_max_thread_count(&_0));
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, setMaxThreadCount)
{
	zval *handle_param = NULL, *maxThreadCount_param = NULL, _0, _1;
	zend_long handle, maxThreadCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maxThreadCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maxThreadCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maxThreadCount);
	phpqt_qthreadpool_set_max_thread_count(&_0, &_1);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, activeThreadCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthreadpool_active_thread_count(&_0));
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, setStackSize)
{
	zval *handle_param = NULL, *stackSize_param = NULL, _0, _1;
	zend_long handle, stackSize;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(stackSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &stackSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, stackSize);
	phpqt_qthreadpool_set_stack_size(&_0, &_1);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, stackSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthreadpool_stack_size(&_0));
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, setThreadPriority)
{
	zval *handle_param = NULL, *priority_param = NULL, _0, _1;
	zend_long handle, priority;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(priority)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &priority_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, priority);
	phpqt_qthreadpool_set_thread_priority(&_0, &_1);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, threadPriority)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthreadpool_thread_priority(&_0));
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, reserveThread)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qthreadpool_reserve_thread(&_0);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, releaseThread)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qthreadpool_release_thread(&_0);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, waitForDone)
{
	zval *handle_param = NULL, *msecs_param = NULL, _0, _1;
	zend_long handle, msecs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msecs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msecs_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msecs);
	r = phpqt_qthreadpool_wait_for_done(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, waitForDoneQDeadlineTimer)
{
	zval *handle_param = NULL, *deadline = NULL, deadline_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&deadline_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(deadline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &deadline);
	if (!deadline) {
		deadline = &deadline_sub;
		deadline = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qthreadpool_wait_for_done_q_deadline_timer(&_0, deadline);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qthreadpool_clear(&_0);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, contains)
{
	zval *handle_param = NULL, *thread_param = NULL, _0, _1;
	zend_long handle, thread, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(thread)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &thread_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, thread);
	r = phpqt_qthreadpool_contains(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThreadPool_QThreadPool, tryTake)
{
	zval *handle_param = NULL, *runnable_param = NULL, _0, _1;
	zend_long handle, runnable, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(runnable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &runnable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, runnable);
	r = phpqt_qthreadpool_try_take(&_0, &_1);
	RETURN_BOOL(r == 1);
}

