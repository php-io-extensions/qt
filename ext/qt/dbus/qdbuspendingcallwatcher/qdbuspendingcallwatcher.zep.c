
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
#include "src/dbus-qdbuspendingcallwatcher.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusPendingCallWatcher_QDBusPendingCallWatcher)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusPendingCallWatcher, QDBusPendingCallWatcher, qt, dbus_qdbuspendingcallwatcher_qdbuspendingcallwatcher, qt_dbus_qdbuspendingcallwatcher_qdbuspendingcallwatcher_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusPendingCallWatcher_QDBusPendingCallWatcher, staticMetaObject)
{

	RETURN_LONG(phpqt_qdbuspendingcallwatcher_static_meta_object());
}

PHP_METHOD(Qt_DBus_QDBusPendingCallWatcher_QDBusPendingCallWatcher, tr)
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
	phpqt_qdbuspendingcallwatcher_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusPendingCallWatcher_QDBusPendingCallWatcher, new_)
{
	zval *call_param = NULL, *parent__param = NULL, _0, _1;
	zend_long call, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(call)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &call_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, call);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qdbuspendingcallwatcher_new(&_0, &_1));
}

PHP_METHOD(Qt_DBus_QDBusPendingCallWatcher_QDBusPendingCallWatcher, waitForFinished)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbuspendingcallwatcher_wait_for_finished(&_0);
}

PHP_METHOD(Qt_DBus_QDBusPendingCallWatcher_QDBusPendingCallWatcher, finished)
{
	zval *handle_param = NULL, *self__param = NULL, _0, _1;
	zend_long handle, self_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(self_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &self__param);
	if (!self__param) {
		self_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, self_);
	phpqt_qdbuspendingcallwatcher_finished(&_0, &_1);
}

