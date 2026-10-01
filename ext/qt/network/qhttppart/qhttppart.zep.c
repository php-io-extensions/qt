
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
#include "src/network-qhttppart.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Network_QHttpPart_QHttpPart)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QHttpPart, QHttpPart, qt, network_qhttppart_qhttppart, qt_network_qhttppart_qhttppart_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, new_)
{

	RETURN_LONG(phpqt_qhttppart_new());
}

PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, newQHttpPart)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qhttppart_new_q_http_part(&_0));
}

PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, swap)
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
	phpqt_qhttppart_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, setHeader)
{
	zval *handle_param = NULL, *header_param = NULL, *value = NULL, value_sub, _0, _1;
	zend_long handle, header;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(header)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &header_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, header);
	phpqt_qhttppart_set_header(&_0, &_1, value);
}

PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, setRawHeader)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval headerName, headerValue;
	zval *handle_param = NULL, *headerName_param = NULL, *headerValue_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&headerName);
	ZVAL_UNDEF(&headerValue);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(headerName)
		Z_PARAM_STR(headerValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &headerName_param, &headerValue_param);
	zephir_get_strval(&headerName, headerName_param);
	zephir_get_strval(&headerValue, headerValue_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhttppart_set_raw_header(&_0, &headerName, &headerValue);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, setBody)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval body;
	zval *handle_param = NULL, *body_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&body);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(body)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &body_param);
	zephir_get_strval(&body, body_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhttppart_set_body(&_0, &body);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QHttpPart_QHttpPart, setBodyDevice)
{
	zval *handle_param = NULL, *device_param = NULL, _0, _1;
	zend_long handle, device;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &device_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	phpqt_qhttppart_set_body_device(&_0, &_1);
}

