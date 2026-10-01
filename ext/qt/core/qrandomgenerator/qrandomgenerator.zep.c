
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
#include "src/core-qrandomgenerator.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QRandomGenerator_QRandomGenerator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QRandomGenerator, QRandomGenerator, qt, core_qrandomgenerator_qrandomgenerator, qt_core_qrandomgenerator_qrandomgenerator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, new_)
{
	zval *seedValue_param = NULL, _0;
	zend_long seedValue;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(seedValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &seedValue_param);
	if (!seedValue_param) {
		seedValue = 1;
	} else {
		}
	ZVAL_LONG(&_0, seedValue);
	RETURN_LONG(phpqt_qrandomgenerator_new(&_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, newQuint32Qsizetype)
{
	zend_long len;
	zval *seedBuffer = NULL, seedBuffer_sub, *len_param = NULL, _0;

	ZVAL_UNDEF(&seedBuffer_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(seedBuffer)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &seedBuffer, &len_param);
	ZVAL_LONG(&_0, len);
	RETURN_LONG(phpqt_qrandomgenerator_new_quint32_qsizetype(seedBuffer, &_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, newQuint32Quint32)
{
	zval *begin = NULL, begin_sub, *end = NULL, end_sub;

	ZVAL_UNDEF(&begin_sub);
	ZVAL_UNDEF(&end_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(begin)
		Z_PARAM_ZVAL(end)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &begin, &end);
	RETURN_LONG(phpqt_qrandomgenerator_new_quint32_quint32(begin, end));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, newQRandomGenerator)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qrandomgenerator_new_q_random_generator(&_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, generate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrandomgenerator_generate(&_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, generate64)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrandomgenerator_generate64(&_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, generateDouble)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qrandomgenerator_generate_double(&_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, bounded)
{
	double highest;
	zval *handle_param = NULL, *highest_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &highest_param);
	highest = zephir_get_doubleval(highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, highest);
	RETURN_DOUBLE(phpqt_qrandomgenerator_bounded(&_0, &_1));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint32)
{
	zval *handle_param = NULL, *highest_param = NULL, _0, _1;
	zend_long handle, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_quint32(&_0, &_1));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint32Quint32)
{
	zval *handle_param = NULL, *lowest_param = NULL, *highest_param = NULL, _0, _1, _2;
	zend_long handle, lowest, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lowest)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lowest_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lowest);
	ZVAL_LONG(&_2, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_quint32_quint32(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedInt)
{
	zval *handle_param = NULL, *highest_param = NULL, _0, _1;
	zend_long handle, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_int(&_0, &_1));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedIntInt)
{
	zval *handle_param = NULL, *lowest_param = NULL, *highest_param = NULL, _0, _1, _2;
	zend_long handle, lowest, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lowest)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lowest_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lowest);
	ZVAL_LONG(&_2, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint64)
{
	zval *handle_param = NULL, *highest_param = NULL, _0, _1;
	zend_long handle, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_quint64(&_0, &_1));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint64Quint64)
{
	zval *handle_param = NULL, *lowest_param = NULL, *highest_param = NULL, _0, _1, _2;
	zend_long handle, lowest, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lowest)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lowest_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lowest);
	ZVAL_LONG(&_2, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_quint64_quint64(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQint64)
{
	zval *handle_param = NULL, *highest_param = NULL, _0, _1;
	zend_long handle, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_qint64(&_0, &_1));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQint64Qint64)
{
	zval *handle_param = NULL, *lowest_param = NULL, *highest_param = NULL, _0, _1, _2;
	zend_long handle, lowest, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lowest)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lowest_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lowest);
	ZVAL_LONG(&_2, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_qint64_qint64(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedIntQint64)
{
	zval *handle_param = NULL, *lowest_param = NULL, *highest_param = NULL, _0, _1, _2;
	zend_long handle, lowest, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lowest)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lowest_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lowest);
	ZVAL_LONG(&_2, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_int_qint64(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQint64Int)
{
	zval *handle_param = NULL, *lowest_param = NULL, *highest_param = NULL, _0, _1, _2;
	zend_long handle, lowest, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lowest)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lowest_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lowest);
	ZVAL_LONG(&_2, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_qint64_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedUnsignedIntQuint64)
{
	zval *handle_param = NULL, *lowest_param = NULL, *highest_param = NULL, _0, _1, _2;
	zend_long handle, lowest, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lowest)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lowest_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lowest);
	ZVAL_LONG(&_2, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_unsigned_int_quint64(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, boundedQuint64UnsignedInt)
{
	zval *handle_param = NULL, *lowest_param = NULL, *highest_param = NULL, _0, _1, _2;
	zend_long handle, lowest, highest;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lowest)
		Z_PARAM_LONG(highest)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lowest_param, &highest_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lowest);
	ZVAL_LONG(&_2, highest);
	RETURN_LONG(phpqt_qrandomgenerator_bounded_quint64_unsigned_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, generateQuint32Quint32)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *begin = NULL, begin_sub, *end = NULL, end_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&begin_sub);
	ZVAL_UNDEF(&end_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(begin)
		Z_PARAM_ZVAL(end)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &begin, &end);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qrandomgenerator_generate_quint32_quint32(&result, &_0, begin, end);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, seed)
{
	zval *handle_param = NULL, *s_param = NULL, _0, _1;
	zend_long handle, s;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &s_param);
	if (!s_param) {
		s = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, s);
	phpqt_qrandomgenerator_seed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, discard)
{
	zval *handle_param = NULL, *z_param = NULL, _0, _1;
	zend_long handle, z;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, z);
	phpqt_qrandomgenerator_discard(&_0, &_1);
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, min)
{

	RETURN_LONG(phpqt_qrandomgenerator_min());
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, max)
{

	RETURN_LONG(phpqt_qrandomgenerator_max());
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, system)
{

	RETURN_LONG(phpqt_qrandomgenerator_system());
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, global_)
{

	RETURN_LONG(phpqt_qrandomgenerator_global());
}

PHP_METHOD(Qt_Core_QRandomGenerator_QRandomGenerator, securelySeeded)
{

	RETURN_LONG(phpqt_qrandomgenerator_securely_seeded());
}

