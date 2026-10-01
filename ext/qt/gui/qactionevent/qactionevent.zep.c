
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
#include "src/gui-qactionevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QActionEvent_QActionEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QActionEvent, QActionEvent, qt, gui_qactionevent_qactionevent, qt_gui_qactionevent_qactionevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qactionevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qactionevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, newIntQActionQAction)
{
	zval *type_param = NULL, *action_param = NULL, *before_param = NULL, _0, _1, _2;
	zend_long type, action, before;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(action)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(before)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &type_param, &action_param, &before_param);
	if (!before_param) {
		before = 0;
	} else {
		}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, action);
	ZVAL_LONG(&_2, before);
	RETURN_LONG(phpqt_qactionevent_new_int_q_action_q_action(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, action)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qactionevent_action(&_0));
}

PHP_METHOD(Qt_Gui_QActionEvent_QActionEvent, before)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qactionevent_before(&_0));
}

