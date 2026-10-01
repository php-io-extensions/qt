
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
#include "src/core-qtimer.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTimer_QTimer)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTimer, QTimer, qt, core_qtimer_qtimer, qt_core_qtimer_qtimer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTimer_QTimer, staticMetaObject)
{

	RETURN_LONG(phpqt_qtimer_static_meta_object());
}

PHP_METHOD(Qt_Core_QTimer_QTimer, tr)
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
	phpqt_qtimer_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, new_)
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
	RETURN_LONG(phpqt_qtimer_new(&_0));
}

PHP_METHOD(Qt_Core_QTimer_QTimer, isActive)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtimer_is_active(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, timerId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimer_timer_id(&_0));
}

PHP_METHOD(Qt_Core_QTimer_QTimer, id)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimer_id(&_0));
}

PHP_METHOD(Qt_Core_QTimer_QTimer, setInterval)
{
	zval *handle_param = NULL, *msec_param = NULL, _0, _1;
	zend_long handle, msec;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msec_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msec);
	phpqt_qtimer_set_interval(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, interval)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimer_interval(&_0));
}

PHP_METHOD(Qt_Core_QTimer_QTimer, remainingTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimer_remaining_time(&_0));
}

PHP_METHOD(Qt_Core_QTimer_QTimer, setTimerType)
{
	zval *handle_param = NULL, *atype_param = NULL, _0, _1;
	zend_long handle, atype;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(atype)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &atype_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, atype);
	phpqt_qtimer_set_timer_type(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, timerType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtimer_timer_type(&_0));
}

PHP_METHOD(Qt_Core_QTimer_QTimer, setSingleShot)
{
	zend_bool singleShot;
	zval *handle_param = NULL, *singleShot_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(singleShot)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &singleShot_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (singleShot ? 1 : 0));
	phpqt_qtimer_set_single_shot(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, isSingleShot)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtimer_is_single_shot(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, singleShot)
{
	zval *msec_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, _0, _1;
	zend_long msec, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(msec)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &msec_param, &receiver_param, &member);
	ZVAL_LONG(&_0, msec);
	ZVAL_LONG(&_1, receiver);
	phpqt_qtimer_single_shot(&_0, &_1, member);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, singleShotIntQtTimerTypeQObjectChar)
{
	zval *msec_param = NULL, *timerType_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, _0, _1, _2;
	zend_long msec, timerType, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(msec)
		Z_PARAM_LONG(timerType)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &msec_param, &timerType_param, &receiver_param, &member);
	ZVAL_LONG(&_0, msec);
	ZVAL_LONG(&_1, timerType);
	ZVAL_LONG(&_2, receiver);
	phpqt_qtimer_single_shot_int_qt_timer_type_q_object_char(&_0, &_1, &_2, member);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, start)
{
	zval *handle_param = NULL, *msec_param = NULL, _0, _1;
	zend_long handle, msec;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(msec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &msec_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, msec);
	phpqt_qtimer_start(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, start2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtimer_start2(&_0);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, stop)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtimer_stop(&_0);
}

PHP_METHOD(Qt_Core_QTimer_QTimer, timerEvent)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qtimer_timer_event(&_0, &_1);
}

