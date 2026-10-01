
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
#include "src/network-qnetworkrequest.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkRequest_QNetworkRequest)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkRequest, QNetworkRequest, qt, network_qnetworkrequest_qnetworkrequest, qt_network_qnetworkrequest_qnetworkrequest_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, staticMetaObject)
{

	RETURN_LONG(phpqt_qnetworkrequest_static_meta_object());
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequest_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, new_)
{

	RETURN_LONG(phpqt_qnetworkrequest_new());
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, newQUrl)
{
	zval *url_param = NULL, _0;
	zend_long url;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &url_param);
	ZVAL_LONG(&_0, url);
	RETURN_LONG(phpqt_qnetworkrequest_new_q_url(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, newQNetworkRequest)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qnetworkrequest_new_q_network_request(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, swap)
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
	phpqt_qnetworkrequest_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, url)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_url(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setUrl)
{
	zval *handle_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	phpqt_qnetworkrequest_set_url(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, headers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_headers(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setHeaders)
{
	zval *handle_param = NULL, *newHeaders_param = NULL, _0, _1;
	zend_long handle, newHeaders;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newHeaders)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newHeaders_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newHeaders);
	phpqt_qnetworkrequest_set_headers(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, header)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *header_param = NULL, result, _0, _1;
	zend_long handle, header;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(header)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &header_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, header);
	phpqt_qnetworkrequest_header(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setHeader)
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
	phpqt_qnetworkrequest_set_header(&_0, &_1, value);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, hasRawHeader)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval headerName;
	zval *handle_param = NULL, *headerName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&headerName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(headerName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &headerName_param);
	zephir_get_strval(&headerName, headerName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkrequest_has_raw_header(&_0, &headerName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, rawHeaderList)
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
	phpqt_qnetworkrequest_raw_header_list(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, rawHeader)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval headerName;
	zval *handle_param = NULL, *headerName_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&headerName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(headerName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &headerName_param);
	zephir_get_strval(&headerName, headerName_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequest_raw_header(&result, &_0, &headerName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setRawHeader)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval headerName, value;
	zval *handle_param = NULL, *headerName_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&headerName);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(headerName)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &headerName_param, &value_param);
	zephir_get_strval(&headerName, headerName_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequest_set_raw_header(&_0, &headerName, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, attribute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *code_param = NULL, *defaultValue = NULL, defaultValue_sub, __$null, result, _0, _1;
	zend_long handle, code;

	ZVAL_UNDEF(&defaultValue_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(code)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &code_param, &defaultValue);
	if (!defaultValue) {
		defaultValue = &defaultValue_sub;
		defaultValue = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, code);
	phpqt_qnetworkrequest_attribute(&result, &_0, &_1, defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setAttribute)
{
	zval *handle_param = NULL, *code_param = NULL, *value = NULL, value_sub, _0, _1;
	zend_long handle, code;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(code)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &code_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, code);
	phpqt_qnetworkrequest_set_attribute(&_0, &_1, value);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, sslConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_ssl_configuration(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setSslConfiguration)
{
	zval *handle_param = NULL, *configuration_param = NULL, _0, _1;
	zend_long handle, configuration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &configuration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, configuration);
	phpqt_qnetworkrequest_set_ssl_configuration(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setOriginatingObject)
{
	zval *handle_param = NULL, *object__param = NULL, _0, _1;
	zend_long handle, object_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &object__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	phpqt_qnetworkrequest_set_originating_object(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, originatingObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_originating_object(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, priority)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_priority(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setPriority)
{
	zval *handle_param = NULL, *priority_param = NULL, _0, _1;
	zend_long handle, priority;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(priority)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &priority_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, priority);
	phpqt_qnetworkrequest_set_priority(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, maximumRedirectsAllowed)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_maximum_redirects_allowed(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setMaximumRedirectsAllowed)
{
	zval *handle_param = NULL, *maximumRedirectsAllowed_param = NULL, _0, _1;
	zend_long handle, maximumRedirectsAllowed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maximumRedirectsAllowed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maximumRedirectsAllowed_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maximumRedirectsAllowed);
	phpqt_qnetworkrequest_set_maximum_redirects_allowed(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, peerVerifyName)
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
	phpqt_qnetworkrequest_peer_verify_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setPeerVerifyName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval peerName;
	zval *handle_param = NULL, *peerName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&peerName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(peerName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &peerName_param);
	zephir_get_strval(&peerName, peerName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequest_set_peer_verify_name(&_0, &peerName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, http1Configuration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_http1_configuration(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setHttp1Configuration)
{
	zval *handle_param = NULL, *configuration_param = NULL, _0, _1;
	zend_long handle, configuration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &configuration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, configuration);
	phpqt_qnetworkrequest_set_http1_configuration(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, http2Configuration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_http2_configuration(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setHttp2Configuration)
{
	zval *handle_param = NULL, *configuration_param = NULL, _0, _1;
	zend_long handle, configuration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &configuration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, configuration);
	phpqt_qnetworkrequest_set_http2_configuration(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, decompressedSafetyCheckThreshold)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_decompressed_safety_check_threshold(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setDecompressedSafetyCheckThreshold)
{
	zval *handle_param = NULL, *threshold_param = NULL, _0, _1;
	zend_long handle, threshold;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(threshold)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &threshold_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, threshold);
	phpqt_qnetworkrequest_set_decompressed_safety_check_threshold(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, transferTimeout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequest_transfer_timeout(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequest_QNetworkRequest, setTransferTimeout)
{
	zval *handle_param = NULL, *timeout_param = NULL, _0, _1;
	zend_long handle, timeout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeout);
	phpqt_qnetworkrequest_set_transfer_timeout(&_0, &_1);
}

