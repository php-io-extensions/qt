
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
#include "src/network-qformdatapartbuilder.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QFormDataPartBuilder, QFormDataPartBuilder, qt, network_qformdatapartbuilder_qformdatapartbuilder, qt_network_qformdatapartbuilder_qformdatapartbuilder_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, swap)
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
	phpqt_qformdatapartbuilder_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, new_)
{

	RETURN_LONG(phpqt_qformdatapartbuilder_new());
}

PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, setBody)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data, fileName, mimeType;
	zval *handle_param = NULL, *data_param = NULL, *fileName_param = NULL, *mimeType_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&mimeType);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(fileName)
		Z_PARAM_STR(mimeType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &data_param, &fileName_param, &mimeType_param);
	zephir_get_strval(&data, data_param);
	if (!fileName_param) {
		ZEPHIR_INIT_VAR(&fileName);
		ZVAL_STRING(&fileName, "");
	} else {
		zephir_get_strval(&fileName, fileName_param);
	}
	if (!mimeType_param) {
		ZEPHIR_INIT_VAR(&mimeType);
		ZVAL_STRING(&mimeType, "");
	} else {
		zephir_get_strval(&mimeType, mimeType_param);
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qformdatapartbuilder_set_body(&_0, &data, &fileName, &mimeType));
}

PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, setBodyDevice)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName, mimeType;
	zval *handle_param = NULL, *body_param = NULL, *fileName_param = NULL, *mimeType_param = NULL, _0, _1;
	zend_long handle, body;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&mimeType);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(body)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(fileName)
		Z_PARAM_STR(mimeType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &body_param, &fileName_param, &mimeType_param);
	if (!fileName_param) {
		ZEPHIR_INIT_VAR(&fileName);
		ZVAL_STRING(&fileName, "");
	} else {
		zephir_get_strval(&fileName, fileName_param);
	}
	if (!mimeType_param) {
		ZEPHIR_INIT_VAR(&mimeType);
		ZVAL_STRING(&mimeType, "");
	} else {
		zephir_get_strval(&mimeType, mimeType_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, body);
	RETURN_MM_LONG(phpqt_qformdatapartbuilder_set_body_device(&_0, &_1, &fileName, &mimeType));
}

PHP_METHOD(Qt_Network_QFormDataPartBuilder_QFormDataPartBuilder, setHeaders)
{
	zval *handle_param = NULL, *headers_param = NULL, _0, _1;
	zend_long handle, headers;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(headers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &headers_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, headers);
	RETURN_LONG(phpqt_qformdatapartbuilder_set_headers(&_0, &_1));
}

