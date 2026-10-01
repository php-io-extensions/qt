
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
#include "src/network-qsslconfiguration.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QSslConfiguration_QSslConfiguration)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QSslConfiguration, QSslConfiguration, qt, network_qsslconfiguration_qsslconfiguration, qt_network_qsslconfiguration_qsslconfiguration_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, new_)
{

	RETURN_LONG(phpqt_qsslconfiguration_new());
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, newQSslConfiguration)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qsslconfiguration_new_q_ssl_configuration(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, swap)
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
	phpqt_qsslconfiguration_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslconfiguration_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, protocol)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_protocol(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setProtocol)
{
	zval *handle_param = NULL, *protocol_param = NULL, _0, _1;
	zend_long handle, protocol;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(protocol)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &protocol_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, protocol);
	phpqt_qsslconfiguration_set_protocol(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, peerVerifyMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_peer_verify_mode(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setPeerVerifyMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qsslconfiguration_set_peer_verify_mode(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, peerVerifyDepth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_peer_verify_depth(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setPeerVerifyDepth)
{
	zval *handle_param = NULL, *depth_param = NULL, _0, _1;
	zend_long handle, depth;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(depth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &depth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, depth);
	phpqt_qsslconfiguration_set_peer_verify_depth(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, localCertificateChain)
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
	phpqt_qsslconfiguration_local_certificate_chain(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setLocalCertificateChain)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval localChain;
	zval *handle_param = NULL, *localChain_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&localChain);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(localChain)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &localChain_param);
	zephir_get_arrval(&localChain, localChain_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_local_certificate_chain(&_0, &localChain);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, localCertificate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_local_certificate(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setLocalCertificate)
{
	zval *handle_param = NULL, *certificate_param = NULL, _0, _1;
	zend_long handle, certificate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(certificate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &certificate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, certificate);
	phpqt_qsslconfiguration_set_local_certificate(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, peerCertificate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_peer_certificate(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, peerCertificateChain)
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
	phpqt_qsslconfiguration_peer_certificate_chain(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, sessionCipher)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_session_cipher(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, sessionProtocol)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_session_protocol(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, privateKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_private_key(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setPrivateKey)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	phpqt_qsslconfiguration_set_private_key(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, ciphers)
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
	phpqt_qsslconfiguration_ciphers(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setCiphers)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval ciphers;
	zval *handle_param = NULL, *ciphers_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&ciphers);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(ciphers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &ciphers_param);
	zephir_get_arrval(&ciphers, ciphers_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_ciphers(&_0, &ciphers);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setCiphersQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval ciphers;
	zval *handle_param = NULL, *ciphers_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&ciphers);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(ciphers)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &ciphers_param);
	zephir_get_strval(&ciphers, ciphers_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_ciphers_q_string(&_0, &ciphers);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, supportedCiphers)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslconfiguration_supported_ciphers(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, caCertificates)
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
	phpqt_qsslconfiguration_ca_certificates(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setCaCertificates)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval certificates;
	zval *handle_param = NULL, *certificates_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&certificates);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(certificates)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &certificates_param);
	zephir_get_arrval(&certificates, certificates_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_ca_certificates(&_0, &certificates);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, addCaCertificates)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, *format = NULL, format_sub, *syntax = NULL, syntax_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&syntax_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&path);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_ZVAL_OR_NULL(syntax)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &path_param, &format, &syntax);
	zephir_get_strval(&path, path_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!syntax) {
		syntax = &syntax_sub;
		syntax = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslconfiguration_add_ca_certificates(&_0, &path, format, syntax);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, addCaCertificate)
{
	zval *handle_param = NULL, *certificate_param = NULL, _0, _1;
	zend_long handle, certificate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(certificate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &certificate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, certificate);
	phpqt_qsslconfiguration_add_ca_certificate(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, addCaCertificatesQListQSslCertificate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval certificates;
	zval *handle_param = NULL, *certificates_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&certificates);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(certificates)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &certificates_param);
	zephir_get_arrval(&certificates, certificates_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_add_ca_certificates_q_list_q_ssl_certificate(&_0, &certificates);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, systemCaCertificates)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslconfiguration_system_ca_certificates(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setSslOption)
{
	zend_bool on;
	zval *handle_param = NULL, *option_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &option_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qsslconfiguration_set_ssl_option(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, testSslOption)
{
	zval *handle_param = NULL, *option_param = NULL, _0, _1;
	zend_long handle, option, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	r = phpqt_qsslconfiguration_test_ssl_option(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, sessionTicket)
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
	phpqt_qsslconfiguration_session_ticket(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setSessionTicket)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval sessionTicket;
	zval *handle_param = NULL, *sessionTicket_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&sessionTicket);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(sessionTicket)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &sessionTicket_param);
	zephir_get_strval(&sessionTicket, sessionTicket_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_session_ticket(&_0, &sessionTicket);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, sessionTicketLifeTimeHint)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_session_ticket_life_time_hint(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, ephemeralServerKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_ephemeral_server_key(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, ellipticCurves)
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
	phpqt_qsslconfiguration_elliptic_curves(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setEllipticCurves)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval curves;
	zval *handle_param = NULL, *curves_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&curves);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(curves)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &curves_param);
	zephir_get_arrval(&curves, curves_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_elliptic_curves(&_0, &curves);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, supportedEllipticCurves)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsslconfiguration_supported_elliptic_curves(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, preSharedKeyIdentityHint)
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
	phpqt_qsslconfiguration_pre_shared_key_identity_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setPreSharedKeyIdentityHint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval hint;
	zval *handle_param = NULL, *hint_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&hint);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(hint)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &hint_param);
	zephir_get_strval(&hint, hint_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_pre_shared_key_identity_hint(&_0, &hint);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, diffieHellmanParameters)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_diffie_hellman_parameters(&_0));
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setDiffieHellmanParameters)
{
	zval *handle_param = NULL, *dhparams_param = NULL, _0, _1;
	zend_long handle, dhparams;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dhparams)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &dhparams_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dhparams);
	phpqt_qsslconfiguration_set_diffie_hellman_parameters(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, backendConfiguration)
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
	phpqt_qsslconfiguration_backend_configuration(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setBackendConfigurationOption)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *value = NULL, value_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_backend_configuration_option(&_0, &name, value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setBackendConfiguration)
{
	zval *handle_param = NULL, *backendConfiguration = NULL, backendConfiguration_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&backendConfiguration_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(backendConfiguration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &backendConfiguration);
	if (!backendConfiguration) {
		backendConfiguration = &backendConfiguration_sub;
		backendConfiguration = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_backend_configuration(&_0, backendConfiguration);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, defaultConfiguration)
{

	RETURN_LONG(phpqt_qsslconfiguration_default_configuration());
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setDefaultConfiguration)
{
	zval *configuration_param = NULL, _0;
	zend_long configuration;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &configuration_param);
	ZVAL_LONG(&_0, configuration);
	phpqt_qsslconfiguration_set_default_configuration(&_0);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, dtlsCookieVerificationEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslconfiguration_dtls_cookie_verification_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setDtlsCookieVerificationEnabled)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qsslconfiguration_set_dtls_cookie_verification_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, defaultDtlsConfiguration)
{

	RETURN_LONG(phpqt_qsslconfiguration_default_dtls_configuration());
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setDefaultDtlsConfiguration)
{
	zval *configuration_param = NULL, _0;
	zend_long configuration;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(configuration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &configuration_param);
	ZVAL_LONG(&_0, configuration);
	phpqt_qsslconfiguration_set_default_dtls_configuration(&_0);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, handshakeMustInterruptOnError)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslconfiguration_handshake_must_interrupt_on_error(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setHandshakeMustInterruptOnError)
{
	zend_bool interrupt;
	zval *handle_param = NULL, *interrupt_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(interrupt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &interrupt_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (interrupt ? 1 : 0));
	phpqt_qsslconfiguration_set_handshake_must_interrupt_on_error(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, missingCertificateIsFatal)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslconfiguration_missing_certificate_is_fatal(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setMissingCertificateIsFatal)
{
	zend_bool cannotRecover;
	zval *handle_param = NULL, *cannotRecover_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(cannotRecover)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cannotRecover_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (cannotRecover ? 1 : 0));
	phpqt_qsslconfiguration_set_missing_certificate_is_fatal(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setOcspStaplingEnabled)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qsslconfiguration_set_ocsp_stapling_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, ocspStaplingEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsslconfiguration_ocsp_stapling_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, setAllowedNextProtocols)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval protocols;
	zval *handle_param = NULL, *protocols_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&protocols);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(protocols)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &protocols_param);
	zephir_get_arrval(&protocols, protocols_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsslconfiguration_set_allowed_next_protocols(&_0, &protocols);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, allowedNextProtocols)
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
	phpqt_qsslconfiguration_allowed_next_protocols(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, nextNegotiatedProtocol)
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
	phpqt_qsslconfiguration_next_negotiated_protocol(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QSslConfiguration_QSslConfiguration, nextProtocolNegotiationStatus)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsslconfiguration_next_protocol_negotiation_status(&_0));
}

