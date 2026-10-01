
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
#include "src/test-qtestqbenchmarkiterationcontroller.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Test_QTestQBenchmarkIterationController_QTestQBenchmarkIterationController)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Test\\QTestQBenchmarkIterationController, QTestQBenchmarkIterationController, qt, test_qtestqbenchmarkiterationcontroller_qtestqbenchmarkiterationcontroller, qt_test_qtestqbenchmarkiterationcontroller_qtestqbenchmarkiterationcontroller_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Test_QTestQBenchmarkIterationController_QTestQBenchmarkIterationController, new_)
{

	RETURN_LONG(phpqt_qtestqbenchmarkiterationcontroller_new());
}

PHP_METHOD(Qt_Test_QTestQBenchmarkIterationController_QTestQBenchmarkIterationController, newQTestQBenchmarkIterationControllerRunMode)
{
	zval *runMode_param = NULL, _0;
	zend_long runMode;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(runMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &runMode_param);
	ZVAL_LONG(&_0, runMode);
	RETURN_LONG(phpqt_qtestqbenchmarkiterationcontroller_new_q_test_q_benchmark_iteration_controller_run_mode(&_0));
}

PHP_METHOD(Qt_Test_QTestQBenchmarkIterationController_QTestQBenchmarkIterationController, isDone)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtestqbenchmarkiterationcontroller_is_done(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QTestQBenchmarkIterationController_QTestQBenchmarkIterationController, next)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtestqbenchmarkiterationcontroller_next(&_0);
}

PHP_METHOD(Qt_Test_QTestQBenchmarkIterationController_QTestQBenchmarkIterationController, i)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtestqbenchmarkiterationcontroller_i(&_0));
}

PHP_METHOD(Qt_Test_QTestQBenchmarkIterationController_QTestQBenchmarkIterationController, setI)
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
	phpqt_qtestqbenchmarkiterationcontroller_set_i(&_0, &_1);
}

