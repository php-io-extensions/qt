
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
#include "src/core-qmetasequence.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMetaSequence_QMetaSequence)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMetaSequence, QMetaSequence, qt, core_qmetasequence_qmetasequence, qt_core_qmetasequence_qmetasequence_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, new_)
{

	RETURN_LONG(phpqt_qmetasequence_new());
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, valueMetaType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetasequence_value_meta_type(&_0));
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, isSortable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_is_sortable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canAddValueAtBegin)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_add_value_at_begin(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canAddValueAtEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_add_value_at_end(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canRemoveValueAtBegin)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_remove_value_at_begin(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canRemoveValueAtEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_remove_value_at_end(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canGetValueAtIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_get_value_at_index(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canSetValueAtIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_set_value_at_index(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canAddValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_add_value(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canRemoveValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_remove_value(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canGetValueAtIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_get_value_at_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canSetValueAtIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_set_value_at_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canInsertValueAtIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_insert_value_at_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canEraseValueAtIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_erase_value_at_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canEraseRangeAtIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_erase_range_at_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaSequence_QMetaSequence, canGetValueAtConstIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetasequence_can_get_value_at_const_iterator(&_0);
	RETURN_BOOL(r == 1);
}

