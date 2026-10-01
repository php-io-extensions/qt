
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
#include "src/core-qbasicmutex.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QBasicMutex_QBasicMutex)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QBasicMutex, QBasicMutex, qt, core_qbasicmutex_qbasicmutex, qt_core_qbasicmutex_qbasicmutex_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, tryLock)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qbasicmutex_try_lock(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, new_)
{

	RETURN_LONG(phpqt_qbasicmutex_new());
}

PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, lock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qbasicmutex_lock(&_0);
}

PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, unlock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qbasicmutex_unlock(&_0);
}

PHP_METHOD(Qt_Core_QBasicMutex_QBasicMutex, try_lock)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qbasicmutex_try_lock_2(&_0);
	RETURN_BOOL(r == 1);
}

