
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
#include "src/core-qsemaphore.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QSemaphore_QSemaphore)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QSemaphore, QSemaphore, qt, core_qsemaphore_qsemaphore, qt_core_qsemaphore_qsemaphore_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, new_)
{
	zval *n_param = NULL, _0;
	zend_long n;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &n_param);
	if (!n_param) {
		n = 0;
	} else {
		}
	ZVAL_LONG(&_0, n);
	RETURN_LONG(phpqt_qsemaphore_new(&_0));
}

PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, acquire)
{
	zval *handle_param = NULL, *n_param = NULL, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &n_param);
	if (!n_param) {
		n = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qsemaphore_acquire(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, tryAcquire)
{
	zval *handle_param = NULL, *n_param = NULL, _0, _1;
	zend_long handle, n, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &n_param);
	if (!n_param) {
		n = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	r = phpqt_qsemaphore_try_acquire(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, tryAcquireIntInt)
{
	zval *handle_param = NULL, *n_param = NULL, *timeout_param = NULL, _0, _1, _2;
	zend_long handle, n, timeout, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &timeout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	ZVAL_LONG(&_2, timeout);
	r = phpqt_qsemaphore_try_acquire_int_int(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, tryAcquireIntQDeadlineTimer)
{
	zval *handle_param = NULL, *n_param = NULL, *timeout_param = NULL, _0, _1, _2;
	zend_long handle, n, timeout, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &n_param, &timeout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	ZVAL_LONG(&_2, timeout);
	r = phpqt_qsemaphore_try_acquire_int_q_deadline_timer(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, release)
{
	zval *handle_param = NULL, *n_param = NULL, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &n_param);
	if (!n_param) {
		n = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qsemaphore_release(&_0, &_1);
}

PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, available)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsemaphore_available(&_0));
}

PHP_METHOD(Qt_Core_QSemaphore_QSemaphore, try_acquire)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsemaphore_try_acquire_2(&_0);
	RETURN_BOOL(r == 1);
}

