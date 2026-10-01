
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
#include "src/widgets-qcolormap.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QColormap_QColormap)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QColormap, QColormap, qt, widgets_qcolormap_qcolormap, qt_widgets_qcolormap_qcolormap_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, initialize)
{

	phpqt_qcolormap_initialize();
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, cleanup)
{

	phpqt_qcolormap_cleanup();
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, instance)
{
	zval *screen_param = NULL, _0;
	zend_long screen;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(screen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &screen_param);
	if (!screen_param) {
		screen = -1;
	} else {
		}
	ZVAL_LONG(&_0, screen);
	RETURN_LONG(phpqt_qcolormap_instance(&_0));
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, new_)
{
	zval *colormap_param = NULL, _0;
	zend_long colormap;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(colormap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &colormap_param);
	ZVAL_LONG(&_0, colormap);
	RETURN_LONG(phpqt_qcolormap_new(&_0));
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, mode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolormap_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, depth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolormap_depth(&_0));
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, size)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolormap_size(&_0));
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, pixel)
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
	RETURN_LONG(phpqt_qcolormap_pixel(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, colorAt)
{
	zval *handle_param = NULL, *pixel_param = NULL, _0, _1;
	zend_long handle, pixel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pixel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixel);
	RETURN_LONG(phpqt_qcolormap_color_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QColormap_QColormap, colormap)
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
	phpqt_qcolormap_colormap(&result, &_0);
	RETURN_CCTOR(&result);
}

