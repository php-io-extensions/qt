
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
#include "src/dbus-qdbusmetatype.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusMetaType_QDBusMetaType)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusMetaType, QDBusMetaType, qt, dbus_qdbusmetatype_qdbusmetatype, qt_dbus_qdbusmetatype_qdbusmetatype_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusMetaType_QDBusMetaType, registerCustomType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval signature;
	zval *type_param = NULL, *signature_param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&signature);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(signature)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &type_param, &signature_param);
	zephir_get_strval(&signature, signature_param);
	ZVAL_LONG(&_0, type);
	phpqt_qdbusmetatype_register_custom_type(&_0, &signature);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusMetaType_QDBusMetaType, signatureToMetaType)
{
	zval *signature = NULL, signature_sub;

	ZVAL_UNDEF(&signature_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(signature)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &signature);
	RETURN_LONG(phpqt_qdbusmetatype_signature_to_meta_type(signature));
}

PHP_METHOD(Qt_DBus_QDBusMetaType_QDBusMetaType, typeToSignature)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *type_param = NULL, result, _0;
	zend_long type;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &type_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, type);
	phpqt_qdbusmetatype_type_to_signature(&result, &_0);
	RETURN_CCTOR(&result);
}

