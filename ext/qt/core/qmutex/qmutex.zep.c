
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
#include "src/core-qmutex.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMutex_QMutex)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMutex, QMutex, qt, core_qmutex_qmutex, qt_core_qmutex_qmutex_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMutex_QMutex, new_)
{

	RETURN_LONG(phpqt_qmutex_new());
}

PHP_METHOD(Qt_Core_QMutex_QMutex, try_lock)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmutex_try_lock(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMutex_QMutex, tryLock)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmutex_try_lock_2(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMutex_QMutex, tryLockInt)
{
	zval *handle_param = NULL, *timeout_param = NULL, _0, _1;
	zend_long handle, timeout, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeout);
	r = phpqt_qmutex_try_lock_int(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMutex_QMutex, tryLockQDeadlineTimer)
{
	zval *handle_param = NULL, *timeout_param = NULL, _0, _1;
	zend_long handle, timeout, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeout);
	r = phpqt_qmutex_try_lock_q_deadline_timer(&_0, &_1);
	RETURN_BOOL(r == 1);
}

