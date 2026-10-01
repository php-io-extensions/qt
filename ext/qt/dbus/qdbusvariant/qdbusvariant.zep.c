
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
#include "src/dbus-qdbusvariant.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusVariant_QDBusVariant)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusVariant, QDBusVariant, qt, dbus_qdbusvariant_qdbusvariant, qt_dbus_qdbusvariant_qdbusvariant_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, new_)
{

	RETURN_LONG(phpqt_qdbusvariant_new());
}

PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, newQVariant)
{
	zval *variant = NULL, variant_sub;

	ZVAL_UNDEF(&variant_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &variant);
	RETURN_LONG(phpqt_qdbusvariant_new_q_variant(variant));
}

PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, swap)
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
	phpqt_qdbusvariant_swap(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, setVariant)
{
	zval *handle_param = NULL, *variant = NULL, variant_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&variant_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &variant);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusvariant_set_variant(&_0, variant);
}

PHP_METHOD(Qt_DBus_QDBusVariant_QDBusVariant, variant)
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
	phpqt_qdbusvariant_variant(&result, &_0);
	RETURN_CCTOR(&result);
}

