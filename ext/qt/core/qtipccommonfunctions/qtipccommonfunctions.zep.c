
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
#include "src/core-qtipccommonfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTipccommonFunctions_QTipccommonFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTipccommonFunctions, QTipccommonFunctions, qt, core_qtipccommonfunctions_qtipccommonfunctions, qt_core_qtipccommonfunctions_qtipccommonfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, swap)
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
	phpqt_qtipccommonfunctions_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, comparesEqual)
{
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, rhs, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_LONG(&_1, rhs);
	r = phpqt_qtipccommonfunctions_compares_equal(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, qHash)
{
	zval *ipcKey_param = NULL, _0;
	zend_long ipcKey;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ipcKey)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ipcKey_param);
	ZVAL_LONG(&_0, ipcKey);
	RETURN_LONG(phpqt_qtipccommonfunctions_q_hash(&_0));
}

PHP_METHOD(Qt_Core_QTipccommonFunctions_QTipccommonFunctions, qHashQNativeIpcKeySizeT)
{
	zval *ipcKey_param = NULL, *seed_param = NULL, _0, _1;
	zend_long ipcKey, seed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ipcKey)
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ipcKey_param, &seed_param);
	ZVAL_LONG(&_0, ipcKey);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qtipccommonfunctions_q_hash_q_native_ipc_key_size_t(&_0, &_1));
}

