
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
#include "src/network-qnetworkaccessmanager.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkAccessManager_QNetworkAccessManager)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkAccessManager, QNetworkAccessManager, qt, network_qnetworkaccessmanager_qnetworkaccessmanager, qt_network_qnetworkaccessmanager_qnetworkaccessmanager_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, staticMetaObject)
{

	RETURN_LONG(phpqt_qnetworkaccessmanager_static_meta_object());
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qnetworkaccessmanager_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qnetworkaccessmanager_new(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, supportedSchemes)
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
	phpqt_qnetworkaccessmanager_supported_schemes(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, clearAccessCache)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkaccessmanager_clear_access_cache(&_0);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, clearConnectionCache)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkaccessmanager_clear_connection_cache(&_0);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, proxy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaccessmanager_proxy(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, setProxy)
{
	zval *handle_param = NULL, *proxy_param = NULL, _0, _1;
	zend_long handle, proxy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(proxy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &proxy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, proxy);
	phpqt_qnetworkaccessmanager_set_proxy(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, proxyFactory)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaccessmanager_proxy_factory(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, setProxyFactory)
{
	zval *handle_param = NULL, *factory_param = NULL, _0, _1;
	zend_long handle, factory;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(factory)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &factory_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, factory);
	phpqt_qnetworkaccessmanager_set_proxy_factory(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, cache)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaccessmanager_cache(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, setCache)
{
	zval *handle_param = NULL, *cache_param = NULL, _0, _1;
	zend_long handle, cache;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cache)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cache_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cache);
	phpqt_qnetworkaccessmanager_set_cache(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, cookieJar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaccessmanager_cookie_jar(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, setCookieJar)
{
	zval *handle_param = NULL, *cookieJar_param = NULL, _0, _1;
	zend_long handle, cookieJar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cookieJar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cookieJar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cookieJar);
	phpqt_qnetworkaccessmanager_set_cookie_jar(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, setStrictTransportSecurityEnabled)
{
	zend_bool enabled;
	zval *handle_param = NULL, *enabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enabled ? 1 : 0));
	phpqt_qnetworkaccessmanager_set_strict_transport_security_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, isStrictTransportSecurityEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkaccessmanager_is_strict_transport_security_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, enableStrictTransportSecurityStore)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval storeDir;
	zend_bool enabled;
	zval *handle_param = NULL, *enabled_param = NULL, *storeDir_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&storeDir);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enabled)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(storeDir)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &enabled_param, &storeDir_param);
	if (!storeDir_param) {
		ZEPHIR_INIT_VAR(&storeDir);
		ZVAL_STRING(&storeDir, "");
	} else {
		zephir_get_strval(&storeDir, storeDir_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enabled ? 1 : 0));
	phpqt_qnetworkaccessmanager_enable_strict_transport_security_store(&_0, &_1, &storeDir);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, isStrictTransportSecurityStoreEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkaccessmanager_is_strict_transport_security_store_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, addStrictTransportSecurityHosts)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval knownHosts;
	zval *handle_param = NULL, *knownHosts_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&knownHosts);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(knownHosts)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &knownHosts_param);
	zephir_get_arrval(&knownHosts, knownHosts_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkaccessmanager_add_strict_transport_security_hosts(&_0, &knownHosts);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, strictTransportSecurityHosts)
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
	phpqt_qnetworkaccessmanager_strict_transport_security_hosts(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, head)
{
	zval *handle_param = NULL, *request_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &request_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_LONG(phpqt_qnetworkaccessmanager_head(&_0, &_1));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, get)
{
	zval *handle_param = NULL, *request_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &request_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_LONG(phpqt_qnetworkaccessmanager_get(&_0, &_1));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, getQNetworkRequestQIODevice)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qnetworkaccessmanager_get_q_network_request_q_i_o_device(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, getQNetworkRequestQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qnetworkaccessmanager_get_q_network_request_q_byte_array(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, post)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qnetworkaccessmanager_post(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, postQNetworkRequestQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qnetworkaccessmanager_post_q_network_request_q_byte_array(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, put)
{
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_LONG(phpqt_qnetworkaccessmanager_put(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, putQNetworkRequestQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *request_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &request_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qnetworkaccessmanager_put_q_network_request_q_byte_array(&_0, &_1, &data));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, deleteResource)
{
	zval *handle_param = NULL, *request_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &request_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_LONG(phpqt_qnetworkaccessmanager_delete_resource(&_0, &_1));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, sendCustomRequest)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval verb;
	zval *handle_param = NULL, *request_param = NULL, *verb_param = NULL, *data_param = NULL, _0, _1, _2;
	zend_long handle, request, data;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&verb);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(verb)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &request_param, &verb_param, &data_param);
	zephir_get_strval(&verb, verb_param);
	if (!data_param) {
		data = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, data);
	RETURN_MM_LONG(phpqt_qnetworkaccessmanager_send_custom_request(&_0, &_1, &verb, &_2));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, sendCustomRequestQNetworkRequestQByteArrayQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval verb, data;
	zval *handle_param = NULL, *request_param = NULL, *verb_param = NULL, *data_param = NULL, _0, _1;
	zend_long handle, request;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&verb);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(verb)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &request_param, &verb_param, &data_param);
	zephir_get_strval(&verb, verb_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	RETURN_MM_LONG(phpqt_qnetworkaccessmanager_send_custom_request_q_network_request_q_byte_array_q_byte_array(&_0, &_1, &verb, &data));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, postQNetworkRequestQHttpMultiPart)
{
	zval *handle_param = NULL, *request_param = NULL, *multiPart_param = NULL, _0, _1, _2;
	zend_long handle, request, multiPart;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(multiPart)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &multiPart_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, multiPart);
	RETURN_LONG(phpqt_qnetworkaccessmanager_post_q_network_request_q_http_multi_part(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, putQNetworkRequestQHttpMultiPart)
{
	zval *handle_param = NULL, *request_param = NULL, *multiPart_param = NULL, _0, _1, _2;
	zend_long handle, request, multiPart;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_LONG(multiPart)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &request_param, &multiPart_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, multiPart);
	RETURN_LONG(phpqt_qnetworkaccessmanager_put_q_network_request_q_http_multi_part(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, sendCustomRequestQNetworkRequestQByteArrayQHttpMultiPart)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval verb;
	zval *handle_param = NULL, *request_param = NULL, *verb_param = NULL, *multiPart_param = NULL, _0, _1, _2;
	zend_long handle, request, multiPart;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&verb);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(request)
		Z_PARAM_STR(verb)
		Z_PARAM_LONG(multiPart)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &request_param, &verb_param, &multiPart_param);
	zephir_get_strval(&verb, verb_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, request);
	ZVAL_LONG(&_2, multiPart);
	RETURN_MM_LONG(phpqt_qnetworkaccessmanager_send_custom_request_q_network_request_q_byte_array_q_http_multi_part(&_0, &_1, &verb, &_2));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, connectToHostEncrypted)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostName;
	zval *handle_param = NULL, *hostName_param = NULL, *port_param = NULL, *sslConfiguration = NULL, sslConfiguration_sub, __$null, _0, _1;
	zend_long handle, port;

	ZVAL_UNDEF(&sslConfiguration_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&hostName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hostName)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(port)
		Z_PARAM_ZVAL_OR_NULL(sslConfiguration)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &hostName_param, &port_param, &sslConfiguration);
	zephir_get_strval(&hostName, hostName_param);
	if (!port_param) {
		port = 443;
	} else {
		}
	if (!sslConfiguration) {
		sslConfiguration = &sslConfiguration_sub;
		sslConfiguration = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	phpqt_qnetworkaccessmanager_connect_to_host_encrypted(&_0, &hostName, &_1, sslConfiguration);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, connectToHostEncryptedQStringQuint16QSslConfigurationQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostName, peerName;
	zval *handle_param = NULL, *hostName_param = NULL, *port_param = NULL, *sslConfiguration_param = NULL, *peerName_param = NULL, _0, _1, _2;
	zend_long handle, port, sslConfiguration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&hostName);
	ZVAL_UNDEF(&peerName);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hostName)
		Z_PARAM_LONG(port)
		Z_PARAM_LONG(sslConfiguration)
		Z_PARAM_STR(peerName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &hostName_param, &port_param, &sslConfiguration_param, &peerName_param);
	zephir_get_strval(&hostName, hostName_param);
	zephir_get_strval(&peerName, peerName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	ZVAL_LONG(&_2, sslConfiguration);
	phpqt_qnetworkaccessmanager_connect_to_host_encrypted_q_string_quint16_q_ssl_configuration_q_string(&_0, &hostName, &_1, &_2, &peerName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, connectToHost)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hostName;
	zval *handle_param = NULL, *hostName_param = NULL, *port_param = NULL, _0, _1;
	zend_long handle, port;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&hostName);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hostName)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &hostName_param, &port_param);
	zephir_get_strval(&hostName, hostName_param);
	if (!port_param) {
		port = 80;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, port);
	phpqt_qnetworkaccessmanager_connect_to_host(&_0, &hostName, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, setRedirectPolicy)
{
	zval *handle_param = NULL, *policy_param = NULL, _0, _1;
	zend_long handle, policy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(policy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &policy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, policy);
	phpqt_qnetworkaccessmanager_set_redirect_policy(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, redirectPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaccessmanager_redirect_policy(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, autoDeleteReplies)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkaccessmanager_auto_delete_replies(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, setAutoDeleteReplies)
{
	zend_bool autoDelete;
	zval *handle_param = NULL, *autoDelete_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(autoDelete)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &autoDelete_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (autoDelete ? 1 : 0));
	phpqt_qnetworkaccessmanager_set_auto_delete_replies(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, transferTimeout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaccessmanager_transfer_timeout(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, setTransferTimeout)
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
	phpqt_qnetworkaccessmanager_set_transfer_timeout(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, proxyAuthenticationRequired)
{
	zval *handle_param = NULL, *proxy_param = NULL, *authenticator_param = NULL, _0, _1, _2;
	zend_long handle, proxy, authenticator;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(proxy)
		Z_PARAM_LONG(authenticator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &proxy_param, &authenticator_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, proxy);
	ZVAL_LONG(&_2, authenticator);
	phpqt_qnetworkaccessmanager_proxy_authentication_required(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, authenticationRequired)
{
	zval *handle_param = NULL, *reply_param = NULL, *authenticator_param = NULL, _0, _1, _2;
	zend_long handle, reply, authenticator;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(reply)
		Z_PARAM_LONG(authenticator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &reply_param, &authenticator_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, reply);
	ZVAL_LONG(&_2, authenticator);
	phpqt_qnetworkaccessmanager_authentication_required(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, finished)
{
	zval *handle_param = NULL, *reply_param = NULL, _0, _1;
	zend_long handle, reply;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(reply)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &reply_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, reply);
	phpqt_qnetworkaccessmanager_finished(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, encrypted)
{
	zval *handle_param = NULL, *reply_param = NULL, _0, _1;
	zend_long handle, reply;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(reply)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &reply_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, reply);
	phpqt_qnetworkaccessmanager_encrypted(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, sslErrors)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval errors;
	zval *handle_param = NULL, *reply_param = NULL, *errors_param = NULL, _0, _1;
	zend_long handle, reply;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&errors);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(reply)
		Z_PARAM_ARRAY(errors)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &reply_param, &errors_param);
	zephir_get_arrval(&errors, errors_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, reply);
	phpqt_qnetworkaccessmanager_ssl_errors(&_0, &_1, &errors);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, preSharedKeyAuthenticationRequired)
{
	zval *handle_param = NULL, *reply_param = NULL, *authenticator_param = NULL, _0, _1, _2;
	zend_long handle, reply, authenticator;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(reply)
		Z_PARAM_LONG(authenticator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &reply_param, &authenticator_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, reply);
	ZVAL_LONG(&_2, authenticator);
	phpqt_qnetworkaccessmanager_pre_shared_key_authentication_required(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, createRequest)
{
	zval *handle_param = NULL, *op_param = NULL, *request_param = NULL, *outgoingData_param = NULL, _0, _1, _2, _3;
	zend_long handle, op, request, outgoingData;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(op)
		Z_PARAM_LONG(request)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(outgoingData)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &op_param, &request_param, &outgoingData_param);
	if (!outgoingData_param) {
		outgoingData = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, op);
	ZVAL_LONG(&_2, request);
	ZVAL_LONG(&_3, outgoingData);
	RETURN_LONG(phpqt_qnetworkaccessmanager_create_request(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Network_QNetworkAccessManager_QNetworkAccessManager, supportedSchemesImplementation)
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
	phpqt_qnetworkaccessmanager_supported_schemes_implementation(&result, &_0);
	RETURN_CCTOR(&result);
}

