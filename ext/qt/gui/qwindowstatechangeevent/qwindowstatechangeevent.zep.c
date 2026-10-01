
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
#include "src/gui-qwindowstatechangeevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QWindowStateChangeEvent_QWindowStateChangeEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QWindowStateChangeEvent, QWindowStateChangeEvent, qt, gui_qwindowstatechangeevent_qwindowstatechangeevent, qt_gui_qwindowstatechangeevent_qwindowstatechangeevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QWindowStateChangeEvent_QWindowStateChangeEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qwindowstatechangeevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QWindowStateChangeEvent_QWindowStateChangeEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qwindowstatechangeevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QWindowStateChangeEvent_QWindowStateChangeEvent, newQtWindowStatesBool)
{
	zend_bool isOverride;
	zval *oldState_param = NULL, *isOverride_param = NULL, _0, _1;
	zend_long oldState;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(oldState)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(isOverride)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &oldState_param, &isOverride_param);
	if (!isOverride_param) {
		isOverride = 0;
	} else {
		}
	ZVAL_LONG(&_0, oldState);
	ZVAL_BOOL(&_1, (isOverride ? 1 : 0));
	RETURN_LONG(phpqt_qwindowstatechangeevent_new_qt_window_states_bool(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QWindowStateChangeEvent_QWindowStateChangeEvent, oldState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qwindowstatechangeevent_old_state(&_0));
}

PHP_METHOD(Qt_Gui_QWindowStateChangeEvent_QWindowStateChangeEvent, isOverride)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qwindowstatechangeevent_is_override(&_0);
	RETURN_BOOL(r == 1);
}

