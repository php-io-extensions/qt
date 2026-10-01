
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
#include "src/core-qversionnumber.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QVersionNumber_QVersionNumber)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QVersionNumber, QVersionNumber, qt, core_qversionnumber_qversionnumber, qt_core_qversionnumber_qversionnumber_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, new_)
{

	RETURN_LONG(phpqt_qversionnumber_new());
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, newInt)
{
	zval *maj_param = NULL, _0;
	zend_long maj;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(maj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &maj_param);
	ZVAL_LONG(&_0, maj);
	RETURN_LONG(phpqt_qversionnumber_new_int(&_0));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, newIntInt)
{
	zval *maj_param = NULL, *min_param = NULL, _0, _1;
	zend_long maj, min;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(maj)
		Z_PARAM_LONG(min)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &maj_param, &min_param);
	ZVAL_LONG(&_0, maj);
	ZVAL_LONG(&_1, min);
	RETURN_LONG(phpqt_qversionnumber_new_int_int(&_0, &_1));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, newIntIntInt)
{
	zval *maj_param = NULL, *min_param = NULL, *mic_param = NULL, _0, _1, _2;
	zend_long maj, min, mic;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(maj)
		Z_PARAM_LONG(min)
		Z_PARAM_LONG(mic)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &maj_param, &min_param, &mic_param);
	ZVAL_LONG(&_0, maj);
	ZVAL_LONG(&_1, min);
	ZVAL_LONG(&_2, mic);
	RETURN_LONG(phpqt_qversionnumber_new_int_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qversionnumber_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, isNormalized)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qversionnumber_is_normalized(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, majorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qversionnumber_major_version(&_0));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, minorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qversionnumber_minor_version(&_0));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, microVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qversionnumber_micro_version(&_0));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, normalized)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qversionnumber_normalized(&_0));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, segments)
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
	phpqt_qversionnumber_segments(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, segmentAt)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qversionnumber_segment_at(&_0, &_1));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, segmentCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qversionnumber_segment_count(&_0));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, isPrefixOf)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	r = phpqt_qversionnumber_is_prefix_of(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, compare)
{
	zval *v1_param = NULL, *v2_param = NULL, _0, _1;
	zend_long v1, v2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &v1_param, &v2_param);
	ZVAL_LONG(&_0, v1);
	ZVAL_LONG(&_1, v2);
	RETURN_LONG(phpqt_qversionnumber_compare(&_0, &_1));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, commonPrefix)
{
	zval *v1_param = NULL, *v2_param = NULL, _0, _1;
	zend_long v1, v2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &v1_param, &v2_param);
	ZVAL_LONG(&_0, v1);
	ZVAL_LONG(&_1, v2);
	RETURN_LONG(phpqt_qversionnumber_common_prefix(&_0, &_1));
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, toString)
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
	phpqt_qversionnumber_to_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVersionNumber_QVersionNumber, fromString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL, *suffixIndex = NULL, suffixIndex_sub, __$null, result;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZVAL_UNDEF(&suffixIndex_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(suffixIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &string__param, &suffixIndex);
	zephir_get_strval(&string_, string__param);
	if (!suffixIndex) {
		suffixIndex = &suffixIndex_sub;
		suffixIndex = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qversionnumber_from_string(&result, &string_, suffixIndex);
	RETURN_CCTOR(&result);
}

