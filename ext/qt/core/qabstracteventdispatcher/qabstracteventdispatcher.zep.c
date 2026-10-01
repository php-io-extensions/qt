
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
#include "src/core-qabstracteventdispatcher.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAbstractEventDispatcher, QAbstractEventDispatcher, qt, core_qabstracteventdispatcher_qabstracteventdispatcher, qt_core_qabstracteventdispatcher_qabstracteventdispatcher_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, staticMetaObject)
{

	RETURN_LONG(phpqt_qabstracteventdispatcher_static_meta_object());
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, tr)
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
	phpqt_qabstracteventdispatcher_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, new_)
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
	RETURN_LONG(phpqt_qabstracteventdispatcher_new(&_0));
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, instance)
{
	zval *thread_param = NULL, _0;
	zend_long thread;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(thread)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &thread_param);
	if (!thread_param) {
		thread = 0;
	} else {
		}
	ZVAL_LONG(&_0, thread);
	RETURN_LONG(phpqt_qabstracteventdispatcher_instance(&_0));
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, processEvents)
{
	zval *handle_param = NULL, *flags_param = NULL, _0, _1;
	zend_long handle, flags, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	r = phpqt_qabstracteventdispatcher_process_events(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, registerSocketNotifier)
{
	zval *handle_param = NULL, *notifier_param = NULL, _0, _1;
	zend_long handle, notifier;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(notifier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &notifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, notifier);
	phpqt_qabstracteventdispatcher_register_socket_notifier(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, unregisterSocketNotifier)
{
	zval *handle_param = NULL, *notifier_param = NULL, _0, _1;
	zend_long handle, notifier;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(notifier)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &notifier_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, notifier);
	phpqt_qabstracteventdispatcher_unregister_socket_notifier(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, registerTimer)
{
	zval *handle_param = NULL, *interval_param = NULL, *timerType_param = NULL, *object__param = NULL, _0, _1, _2, _3;
	zend_long handle, interval, timerType, object_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(interval)
		Z_PARAM_LONG(timerType)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &interval_param, &timerType_param, &object__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, interval);
	ZVAL_LONG(&_2, timerType);
	ZVAL_LONG(&_3, object_);
	RETURN_LONG(phpqt_qabstracteventdispatcher_register_timer(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, registerTimerIntQint64QtTimerTypeQObject)
{
	zval *handle_param = NULL, *timerId_param = NULL, *interval_param = NULL, *timerType_param = NULL, *object__param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, timerId, interval, timerType, object_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timerId)
		Z_PARAM_LONG(interval)
		Z_PARAM_LONG(timerType)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &timerId_param, &interval_param, &timerType_param, &object__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timerId);
	ZVAL_LONG(&_2, interval);
	ZVAL_LONG(&_3, timerType);
	ZVAL_LONG(&_4, object_);
	phpqt_qabstracteventdispatcher_register_timer_int_qint64_qt_timer_type_q_object(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, unregisterTimer)
{
	zval *handle_param = NULL, *timerId_param = NULL, _0, _1;
	zend_long handle, timerId, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timerId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timerId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timerId);
	r = phpqt_qabstracteventdispatcher_unregister_timer(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, unregisterTimers)
{
	zval *handle_param = NULL, *object__param = NULL, _0, _1;
	zend_long handle, object_, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &object__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	r = phpqt_qabstracteventdispatcher_unregister_timers(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, registeredTimers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *object__param = NULL, result, _0, _1;
	zend_long handle, object_;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &object__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	phpqt_qabstracteventdispatcher_registered_timers(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, remainingTime)
{
	zval *handle_param = NULL, *timerId_param = NULL, _0, _1;
	zend_long handle, timerId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timerId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timerId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timerId);
	RETURN_LONG(phpqt_qabstracteventdispatcher_remaining_time(&_0, &_1));
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, unregisterTimerQtTimerId)
{
	zval *handle_param = NULL, *timerId_param = NULL, _0, _1;
	zend_long handle, timerId, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timerId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timerId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timerId);
	r = phpqt_qabstracteventdispatcher_unregister_timer_qt_timer_id(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, timersForObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *object__param = NULL, result, _0, _1;
	zend_long handle, object_;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &object__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	phpqt_qabstracteventdispatcher_timers_for_object(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, wakeUp)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstracteventdispatcher_wake_up(&_0);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, interrupt)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstracteventdispatcher_interrupt(&_0);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, startingUp)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstracteventdispatcher_starting_up(&_0);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, closingDown)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstracteventdispatcher_closing_down(&_0);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, installNativeEventFilter)
{
	zval *handle_param = NULL, *filterObj_param = NULL, _0, _1;
	zend_long handle, filterObj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filterObj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filterObj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filterObj);
	phpqt_qabstracteventdispatcher_install_native_event_filter(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, removeNativeEventFilter)
{
	zval *handle_param = NULL, *filterObj_param = NULL, _0, _1;
	zend_long handle, filterObj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filterObj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filterObj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filterObj);
	phpqt_qabstracteventdispatcher_remove_native_event_filter(&_0, &_1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, aboutToBlock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstracteventdispatcher_about_to_block(&_0);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcher_QAbstractEventDispatcher, awake)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstracteventdispatcher_awake(&_0);
}

