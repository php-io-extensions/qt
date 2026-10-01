
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
#include "src/core-qmessagelogcontext.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMessageLogContext_QMessageLogContext)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMessageLogContext, QMessageLogContext, qt, core_qmessagelogcontext_qmessagelogcontext, qt_core_qmessagelogcontext_qmessagelogcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, CurrentVersion)
{

	RETURN_LONG(phpqt_qmessagelogcontext_current_version());
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, new_)
{

	RETURN_LONG(phpqt_qmessagelogcontext_new());
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, newCharIntCharChar)
{
	zend_long lineNumber;
	zval *fileName = NULL, fileName_sub, *lineNumber_param = NULL, *functionName = NULL, functionName_sub, *categoryName = NULL, categoryName_sub, _0;

	ZVAL_UNDEF(&fileName_sub);
	ZVAL_UNDEF(&functionName_sub);
	ZVAL_UNDEF(&categoryName_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(fileName)
		Z_PARAM_LONG(lineNumber)
		Z_PARAM_ZVAL(functionName)
		Z_PARAM_ZVAL(categoryName)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &fileName, &lineNumber_param, &functionName, &categoryName);
	ZVAL_LONG(&_0, lineNumber);
	RETURN_LONG(phpqt_qmessagelogcontext_new_char_int_char_char(fileName, &_0, functionName, categoryName));
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, version)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagelogcontext_version(&_0));
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, setVersion)
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
	phpqt_qmessagelogcontext_set_version(&_0, &_1);
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, line)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmessagelogcontext_line(&_0));
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, setLine)
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
	phpqt_qmessagelogcontext_set_line(&_0, &_1);
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, file)
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
	phpqt_qmessagelogcontext_file(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, function_)
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
	phpqt_qmessagelogcontext_function(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, category)
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
	phpqt_qmessagelogcontext_category(&result, &_0);
	RETURN_CCTOR(&result);
}

