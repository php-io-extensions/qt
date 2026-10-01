
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
#include "src/gui-qstatustipevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QStatusTipEvent_QStatusTipEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QStatusTipEvent, QStatusTipEvent, qt, gui_qstatustipevent_qstatustipevent, qt_gui_qstatustipevent_qstatustipevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QStatusTipEvent_QStatusTipEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qstatustipevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QStatusTipEvent_QStatusTipEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstatustipevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QStatusTipEvent_QStatusTipEvent, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *tip_param = NULL;
	zval tip;

	ZVAL_UNDEF(&tip);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(tip)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &tip_param);
	zephir_get_strval(&tip, tip_param);
	RETURN_MM_LONG(phpqt_qstatustipevent_new_q_string(&tip));
}

PHP_METHOD(Qt_Gui_QStatusTipEvent_QStatusTipEvent, tip)
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
	phpqt_qstatustipevent_tip(&result, &_0);
	RETURN_CCTOR(&result);
}

