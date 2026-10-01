
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
#include "src/core-qbytearrayfunctions.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QBytearrayFunctions_QBytearrayFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QBytearrayFunctions, QBytearrayFunctions, qt, core_qbytearrayfunctions_qbytearrayfunctions, qt_core_qbytearrayfunctions_qbytearrayfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, qCompress)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long nbytes, compressionLevel;
	zval *data = NULL, data_sub, *nbytes_param = NULL, *compressionLevel_param = NULL, result, _0, _1;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(nbytes)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(compressionLevel)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &data, &nbytes_param, &compressionLevel_param);
	if (!compressionLevel_param) {
		compressionLevel = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, nbytes);
	ZVAL_LONG(&_1, compressionLevel);
	phpqt_qbytearrayfunctions_q_compress(&result, data, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, qUncompress)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long nbytes;
	zval *data = NULL, data_sub, *nbytes_param = NULL, result, _0;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(nbytes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &data, &nbytes_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, nbytes);
	phpqt_qbytearrayfunctions_q_uncompress(&result, data, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, qCompressQByteArrayInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long compressionLevel;
	zval *data_param = NULL, *compressionLevel_param = NULL, result, _0;
	zval data;

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(compressionLevel)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &data_param, &compressionLevel_param);
	zephir_get_strval(&data, data_param);
	if (!compressionLevel_param) {
		compressionLevel = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, compressionLevel);
	phpqt_qbytearrayfunctions_q_compress_q_byte_array_int(&result, &data, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, qUncompressQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL, result;
	zval data;

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &data_param);
	zephir_get_strval(&data, data_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayfunctions_q_uncompress_q_byte_array(&result, &data);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, swap)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayfunctions_swap(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, swapQByteArrayFromBase64ResultQByteArrayFromBase64Result)
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
	phpqt_qbytearrayfunctions_swap_q_byte_array_from_base64_result_q_byte_array_from_base64_result(&_0, &_1);
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, qHash)
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
	RETURN_LONG(phpqt_qbytearrayfunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, compareThreeWay)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long rhs;
	zval *lhs_param = NULL, *rhs_param = NULL, _0;
	zval lhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	ZVAL_LONG(&_0, rhs);
	RETURN_MM_LONG(phpqt_qbytearrayfunctions_compare_three_way(&lhs, &_0));
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, comparesEqual)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long rhs, r = 0;
	zval *lhs_param = NULL, *rhs_param = NULL, _0;
	zval lhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	ZVAL_LONG(&_0, rhs);
	r = phpqt_qbytearrayfunctions_compares_equal(&lhs, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, compareThreeWayQByteArrayQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lhs_param = NULL, *rhs_param = NULL;
	zval lhs, rhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&rhs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_STR(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	zephir_get_strval(&rhs, rhs_param);
	RETURN_MM_LONG(phpqt_qbytearrayfunctions_compare_three_way_q_byte_array_q_char(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, comparesEqualQByteArrayQChar)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lhs_param = NULL, *rhs_param = NULL;
	zval lhs, rhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&rhs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_STR(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	zephir_get_strval(&rhs, rhs_param);
	r = phpqt_qbytearrayfunctions_compares_equal_q_byte_array_q_char(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, compareThreeWayQByteArrayQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lhs_param = NULL, *rhs_param = NULL;
	zval lhs, rhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&rhs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_STR(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	zephir_get_strval(&rhs, rhs_param);
	RETURN_MM_LONG(phpqt_qbytearrayfunctions_compare_three_way_q_byte_array_q_byte_array_view(&lhs, &rhs));
}

PHP_METHOD(Qt_Core_QBytearrayFunctions_QBytearrayFunctions, comparesEqualQByteArrayQByteArrayView)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *lhs_param = NULL, *rhs_param = NULL;
	zval lhs, rhs;

	ZVAL_UNDEF(&lhs);
	ZVAL_UNDEF(&rhs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(lhs)
		Z_PARAM_STR(rhs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &lhs_param, &rhs_param);
	zephir_get_strval(&lhs, lhs_param);
	zephir_get_strval(&rhs, rhs_param);
	r = phpqt_qbytearrayfunctions_compares_equal_q_byte_array_q_byte_array_view(&lhs, &rhs);
	RETURN_MM_BOOL(r == 1);
}

