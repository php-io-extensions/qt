
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
#include "src/core-qabstracteventdispatcherv2.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAbstractEventDispatcherV2_QAbstractEventDispatcherV2)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAbstractEventDispatcherV2, QAbstractEventDispatcherV2, qt, core_qabstracteventdispatcherv2_qabstracteventdispatcherv2, qt_core_qabstracteventdispatcherv2_qabstracteventdispatcherv2_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherV2_QAbstractEventDispatcherV2, staticMetaObject)
{

	RETURN_LONG(phpqt_qabstracteventdispatcherv2_static_meta_object());
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherV2_QAbstractEventDispatcherV2, tr)
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
	phpqt_qabstracteventdispatcherv2_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherV2_QAbstractEventDispatcherV2, new_)
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
	RETURN_LONG(phpqt_qabstracteventdispatcherv2_new(&_0));
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherV2_QAbstractEventDispatcherV2, unregisterTimer)
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
	r = phpqt_qabstracteventdispatcherv2_unregister_timer(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherV2_QAbstractEventDispatcherV2, timersForObject)
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
	phpqt_qabstracteventdispatcherv2_timers_for_object(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QAbstractEventDispatcherV2_QAbstractEventDispatcherV2, processEventsWithDeadline)
{
	zval *handle_param = NULL, *flags_param = NULL, *deadline_param = NULL, _0, _1, _2;
	zend_long handle, flags, deadline, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flags)
		Z_PARAM_LONG(deadline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &flags_param, &deadline_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	ZVAL_LONG(&_2, deadline);
	r = phpqt_qabstracteventdispatcherv2_process_events_with_deadline(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

