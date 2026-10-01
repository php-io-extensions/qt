
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
#include "src/widgets-qgraphicslineitem.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsLineItem, QGraphicsLineItem, qt, widgets_qgraphicslineitem_qgraphicslineitem, qt_widgets_qgraphicslineitem_qgraphicslineitem_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, new_)
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
	RETURN_LONG(phpqt_qgraphicslineitem_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, newQLineFQGraphicsItem)
{
	zend_long parent_;
	zval *lineX1_param = NULL, *lineY1_param = NULL, *lineX2_param = NULL, *lineY2_param = NULL, *parent__param = NULL, _0, _1, _2, _3, _4;
	double lineX1, lineY1, lineX2, lineY2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_ZVAL(lineX1)
		Z_PARAM_ZVAL(lineY1)
		Z_PARAM_ZVAL(lineX2)
		Z_PARAM_ZVAL(lineY2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &lineX1_param, &lineY1_param, &lineX2_param, &lineY2_param, &parent__param);
	lineX1 = zephir_get_doubleval(lineX1_param);
	lineY1 = zephir_get_doubleval(lineY1_param);
	lineX2 = zephir_get_doubleval(lineX2_param);
	lineY2 = zephir_get_doubleval(lineY2_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_DOUBLE(&_0, lineX1);
	ZVAL_DOUBLE(&_1, lineY1);
	ZVAL_DOUBLE(&_2, lineX2);
	ZVAL_DOUBLE(&_3, lineY2);
	ZVAL_LONG(&_4, parent_);
	RETURN_LONG(phpqt_qgraphicslineitem_new_q_line_f_q_graphics_item(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, newQrealQrealQrealQrealQGraphicsItem)
{
	zend_long parent_;
	zval *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, *parent__param = NULL, _0, _1, _2, _3, _4;
	double x1, y1, x2, y2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &x1_param, &y1_param, &x2_param, &y2_param, &parent__param);
	x1 = zephir_get_doubleval(x1_param);
	y1 = zephir_get_doubleval(y1_param);
	x2 = zephir_get_doubleval(x2_param);
	y2 = zephir_get_doubleval(y2_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_DOUBLE(&_0, x1);
	ZVAL_DOUBLE(&_1, y1);
	ZVAL_DOUBLE(&_2, x2);
	ZVAL_DOUBLE(&_3, y2);
	ZVAL_LONG(&_4, parent_);
	RETURN_LONG(phpqt_qgraphicslineitem_new_qreal_qreal_qreal_qreal_q_graphics_item(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, pen)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicslineitem_pen(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setPen)
{
	zval *handle_param = NULL, *pen_param = NULL, _0, _1;
	zend_long handle, pen;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pen_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pen);
	phpqt_qgraphicslineitem_set_pen(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, line)
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
	phpqt_qgraphicslineitem_line(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setLine)
{
	double lineX1, lineY1, lineX2, lineY2;
	zval *handle_param = NULL, *lineX1_param = NULL, *lineY1_param = NULL, *lineX2_param = NULL, *lineY2_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(lineX1)
		Z_PARAM_ZVAL(lineY1)
		Z_PARAM_ZVAL(lineX2)
		Z_PARAM_ZVAL(lineY2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &lineX1_param, &lineY1_param, &lineX2_param, &lineY2_param);
	lineX1 = zephir_get_doubleval(lineX1_param);
	lineY1 = zephir_get_doubleval(lineY1_param);
	lineX2 = zephir_get_doubleval(lineX2_param);
	lineY2 = zephir_get_doubleval(lineY2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, lineX1);
	ZVAL_DOUBLE(&_2, lineY1);
	ZVAL_DOUBLE(&_3, lineX2);
	ZVAL_DOUBLE(&_4, lineY2);
	phpqt_qgraphicslineitem_set_line(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setLineQrealQrealQrealQreal)
{
	double x1, y1, x2, y2;
	zval *handle_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x1_param, &y1_param, &x2_param, &y2_param);
	x1 = zephir_get_doubleval(x1_param);
	y1 = zephir_get_doubleval(y1_param);
	x2 = zephir_get_doubleval(x2_param);
	y2 = zephir_get_doubleval(y2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x1);
	ZVAL_DOUBLE(&_2, y1);
	ZVAL_DOUBLE(&_3, x2);
	ZVAL_DOUBLE(&_4, y2);
	phpqt_qgraphicslineitem_set_line_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, boundingRect)
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
	phpqt_qgraphicslineitem_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, shape)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicslineitem_shape(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, contains)
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
	r = phpqt_qgraphicslineitem_contains(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, paint)
{
	zval *handle_param = NULL, *painter_param = NULL, *option_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, painter, option, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(option)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &painter_param, &option_param, &widget_param);
	if (!widget_param) {
		widget = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, widget);
	phpqt_qgraphicslineitem_paint(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, isObscuredBy)
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
	r = phpqt_qgraphicslineitem_is_obscured_by(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, opaqueArea)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicslineitem_opaque_area(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicslineitem_type(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, supportsExtension)
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
	r = phpqt_qgraphicslineitem_supports_extension(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, setExtension)
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
	phpqt_qgraphicslineitem_set_extension(&_0, &_1, variant);
}

PHP_METHOD(Qt_Widgets_QGraphicsLineItem_QGraphicsLineItem, extension)
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
	phpqt_qgraphicslineitem_extension(&result, &_0, variant);
	RETURN_CCTOR(&result);
}

