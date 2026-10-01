
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
#include "src/gui-qaccessiblefunctions.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleFunctions_QAccessibleFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleFunctions, QAccessibleFunctions, qt, gui_qaccessiblefunctions_qaccessiblefunctions, qt_gui_qaccessiblefunctions_qaccessiblefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleFunctions_QAccessibleFunctions, qAccessibleRoleString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *role_param = NULL, result, _0;
	zend_long role;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(role)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &role_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, role);
	phpqt_qaccessiblefunctions_q_accessible_role_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleFunctions_QAccessibleFunctions, qAccessibleEventString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *event_param = NULL, result, _0;
	zend_long event;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &event_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, event);
	phpqt_qaccessiblefunctions_q_accessible_event_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleFunctions_QAccessibleFunctions, qAccessibleLocalizedActionDescription)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *actionName_param = NULL, result;
	zval actionName;

	ZVAL_UNDEF(&actionName);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(actionName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &actionName_param);
	zephir_get_strval(&actionName, actionName_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qaccessiblefunctions_q_accessible_localized_action_description(&result, &actionName);
	RETURN_CCTOR(&result);
}

