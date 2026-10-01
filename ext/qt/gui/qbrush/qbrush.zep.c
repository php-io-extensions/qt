
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
#include "src/gui-qbrush.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QBrush_QBrush)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QBrush, QBrush, qt, gui_qbrush_qbrush, qt_gui_qbrush_qbrush_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, new_)
{

	RETURN_LONG(phpqt_qbrush_new());
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, newQtBrushStyle)
{
	zval *bs_param = NULL, _0;
	zend_long bs;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(bs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &bs_param);
	ZVAL_LONG(&_0, bs);
	RETURN_LONG(phpqt_qbrush_new_qt_brush_style(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, newQColorQtBrushStyle)
{
	zval *color_param = NULL, *bs = NULL, bs_sub, __$null, _0;
	zend_long color;

	ZVAL_UNDEF(&bs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(color)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(bs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &color_param, &bs);
	if (!bs) {
		bs = &bs_sub;
		bs = &__$null;
	}
	ZVAL_LONG(&_0, color);
	RETURN_LONG(phpqt_qbrush_new_q_color_qt_brush_style(&_0, bs));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, newQtGlobalColorQtBrushStyle)
{
	zval *color_param = NULL, *bs = NULL, bs_sub, __$null, _0;
	zend_long color;

	ZVAL_UNDEF(&bs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(color)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(bs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &color_param, &bs);
	if (!bs) {
		bs = &bs_sub;
		bs = &__$null;
	}
	ZVAL_LONG(&_0, color);
	RETURN_LONG(phpqt_qbrush_new_qt_global_color_qt_brush_style(&_0, bs));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, newQColorQPixmap)
{
	zval *color_param = NULL, *pixmap_param = NULL, _0, _1;
	zend_long color, pixmap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(color)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &color_param, &pixmap_param);
	ZVAL_LONG(&_0, color);
	ZVAL_LONG(&_1, pixmap);
	RETURN_LONG(phpqt_qbrush_new_q_color_q_pixmap(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, newQtGlobalColorQPixmap)
{
	zval *color_param = NULL, *pixmap_param = NULL, _0, _1;
	zend_long color, pixmap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(color)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &color_param, &pixmap_param);
	ZVAL_LONG(&_0, color);
	ZVAL_LONG(&_1, pixmap);
	RETURN_LONG(phpqt_qbrush_new_qt_global_color_q_pixmap(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, newQPixmap)
{
	zval *pixmap_param = NULL, _0;
	zend_long pixmap;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pixmap_param);
	ZVAL_LONG(&_0, pixmap);
	RETURN_LONG(phpqt_qbrush_new_q_pixmap(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, newQImage)
{
	zval *image_param = NULL, _0;
	zend_long image;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &image_param);
	ZVAL_LONG(&_0, image);
	RETURN_LONG(phpqt_qbrush_new_q_image(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, newQBrush)
{
	zval *brush_param = NULL, _0;
	zend_long brush;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &brush_param);
	ZVAL_LONG(&_0, brush);
	RETURN_LONG(phpqt_qbrush_new_q_brush(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, newQGradient)
{
	zval *gradient_param = NULL, _0;
	zend_long gradient;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(gradient)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &gradient_param);
	ZVAL_LONG(&_0, gradient);
	RETURN_LONG(phpqt_qbrush_new_q_gradient(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, swap)
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
	phpqt_qbrush_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, style)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbrush_style(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, setStyle)
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
	phpqt_qbrush_set_style(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, transform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbrush_transform(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, setTransform)
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
	phpqt_qbrush_set_transform(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, texture)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbrush_texture(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, setTexture)
{
	zval *handle_param = NULL, *pixmap_param = NULL, _0, _1;
	zend_long handle, pixmap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pixmap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixmap);
	phpqt_qbrush_set_texture(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, textureImage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbrush_texture_image(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, setTextureImage)
{
	zval *handle_param = NULL, *image_param = NULL, _0, _1;
	zend_long handle, image;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(image)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &image_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, image);
	phpqt_qbrush_set_texture_image(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, color)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbrush_color(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, setColor)
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
	phpqt_qbrush_set_color(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, setColorQtGlobalColor)
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
	phpqt_qbrush_set_color_qt_global_color(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, gradient)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbrush_gradient(&_0));
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, isOpaque)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qbrush_is_opaque(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QBrush_QBrush, isDetached)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qbrush_is_detached(&_0);
	RETURN_BOOL(r == 1);
}

