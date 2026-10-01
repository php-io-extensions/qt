
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
#include "src/gui-qpaintevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPaintEvent_QPaintEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPaintEvent, QPaintEvent, qt, gui_qpaintevent_qpaintevent, qt_gui_qpaintevent_qpaintevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qpaintevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, newQRegion)
{
	zval *paintRegion_param = NULL, _0;
	zend_long paintRegion;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(paintRegion)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &paintRegion_param);
	ZVAL_LONG(&_0, paintRegion);
	RETURN_LONG(phpqt_qpaintevent_new_q_region(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, newQRect)
{
	zval *paintRectX_param = NULL, *paintRectY_param = NULL, *paintRectWidth_param = NULL, *paintRectHeight_param = NULL, _0, _1, _2, _3;
	zend_long paintRectX, paintRectY, paintRectWidth, paintRectHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(paintRectX)
		Z_PARAM_LONG(paintRectY)
		Z_PARAM_LONG(paintRectWidth)
		Z_PARAM_LONG(paintRectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &paintRectX_param, &paintRectY_param, &paintRectWidth_param, &paintRectHeight_param);
	ZVAL_LONG(&_0, paintRectX);
	ZVAL_LONG(&_1, paintRectY);
	ZVAL_LONG(&_2, paintRectWidth);
	ZVAL_LONG(&_3, paintRectHeight);
	RETURN_LONG(phpqt_qpaintevent_new_q_rect(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, rect)
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
	phpqt_qpaintevent_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, region)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintevent_region(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, m_rect)
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
	phpqt_qpaintevent_m_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, setM_rect)
{
	zval *handle_param = NULL, *valueX_param = NULL, *valueY_param = NULL, *valueWidth_param = NULL, *valueHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, valueX, valueY, valueWidth, valueHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(valueX)
		Z_PARAM_LONG(valueY)
		Z_PARAM_LONG(valueWidth)
		Z_PARAM_LONG(valueHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &valueX_param, &valueY_param, &valueWidth_param, &valueHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, valueX);
	ZVAL_LONG(&_2, valueY);
	ZVAL_LONG(&_3, valueWidth);
	ZVAL_LONG(&_4, valueHeight);
	phpqt_qpaintevent_set_m_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, m_region)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintevent_m_region(&_0));
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, setM_region)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpaintevent_set_m_region(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, m_erased)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpaintevent_m_erased(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPaintEvent_QPaintEvent, setM_erased)
{
	zend_bool value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (value ? 1 : 0));
	phpqt_qpaintevent_set_m_erased(&_0, &_1);
}

