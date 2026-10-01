
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
#include "src/network-qnetworkproxyquery.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkProxyQuery, QNetworkProxyQuery, qt, network_qnetworkproxyquery_qnetworkproxyquery, qt_network_qnetworkproxyquery_qnetworkproxyquery_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, staticMetaObject)
{

	RETURN_LONG(phpqt_qnetworkproxyquery_static_meta_object());
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkproxyquery_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, new_)
{

	RETURN_LONG(phpqt_qnetworkproxyquery_new());
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, newQUrlQNetworkProxyQueryQueryType)
{
	zval *requestUrl_param = NULL, *queryType = NULL, queryType_sub, __$null, _0;
	zend_long requestUrl;

	ZVAL_UNDEF(&queryType_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(requestUrl)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(queryType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &requestUrl_param, &queryType);
	if (!queryType) {
		queryType = &queryType_sub;
		queryType = &__$null;
	}
	ZVAL_LONG(&_0, requestUrl);
	RETURN_LONG(phpqt_qnetworkproxyquery_new_q_url_q_network_proxy_query_query_type(&_0, queryType));
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, newQStringIntQStringQNetworkProxyQueryQueryType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long port;
	zval *hostname_param = NULL, *port_param = NULL, *protocolTag_param = NULL, *queryType = NULL, queryType_sub, __$null, _0;
	zval hostname, protocolTag;

	ZVAL_UNDEF(&hostname);
	ZVAL_UNDEF(&protocolTag);
	ZVAL_UNDEF(&queryType_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(hostname)
		Z_PARAM_LONG(port)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(protocolTag)
		Z_PARAM_ZVAL_OR_NULL(queryType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &hostname_param, &port_param, &protocolTag_param, &queryType);
	zephir_get_strval(&hostname, hostname_param);
	if (!protocolTag_param) {
		ZEPHIR_INIT_VAR(&protocolTag);
		ZVAL_STRING(&protocolTag, "");
	} else {
		zephir_get_strval(&protocolTag, protocolTag_param);
	}
	if (!queryType) {
		queryType = &queryType_sub;
		queryType = &__$null;
	}
	ZVAL_LONG(&_0, port);
	RETURN_MM_LONG(phpqt_qnetworkproxyquery_new_q_string_int_q_string_q_network_proxy_query_query_type(&hostname, &_0, &protocolTag, queryType));
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, newQuint16QStringQNetworkProxyQueryQueryType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval protocolTag;
	zval *bindPort_param = NULL, *protocolTag_param = NULL, *queryType = NULL, queryType_sub, __$null, _0;
	zend_long bindPort;

	ZVAL_UNDEF(&queryType_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&protocolTag);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(bindPort)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(protocolTag)
		Z_PARAM_ZVAL_OR_NULL(queryType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &bindPort_param, &protocolTag_param, &queryType);
	if (!protocolTag_param) {
		ZEPHIR_INIT_VAR(&protocolTag);
		ZVAL_STRING(&protocolTag, "");
	} else {
		zephir_get_strval(&protocolTag, protocolTag_param);
	}
	if (!queryType) {
		queryType = &queryType_sub;
		queryType = &__$null;
	}
	ZVAL_LONG(&_0, bindPort);
	RETURN_MM_LONG(phpqt_qnetworkproxyquery_new_quint16_q_string_q_network_proxy_query_query_type(&_0, &protocolTag, queryType));
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, newQNetworkProxyQuery)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qnetworkproxyquery_new_q_network_proxy_query(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, swap)
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
	phpqt_qnetworkproxyquery_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, queryType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkproxyquery_query_type(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, setQueryType)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	phpqt_qnetworkproxyquery_set_query_type(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, peerPort)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkproxyquery_peer_port(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, setPeerPort)
{
	zval *handle_param = NULL, *port_param = NULL, _0, _1;
	zend_long handle, port;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &port_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	phpqt_qnetworkproxyquery_set_peer_port(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, peerHostName)
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
	phpqt_qnetworkproxyquery_peer_host_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, setPeerHostName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostname;
	zval *handle_param = NULL, *hostname_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&hostname);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hostname)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &hostname_param);
	zephir_get_strval(&hostname, hostname_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkproxyquery_set_peer_host_name(&_0, &hostname);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, localPort)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkproxyquery_local_port(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, setLocalPort)
{
	zval *handle_param = NULL, *port_param = NULL, _0, _1;
	zend_long handle, port;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &port_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	phpqt_qnetworkproxyquery_set_local_port(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, protocolTag)
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
	phpqt_qnetworkproxyquery_protocol_tag(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, setProtocolTag)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval protocolTag;
	zval *handle_param = NULL, *protocolTag_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&protocolTag);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(protocolTag)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &protocolTag_param);
	zephir_get_strval(&protocolTag, protocolTag_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkproxyquery_set_protocol_tag(&_0, &protocolTag);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, url)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkproxyquery_url(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxyQuery_QNetworkProxyQuery, setUrl)
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
	phpqt_qnetworkproxyquery_set_url(&_0, &_1);
}

