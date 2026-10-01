
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
#include "src/widgets-qgraphicspixmapitem.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsPixmapItem, QGraphicsPixmapItem, qt, widgets_qgraphicspixmapitem_qgraphicspixmapitem, qt_widgets_qgraphicspixmapitem_qgraphicspixmapitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qgraphicspixmapitem_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, newQPixmapQGraphicsItem)
{
	zval *pixmap_param = NULL, *parent__param = NULL, _0, _1;
	zend_long pixmap, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &pixmap_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, pixmap);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qgraphicspixmapitem_new_q_pixmap_q_graphics_item(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, pixmap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicspixmapitem_pixmap(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setPixmap)
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
	phpqt_qgraphicspixmapitem_set_pixmap(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, transformationMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicspixmapitem_transformation_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setTransformationMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qgraphicspixmapitem_set_transformation_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, offset)
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
	phpqt_qgraphicspixmapitem_offset(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setOffset)
{
	double offsetX, offsetY;
	zval *handle_param = NULL, *offsetX_param = NULL, *offsetY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(offsetX)
		Z_PARAM_ZVAL(offsetY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &offsetX_param, &offsetY_param);
	offsetX = zephir_get_doubleval(offsetX_param);
	offsetY = zephir_get_doubleval(offsetY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, offsetX);
	ZVAL_DOUBLE(&_2, offsetY);
	phpqt_qgraphicspixmapitem_set_offset(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setOffsetQrealQreal)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qgraphicspixmapitem_set_offset_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, boundingRect)
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
	phpqt_qgraphicspixmapitem_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, shape)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicspixmapitem_shape(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, contains)
{
	double pointX, pointY;
	zval *handle_param = NULL, *pointX_param = NULL, *pointY_param = NULL, _0, _1, _2;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pointX)
		Z_PARAM_ZVAL(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pointX_param, &pointY_param);
	pointX = zephir_get_doubleval(pointX_param);
	pointY = zephir_get_doubleval(pointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pointX);
	ZVAL_DOUBLE(&_2, pointY);
	r = phpqt_qgraphicspixmapitem_contains(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, paint)
{
	zval *handle_param = NULL, *painter_param = NULL, *option_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, painter, option, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &painter_param, &option_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, widget);
	phpqt_qgraphicspixmapitem_paint(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, isObscuredBy)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	r = phpqt_qgraphicspixmapitem_is_obscured_by(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, opaqueArea)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicspixmapitem_opaque_area(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicspixmapitem_type(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, shapeMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicspixmapitem_shape_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setShapeMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qgraphicspixmapitem_set_shape_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, supportsExtension)
{
	zval *handle_param = NULL, *extension_param = NULL, _0, _1;
	zend_long handle, extension, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(extension)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &extension_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, extension);
	r = phpqt_qgraphicspixmapitem_supports_extension(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, setExtension)
{
	zval *handle_param = NULL, *extension_param = NULL, *variant = NULL, variant_sub, _0, _1;
	zend_long handle, extension;

	ZVAL_UNDEF(&variant_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(extension)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &extension_param, &variant);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, extension);
	phpqt_qgraphicspixmapitem_set_extension(&_0, &_1, variant);
}

PHP_METHOD(Qt_Widgets_QGraphicsPixmapItem_QGraphicsPixmapItem, extension)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *variant = NULL, variant_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&variant_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &variant);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicspixmapitem_extension(&result, &_0, variant);
	RETURN_CCTOR(&result);
}

