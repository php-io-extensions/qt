
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
#include "src/core-qitemselection.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QItemSelection_QItemSelection)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QItemSelection, QItemSelection, qt, core_qitemselection_qitemselection, qt_core_qitemselection_qitemselection_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, new_)
{
	zval *topLeft_param = NULL, *bottomRight_param = NULL, _0, _1;
	zend_long topLeft, bottomRight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(topLeft)
		Z_PARAM_LONG(bottomRight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &topLeft_param, &bottomRight_param);
	ZVAL_LONG(&_0, topLeft);
	ZVAL_LONG(&_1, bottomRight);
	RETURN_LONG(phpqt_qitemselection_new(&_0, &_1));
}

PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, select)
{
	zval *handle_param = NULL, *topLeft_param = NULL, *bottomRight_param = NULL, _0, _1, _2;
	zend_long handle, topLeft, bottomRight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(topLeft)
		Z_PARAM_LONG(bottomRight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &topLeft_param, &bottomRight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, topLeft);
	ZVAL_LONG(&_2, bottomRight);
	phpqt_qitemselection_select(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, contains)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = phpqt_qitemselection_contains(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, indexes)
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
	phpqt_qitemselection_indexes(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, merge)
{
	zval *handle_param = NULL, *other_param = NULL, *command_param = NULL, _0, _1, _2;
	zend_long handle, other, command;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
		Z_PARAM_LONG(command)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &other_param, &command_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	ZVAL_LONG(&_2, command);
	phpqt_qitemselection_merge(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QItemSelection_QItemSelection, split)
{
	zval *range_param = NULL, *other_param = NULL, *result_param = NULL, _0, _1, _2;
	zend_long range, other, result;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(range)
		Z_PARAM_LONG(other)
		Z_PARAM_LONG(result)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &range_param, &other_param, &result_param);
	ZVAL_LONG(&_0, range);
	ZVAL_LONG(&_1, other);
	ZVAL_LONG(&_2, result);
	phpqt_qitemselection_split(&_0, &_1, &_2);
}

