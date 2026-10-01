
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
#include "src/core-qsequentialiterable.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QSequentialIterable_QSequentialIterable)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QSequentialIterable, QSequentialIterable, qt, core_qsequentialiterable_qsequentialiterable, qt_core_qsequentialiterable_qsequentialiterable_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, new_)
{

	RETURN_LONG(phpqt_qsequentialiterable_new());
}

PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, at)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *idx_param = NULL, result, _0, _1;
	zend_long handle, idx;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(idx)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &idx_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, idx);
	phpqt_qsequentialiterable_at(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, set)
{
	zval *handle_param = NULL, *idx_param = NULL, *value = NULL, value_sub, _0, _1;
	zend_long handle, idx;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(idx)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &idx_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, idx);
	phpqt_qsequentialiterable_set(&_0, &_1, value);
}

PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, addValue)
{
	zval *handle_param = NULL, *value = NULL, value_sub, *position = NULL, position_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&position_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(position)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &value, &position);
	if (!position) {
		position = &position_sub;
		position = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qsequentialiterable_add_value(&_0, value, position);
}

PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, removeValue)
{
	zval *handle_param = NULL, *position = NULL, position_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&position_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(position)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &position);
	if (!position) {
		position = &position_sub;
		position = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qsequentialiterable_remove_value(&_0, position);
}

PHP_METHOD(Qt_Core_QSequentialIterable_QSequentialIterable, valueMetaType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsequentialiterable_value_meta_type(&_0));
}

