
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
#include "src/network-qpassworddigestor.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Network_QPasswordDigestor_QPasswordDigestor)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Network\\QPasswordDigestor, QPasswordDigestor, qt, network_qpassworddigestor_qpassworddigestor, qt_network_qpassworddigestor_qpassworddigestor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Network_QPasswordDigestor_QPasswordDigestor, deriveKeyPbkdf1)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval password, salt;
	zval *algorithm_param = NULL, *password_param = NULL, *salt_param = NULL, *iterations_param = NULL, *dkLen_param = NULL, result, _0, _1, _2;
	zend_long algorithm, iterations, dkLen;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&password);
	ZVAL_UNDEF(&salt);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(algorithm)
		Z_PARAM_STR(password)
		Z_PARAM_STR(salt)
		Z_PARAM_LONG(iterations)
		Z_PARAM_LONG(dkLen)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &algorithm_param, &password_param, &salt_param, &iterations_param, &dkLen_param);
	zephir_get_strval(&password, password_param);
	zephir_get_strval(&salt, salt_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, algorithm);
	ZVAL_LONG(&_1, iterations);
	ZVAL_LONG(&_2, dkLen);
	phpqt_qpassworddigestor_derive_key_pbkdf1(&result, &_0, &password, &salt, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Network_QPasswordDigestor_QPasswordDigestor, deriveKeyPbkdf2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval password, salt;
	zval *algorithm_param = NULL, *password_param = NULL, *salt_param = NULL, *iterations_param = NULL, *dkLen_param = NULL, result, _0, _1, _2;
	zend_long algorithm, iterations, dkLen;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&password);
	ZVAL_UNDEF(&salt);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(algorithm)
		Z_PARAM_STR(password)
		Z_PARAM_STR(salt)
		Z_PARAM_LONG(iterations)
		Z_PARAM_LONG(dkLen)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &algorithm_param, &password_param, &salt_param, &iterations_param, &dkLen_param);
	zephir_get_strval(&password, password_param);
	zephir_get_strval(&salt, salt_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, algorithm);
	ZVAL_LONG(&_1, iterations);
	ZVAL_LONG(&_2, dkLen);
	phpqt_qpassworddigestor_derive_key_pbkdf2(&result, &_0, &password, &salt, &_1, &_2);
	RETURN_CCTOR(&result);
}

