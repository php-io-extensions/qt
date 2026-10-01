
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
#include "src/network-qhostaddress.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QHostAddress_QHostAddress)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QHostAddress, QHostAddress, qt, network_qhostaddress_qhostaddress, qt_network_qhostaddress_qhostaddress_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, staticMetaObject)
{

	RETURN_LONG(phpqt_qhostaddress_static_meta_object());
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhostaddress_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, IPv4Protocol)
{

	RETURN_LONG(phpqt_qhostaddress_i_pv4_protocol());
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, IPv6Protocol)
{

	RETURN_LONG(phpqt_qhostaddress_i_pv6_protocol());
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, AnyIPProtocol)
{

	RETURN_LONG(phpqt_qhostaddress_any_i_p_protocol());
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, UnknownNetworkLayerProtocol)
{

	RETURN_LONG(phpqt_qhostaddress_unknown_network_layer_protocol());
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, new_)
{

	RETURN_LONG(phpqt_qhostaddress_new());
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQuint32)
{
	zval *ip4Addr_param = NULL, _0;
	zend_long ip4Addr;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ip4Addr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ip4Addr_param);
	ZVAL_LONG(&_0, ip4Addr);
	RETURN_LONG(phpqt_qhostaddress_new_quint32(&_0));
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQuint8)
{
	zval *ip6Addr = NULL, ip6Addr_sub;

	ZVAL_UNDEF(&ip6Addr_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(ip6Addr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ip6Addr);
	RETURN_LONG(phpqt_qhostaddress_new_quint8(ip6Addr));
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQIPV6ADDR)
{
	zval *ip6Addr_param = NULL, _0;
	zend_long ip6Addr;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ip6Addr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ip6Addr_param);
	ZVAL_LONG(&_0, ip6Addr);
	RETURN_LONG(phpqt_qhostaddress_new_q_i_p_v6_a_d_d_r(&_0));
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *address_param = NULL;
	zval address;

	ZVAL_UNDEF(&address);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(address)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &address_param);
	zephir_get_strval(&address, address_param);
	RETURN_MM_LONG(phpqt_qhostaddress_new_q_string(&address));
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQHostAddress)
{
	zval *copy_param = NULL, _0;
	zend_long copy;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(copy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &copy_param);
	ZVAL_LONG(&_0, copy);
	RETURN_LONG(phpqt_qhostaddress_new_q_host_address(&_0));
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, newQHostAddressSpecialAddress)
{
	zval *address_param = NULL, _0;
	zend_long address;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(address)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &address_param);
	ZVAL_LONG(&_0, address);
	RETURN_LONG(phpqt_qhostaddress_new_q_host_address_special_address(&_0));
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, swap)
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
	phpqt_qhostaddress_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddress)
{
	zval *handle_param = NULL, *ip4Addr_param = NULL, _0, _1;
	zend_long handle, ip4Addr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ip4Addr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ip4Addr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ip4Addr);
	phpqt_qhostaddress_set_address(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddressQuint8)
{
	zval *handle_param = NULL, *ip6Addr = NULL, ip6Addr_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&ip6Addr_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(ip6Addr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ip6Addr);
	ZVAL_LONG(&_0, handle);
	phpqt_qhostaddress_set_address_quint8(&_0, ip6Addr);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddressQIPV6ADDR)
{
	zval *handle_param = NULL, *ip6Addr_param = NULL, _0, _1;
	zend_long handle, ip6Addr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ip6Addr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ip6Addr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ip6Addr);
	phpqt_qhostaddress_set_address_q_i_p_v6_a_d_d_r(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddressQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval address;
	zval *handle_param = NULL, *address_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&address);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(address)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &address_param);
	zephir_get_strval(&address, address_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_set_address_q_string(&_0, &address);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setAddressQHostAddressSpecialAddress)
{
	zval *handle_param = NULL, *address_param = NULL, _0, _1;
	zend_long handle, address;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(address)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &address_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, address);
	phpqt_qhostaddress_set_address_q_host_address_special_address(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, protocol)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhostaddress_protocol(&_0));
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, toIPv4Address)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *ok = NULL, ok_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &ok);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qhostaddress_to_i_pv4_address(&result, &_0, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, toIPv6Address)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhostaddress_to_i_pv6_address(&_0));
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, toString)
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
	phpqt_qhostaddress_to_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, scopeId)
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
	phpqt_qhostaddress_scope_id(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, setScopeId)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval id;
	zval *handle_param = NULL, *id_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&id);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(id)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &id_param);
	zephir_get_strval(&id, id_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhostaddress_set_scope_id(&_0, &id);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isEqual)
{
	zval *handle_param = NULL, *address_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, address, r = 0;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(address)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &address_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, address);
	r = phpqt_qhostaddress_is_equal(&_0, &_1, mode);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhostaddress_clear(&_0);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isInSubnet)
{
	zval *handle_param = NULL, *subnet_param = NULL, *netmask_param = NULL, _0, _1, _2;
	zend_long handle, subnet, netmask, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(subnet)
		Z_PARAM_LONG(netmask)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &subnet_param, &netmask_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, subnet);
	ZVAL_LONG(&_2, netmask);
	r = phpqt_qhostaddress_is_in_subnet(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isInSubnetStdPairQHostAddressInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval subnet;
	zval *handle_param = NULL, *subnet_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&subnet);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(subnet)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &subnet_param);
	zephir_get_arrval(&subnet, subnet_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_in_subnet_std_pair_q_host_address_int(&_0, &subnet);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isLoopback)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_loopback(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isGlobal)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_global(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isLinkLocal)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_link_local(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isSiteLocal)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_site_local(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isUniqueLocalUnicast)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_unique_local_unicast(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isMulticast)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_multicast(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isBroadcast)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_broadcast(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, isPrivateUse)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qhostaddress_is_private_use(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Network_QHostAddress_QHostAddress, parseSubnet)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *subnet_param = NULL, result;
	zval subnet;

	ZVAL_UNDEF(&subnet);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(subnet)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &subnet_param);
	zephir_get_strval(&subnet, subnet_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qhostaddress_parse_subnet(&result, &subnet);
	RETURN_CCTOR(&result);
}

