
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
#include "src/core-qrandomgenerator64.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QRandomGenerator64_QRandomGenerator64)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QRandomGenerator64, QRandomGenerator64, qt, core_qrandomgenerator64_qrandomgenerator64, qt_core_qrandomgenerator64_qrandomgenerator64_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, generate)
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
	phpqt_qrandomgenerator64_generate(&result, &_0, begin, end);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, generate2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrandomgenerator64_generate2(&_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, new_)
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
	RETURN_LONG(phpqt_qrandomgenerator64_new(&_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, newQuint32Qsizetype)
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
	RETURN_LONG(phpqt_qrandomgenerator64_new_quint32_qsizetype(seedBuffer, &_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, newQuint32Quint32)
{
	zval *begin = NULL, begin_sub, *end = NULL, end_sub;

	ZVAL_UNDEF(&begin_sub);
	ZVAL_UNDEF(&end_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(begin)
		Z_PARAM_ZVAL(end)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &begin, &end);
	RETURN_LONG(phpqt_qrandomgenerator64_new_quint32_quint32(begin, end));
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, newQRandomGenerator)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qrandomgenerator64_new_q_random_generator(&_0));
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, discard)
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
	phpqt_qrandomgenerator64_discard(&_0, &_1);
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, min)
{

	RETURN_LONG(phpqt_qrandomgenerator64_min());
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, max)
{

	RETURN_LONG(phpqt_qrandomgenerator64_max());
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, system)
{

	RETURN_LONG(phpqt_qrandomgenerator64_system());
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, global_)
{

	RETURN_LONG(phpqt_qrandomgenerator64_global());
}

PHP_METHOD(Qt_Core_QRandomGenerator64_QRandomGenerator64, securelySeeded)
{

	RETURN_LONG(phpqt_qrandomgenerator64_securely_seeded());
}

