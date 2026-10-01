
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
#include "src/core-qthread.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QThread_QThread)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QThread, QThread, qt, core_qthread_qthread, qt_core_qthread_qthread_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QThread_QThread, staticMetaObject)
{

	RETURN_LONG(phpqt_qthread_static_meta_object());
}

PHP_METHOD(Qt_Core_QThread_QThread, tr)
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
	phpqt_qthread_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QThread_QThread, currentThread)
{

	RETURN_LONG(phpqt_qthread_current_thread());
}

PHP_METHOD(Qt_Core_QThread_QThread, isMainThread)
{
	zend_long r = 0;
	r = phpqt_qthread_is_main_thread();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThread_QThread, idealThreadCount)
{

	RETURN_LONG(phpqt_qthread_ideal_thread_count());
}

PHP_METHOD(Qt_Core_QThread_QThread, yieldCurrentThread)
{

	phpqt_qthread_yield_current_thread();
}

PHP_METHOD(Qt_Core_QThread_QThread, new_)
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
	RETURN_LONG(phpqt_qthread_new(&_0));
}

PHP_METHOD(Qt_Core_QThread_QThread, setPriority)
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
	phpqt_qthread_set_priority(&_0, &_1);
}

PHP_METHOD(Qt_Core_QThread_QThread, priority)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthread_priority(&_0));
}

PHP_METHOD(Qt_Core_QThread_QThread, isFinished)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qthread_is_finished(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThread_QThread, isRunning)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qthread_is_running(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThread_QThread, requestInterruption)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qthread_request_interruption(&_0);
}

PHP_METHOD(Qt_Core_QThread_QThread, isInterruptionRequested)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qthread_is_interruption_requested(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThread_QThread, setStackSize)
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
	phpqt_qthread_set_stack_size(&_0, &_1);
}

PHP_METHOD(Qt_Core_QThread_QThread, stackSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthread_stack_size(&_0));
}

PHP_METHOD(Qt_Core_QThread_QThread, eventDispatcher)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthread_event_dispatcher(&_0));
}

PHP_METHOD(Qt_Core_QThread_QThread, setEventDispatcher)
{
	zval *handle_param = NULL, *eventDispatcher_param = NULL, _0, _1;
	zend_long handle, eventDispatcher;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(eventDispatcher)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &eventDispatcher_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, eventDispatcher);
	phpqt_qthread_set_event_dispatcher(&_0, &_1);
}

PHP_METHOD(Qt_Core_QThread_QThread, event)
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
	r = phpqt_qthread_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThread_QThread, loopLevel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthread_loop_level(&_0));
}

PHP_METHOD(Qt_Core_QThread_QThread, isCurrentThread)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qthread_is_current_thread(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThread_QThread, start)
{
	zval *handle_param = NULL, *arg0 = NULL, arg0_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &arg0);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qthread_start(&_0, arg0);
}

PHP_METHOD(Qt_Core_QThread_QThread, terminate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qthread_terminate(&_0);
}

PHP_METHOD(Qt_Core_QThread_QThread, exit_)
{
	zval *handle_param = NULL, *retcode_param = NULL, _0, _1;
	zend_long handle, retcode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(retcode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &retcode_param);
	if (!retcode_param) {
		retcode = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, retcode);
	phpqt_qthread_exit(&_0, &_1);
}

PHP_METHOD(Qt_Core_QThread_QThread, quit)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qthread_quit(&_0);
}

PHP_METHOD(Qt_Core_QThread_QThread, wait)
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
	r = phpqt_qthread_wait(&_0, deadline);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThread_QThread, waitLongUnsignedInt)
{
	zval *handle_param = NULL, *time_param = NULL, _0, _1;
	zend_long handle, time, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(time)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &time_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, time);
	r = phpqt_qthread_wait_long_unsigned_int(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QThread_QThread, sleep)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qthread_sleep(&_0);
}

PHP_METHOD(Qt_Core_QThread_QThread, msleep)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qthread_msleep(&_0);
}

PHP_METHOD(Qt_Core_QThread_QThread, usleep)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	phpqt_qthread_usleep(&_0);
}

PHP_METHOD(Qt_Core_QThread_QThread, run)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qthread_run(&_0);
}

PHP_METHOD(Qt_Core_QThread_QThread, exec)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qthread_exec(&_0));
}

PHP_METHOD(Qt_Core_QThread_QThread, setTerminationEnabled)
{
	zval *enabled_param = NULL, _0;
	zend_bool enabled;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &enabled_param);
	if (!enabled_param) {
		enabled = 1;
	} else {
		}
	ZVAL_BOOL(&_0, (enabled ? 1 : 0));
	phpqt_qthread_set_termination_enabled(&_0);
}

