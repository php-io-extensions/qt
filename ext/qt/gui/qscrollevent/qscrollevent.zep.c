
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
#include "src/gui-qscrollevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QScrollEvent_QScrollEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QScrollEvent, QScrollEvent, qt, gui_qscrollevent_qscrollevent, qt_gui_qscrollevent_qscrollevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qscrollevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscrollevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, newQPointFQPointFQScrollEventScrollState)
{
	zend_long scrollState;
	zval *contentPosX_param = NULL, *contentPosY_param = NULL, *overshootX_param = NULL, *overshootY_param = NULL, *scrollState_param = NULL, _0, _1, _2, _3, _4;
	double contentPosX, contentPosY, overshootX, overshootY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(contentPosX)
		Z_PARAM_ZVAL(contentPosY)
		Z_PARAM_ZVAL(overshootX)
		Z_PARAM_ZVAL(overshootY)
		Z_PARAM_LONG(scrollState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &contentPosX_param, &contentPosY_param, &overshootX_param, &overshootY_param, &scrollState_param);
	contentPosX = zephir_get_doubleval(contentPosX_param);
	contentPosY = zephir_get_doubleval(contentPosY_param);
	overshootX = zephir_get_doubleval(overshootX_param);
	overshootY = zephir_get_doubleval(overshootY_param);
	ZVAL_DOUBLE(&_0, contentPosX);
	ZVAL_DOUBLE(&_1, contentPosY);
	ZVAL_DOUBLE(&_2, overshootX);
	ZVAL_DOUBLE(&_3, overshootY);
	ZVAL_LONG(&_4, scrollState);
	RETURN_LONG(phpqt_qscrollevent_new_q_point_f_q_point_f_q_scroll_event_scroll_state(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, contentPos)
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
	phpqt_qscrollevent_content_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, overshootDistance)
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
	phpqt_qscrollevent_overshoot_distance(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QScrollEvent_QScrollEvent, scrollState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscrollevent_scroll_state(&_0));
}

