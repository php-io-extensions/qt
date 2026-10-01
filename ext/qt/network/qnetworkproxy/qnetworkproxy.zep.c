
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
#include "src/network-qnetworkproxy.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkProxy_QNetworkProxy)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkProxy, QNetworkProxy, qt, network_qnetworkproxy_qnetworkproxy, qt_network_qnetworkproxy_qnetworkproxy_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, staticMetaObject)
{

	RETURN_LONG(phpqt_qnetworkproxy_static_meta_object());
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkproxy_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, new_)
{

	RETURN_LONG(phpqt_qnetworkproxy_new());
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, newQNetworkProxyProxyTypeQStringQuint16QStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostName, user, password;
	zval *type_param = NULL, *hostName_param = NULL, *port_param = NULL, *user_param = NULL, *password_param = NULL, _0, _1;
	zend_long type, port;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&hostName);
	ZVAL_UNDEF(&user);
	ZVAL_UNDEF(&password);
	ZEND_PARSE_PARAMETERS_START(1, 5)
		Z_PARAM_LONG(type)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(hostName)
		Z_PARAM_LONG(port)
		Z_PARAM_STR(user)
		Z_PARAM_STR(password)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 4, &type_param, &hostName_param, &port_param, &user_param, &password_param);
	if (!hostName_param) {
		ZEPHIR_INIT_VAR(&hostName);
		ZVAL_STRING(&hostName, "");
	} else {
		zephir_get_strval(&hostName, hostName_param);
	}
	if (!port_param) {
		port = 0;
	} else {
		}
	if (!user_param) {
		ZEPHIR_INIT_VAR(&user);
		ZVAL_STRING(&user, "");
	} else {
		zephir_get_strval(&user, user_param);
	}
	if (!password_param) {
		ZEPHIR_INIT_VAR(&password);
		ZVAL_STRING(&password, "");
	} else {
		zephir_get_strval(&password, password_param);
	}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, port);
	RETURN_MM_LONG(phpqt_qnetworkproxy_new_q_network_proxy_proxy_type_q_string_quint16_q_string_q_string(&_0, &hostName, &_1, &user, &password));
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, newQNetworkProxy)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qnetworkproxy_new_q_network_proxy(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, swap)
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
	phpqt_qnetworkproxy_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setType)
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
	phpqt_qnetworkproxy_set_type(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkproxy_type(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setCapabilities)
{
	zval *handle_param = NULL, *capab_param = NULL, _0, _1;
	zend_long handle, capab;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(capab)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &capab_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, capab);
	phpqt_qnetworkproxy_set_capabilities(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, capabilities)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkproxy_capabilities(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, isCachingProxy)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkproxy_is_caching_proxy(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, isTransparentProxy)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkproxy_is_transparent_proxy(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setUser)
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
	phpqt_qnetworkproxy_set_user(&_0, &userName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, user)
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
	phpqt_qnetworkproxy_user(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setPassword)
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
	phpqt_qnetworkproxy_set_password(&_0, &password);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, password)
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
	phpqt_qnetworkproxy_password(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setHostName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostName;
	zval *handle_param = NULL, *hostName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&hostName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hostName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &hostName_param);
	zephir_get_strval(&hostName, hostName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkproxy_set_host_name(&_0, &hostName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, hostName)
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
	phpqt_qnetworkproxy_host_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setPort)
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
	phpqt_qnetworkproxy_set_port(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, port)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkproxy_port(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setApplicationProxy)
{
	zval *proxy_param = NULL, _0;
	zend_long proxy;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(proxy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &proxy_param);
	ZVAL_LONG(&_0, proxy);
	phpqt_qnetworkproxy_set_application_proxy(&_0);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, applicationProxy)
{

	RETURN_LONG(phpqt_qnetworkproxy_application_proxy());
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, headers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkproxy_headers(&_0));
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setHeaders)
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
	phpqt_qnetworkproxy_set_headers(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, header)
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
	phpqt_qnetworkproxy_header(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setHeader)
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
	phpqt_qnetworkproxy_set_header(&_0, &_1, value);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, hasRawHeader)
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
	r = phpqt_qnetworkproxy_has_raw_header(&_0, &headerName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, rawHeaderList)
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
	phpqt_qnetworkproxy_raw_header_list(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, rawHeader)
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
	phpqt_qnetworkproxy_raw_header(&result, &_0, &headerName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxy_QNetworkProxy, setRawHeader)
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
	phpqt_qnetworkproxy_set_raw_header(&_0, &headerName, &value);
	ZEPHIR_MM_RESTORE();
}

