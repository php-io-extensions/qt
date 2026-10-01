
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
#include "src/network-qnetworkproxyfactory.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkProxyFactory_QNetworkProxyFactory)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkProxyFactory, QNetworkProxyFactory, qt, network_qnetworkproxyfactory_qnetworkproxyfactory, qt_network_qnetworkproxyfactory_qnetworkproxyfactory_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkProxyFactory_QNetworkProxyFactory, new_)
{

	RETURN_LONG(phpqt_qnetworkproxyfactory_new());
}

PHP_METHOD(Qt_Network_QNetworkProxyFactory_QNetworkProxyFactory, queryProxy)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *query = NULL, query_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&query_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(query)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &query);
	if (!query) {
		query = &query_sub;
		query = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkproxyfactory_query_proxy(&result, &_0, query);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxyFactory_QNetworkProxyFactory, usesSystemConfiguration)
{
	zend_long r = 0;
	r = phpqt_qnetworkproxyfactory_uses_system_configuration();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkProxyFactory_QNetworkProxyFactory, setUseSystemConfiguration)
{
	zval *enable_param = NULL, _0;
	zend_bool enable;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &enable_param);
	ZVAL_BOOL(&_0, (enable ? 1 : 0));
	phpqt_qnetworkproxyfactory_set_use_system_configuration(&_0);
}

PHP_METHOD(Qt_Network_QNetworkProxyFactory_QNetworkProxyFactory, setApplicationProxyFactory)
{
	zval *factory_param = NULL, _0;
	zend_long factory;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(factory)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &factory_param);
	ZVAL_LONG(&_0, factory);
	phpqt_qnetworkproxyfactory_set_application_proxy_factory(&_0);
}

PHP_METHOD(Qt_Network_QNetworkProxyFactory_QNetworkProxyFactory, proxyForQuery)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *query_param = NULL, result, _0;
	zend_long query;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(query)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &query_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, query);
	phpqt_qnetworkproxyfactory_proxy_for_query(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkProxyFactory_QNetworkProxyFactory, systemProxyForQuery)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *query = NULL, query_sub, __$null, result;

	ZVAL_UNDEF(&query_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(query)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &query);
	if (!query) {
		query = &query_sub;
		query = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qnetworkproxyfactory_system_proxy_for_query(&result, query);
	RETURN_CCTOR(&result);
}

