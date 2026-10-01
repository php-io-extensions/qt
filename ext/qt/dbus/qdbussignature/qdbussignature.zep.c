
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
#include "src/dbus-qdbussignature.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusSignature_QDBusSignature)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusSignature, QDBusSignature, qt, dbus_qdbussignature_qdbussignature, qt_dbus_qdbussignature_qdbussignature_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, new_)
{

	RETURN_LONG(phpqt_qdbussignature_new());
}

PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, newChar)
{
	zval *signature = NULL, signature_sub;

	ZVAL_UNDEF(&signature_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(signature)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &signature);
	RETURN_LONG(phpqt_qdbussignature_new_char(signature));
}

PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, newQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *signature_param = NULL;
	zval signature;

	ZVAL_UNDEF(&signature);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(signature)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &signature_param);
	zephir_get_strval(&signature, signature_param);
	RETURN_MM_LONG(phpqt_qdbussignature_new_q_latin1_string_view(&signature));
}

PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *signature_param = NULL;
	zval signature;

	ZVAL_UNDEF(&signature);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(signature)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &signature_param);
	zephir_get_strval(&signature, signature_param);
	RETURN_MM_LONG(phpqt_qdbussignature_new_q_string(&signature));
}

PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, swap)
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
	phpqt_qdbussignature_swap(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, setSignature)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval signature;
	zval *handle_param = NULL, *signature_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&signature);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(signature)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &signature_param);
	zephir_get_strval(&signature, signature_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbussignature_set_signature(&_0, &signature);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusSignature_QDBusSignature, signature)
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
	phpqt_qdbussignature_signature(&result, &_0);
	RETURN_CCTOR(&result);
}

