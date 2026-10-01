
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
#include "src/gui-qpainterpixmapfragment.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPainterPixmapFragment, QPainterPixmapFragment, qt, gui_qpainterpixmapfragment_qpainterpixmapfragment, qt_gui_qpainterpixmapfragment_qpainterpixmapfragment_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, x)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_x(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setX)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_x(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, y)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_y(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setY)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_y(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, sourceLeft)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_source_left(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setSourceLeft)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_source_left(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, sourceTop)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_source_top(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setSourceTop)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_source_top(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_width(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setWidth)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_height(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setHeight)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_height(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, scaleX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_scale_x(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setScaleX)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_scale_x(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, scaleY)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_scale_y(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setScaleY)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_scale_y(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, rotation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_rotation(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setRotation)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_rotation(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, opacity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpainterpixmapfragment_opacity(&_0));
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, setOpacity)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qpainterpixmapfragment_set_opacity(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPainterPixmapFragment_QPainterPixmapFragment, create)
{
	zval *posX_param = NULL, *posY_param = NULL, *sourceRectX_param = NULL, *sourceRectY_param = NULL, *sourceRectWidth_param = NULL, *sourceRectHeight_param = NULL, *scaleX_param = NULL, *scaleY_param = NULL, *rotation_param = NULL, *opacity_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	double posX, posY, sourceRectX, sourceRectY, sourceRectWidth, sourceRectHeight, scaleX, scaleY, rotation, opacity;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZEND_PARSE_PARAMETERS_START(6, 10)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_ZVAL(sourceRectX)
		Z_PARAM_ZVAL(sourceRectY)
		Z_PARAM_ZVAL(sourceRectWidth)
		Z_PARAM_ZVAL(sourceRectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(scaleX)
		Z_PARAM_ZVAL(scaleY)
		Z_PARAM_ZVAL(rotation)
		Z_PARAM_ZVAL(opacity)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 4, &posX_param, &posY_param, &sourceRectX_param, &sourceRectY_param, &sourceRectWidth_param, &sourceRectHeight_param, &scaleX_param, &scaleY_param, &rotation_param, &opacity_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	sourceRectX = zephir_get_doubleval(sourceRectX_param);
	sourceRectY = zephir_get_doubleval(sourceRectY_param);
	sourceRectWidth = zephir_get_doubleval(sourceRectWidth_param);
	sourceRectHeight = zephir_get_doubleval(sourceRectHeight_param);
	if (!scaleX_param) {
		scaleX = 1.0;
	} else {
		scaleX = zephir_get_doubleval(scaleX_param);
	}
	if (!scaleY_param) {
		scaleY = 1.0;
	} else {
		scaleY = zephir_get_doubleval(scaleY_param);
	}
	if (!rotation_param) {
		rotation = 0.0;
	} else {
		rotation = zephir_get_doubleval(rotation_param);
	}
	if (!opacity_param) {
		opacity = 1.0;
	} else {
		opacity = zephir_get_doubleval(opacity_param);
	}
	ZVAL_DOUBLE(&_0, posX);
	ZVAL_DOUBLE(&_1, posY);
	ZVAL_DOUBLE(&_2, sourceRectX);
	ZVAL_DOUBLE(&_3, sourceRectY);
	ZVAL_DOUBLE(&_4, sourceRectWidth);
	ZVAL_DOUBLE(&_5, sourceRectHeight);
	ZVAL_DOUBLE(&_6, scaleX);
	ZVAL_DOUBLE(&_7, scaleY);
	ZVAL_DOUBLE(&_8, rotation);
	ZVAL_DOUBLE(&_9, opacity);
	RETURN_LONG(phpqt_qpainterpixmapfragment_create(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9));
}

