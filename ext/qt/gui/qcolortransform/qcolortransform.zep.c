
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
#include "src/gui-qcolortransform.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QColorTransform_QColorTransform)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QColorTransform, QColorTransform, qt, gui_qcolortransform_qcolortransform, qt_gui_qcolortransform_qcolortransform_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, new_)
{

	RETURN_LONG(phpqt_qcolortransform_new());
}

PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, newQColorTransform)
{
	zval *colorTransform_param = NULL, _0;
	zend_long colorTransform;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(colorTransform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &colorTransform_param);
	ZVAL_LONG(&_0, colorTransform);
	RETURN_LONG(phpqt_qcolortransform_new_q_color_transform(&_0));
}

PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, swap)
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
	phpqt_qcolortransform_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, isIdentity)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcolortransform_is_identity(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, map)
{
	zval *handle_param = NULL, *argb_param = NULL, _0, _1;
	zend_long handle, argb;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(argb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &argb_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, argb);
	RETURN_LONG(phpqt_qcolortransform_map(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, mapQRgba64)
{
	zval *handle_param = NULL, *rgba64_param = NULL, _0, _1;
	zend_long handle, rgba64;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rgba64)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rgba64_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rgba64);
	RETURN_LONG(phpqt_qcolortransform_map_q_rgba64(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QColorTransform_QColorTransform, mapQColor)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	RETURN_LONG(phpqt_qcolortransform_map_q_color(&_0, &_1));
}

