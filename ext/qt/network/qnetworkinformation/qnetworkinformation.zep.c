
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
#include "src/network-qnetworkinformation.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkInformation_QNetworkInformation)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkInformation, QNetworkInformation, qt, network_qnetworkinformation_qnetworkinformation, qt_network_qnetworkinformation_qnetworkinformation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, staticMetaObject)
{

	RETURN_LONG(phpqt_qnetworkinformation_static_meta_object());
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, tr)
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
	phpqt_qnetworkinformation_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, reachability)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkinformation_reachability(&_0));
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, isBehindCaptivePortal)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkinformation_is_behind_captive_portal(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, transportMedium)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkinformation_transport_medium(&_0));
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, isMetered)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkinformation_is_metered(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, backendName)
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
	phpqt_qnetworkinformation_backend_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, supports)
{
	zval *handle_param = NULL, *features_param = NULL, _0, _1;
	zend_long handle, features, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(features)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &features_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, features);
	r = phpqt_qnetworkinformation_supports(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, supportedFeatures)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkinformation_supported_features(&_0));
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, loadDefaultBackend)
{
	zend_long r = 0;
	r = phpqt_qnetworkinformation_load_default_backend();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, loadBackendByName)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *backend_param = NULL;
	zval backend;

	ZVAL_UNDEF(&backend);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(backend)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &backend_param);
	zephir_get_strval(&backend, backend_param);
	r = phpqt_qnetworkinformation_load_backend_by_name(&backend);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, loadBackendByFeatures)
{
	zval *features_param = NULL, _0;
	zend_long features, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(features)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &features_param);
	ZVAL_LONG(&_0, features);
	r = phpqt_qnetworkinformation_load_backend_by_features(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, availableBackends)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qnetworkinformation_available_backends(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, instance)
{

	RETURN_LONG(phpqt_qnetworkinformation_instance());
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, reachabilityChanged)
{
	zval *handle_param = NULL, *newReachability_param = NULL, _0, _1;
	zend_long handle, newReachability;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newReachability)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newReachability_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newReachability);
	phpqt_qnetworkinformation_reachability_changed(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, isBehindCaptivePortalChanged)
{
	zend_bool state;
	zval *handle_param = NULL, *state_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (state ? 1 : 0));
	phpqt_qnetworkinformation_is_behind_captive_portal_changed(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, transportMediumChanged)
{
	zval *handle_param = NULL, *current_param = NULL, _0, _1;
	zend_long handle, current;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(current)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &current_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, current);
	phpqt_qnetworkinformation_transport_medium_changed(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkInformation_QNetworkInformation, isMeteredChanged)
{
	zend_bool isMetered;
	zval *handle_param = NULL, *isMetered_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(isMetered)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &isMetered_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (isMetered ? 1 : 0));
	phpqt_qnetworkinformation_is_metered_changed(&_0, &_1);
}

