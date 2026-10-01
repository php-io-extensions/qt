
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
#include "src/network-qnetworkinterfacefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Network_QNetworkinterfaceFunctions_QNetworkinterfaceFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QNetworkinterfaceFunctions, QNetworkinterfaceFunctions, qt, network_qnetworkinterfacefunctions_qnetworkinterfacefunctions, qt_network_qnetworkinterfacefunctions_qnetworkinterfacefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QNetworkinterfaceFunctions_QNetworkinterfaceFunctions, swap)
{
	zval *value1_param = NULL, *value2_param = NULL, _0, _1;
	zend_long value1, value2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(value1)
		Z_PARAM_LONG(value2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &value1_param, &value2_param);
	ZVAL_LONG(&_0, value1);
	ZVAL_LONG(&_1, value2);
	phpqt_qnetworkinterfacefunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkinterfaceFunctions_QNetworkinterfaceFunctions, swapQNetworkInterfaceQNetworkInterface)
{
	zval *value1_param = NULL, *value2_param = NULL, _0, _1;
	zend_long value1, value2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(value1)
		Z_PARAM_LONG(value2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &value1_param, &value2_param);
	ZVAL_LONG(&_0, value1);
	ZVAL_LONG(&_1, value2);
	phpqt_qnetworkinterfacefunctions_swap_q_network_interface_q_network_interface(&_0, &_1);
}

PHP_METHOD(Qt_Network_QNetworkinterfaceFunctions_QNetworkinterfaceFunctions, qRegisterNormalizedMetaType_QNetworkAddressEntry)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qnetworkinterfacefunctions_q_register_normalized_meta_type__q_network_address_entry(&arg0));
}

PHP_METHOD(Qt_Network_QNetworkinterfaceFunctions_QNetworkinterfaceFunctions, qRegisterNormalizedMetaType_QNetworkInterface)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	RETURN_MM_LONG(phpqt_qnetworkinterfacefunctions_q_register_normalized_meta_type__q_network_interface(&arg0));
}

