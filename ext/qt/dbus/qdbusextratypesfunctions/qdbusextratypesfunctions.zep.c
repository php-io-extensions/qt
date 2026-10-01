
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
#include "src/dbus-qdbusextratypesfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDbusextratypesFunctions_QDbusextratypesFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDbusextratypesFunctions, QDbusextratypesFunctions, qt, dbus_qdbusextratypesfunctions_qdbusextratypesfunctions, qt_dbus_qdbusextratypesfunctions_qdbusextratypesfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDbusextratypesFunctions_QDbusextratypesFunctions, swap)
{
	zval *value1_param = NULL, *value2_param = NULL, _0, _1;
	zend_long value1, value2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(value1)
		Z_PARAM_LONG(value2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &value1_param, &value2_param);
	ZVAL_LONG(&_0, value1);
	ZVAL_LONG(&_1, value2);
	phpqt_qdbusextratypesfunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDbusextratypesFunctions_QDbusextratypesFunctions, qHash)
{
	zval *objectPath_param = NULL, *seed_param = NULL, _0, _1;
	zend_long objectPath, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(objectPath)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &objectPath_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, objectPath);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qdbusextratypesfunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_DBus_QDbusextratypesFunctions_QDbusextratypesFunctions, swapQDBusSignatureQDBusSignature)
{
	zval *value1_param = NULL, *value2_param = NULL, _0, _1;
	zend_long value1, value2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(value1)
		Z_PARAM_LONG(value2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &value1_param, &value2_param);
	ZVAL_LONG(&_0, value1);
	ZVAL_LONG(&_1, value2);
	phpqt_qdbusextratypesfunctions_swap_q_d_bus_signature_q_d_bus_signature(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDbusextratypesFunctions_QDbusextratypesFunctions, qHashQDBusSignatureSizeT)
{
	zval *signature_param = NULL, *seed_param = NULL, _0, _1;
	zend_long signature, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(signature)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &signature_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, signature);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qdbusextratypesfunctions_q_hash_q_d_bus_signature_size_t(&_0, &_1));
}

PHP_METHOD(Qt_DBus_QDbusextratypesFunctions_QDbusextratypesFunctions, swapQDBusVariantQDBusVariant)
{
	zval *value1_param = NULL, *value2_param = NULL, _0, _1;
	zend_long value1, value2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(value1)
		Z_PARAM_LONG(value2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &value1_param, &value2_param);
	ZVAL_LONG(&_0, value1);
	ZVAL_LONG(&_1, value2);
	phpqt_qdbusextratypesfunctions_swap_q_d_bus_variant_q_d_bus_variant(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDbusextratypesFunctions_QDbusextratypesFunctions, qRegisterNormalizedMetaType_QDBusVariant)
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
	RETURN_MM_LONG(phpqt_qdbusextratypesfunctions_q_register_normalized_meta_type__q_d_bus_variant(&arg0));
}

PHP_METHOD(Qt_DBus_QDbusextratypesFunctions_QDbusextratypesFunctions, qRegisterNormalizedMetaType_QDBusObjectPath)
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
	RETURN_MM_LONG(phpqt_qdbusextratypesfunctions_q_register_normalized_meta_type__q_d_bus_object_path(&arg0));
}

PHP_METHOD(Qt_DBus_QDbusextratypesFunctions_QDbusextratypesFunctions, qRegisterNormalizedMetaType_QDBusSignature)
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
	RETURN_MM_LONG(phpqt_qdbusextratypesfunctions_q_register_normalized_meta_type__q_d_bus_signature(&arg0));
}

