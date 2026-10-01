
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
#include "src/core-quntypedbindable.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QUntypedBindable_QUntypedBindable)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QUntypedBindable, QUntypedBindable, qt, core_quntypedbindable_quntypedbindable, qt_core_quntypedbindable_quntypedbindable_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, new_)
{

	RETURN_LONG(phpqt_quntypedbindable_new());
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_quntypedbindable_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, isBindable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_quntypedbindable_is_bindable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, isReadOnly)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_quntypedbindable_is_read_only(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, makeBinding)
{
	zval *handle_param = NULL, *location = NULL, location_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&location_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(location)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &location);
	if (!location) {
		location = &location_sub;
		location = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quntypedbindable_make_binding(&_0, location));
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, takeBinding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quntypedbindable_take_binding(&_0));
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, observe)
{
	zval *handle_param = NULL, *observer_param = NULL, _0, _1;
	zend_long handle, observer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(observer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &observer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, observer);
	phpqt_quntypedbindable_observe(&_0, &_1);
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, binding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quntypedbindable_binding(&_0));
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, setBinding)
{
	zval *handle_param = NULL, *binding_param = NULL, _0, _1;
	zend_long handle, binding, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(binding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &binding_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, binding);
	r = phpqt_quntypedbindable_set_binding(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, hasBinding)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_quntypedbindable_has_binding(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUntypedBindable_QUntypedBindable, metaType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quntypedbindable_meta_type(&_0));
}

