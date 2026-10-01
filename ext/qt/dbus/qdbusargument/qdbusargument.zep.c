
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
#include "src/dbus-qdbusargument.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusArgument_QDBusArgument)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusArgument, QDBusArgument, qt, dbus_qdbusargument_qdbusargument, qt_dbus_qdbusargument_qdbusargument_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, new_)
{

	RETURN_LONG(phpqt_qdbusargument_new());
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, newQDBusArgument)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qdbusargument_new_q_d_bus_argument(&_0));
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, swap)
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
	phpqt_qdbusargument_swap(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginStructure)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusargument_begin_structure(&_0);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, endStructure)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusargument_end_structure(&_0);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginArray)
{
	zval *handle_param = NULL, *elementMetaTypeId_param = NULL, _0, _1;
	zend_long handle, elementMetaTypeId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(elementMetaTypeId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &elementMetaTypeId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, elementMetaTypeId);
	phpqt_qdbusargument_begin_array(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginArrayQMetaType)
{
	zval *handle_param = NULL, *elementMetaType_param = NULL, _0, _1;
	zend_long handle, elementMetaType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(elementMetaType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &elementMetaType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, elementMetaType);
	phpqt_qdbusargument_begin_array_q_meta_type(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, endArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusargument_end_array(&_0);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginMap)
{
	zval *handle_param = NULL, *keyMetaTypeId_param = NULL, *valueMetaTypeId_param = NULL, _0, _1, _2;
	zend_long handle, keyMetaTypeId, valueMetaTypeId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(keyMetaTypeId)
		Z_PARAM_LONG(valueMetaTypeId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &keyMetaTypeId_param, &valueMetaTypeId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, keyMetaTypeId);
	ZVAL_LONG(&_2, valueMetaTypeId);
	phpqt_qdbusargument_begin_map(&_0, &_1, &_2);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginMapQMetaTypeQMetaType)
{
	zval *handle_param = NULL, *keyMetaType_param = NULL, *valueMetaType_param = NULL, _0, _1, _2;
	zend_long handle, keyMetaType, valueMetaType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(keyMetaType)
		Z_PARAM_LONG(valueMetaType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &keyMetaType_param, &valueMetaType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, keyMetaType);
	ZVAL_LONG(&_2, valueMetaType);
	phpqt_qdbusargument_begin_map_q_meta_type_q_meta_type(&_0, &_1, &_2);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, endMap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusargument_end_map(&_0);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginMapEntry)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusargument_begin_map_entry(&_0);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, endMapEntry)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusargument_end_map_entry(&_0);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, appendVariant)
{
	zval *handle_param = NULL, *v = NULL, v_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &v);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusargument_append_variant(&_0, v);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, currentSignature)
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
	phpqt_qdbusargument_current_signature(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, currentType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusargument_current_type(&_0));
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginArray2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusargument_begin_array2(&_0);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, beginMap2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusargument_begin_map2(&_0);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, atEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbusargument_at_end(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusArgument_QDBusArgument, asVariant)
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
	phpqt_qdbusargument_as_variant(&result, &_0);
	RETURN_CCTOR(&result);
}

