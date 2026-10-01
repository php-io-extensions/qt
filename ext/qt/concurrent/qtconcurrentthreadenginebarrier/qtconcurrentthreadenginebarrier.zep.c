
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
#include "src/concurrent-qtconcurrentthreadenginebarrier.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Concurrent_QtConcurrentThreadEngineBarrier_QtConcurrentThreadEngineBarrier)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Concurrent\\QtConcurrentThreadEngineBarrier, QtConcurrentThreadEngineBarrier, qt, concurrent_qtconcurrentthreadenginebarrier_qtconcurrentthreadenginebarrier, qt_concurrent_qtconcurrentthreadenginebarrier_qtconcurrentthreadenginebarrier_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBarrier_QtConcurrentThreadEngineBarrier, new_)
{

	RETURN_LONG(phpqt_qtconcurrentthreadenginebarrier_new());
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBarrier_QtConcurrentThreadEngineBarrier, acquire)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentthreadenginebarrier_acquire(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBarrier_QtConcurrentThreadEngineBarrier, release)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrentthreadenginebarrier_release(&_0));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBarrier_QtConcurrentThreadEngineBarrier, wait)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentthreadenginebarrier_wait(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBarrier_QtConcurrentThreadEngineBarrier, currentCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrentthreadenginebarrier_current_count(&_0));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentThreadEngineBarrier_QtConcurrentThreadEngineBarrier, releaseUnlessLast)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtconcurrentthreadenginebarrier_release_unless_last(&_0);
	RETURN_BOOL(r == 1);
}

