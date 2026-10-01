
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
#include "src/gui-qapplicationstatechangeevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QApplicationStateChangeEvent_QApplicationStateChangeEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QApplicationStateChangeEvent, QApplicationStateChangeEvent, qt, gui_qapplicationstatechangeevent_qapplicationstatechangeevent, qt_gui_qapplicationstatechangeevent_qapplicationstatechangeevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QApplicationStateChangeEvent_QApplicationStateChangeEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qapplicationstatechangeevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QApplicationStateChangeEvent_QApplicationStateChangeEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qapplicationstatechangeevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QApplicationStateChangeEvent_QApplicationStateChangeEvent, newQtApplicationState)
{
	zval *state_param = NULL, _0;
	zend_long state;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &state_param);
	ZVAL_LONG(&_0, state);
	RETURN_LONG(phpqt_qapplicationstatechangeevent_new_qt_application_state(&_0));
}

PHP_METHOD(Qt_Gui_QApplicationStateChangeEvent_QApplicationStateChangeEvent, applicationState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qapplicationstatechangeevent_application_state(&_0));
}

