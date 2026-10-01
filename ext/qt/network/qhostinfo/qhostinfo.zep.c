
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
#include "src/network-qhostinfo.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Network_QHostInfo_QHostInfo)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QHostInfo, QHostInfo, qt, network_qhostinfo_qhostinfo, qt_network_qhostinfo_qhostinfo_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, staticMetaObject)
{

	RETURN_LONG(phpqt_qhostinfo_static_meta_object());
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhostinfo_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, new_)
{
	zval *lookupId_param = NULL, _0;
	zend_long lookupId;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(lookupId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &lookupId_param);
	if (!lookupId_param) {
		lookupId = -1;
	} else {
		}
	ZVAL_LONG(&_0, lookupId);
	RETURN_LONG(phpqt_qhostinfo_new(&_0));
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, newQHostInfo)
{
	zval *d_param = NULL, _0;
	zend_long d;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &d_param);
	ZVAL_LONG(&_0, d);
	RETURN_LONG(phpqt_qhostinfo_new_q_host_info(&_0));
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, swap)
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
	phpqt_qhostinfo_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, hostName)
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
	phpqt_qhostinfo_host_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setHostName)
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
	phpqt_qhostinfo_set_host_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, addresses)
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
	phpqt_qhostinfo_addresses(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setAddresses)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval addresses;
	zval *handle_param = NULL, *addresses_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&addresses);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(addresses)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &addresses_param);
	zephir_get_arrval(&addresses, addresses_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhostinfo_set_addresses(&_0, &addresses);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, error)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhostinfo_error(&_0));
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setError)
{
	zval *handle_param = NULL, *error_param = NULL, _0, _1;
	zend_long handle, error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &error_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, error);
	phpqt_qhostinfo_set_error(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, errorString)
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
	phpqt_qhostinfo_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setErrorString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval errorString;
	zval *handle_param = NULL, *errorString_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&errorString);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(errorString)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &errorString_param);
	zephir_get_strval(&errorString, errorString_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qhostinfo_set_error_string(&_0, &errorString);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, setLookupId)
{
	zval *handle_param = NULL, *id_param = NULL, _0, _1;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	phpqt_qhostinfo_set_lookup_id(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, lookupId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhostinfo_lookup_id(&_0));
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, lookupHost)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long receiver;
	zval *name_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, _0;
	zval name;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &name_param, &receiver_param, &member);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, receiver);
	RETURN_MM_LONG(phpqt_qhostinfo_lookup_host(&name, &_0, member));
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, abortHostLookup)
{
	zval *lookupId_param = NULL, _0;
	zend_long lookupId;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(lookupId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &lookupId_param);
	ZVAL_LONG(&_0, lookupId);
	phpqt_qhostinfo_abort_host_lookup(&_0);
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, fromName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qhostinfo_from_name(&name));
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, localHostName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qhostinfo_local_host_name(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QHostInfo_QHostInfo, localDomainName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qhostinfo_local_domain_name(&result);
	RETURN_CCTOR(&result);
}

