
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
#include "src/concurrent-qtconcurrenttaskstartparameters.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Concurrent_QtConcurrentTaskStartParameters_QtConcurrentTaskStartParameters)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Concurrent\\QtConcurrentTaskStartParameters, QtConcurrentTaskStartParameters, qt, concurrent_qtconcurrenttaskstartparameters_qtconcurrenttaskstartparameters, qt_concurrent_qtconcurrenttaskstartparameters_qtconcurrenttaskstartparameters_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Concurrent_QtConcurrentTaskStartParameters_QtConcurrentTaskStartParameters, threadPool)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrenttaskstartparameters_thread_pool(&_0));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentTaskStartParameters_QtConcurrentTaskStartParameters, setThreadPool)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qtconcurrenttaskstartparameters_set_thread_pool(&_0, &_1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentTaskStartParameters_QtConcurrentTaskStartParameters, priority)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtconcurrenttaskstartparameters_priority(&_0));
}

PHP_METHOD(Qt_Concurrent_QtConcurrentTaskStartParameters_QtConcurrentTaskStartParameters, setPriority)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qtconcurrenttaskstartparameters_set_priority(&_0, &_1);
}

