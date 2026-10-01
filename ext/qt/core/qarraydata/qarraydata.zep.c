
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
#include "src/core-qarraydata.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QArrayData_QArrayData)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QArrayData, QArrayData, qt, core_qarraydata_qarraydata, qt_core_qarraydata_qarraydata_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, flags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qarraydata_flags(&_0));
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, setFlags)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qarraydata_set_flags(&_0, &_1);
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, alloc)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qarraydata_alloc(&_0));
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, setAlloc)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qarraydata_set_alloc(&_0, &_1);
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, allocatedCapacity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qarraydata_allocated_capacity(&_0));
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, constAllocatedCapacity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qarraydata_const_allocated_capacity(&_0));
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, ref)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qarraydata_ref(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, deref)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qarraydata_deref(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, isShared)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qarraydata_is_shared(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, needsDetach)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qarraydata_needs_detach(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, detachCapacity)
{
	zval *handle_param = NULL, *newSize_param = NULL, _0, _1;
	zend_long handle, newSize;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newSize);
	RETURN_LONG(phpqt_qarraydata_detach_capacity(&_0, &_1));
}

PHP_METHOD(Qt_Core_QArrayData_QArrayData, deallocate)
{
	zval *data_param = NULL, *objectSize_param = NULL, *alignment_param = NULL, _0, _1, _2;
	zend_long data, objectSize, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(data)
		Z_PARAM_LONG(objectSize)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &data_param, &objectSize_param, &alignment_param);
	ZVAL_LONG(&_0, data);
	ZVAL_LONG(&_1, objectSize);
	ZVAL_LONG(&_2, alignment);
	phpqt_qarraydata_deallocate(&_0, &_1, &_2);
}

