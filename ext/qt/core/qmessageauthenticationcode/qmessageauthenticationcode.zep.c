
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
#include "src/core-qmessageauthenticationcode.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMessageAuthenticationCode, QMessageAuthenticationCode, qt, core_qmessageauthenticationcode_qmessageauthenticationcode, qt_core_qmessageauthenticationcode_qmessageauthenticationcode_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *method_param = NULL, *key_param = NULL, _0;
	zend_long method;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(method)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &method_param, &key_param);
	if (!key_param) {
		ZEPHIR_INIT_VAR(&key);
		ZVAL_STRING(&key, "");
	} else {
		zephir_get_strval(&key, key_param);
	}
	ZVAL_LONG(&_0, method);
	RETURN_MM_LONG(phpqt_qmessageauthenticationcode_new(&_0, &key));
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, swap)
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
	phpqt_qmessageauthenticationcode_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, reset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessageauthenticationcode_reset(&_0);
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, setKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &key_param);
	zephir_get_strval(&key, key_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessageauthenticationcode_set_key(&_0, &key);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, addData)
{
	zval *handle_param = NULL, *data = NULL, data_sub, *length_param = NULL, _0, _1;
	zend_long handle, length;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &data, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, length);
	phpqt_qmessageauthenticationcode_add_data(&_0, data, &_1);
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, addDataQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *data_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmessageauthenticationcode_add_data_q_byte_array_view(&_0, &data);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, addDataQIODevice)
{
	zval *handle_param = NULL, *device_param = NULL, _0, _1;
	zend_long handle, device, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &device_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	r = phpqt_qmessageauthenticationcode_add_data_q_i_o_device(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, resultView)
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
	phpqt_qmessageauthenticationcode_result_view(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, result)
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
	phpqt_qmessageauthenticationcode_result(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMessageAuthenticationCode_QMessageAuthenticationCode, hash)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long method;
	zval *message_param = NULL, *key_param = NULL, *method_param = NULL, result, _0;
	zval message, key;

	ZVAL_UNDEF(&message);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(message)
		Z_PARAM_STR(key)
		Z_PARAM_LONG(method)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &message_param, &key_param, &method_param);
	zephir_get_strval(&message, message_param);
	zephir_get_strval(&key, key_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, method);
	phpqt_qmessageauthenticationcode_hash(&result, &message, &key, &_0);
	RETURN_CCTOR(&result);
}

