
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
#include "src/core-qobjectcleanuphandler.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QObjectCleanupHandler_QObjectCleanupHandler)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QObjectCleanupHandler, QObjectCleanupHandler, qt, core_qobjectcleanuphandler_qobjectcleanuphandler, qt_core_qobjectcleanuphandler_qobjectcleanuphandler_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QObjectCleanupHandler_QObjectCleanupHandler, staticMetaObject)
{

	RETURN_LONG(phpqt_qobjectcleanuphandler_static_meta_object());
}

PHP_METHOD(Qt_Core_QObjectCleanupHandler_QObjectCleanupHandler, tr)
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
	phpqt_qobjectcleanuphandler_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QObjectCleanupHandler_QObjectCleanupHandler, new_)
{

	RETURN_LONG(phpqt_qobjectcleanuphandler_new());
}

PHP_METHOD(Qt_Core_QObjectCleanupHandler_QObjectCleanupHandler, add)
{
	zval *handle_param = NULL, *object__param = NULL, _0, _1;
	zend_long handle, object_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &object__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	RETURN_LONG(phpqt_qobjectcleanuphandler_add(&_0, &_1));
}

PHP_METHOD(Qt_Core_QObjectCleanupHandler_QObjectCleanupHandler, remove)
{
	zval *handle_param = NULL, *object__param = NULL, _0, _1;
	zend_long handle, object_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &object__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	phpqt_qobjectcleanuphandler_remove(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObjectCleanupHandler_QObjectCleanupHandler, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qobjectcleanuphandler_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObjectCleanupHandler_QObjectCleanupHandler, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qobjectcleanuphandler_clear(&_0);
}

