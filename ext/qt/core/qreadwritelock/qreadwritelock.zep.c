
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
#include "src/core-qreadwritelock.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QReadWriteLock_QReadWriteLock)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QReadWriteLock, QReadWriteLock, qt, core_qreadwritelock_qreadwritelock, qt_core_qreadwritelock_qreadwritelock_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, new_)
{
	zval *recursionMode = NULL, recursionMode_sub, __$null;

	ZVAL_UNDEF(&recursionMode_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(recursionMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &recursionMode);
	if (!recursionMode) {
		recursionMode = &recursionMode_sub;
		recursionMode = &__$null;
	}
	RETURN_LONG(phpqt_qreadwritelock_new(recursionMode));
}

PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, lockForRead)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qreadwritelock_lock_for_read(&_0);
}

PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForRead)
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
	r = phpqt_qreadwritelock_try_lock_for_read(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForReadQDeadlineTimer)
{
	zval *handle_param = NULL, *timeout = NULL, timeout_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&timeout_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &timeout);
	if (!timeout) {
		timeout = &timeout_sub;
		timeout = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qreadwritelock_try_lock_for_read_q_deadline_timer(&_0, timeout);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, lockForWrite)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qreadwritelock_lock_for_write(&_0);
}

PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForWrite)
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
	r = phpqt_qreadwritelock_try_lock_for_write(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, tryLockForWriteQDeadlineTimer)
{
	zval *handle_param = NULL, *timeout = NULL, timeout_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&timeout_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &timeout);
	if (!timeout) {
		timeout = &timeout_sub;
		timeout = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qreadwritelock_try_lock_for_write_q_deadline_timer(&_0, timeout);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QReadWriteLock_QReadWriteLock, unlock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qreadwritelock_unlock(&_0);
}

