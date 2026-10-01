
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
#include "src/network-qnetworkaddressentry.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkAddressEntry, QNetworkAddressEntry, qt, network_qnetworkaddressentry_qnetworkaddressentry, qt_network_qnetworkaddressentry_qnetworkaddressentry_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, new_)
{

	RETURN_LONG(phpqt_qnetworkaddressentry_new());
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, newQNetworkAddressEntry)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qnetworkaddressentry_new_q_network_address_entry(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, swap)
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
	phpqt_qnetworkaddressentry_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, dnsEligibility)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaddressentry_dns_eligibility(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, setDnsEligibility)
{
	zval *handle_param = NULL, *status_param = NULL, _0, _1;
	zend_long handle, status;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(status)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &status_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, status);
	phpqt_qnetworkaddressentry_set_dns_eligibility(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, ip)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaddressentry_ip(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, setIp)
{
	zval *handle_param = NULL, *newIp_param = NULL, _0, _1;
	zend_long handle, newIp;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newIp)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newIp_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newIp);
	phpqt_qnetworkaddressentry_set_ip(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, netmask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaddressentry_netmask(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, setNetmask)
{
	zval *handle_param = NULL, *newNetmask_param = NULL, _0, _1;
	zend_long handle, newNetmask;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newNetmask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newNetmask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newNetmask);
	phpqt_qnetworkaddressentry_set_netmask(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, prefixLength)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaddressentry_prefix_length(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, setPrefixLength)
{
	zval *handle_param = NULL, *length_param = NULL, _0, _1;
	zend_long handle, length;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, length);
	phpqt_qnetworkaddressentry_set_prefix_length(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, broadcast)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaddressentry_broadcast(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, setBroadcast)
{
	zval *handle_param = NULL, *newBroadcast_param = NULL, _0, _1;
	zend_long handle, newBroadcast;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newBroadcast)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newBroadcast_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newBroadcast);
	phpqt_qnetworkaddressentry_set_broadcast(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, isLifetimeKnown)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkaddressentry_is_lifetime_known(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, preferredLifetime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaddressentry_preferred_lifetime(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, validityLifetime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnetworkaddressentry_validity_lifetime(&_0));
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, setAddressLifetime)
{
	zval *handle_param = NULL, *preferred_param = NULL, *validity_param = NULL, _0, _1, _2;
	zend_long handle, preferred, validity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(preferred)
		Z_PARAM_LONG(validity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &preferred_param, &validity_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, preferred);
	ZVAL_LONG(&_2, validity);
	phpqt_qnetworkaddressentry_set_address_lifetime(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, clearAddressLifetime)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnetworkaddressentry_clear_address_lifetime(&_0);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, isPermanent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkaddressentry_is_permanent(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QNetworkAddressEntry_QNetworkAddressEntry, isTemporary)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnetworkaddressentry_is_temporary(&_0);
	RETURN_BOOL(r == 1);
}

