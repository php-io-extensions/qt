
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
#include "src/network-qsslerrorfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Network_QSslerrorFunctions_QSslerrorFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QSslerrorFunctions, QSslerrorFunctions, qt, network_qsslerrorfunctions_qsslerrorfunctions, qt_network_qsslerrorfunctions_qsslerrorfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, swap)
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
	phpqt_qsslerrorfunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, qHash)
{
	zval *key_param = NULL, *seed_param = NULL, _0, _1;
	zend_long key, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &key_param, &seed_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, key);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qsslerrorfunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, qRegisterNormalizedMetaType_QList_QSslError)
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
	RETURN_MM_LONG(phpqt_qsslerrorfunctions_q_register_normalized_meta_type__q_list__q_ssl_error(&arg0));
}

PHP_METHOD(Qt_Network_QSslerrorFunctions_QSslerrorFunctions, print_)
{
	zval *debug_param = NULL, *error_param = NULL, _0, _1;
	zend_long debug, error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(debug)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &debug_param, &error_param);
	ZVAL_LONG(&_0, debug);
	ZVAL_LONG(&_1, error);
	RETURN_LONG(phpqt_qsslerrorfunctions_print(&_0, &_1));
}

