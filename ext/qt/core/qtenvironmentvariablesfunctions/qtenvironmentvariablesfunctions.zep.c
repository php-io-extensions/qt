
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
#include "src/core-qtenvironmentvariablesfunctions.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTenvironmentvariablesFunctions_QTenvironmentvariablesFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTenvironmentvariablesFunctions, QTenvironmentvariablesFunctions, qt, core_qtenvironmentvariablesfunctions_qtenvironmentvariablesfunctions, qt_core_qtenvironmentvariablesfunctions_qtenvironmentvariablesfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTenvironmentvariablesFunctions_QTenvironmentvariablesFunctions, qgetenv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *varName = NULL, varName_sub, result;

	ZVAL_UNDEF(&varName_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(varName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &varName);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qtenvironmentvariablesfunctions_qgetenv(&result, varName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTenvironmentvariablesFunctions_QTenvironmentvariablesFunctions, qEnvironmentVariable)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *varName = NULL, varName_sub, result;

	ZVAL_UNDEF(&varName_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(varName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &varName);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qtenvironmentvariablesfunctions_q_environment_variable(&result, varName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTenvironmentvariablesFunctions_QTenvironmentvariablesFunctions, qEnvironmentVariableCharQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval defaultValue;
	zval *varName = NULL, varName_sub, *defaultValue_param = NULL, result;

	ZVAL_UNDEF(&varName_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(varName)
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &varName, &defaultValue_param);
	zephir_get_strval(&defaultValue, defaultValue_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qtenvironmentvariablesfunctions_q_environment_variable_char_q_string(&result, varName, &defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTenvironmentvariablesFunctions_QTenvironmentvariablesFunctions, qputenv)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *varName = NULL, varName_sub, *value_param = NULL;

	ZVAL_UNDEF(&varName_sub);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(varName)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &varName, &value_param);
	zephir_get_strval(&value, value_param);
	r = phpqt_qtenvironmentvariablesfunctions_qputenv(varName, &value);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTenvironmentvariablesFunctions_QTenvironmentvariablesFunctions, qunsetenv)
{
	zend_long r = 0;
	zval *varName = NULL, varName_sub;

	ZVAL_UNDEF(&varName_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(varName)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &varName);
	r = phpqt_qtenvironmentvariablesfunctions_qunsetenv(varName);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTenvironmentvariablesFunctions_QTenvironmentvariablesFunctions, qEnvironmentVariableIsEmpty)
{
	zend_long r = 0;
	zval *varName = NULL, varName_sub;

	ZVAL_UNDEF(&varName_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(varName)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &varName);
	r = phpqt_qtenvironmentvariablesfunctions_q_environment_variable_is_empty(varName);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTenvironmentvariablesFunctions_QTenvironmentvariablesFunctions, qEnvironmentVariableIsSet)
{
	zend_long r = 0;
	zval *varName = NULL, varName_sub;

	ZVAL_UNDEF(&varName_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(varName)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &varName);
	r = phpqt_qtenvironmentvariablesfunctions_q_environment_variable_is_set(varName);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTenvironmentvariablesFunctions_QTenvironmentvariablesFunctions, qEnvironmentVariableIntValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *varName = NULL, varName_sub, *ok = NULL, ok_sub, __$null, result;

	ZVAL_UNDEF(&varName_sub);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(varName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &varName, &ok);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qtenvironmentvariablesfunctions_q_environment_variable_int_value(&result, varName, ok);
	RETURN_CCTOR(&result);
}

