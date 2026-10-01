
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
#include "src/network-qsslpresharedkeyauthenticator.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QSslPreSharedKeyAuthenticator, QSslPreSharedKeyAuthenticator, qt, network_qsslpresharedkeyauthenticator_qsslpresharedkeyauthenticator, qt_network_qsslpresharedkeyauthenticator_qsslpresharedkeyauthenticator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, staticMetaObject)
{

	RETURN_LONG(phpqt_qsslpresharedkeyauthenticator_static_meta_object());
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslpresharedkeyauthenticator_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, new_)
{

	RETURN_LONG(phpqt_qsslpresharedkeyauthenticator_new());
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, newQSslPreSharedKeyAuthenticator)
{
	zval *authenticator_param = NULL, _0;
	zend_long authenticator;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(authenticator)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &authenticator_param);
	ZVAL_LONG(&_0, authenticator);
	RETURN_LONG(phpqt_qsslpresharedkeyauthenticator_new_q_ssl_pre_shared_key_authenticator(&_0));
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, swap)
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
	phpqt_qsslpresharedkeyauthenticator_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, identityHint)
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
	phpqt_qsslpresharedkeyauthenticator_identity_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, setIdentity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identity;
	zval *handle_param = NULL, *identity_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&identity);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(identity)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &identity_param);
	zephir_get_strval(&identity, identity_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslpresharedkeyauthenticator_set_identity(&_0, &identity);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, identity)
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
	phpqt_qsslpresharedkeyauthenticator_identity(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, maximumIdentityLength)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslpresharedkeyauthenticator_maximum_identity_length(&_0));
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, setPreSharedKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval preSharedKey;
	zval *handle_param = NULL, *preSharedKey_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&preSharedKey);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(preSharedKey)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &preSharedKey_param);
	zephir_get_strval(&preSharedKey, preSharedKey_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslpresharedkeyauthenticator_set_pre_shared_key(&_0, &preSharedKey);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, preSharedKey)
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
	phpqt_qsslpresharedkeyauthenticator_pre_shared_key(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslPreSharedKeyAuthenticator_QSslPreSharedKeyAuthenticator, maximumPreSharedKeyLength)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslpresharedkeyauthenticator_maximum_pre_shared_key_length(&_0));
}

