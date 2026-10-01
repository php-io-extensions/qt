
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
#include "src/network-qhttp1configuration.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Network_QHttp1Configuration_QHttp1Configuration)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QHttp1Configuration, QHttp1Configuration, qt, network_qhttp1configuration_qhttp1configuration, qt_network_qhttp1configuration_qhttp1configuration_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QHttp1Configuration_QHttp1Configuration, new_)
{

	RETURN_LONG(phpqt_qhttp1configuration_new());
}

PHP_METHOD(Qt_Network_QHttp1Configuration_QHttp1Configuration, newQHttp1Configuration)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qhttp1configuration_new_q_http1_configuration(&_0));
}

PHP_METHOD(Qt_Network_QHttp1Configuration_QHttp1Configuration, setNumberOfConnectionsPerHost)
{
	zval *handle_param = NULL, *amount_param = NULL, _0, _1;
	zend_long handle, amount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(amount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &amount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, amount);
	phpqt_qhttp1configuration_set_number_of_connections_per_host(&_0, &_1);
}

PHP_METHOD(Qt_Network_QHttp1Configuration_QHttp1Configuration, numberOfConnectionsPerHost)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qhttp1configuration_number_of_connections_per_host(&_0));
}

PHP_METHOD(Qt_Network_QHttp1Configuration_QHttp1Configuration, swap)
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
	phpqt_qhttp1configuration_swap(&_0, &_1);
}

