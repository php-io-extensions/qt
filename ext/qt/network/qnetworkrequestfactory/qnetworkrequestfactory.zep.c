
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
#include "src/network-qnetworkrequestfactory.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkRequestFactory, QNetworkRequestFactory, qt, network_qnetworkrequestfactory_qnetworkrequestfactory, qt_network_qnetworkrequestfactory_qnetworkrequestfactory_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, new_)
{

	RETURN_LONG(phpqt_qnetworkrequestfactory_new());
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, newQUrl)
{
	zval *baseUrl_param = NULL, _0;
	zend_long baseUrl;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(baseUrl)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &baseUrl_param);
	ZVAL_LONG(&_0, baseUrl);
	RETURN_LONG(phpqt_qnetworkrequestfactory_new_q_url(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, newQNetworkRequestFactory)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qnetworkrequestfactory_new_q_network_request_factory(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, swap)
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
	phpqt_qnetworkrequestfactory_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, baseUrl)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequestfactory_base_url(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, setBaseUrl)
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
	phpqt_qnetworkrequestfactory_set_base_url(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, sslConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequestfactory_ssl_configuration(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, setSslConfiguration)
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
	phpqt_qnetworkrequestfactory_set_ssl_configuration(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, createRequest)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequestfactory_create_request(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, createRequestQUrlQuery)
{
	zval *handle_param = NULL, *query_param = NULL, _0, _1;
	zend_long handle, query;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(query)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &query_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, query);
	RETURN_LONG(phpqt_qnetworkrequestfactory_create_request_q_url_query(&_0, &_1));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, createRequestQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &path_param);
	zephir_get_strval(&path, path_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qnetworkrequestfactory_create_request_q_string(&_0, &path));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, createRequestQStringQUrlQuery)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, *query_param = NULL, _0, _1;
	zend_long handle, query;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
		Z_PARAM_LONG(query)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &path_param, &query_param);
	zephir_get_strval(&path, path_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, query);
	RETURN_MM_LONG(phpqt_qnetworkrequestfactory_create_request_q_string_q_url_query(&_0, &path, &_1));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, setCommonHeaders)
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
	phpqt_qnetworkrequestfactory_set_common_headers(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, commonHeaders)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequestfactory_common_headers(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, clearCommonHeaders)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequestfactory_clear_common_headers(&_0);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, bearerToken)
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
	phpqt_qnetworkrequestfactory_bearer_token(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, setBearerToken)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval token;
	zval *handle_param = NULL, *token_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&token);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(token)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &token_param);
	zephir_get_strval(&token, token_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequestfactory_set_bearer_token(&_0, &token);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, clearBearerToken)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequestfactory_clear_bearer_token(&_0);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, userName)
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
	phpqt_qnetworkrequestfactory_user_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, setUserName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval userName;
	zval *handle_param = NULL, *userName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&userName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(userName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &userName_param);
	zephir_get_strval(&userName, userName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequestfactory_set_user_name(&_0, &userName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, clearUserName)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequestfactory_clear_user_name(&_0);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, password)
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
	phpqt_qnetworkrequestfactory_password(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, setPassword)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval password;
	zval *handle_param = NULL, *password_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&password);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(password)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &password_param);
	zephir_get_strval(&password, password_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequestfactory_set_password(&_0, &password);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, clearPassword)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequestfactory_clear_password(&_0);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, queryParameters)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequestfactory_query_parameters(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, setQueryParameters)
{
	zval *handle_param = NULL, *query_param = NULL, _0, _1;
	zend_long handle, query;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(query)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &query_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, query);
	phpqt_qnetworkrequestfactory_set_query_parameters(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, clearQueryParameters)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequestfactory_clear_query_parameters(&_0);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, setPriority)
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
	phpqt_qnetworkrequestfactory_set_priority(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, priority)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkrequestfactory_priority(&_0));
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, attribute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *attribute_param = NULL, result, _0, _1;
	zend_long handle, attribute;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribute)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &attribute_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribute);
	phpqt_qnetworkrequestfactory_attribute(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, attributeQNetworkRequestAttributeQVariant)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *attribute_param = NULL, *defaultValue = NULL, defaultValue_sub, result, _0, _1;
	zend_long handle, attribute;

	ZVAL_UNDEF(&defaultValue_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribute)
		Z_PARAM_ZVAL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &attribute_param, &defaultValue);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribute);
	phpqt_qnetworkrequestfactory_attribute_q_network_request_attribute_q_variant(&result, &_0, &_1, defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, setAttribute)
{
	zval *handle_param = NULL, *attribute_param = NULL, *value = NULL, value_sub, _0, _1;
	zend_long handle, attribute;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribute)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &attribute_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribute);
	phpqt_qnetworkrequestfactory_set_attribute(&_0, &_1, value);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, clearAttribute)
{
	zval *handle_param = NULL, *attribute_param = NULL, _0, _1;
	zend_long handle, attribute;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribute)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &attribute_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribute);
	phpqt_qnetworkrequestfactory_clear_attribute(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkRequestFactory_QNetworkRequestFactory, clearAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkrequestfactory_clear_attributes(&_0);
}

