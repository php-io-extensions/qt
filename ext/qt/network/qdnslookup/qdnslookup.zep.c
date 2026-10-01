
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
#include "src/network-qdnslookup.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Network_QDnsLookup_QDnsLookup)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QDnsLookup, QDnsLookup, qt, network_qdnslookup_qdnslookup, qt_network_qdnslookup_qdnslookup_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, staticMetaObject)
{

	RETURN_LONG(phpqt_qdnslookup_static_meta_object());
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, tr)
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
	phpqt_qdnslookup_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, new_)
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
	RETURN_LONG(phpqt_qdnslookup_new(&_0));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *type_param = NULL, *name_param = NULL, *parent__param = NULL, _0, _1;
	zend_long type, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &type_param, &name_param, &parent__param);
	zephir_get_strval(&name, name_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, parent_);
	RETURN_MM_LONG(phpqt_qdnslookup_new_q_dns_lookup_type_q_string_q_object(&_0, &name, &_1));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQHostAddressQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *type_param = NULL, *name_param = NULL, *nameserver_param = NULL, *parent__param = NULL, _0, _1, _2;
	zend_long type, nameserver, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(nameserver)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &type_param, &name_param, &nameserver_param, &parent__param);
	zephir_get_strval(&name, name_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, nameserver);
	ZVAL_LONG(&_2, parent_);
	RETURN_MM_LONG(phpqt_qdnslookup_new_q_dns_lookup_type_q_string_q_host_address_q_object(&_0, &name, &_1, &_2));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQHostAddressQuint16QObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *type_param = NULL, *name_param = NULL, *nameserver_param = NULL, *port_param = NULL, *parent__param = NULL, _0, _1, _2, _3;
	zend_long type, nameserver, port, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(nameserver)
		Z_PARAM_LONG(port)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &type_param, &name_param, &nameserver_param, &port_param, &parent__param);
	zephir_get_strval(&name, name_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, nameserver);
	ZVAL_LONG(&_2, port);
	ZVAL_LONG(&_3, parent_);
	RETURN_MM_LONG(phpqt_qdnslookup_new_q_dns_lookup_type_q_string_q_host_address_quint16_q_object(&_0, &name, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, newQDnsLookupTypeQStringQDnsLookupProtocolQHostAddressQuint16QObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *type_param = NULL, *name_param = NULL, *protocol_param = NULL, *nameserver_param = NULL, *port_param = NULL, *parent__param = NULL, _0, _1, _2, _3, _4;
	zend_long type, protocol, nameserver, port, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(4, 6)
		Z_PARAM_LONG(type)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(protocol)
		Z_PARAM_LONG(nameserver)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(port)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 2, &type_param, &name_param, &protocol_param, &nameserver_param, &port_param, &parent__param);
	zephir_get_strval(&name, name_param);
	if (!port_param) {
		port = 0;
	} else {
		}
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, protocol);
	ZVAL_LONG(&_2, nameserver);
	ZVAL_LONG(&_3, port);
	ZVAL_LONG(&_4, parent_);
	RETURN_MM_LONG(phpqt_qdnslookup_new_q_dns_lookup_type_q_string_q_dns_lookup_protocol_q_host_address_quint16_q_object(&_0, &name, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, isAuthenticData)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdnslookup_is_authentic_data(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, error)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdnslookup_error(&_0));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, errorString)
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
	phpqt_qdnslookup_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, isFinished)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdnslookup_is_finished(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, name)
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
	phpqt_qdnslookup_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdnslookup_set_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdnslookup_type(&_0));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setType)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qdnslookup_set_type(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserver)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdnslookup_nameserver(&_0));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserver)
{
	zval *handle_param = NULL, *nameserver_param = NULL, _0, _1;
	zend_long handle, nameserver;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nameserver)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &nameserver_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nameserver);
	phpqt_qdnslookup_set_nameserver(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverPort)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdnslookup_nameserver_port(&_0));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserverPort)
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
	phpqt_qdnslookup_set_nameserver_port(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverProtocol)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdnslookup_nameserver_protocol(&_0));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserverProtocol)
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
	phpqt_qdnslookup_set_nameserver_protocol(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserverQDnsLookupProtocolQHostAddressQuint16)
{
	zval *handle_param = NULL, *protocol_param = NULL, *nameserver_param = NULL, *port_param = NULL, _0, _1, _2, _3;
	zend_long handle, protocol, nameserver, port;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(protocol)
		Z_PARAM_LONG(nameserver)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &protocol_param, &nameserver_param, &port_param);
	if (!port_param) {
		port = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, protocol);
	ZVAL_LONG(&_2, nameserver);
	ZVAL_LONG(&_3, port);
	phpqt_qdnslookup_set_nameserver_q_dns_lookup_protocol_q_host_address_quint16(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setNameserverQHostAddressQuint16)
{
	zval *handle_param = NULL, *nameserver_param = NULL, *port_param = NULL, _0, _1, _2;
	zend_long handle, nameserver, port;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nameserver)
		Z_PARAM_LONG(port)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &nameserver_param, &port_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nameserver);
	ZVAL_LONG(&_2, port);
	phpqt_qdnslookup_set_nameserver_q_host_address_quint16(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, canonicalNameRecords)
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
	phpqt_qdnslookup_canonical_name_records(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, hostAddressRecords)
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
	phpqt_qdnslookup_host_address_records(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, mailExchangeRecords)
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
	phpqt_qdnslookup_mail_exchange_records(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameServerRecords)
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
	phpqt_qdnslookup_name_server_records(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, pointerRecords)
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
	phpqt_qdnslookup_pointer_records(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, serviceRecords)
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
	phpqt_qdnslookup_service_records(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, textRecords)
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
	phpqt_qdnslookup_text_records(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, tlsAssociationRecords)
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
	phpqt_qdnslookup_tls_association_records(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, setSslConfiguration)
{
	zval *handle_param = NULL, *sslConfiguration_param = NULL, _0, _1;
	zend_long handle, sslConfiguration;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sslConfiguration)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &sslConfiguration_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sslConfiguration);
	phpqt_qdnslookup_set_ssl_configuration(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, sslConfiguration)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdnslookup_ssl_configuration(&_0));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, isProtocolSupported)
{
	zval *protocol_param = NULL, _0;
	zend_long protocol, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(protocol)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &protocol_param);
	ZVAL_LONG(&_0, protocol);
	r = phpqt_qdnslookup_is_protocol_supported(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, defaultPortForProtocol)
{
	zval *protocol_param = NULL, _0;
	zend_long protocol;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(protocol)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &protocol_param);
	ZVAL_LONG(&_0, protocol);
	RETURN_LONG(phpqt_qdnslookup_default_port_for_protocol(&_0));
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, abort)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdnslookup_abort(&_0);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, lookup)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdnslookup_lookup(&_0);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, finished)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdnslookup_finished(&_0);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameChanged)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdnslookup_name_changed(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, typeChanged)
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
	phpqt_qdnslookup_type_changed(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverChanged)
{
	zval *handle_param = NULL, *nameserver_param = NULL, _0, _1;
	zend_long handle, nameserver;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(nameserver)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &nameserver_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, nameserver);
	phpqt_qdnslookup_nameserver_changed(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverPortChanged)
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
	phpqt_qdnslookup_nameserver_port_changed(&_0, &_1);
}

PHP_METHOD(Qt_Network_QDnsLookup_QDnsLookup, nameserverProtocolChanged)
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
	phpqt_qdnslookup_nameserver_protocol_changed(&_0, &_1);
}

