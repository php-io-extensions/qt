
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
#include "src/gui-qchildwindowevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QChildWindowEvent_QChildWindowEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QChildWindowEvent, QChildWindowEvent, qt, gui_qchildwindowevent_qchildwindowevent, qt_gui_qchildwindowevent_qchildwindowevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QChildWindowEvent_QChildWindowEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qchildwindowevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QChildWindowEvent_QChildWindowEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qchildwindowevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QChildWindowEvent_QChildWindowEvent, newQEventTypeQWindow)
{
	zval *type_param = NULL, *childWindow_param = NULL, _0, _1;
	zend_long type, childWindow;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(childWindow)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &type_param, &childWindow_param);
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, childWindow);
	RETURN_LONG(phpqt_qchildwindowevent_new_q_event_type_q_window(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QChildWindowEvent_QChildWindowEvent, child)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qchildwindowevent_child(&_0));
}

