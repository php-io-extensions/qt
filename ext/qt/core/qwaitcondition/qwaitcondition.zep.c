
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
#include "src/core-qwaitcondition.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QWaitCondition_QWaitCondition)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QWaitCondition, QWaitCondition, qt, core_qwaitcondition_qwaitcondition, qt_core_qwaitcondition_qwaitcondition_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, new_)
{

	RETURN_LONG(phpqt_qwaitcondition_new());
}

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, wait)
{
	zval *handle_param = NULL, *lockedMutex_param = NULL, *deadline = NULL, deadline_sub, __$null, _0, _1;
	zend_long handle, lockedMutex, r = 0;

	ZVAL_UNDEF(&deadline_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lockedMutex)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(deadline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &lockedMutex_param, &deadline);
	if (!deadline) {
		deadline = &deadline_sub;
		deadline = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lockedMutex);
	r = phpqt_qwaitcondition_wait(&_0, &_1, deadline);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, waitQMutexLongUnsignedInt)
{
	zval *handle_param = NULL, *lockedMutex_param = NULL, *time_param = NULL, _0, _1, _2;
	zend_long handle, lockedMutex, time, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lockedMutex)
		Z_PARAM_LONG(time)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lockedMutex_param, &time_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lockedMutex);
	ZVAL_LONG(&_2, time);
	r = phpqt_qwaitcondition_wait_q_mutex_long_unsigned_int(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, waitQReadWriteLockQDeadlineTimer)
{
	zval *handle_param = NULL, *lockedReadWriteLock_param = NULL, *deadline = NULL, deadline_sub, __$null, _0, _1;
	zend_long handle, lockedReadWriteLock, r = 0;

	ZVAL_UNDEF(&deadline_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lockedReadWriteLock)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(deadline)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &lockedReadWriteLock_param, &deadline);
	if (!deadline) {
		deadline = &deadline_sub;
		deadline = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lockedReadWriteLock);
	r = phpqt_qwaitcondition_wait_q_read_write_lock_q_deadline_timer(&_0, &_1, deadline);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, waitQReadWriteLockLongUnsignedInt)
{
	zval *handle_param = NULL, *lockedReadWriteLock_param = NULL, *time_param = NULL, _0, _1, _2;
	zend_long handle, lockedReadWriteLock, time, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lockedReadWriteLock)
		Z_PARAM_LONG(time)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &lockedReadWriteLock_param, &time_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lockedReadWriteLock);
	ZVAL_LONG(&_2, time);
	r = phpqt_qwaitcondition_wait_q_read_write_lock_long_unsigned_int(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, wakeOne)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qwaitcondition_wake_one(&_0);
}

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, wakeAll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qwaitcondition_wake_all(&_0);
}

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, notify_one)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qwaitcondition_notify_one(&_0);
}

PHP_METHOD(Qt_Core_QWaitCondition_QWaitCondition, notify_all)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qwaitcondition_notify_all(&_0);
}

