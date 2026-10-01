
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
#include "src/core-quuid.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QUuid_QUuid)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QUuid, QUuid, qt, core_quuid_quuid, qt_core_quuid_quuid_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QUuid_QUuid, new_)
{

	RETURN_LONG(phpqt_quuid_new());
}

PHP_METHOD(Qt_Core_QUuid_QUuid, newUintUshortUshortUcharUcharUcharUcharUcharUcharUcharUchar)
{
	zval *l_param = NULL, *w1_param = NULL, *w2_param = NULL, *b1_param = NULL, *b2_param = NULL, *b3_param = NULL, *b4_param = NULL, *b5_param = NULL, *b6_param = NULL, *b7_param = NULL, *b8_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10;
	zend_long l, w1, w2, b1, b2, b3, b4, b5, b6, b7, b8;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZEND_PARSE_PARAMETERS_START(11, 11)
		Z_PARAM_LONG(l)
		Z_PARAM_LONG(w1)
		Z_PARAM_LONG(w2)
		Z_PARAM_LONG(b1)
		Z_PARAM_LONG(b2)
		Z_PARAM_LONG(b3)
		Z_PARAM_LONG(b4)
		Z_PARAM_LONG(b5)
		Z_PARAM_LONG(b6)
		Z_PARAM_LONG(b7)
		Z_PARAM_LONG(b8)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 0, &l_param, &w1_param, &w2_param, &b1_param, &b2_param, &b3_param, &b4_param, &b5_param, &b6_param, &b7_param, &b8_param);
	ZVAL_LONG(&_0, l);
	ZVAL_LONG(&_1, w1);
	ZVAL_LONG(&_2, w2);
	ZVAL_LONG(&_3, b1);
	ZVAL_LONG(&_4, b2);
	ZVAL_LONG(&_5, b3);
	ZVAL_LONG(&_6, b4);
	ZVAL_LONG(&_7, b5);
	ZVAL_LONG(&_8, b6);
	ZVAL_LONG(&_9, b7);
	ZVAL_LONG(&_10, b8);
	RETURN_LONG(phpqt_quuid_new_uint_ushort_ushort_uchar_uchar_uchar_uchar_uchar_uchar_uchar_uchar(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, newQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string__param);
	zephir_get_strval(&string_, string__param);
	RETURN_MM_LONG(phpqt_quuid_new_q_any_string_view(&string_));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, fromString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string__param);
	zephir_get_strval(&string_, string__param);
	RETURN_MM_LONG(phpqt_quuid_from_string(&string_));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *mode = NULL, mode_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_quuid_to_string(&result, &_0, mode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUuid_QUuid, toByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *mode = NULL, mode_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_quuid_to_byte_array(&result, &_0, mode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUuid_QUuid, toRfc4122)
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
	phpqt_quuid_to_rfc4122(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QUuid_QUuid, fromRfc4122)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_quuid_from_rfc4122(&arg0));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_quuid_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUuid_QUuid, fromUInt128)
{
	zval *uuid_param = NULL, *order = NULL, order_sub, __$null, _0;
	zend_long uuid;

	ZVAL_UNDEF(&order_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(uuid)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &uuid_param, &order);
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	ZVAL_LONG(&_0, uuid);
	RETURN_LONG(phpqt_quuid_from_u_int128(&_0, order));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, toUInt128)
{
	zval *handle_param = NULL, *order = NULL, order_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&order_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &order);
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quuid_to_u_int128(&_0, order));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, createUuid)
{

	RETURN_LONG(phpqt_quuid_create_uuid());
}

PHP_METHOD(Qt_Core_QUuid_QUuid, createUuidV5)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval baseData;
	zval *ns_param = NULL, *baseData_param = NULL, _0;
	zend_long ns;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&baseData);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ns)
		Z_PARAM_STR(baseData)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &ns_param, &baseData_param);
	zephir_get_strval(&baseData, baseData_param);
	ZVAL_LONG(&_0, ns);
	RETURN_MM_LONG(phpqt_quuid_create_uuid_v5(&_0, &baseData));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, createUuidV3)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval baseData;
	zval *ns_param = NULL, *baseData_param = NULL, _0;
	zend_long ns;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&baseData);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ns)
		Z_PARAM_STR(baseData)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &ns_param, &baseData_param);
	zephir_get_strval(&baseData, baseData_param);
	ZVAL_LONG(&_0, ns);
	RETURN_MM_LONG(phpqt_quuid_create_uuid_v3(&_0, &baseData));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, variant)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quuid_variant(&_0));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, version)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quuid_version(&_0));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, data1)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quuid_data1(&_0));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, setData1)
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
	phpqt_quuid_set_data1(&_0, &_1);
}

PHP_METHOD(Qt_Core_QUuid_QUuid, data2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quuid_data2(&_0));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, setData2)
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
	phpqt_quuid_set_data2(&_0, &_1);
}

PHP_METHOD(Qt_Core_QUuid_QUuid, data3)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quuid_data3(&_0));
}

PHP_METHOD(Qt_Core_QUuid_QUuid, setData3)
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
	phpqt_quuid_set_data3(&_0, &_1);
}

