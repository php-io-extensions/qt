
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
#include "src/core-qcryptographichash.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCryptographicHash_QCryptographicHash)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCryptographicHash, QCryptographicHash, qt, core_qcryptographichash_qcryptographichash, qt_core_qcryptographichash_qcryptographichash_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, staticMetaObject)
{

	RETURN_LONG(phpqt_qcryptographichash_static_meta_object());
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcryptographichash_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, new_)
{
	zval *method_param = NULL, _0;
	zend_long method;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(method)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &method_param);
	ZVAL_LONG(&_0, method);
	RETURN_LONG(phpqt_qcryptographichash_new(&_0));
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, swap)
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
	phpqt_qcryptographichash_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, reset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcryptographichash_reset(&_0);
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, algorithm)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcryptographichash_algorithm(&_0));
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, addData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *data_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcryptographichash_add_data(&_0, &data);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, addDataQIODevice)
{
	zval *handle_param = NULL, *device_param = NULL, _0, _1;
	zend_long handle, device, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &device_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	r = phpqt_qcryptographichash_add_data_q_i_o_device(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, result)
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
	phpqt_qcryptographichash_result(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, resultView)
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
	phpqt_qcryptographichash_result_view(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, hash)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long method;
	zval *data_param = NULL, *method_param = NULL, result, _0;
	zval data;

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(data)
		Z_PARAM_LONG(method)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &data_param, &method_param);
	zephir_get_strval(&data, data_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, method);
	phpqt_qcryptographichash_hash(&result, &data, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, hashLength)
{
	zval *method_param = NULL, _0;
	zend_long method;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(method)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &method_param);
	ZVAL_LONG(&_0, method);
	RETURN_LONG(phpqt_qcryptographichash_hash_length(&_0));
}

PHP_METHOD(Qt_Core_QCryptographicHash_QCryptographicHash, supportsAlgorithm)
{
	zval *method_param = NULL, _0;
	zend_long method, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(method)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &method_param);
	ZVAL_LONG(&_0, method);
	r = phpqt_qcryptographichash_supports_algorithm(&_0);
	RETURN_BOOL(r == 1);
}

