
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
#include "src/core-qcontiguouscachedata.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QContiguousCacheData_QContiguousCacheData)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QContiguousCacheData, QContiguousCacheData, qt, core_qcontiguouscachedata_qcontiguouscachedata, qt_core_qcontiguouscachedata_qcontiguouscachedata_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, alloc)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontiguouscachedata_alloc(&_0));
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, setAlloc)
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
	phpqt_qcontiguouscachedata_set_alloc(&_0, &_1);
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontiguouscachedata_count(&_0));
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, setCount)
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
	phpqt_qcontiguouscachedata_set_count(&_0, &_1);
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, start)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontiguouscachedata_start(&_0));
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, setStart)
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
	phpqt_qcontiguouscachedata_set_start(&_0, &_1);
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, offset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcontiguouscachedata_offset(&_0));
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, setOffset)
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
	phpqt_qcontiguouscachedata_set_offset(&_0, &_1);
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, allocateData)
{
	zval *size_param = NULL, *alignment_param = NULL, _0, _1;
	zend_long size, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(size)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &size_param, &alignment_param);
	ZVAL_LONG(&_0, size);
	ZVAL_LONG(&_1, alignment);
	RETURN_LONG(phpqt_qcontiguouscachedata_allocate_data(&_0, &_1));
}

PHP_METHOD(Qt_Core_QContiguousCacheData_QContiguousCacheData, freeData)
{
	zval *data_param = NULL, _0;
	zend_long data;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &data_param);
	ZVAL_LONG(&_0, data);
	phpqt_qcontiguouscachedata_free_data(&_0);
}

