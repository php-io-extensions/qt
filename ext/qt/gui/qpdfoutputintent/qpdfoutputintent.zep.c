
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
#include "src/gui-qpdfoutputintent.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPdfOutputIntent, QPdfOutputIntent, qt, gui_qpdfoutputintent_qpdfoutputintent, qt_gui_qpdfoutputintent_qpdfoutputintent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, new_)
{

	RETURN_LONG(phpqt_qpdfoutputintent_new());
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, newQPdfOutputIntent)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qpdfoutputintent_new_q_pdf_output_intent(&_0));
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, swap)
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
	phpqt_qpdfoutputintent_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, outputConditionIdentifier)
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
	phpqt_qpdfoutputintent_output_condition_identifier(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setOutputConditionIdentifier)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval identifier;
	zval *handle_param = NULL, *identifier_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&identifier);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(identifier)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &identifier_param);
	zephir_get_strval(&identifier, identifier_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpdfoutputintent_set_output_condition_identifier(&_0, &identifier);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, outputCondition)
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
	phpqt_qpdfoutputintent_output_condition(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setOutputCondition)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval condition;
	zval *handle_param = NULL, *condition_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&condition);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(condition)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &condition_param);
	zephir_get_strval(&condition, condition_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpdfoutputintent_set_output_condition(&_0, &condition);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, registryName)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpdfoutputintent_registry_name(&_0));
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setRegistryName)
{
	zval *handle_param = NULL, *name_param = NULL, _0, _1;
	zend_long handle, name;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(name)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, name);
	phpqt_qpdfoutputintent_set_registry_name(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, outputProfile)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpdfoutputintent_output_profile(&_0));
}

PHP_METHOD(Qt_Gui_QPdfOutputIntent_QPdfOutputIntent, setOutputProfile)
{
	zval *handle_param = NULL, *profile_param = NULL, _0, _1;
	zend_long handle, profile;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(profile)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &profile_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, profile);
	phpqt_qpdfoutputintent_set_output_profile(&_0, &_1);
}

