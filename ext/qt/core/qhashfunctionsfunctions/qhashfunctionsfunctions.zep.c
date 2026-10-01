
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
#include "src/core-qhashfunctionsfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QHashfunctionsFunctions, QHashfunctionsFunctions, qt, core_qhashfunctionsfunctions_qhashfunctionsfunctions, qt_core_qhashfunctionsfunctions_qhashfunctionsfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHash)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashUcharSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_uchar_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashSignedCharSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_signed_char_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashUshortSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_ushort_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashShortIntSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_short_int_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashUintSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_uint_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashIntSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_int_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashUlongSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_ulong_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashLongIntSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_long_int_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQuint64SizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_quint64_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQint64SizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_qint64_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQuint128SizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_quint128_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQint128SizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_qint128_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashFloatSizeT)
{
	zend_long seed;
	zval *key_param = NULL, *seed_param = NULL, _0, _1;
	double key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &key_param, &seed_param);
	key = zephir_get_doubleval(key_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_DOUBLE(&_0, key);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_float_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashDoubleSizeT)
{
	zend_long seed;
	zval *key_param = NULL, *seed_param = NULL, _0, _1;
	double key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &key_param, &seed_param);
	key = zephir_get_doubleval(key_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_DOUBLE(&_0, key);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_double_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashLongDoubleSizeT)
{
	zend_long seed;
	zval *key_param = NULL, *seed_param = NULL, _0, _1;
	double key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &key_param, &seed_param);
	key = zephir_get_doubleval(key_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_DOUBLE(&_0, key);
	ZVAL_LONG(&_1, seed);
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_long_double_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashWcharTSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_wchar_t_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashChar16TSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_char16_t_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashChar32TSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_char32_t_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQCharSizeT)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long seed;
	zval *key_param = NULL, *seed_param = NULL, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &key_param, &seed_param);
	zephir_get_strval(&key, key_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, seed);
	RETURN_MM_LONG(phpqt_qhashfunctionsfunctions_q_hash_q_char_size_t(&key, &_0));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQByteArrayViewSizeT)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long seed;
	zval *key_param = NULL, *seed_param = NULL, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &key_param, &seed_param);
	zephir_get_strval(&key, key_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, seed);
	RETURN_MM_LONG(phpqt_qhashfunctionsfunctions_q_hash_q_byte_array_view_size_t(&key, &_0));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQByteArraySizeTQtDisambiguatedT)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long seed;
	zval *key_param = NULL, *seed_param = NULL, *arg2 = NULL, arg2_sub, __$null, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&arg2_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
		Z_PARAM_ZVAL_OR_NULL(arg2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &key_param, &seed_param, &arg2);
	zephir_get_strval(&key, key_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	if (!arg2) {
		arg2 = &arg2_sub;
		arg2 = &__$null;
	}
	ZVAL_LONG(&_0, seed);
	RETURN_MM_LONG(phpqt_qhashfunctionsfunctions_q_hash_q_byte_array_size_t_qt_disambiguated_t(&key, &_0, arg2));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQStringViewSizeT)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long seed;
	zval *key_param = NULL, *seed_param = NULL, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &key_param, &seed_param);
	zephir_get_strval(&key, key_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, seed);
	RETURN_MM_LONG(phpqt_qhashfunctionsfunctions_q_hash_q_string_view_size_t(&key, &_0));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQStringSizeT)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long seed;
	zval *key_param = NULL, *seed_param = NULL, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &key_param, &seed_param);
	zephir_get_strval(&key, key_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, seed);
	RETURN_MM_LONG(phpqt_qhashfunctionsfunctions_q_hash_q_string_size_t(&key, &_0));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQBitArraySizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_q_bit_array_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQLatin1StringViewSizeT)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long seed;
	zval *key_param = NULL, *seed_param = NULL, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seed)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &key_param, &seed_param);
	zephir_get_strval(&key, key_param);
	if (!seed_param) {
		seed = 0;
	} else {
		}
	ZVAL_LONG(&_0, seed);
	RETURN_MM_LONG(phpqt_qhashfunctionsfunctions_q_hash_q_latin1_string_view_size_t(&key, &_0));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qHashQKeyCombinationSizeT)
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
	RETURN_LONG(phpqt_qhashfunctionsfunctions_q_hash_q_key_combination_size_t(&_0, &_1));
}

PHP_METHOD(Qt_Core_QHashfunctionsFunctions_QHashfunctionsFunctions, qt_hash)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long chained;
	zval *key_param = NULL, *chained_param = NULL, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(chained)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &key_param, &chained_param);
	zephir_get_strval(&key, key_param);
	if (!chained_param) {
		chained = 0;
	} else {
		}
	ZVAL_LONG(&_0, chained);
	RETURN_MM_LONG(phpqt_qhashfunctionsfunctions_qt_hash(&key, &_0));
}

