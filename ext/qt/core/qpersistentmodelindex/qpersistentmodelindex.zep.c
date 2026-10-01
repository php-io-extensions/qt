
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
#include "src/core-qpersistentmodelindex.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPersistentModelIndex_QPersistentModelIndex)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPersistentModelIndex, QPersistentModelIndex, qt, core_qpersistentmodelindex_qpersistentmodelindex, qt_core_qpersistentmodelindex_qpersistentmodelindex_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, new_)
{

	RETURN_LONG(phpqt_qpersistentmodelindex_new());
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, newQModelIndex)
{
	zval *index_param = NULL, _0;
	zend_long index;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &index_param);
	ZVAL_LONG(&_0, index);
	RETURN_LONG(phpqt_qpersistentmodelindex_new_q_model_index(&_0));
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, newQPersistentModelIndex)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qpersistentmodelindex_new_q_persistent_model_index(&_0));
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qpersistentmodelindex_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, row)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpersistentmodelindex_row(&_0));
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, column)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpersistentmodelindex_column(&_0));
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, internalId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpersistentmodelindex_internal_id(&_0));
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, parent_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpersistentmodelindex_parent(&_0));
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, sibling)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	RETURN_LONG(phpqt_qpersistentmodelindex_sibling(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, data)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *role = NULL, role_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&role_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(role)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &role);
	if (!role) {
		role = &role_sub;
		role = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qpersistentmodelindex_data(&result, &_0, role);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, multiData)
{
	zval *handle_param = NULL, *roleDataSpan_param = NULL, _0, _1;
	zend_long handle, roleDataSpan;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(roleDataSpan)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &roleDataSpan_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, roleDataSpan);
	phpqt_qpersistentmodelindex_multi_data(&_0, &_1);
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, flags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpersistentmodelindex_flags(&_0));
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, model)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpersistentmodelindex_model(&_0));
}

PHP_METHOD(Qt_Core_QPersistentModelIndex_QPersistentModelIndex, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpersistentmodelindex_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

