
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
#include "src/core-qcommandlineoption.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCommandLineOption_QCommandLineOption)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCommandLineOption, QCommandLineOption, qt, core_qcommandlineoption_qcommandlineoption, qt_core_qcommandlineoption_qcommandlineoption_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qcommandlineoption_new(&name));
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, newQStringList)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *names_param = NULL;
	zval names;

	ZVAL_UNDEF(&names);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY(names)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &names_param);
	zephir_get_arrval(&names, names_param);
	RETURN_MM_LONG(phpqt_qcommandlineoption_new_q_string_list(&names));
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, newQStringQStringQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL, *description_param = NULL, *valueName_param = NULL, *defaultValue_param = NULL;
	zval name, description, valueName, defaultValue;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&description);
	ZVAL_UNDEF(&valueName);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(name)
		Z_PARAM_STR(description)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(valueName)
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &name_param, &description_param, &valueName_param, &defaultValue_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&description, description_param);
	if (!valueName_param) {
		ZEPHIR_INIT_VAR(&valueName);
		ZVAL_STRING(&valueName, "");
	} else {
		zephir_get_strval(&valueName, valueName_param);
	}
	if (!defaultValue_param) {
		ZEPHIR_INIT_VAR(&defaultValue);
		ZVAL_STRING(&defaultValue, "");
	} else {
		zephir_get_strval(&defaultValue, defaultValue_param);
	}
	RETURN_MM_LONG(phpqt_qcommandlineoption_new_q_string_q_string_q_string_q_string(&name, &description, &valueName, &defaultValue));
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, newQStringListQStringQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval description, valueName, defaultValue;
	zval *names_param = NULL, *description_param = NULL, *valueName_param = NULL, *defaultValue_param = NULL;
	zval names;

	ZVAL_UNDEF(&names);
	ZVAL_UNDEF(&description);
	ZVAL_UNDEF(&valueName);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_ARRAY(names)
		Z_PARAM_STR(description)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(valueName)
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &names_param, &description_param, &valueName_param, &defaultValue_param);
	zephir_get_arrval(&names, names_param);
	zephir_get_strval(&description, description_param);
	if (!valueName_param) {
		ZEPHIR_INIT_VAR(&valueName);
		ZVAL_STRING(&valueName, "");
	} else {
		zephir_get_strval(&valueName, valueName_param);
	}
	if (!defaultValue_param) {
		ZEPHIR_INIT_VAR(&defaultValue);
		ZVAL_STRING(&defaultValue, "");
	} else {
		zephir_get_strval(&defaultValue, defaultValue_param);
	}
	RETURN_MM_LONG(phpqt_qcommandlineoption_new_q_string_list_q_string_q_string_q_string(&names, &description, &valueName, &defaultValue));
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, newQCommandLineOption)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qcommandlineoption_new_q_command_line_option(&_0));
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qcommandlineoption_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, names)
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
	phpqt_qcommandlineoption_names(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setValueName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcommandlineoption_set_value_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, valueName)
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
	phpqt_qcommandlineoption_value_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setDescription)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval description;
	zval *handle_param = NULL, *description_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&description);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &description_param);
	zephir_get_strval(&description, description_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcommandlineoption_set_description(&_0, &description);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, description)
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
	phpqt_qcommandlineoption_description(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setDefaultValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval defaultValue;
	zval *handle_param = NULL, *defaultValue_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &defaultValue_param);
	zephir_get_strval(&defaultValue, defaultValue_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcommandlineoption_set_default_value(&_0, &defaultValue);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setDefaultValues)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval defaultValues;
	zval *handle_param = NULL, *defaultValues_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&defaultValues);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(defaultValues)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &defaultValues_param);
	zephir_get_arrval(&defaultValues, defaultValues_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcommandlineoption_set_default_values(&_0, &defaultValues);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, defaultValues)
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
	phpqt_qcommandlineoption_default_values(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, flags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcommandlineoption_flags(&_0));
}

PHP_METHOD(Qt_Core_QCommandLineOption_QCommandLineOption, setFlags)
{
	zval *handle_param = NULL, *aflags_param = NULL, _0, _1;
	zend_long handle, aflags;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(aflags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &aflags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, aflags);
	phpqt_qcommandlineoption_set_flags(&_0, &_1);
}

