
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
#include "src/gui-qpainterpathstroker.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPainterPathStroker_QPainterPathStroker)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPainterPathStroker, QPainterPathStroker, qt, gui_qpainterpathstroker_qpainterpathstroker, qt_gui_qpainterpathstroker_qpainterpathstroker_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, new_)
{

	RETURN_LONG(phpqt_qpainterpathstroker_new());
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, newQPen)
{
	zval *pen_param = NULL, _0;
	zend_long pen;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pen_param);
	ZVAL_LONG(&_0, pen);
	RETURN_LONG(phpqt_qpainterpathstroker_new_q_pen(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setWidth)
{
	double width;
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	phpqt_qpainterpathstroker_set_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpathstroker_width(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setCapStyle)
{
	zval *handle_param = NULL, *style_param = NULL, _0, _1;
	zend_long handle, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, style);
	phpqt_qpainterpathstroker_set_cap_style(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, capStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainterpathstroker_cap_style(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setJoinStyle)
{
	zval *handle_param = NULL, *style_param = NULL, _0, _1;
	zend_long handle, style;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(style)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &style_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, style);
	phpqt_qpainterpathstroker_set_join_style(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, joinStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpainterpathstroker_join_style(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setMiterLimit)
{
	double length;
	zval *handle_param = NULL, *length_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(length)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &length_param);
	length = zephir_get_doubleval(length_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, length);
	phpqt_qpainterpathstroker_set_miter_limit(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, miterLimit)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpathstroker_miter_limit(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setCurveThreshold)
{
	double threshold;
	zval *handle_param = NULL, *threshold_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(threshold)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &threshold_param);
	threshold = zephir_get_doubleval(threshold_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, threshold);
	phpqt_qpainterpathstroker_set_curve_threshold(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, curveThreshold)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpathstroker_curve_threshold(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setDashPattern)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qpainterpathstroker_set_dash_pattern(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setDashPatternQListDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dashPattern;
	zval *handle_param = NULL, *dashPattern_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&dashPattern);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(dashPattern)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dashPattern_param);
	zephir_get_arrval(&dashPattern, dashPattern_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpainterpathstroker_set_dash_pattern_q_list_double(&_0, &dashPattern);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, dashPattern)
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
	phpqt_qpainterpathstroker_dash_pattern(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, setDashOffset)
{
	double offset;
	zval *handle_param = NULL, *offset_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &offset_param);
	offset = zephir_get_doubleval(offset_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, offset);
	phpqt_qpainterpathstroker_set_dash_offset(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, dashOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpathstroker_dash_offset(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPathStroker_QPainterPathStroker, createStroke)
{
	zval *handle_param = NULL, *path_param = NULL, _0, _1;
	zend_long handle, path;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &path_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	RETURN_LONG(phpqt_qpainterpathstroker_create_stroke(&_0, &_1));
}

