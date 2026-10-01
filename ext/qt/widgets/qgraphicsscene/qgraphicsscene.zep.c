
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
#include "src/widgets-qgraphicsscene.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsScene_QGraphicsScene)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsScene, QGraphicsScene, qt, widgets_qgraphicsscene_qgraphicsscene, qt_widgets_qgraphicsscene_qgraphicsscene_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, staticMetaObject)
{

	RETURN_LONG(phpqt_qgraphicsscene_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qgraphicsscene_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, new_)
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
	RETURN_LONG(phpqt_qgraphicsscene_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, newQRectFQObject)
{
	zend_long parent_;
	zval *sceneRectX_param = NULL, *sceneRectY_param = NULL, *sceneRectWidth_param = NULL, *sceneRectHeight_param = NULL, *parent__param = NULL, _0, _1, _2, _3, _4;
	double sceneRectX, sceneRectY, sceneRectWidth, sceneRectHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_ZVAL(sceneRectX)
		Z_PARAM_ZVAL(sceneRectY)
		Z_PARAM_ZVAL(sceneRectWidth)
		Z_PARAM_ZVAL(sceneRectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &sceneRectX_param, &sceneRectY_param, &sceneRectWidth_param, &sceneRectHeight_param, &parent__param);
	sceneRectX = zephir_get_doubleval(sceneRectX_param);
	sceneRectY = zephir_get_doubleval(sceneRectY_param);
	sceneRectWidth = zephir_get_doubleval(sceneRectWidth_param);
	sceneRectHeight = zephir_get_doubleval(sceneRectHeight_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_DOUBLE(&_0, sceneRectX);
	ZVAL_DOUBLE(&_1, sceneRectY);
	ZVAL_DOUBLE(&_2, sceneRectWidth);
	ZVAL_DOUBLE(&_3, sceneRectHeight);
	ZVAL_LONG(&_4, parent_);
	RETURN_LONG(phpqt_qgraphicsscene_new_q_rect_f_q_object(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, newQrealQrealQrealQrealQObject)
{
	zend_long parent_;
	zval *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *parent__param = NULL, _0, _1, _2, _3, _4;
	double x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &x_param, &y_param, &width_param, &height_param, &parent__param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, width);
	ZVAL_DOUBLE(&_3, height);
	ZVAL_LONG(&_4, parent_);
	RETURN_LONG(phpqt_qgraphicsscene_new_qreal_qreal_qreal_qreal_q_object(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, sceneRect)
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
	phpqt_qgraphicsscene_scene_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsscene_width(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsscene_height(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setSceneRect)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qgraphicsscene_set_scene_rect(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setSceneRectQrealQrealQrealQreal)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	phpqt_qgraphicsscene_set_scene_rect_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, render)
{
	zval *handle_param = NULL, *painter_param = NULL, *targetX = NULL, targetX_sub, *targetY = NULL, targetY_sub, *targetWidth = NULL, targetWidth_sub, *targetHeight = NULL, targetHeight_sub, *sourceX = NULL, sourceX_sub, *sourceY = NULL, sourceY_sub, *sourceWidth = NULL, sourceWidth_sub, *sourceHeight = NULL, sourceHeight_sub, *aspectRatioMode = NULL, aspectRatioMode_sub, __$null, _0, _1;
	zend_long handle, painter;

	ZVAL_UNDEF(&targetX_sub);
	ZVAL_UNDEF(&targetY_sub);
	ZVAL_UNDEF(&targetWidth_sub);
	ZVAL_UNDEF(&targetHeight_sub);
	ZVAL_UNDEF(&sourceX_sub);
	ZVAL_UNDEF(&sourceY_sub);
	ZVAL_UNDEF(&sourceWidth_sub);
	ZVAL_UNDEF(&sourceHeight_sub);
	ZVAL_UNDEF(&aspectRatioMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 11)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(targetX)
		Z_PARAM_ZVAL_OR_NULL(targetY)
		Z_PARAM_ZVAL_OR_NULL(targetWidth)
		Z_PARAM_ZVAL_OR_NULL(targetHeight)
		Z_PARAM_ZVAL_OR_NULL(sourceX)
		Z_PARAM_ZVAL_OR_NULL(sourceY)
		Z_PARAM_ZVAL_OR_NULL(sourceWidth)
		Z_PARAM_ZVAL_OR_NULL(sourceHeight)
		Z_PARAM_ZVAL_OR_NULL(aspectRatioMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 9, &handle_param, &painter_param, &targetX, &targetY, &targetWidth, &targetHeight, &sourceX, &sourceY, &sourceWidth, &sourceHeight, &aspectRatioMode);
	if (!targetX) {
		targetX = &targetX_sub;
		targetX = &__$null;
	}
	if (!targetY) {
		targetY = &targetY_sub;
		targetY = &__$null;
	}
	if (!targetWidth) {
		targetWidth = &targetWidth_sub;
		targetWidth = &__$null;
	}
	if (!targetHeight) {
		targetHeight = &targetHeight_sub;
		targetHeight = &__$null;
	}
	if (!sourceX) {
		sourceX = &sourceX_sub;
		sourceX = &__$null;
	}
	if (!sourceY) {
		sourceY = &sourceY_sub;
		sourceY = &__$null;
	}
	if (!sourceWidth) {
		sourceWidth = &sourceWidth_sub;
		sourceWidth = &__$null;
	}
	if (!sourceHeight) {
		sourceHeight = &sourceHeight_sub;
		sourceHeight = &__$null;
	}
	if (!aspectRatioMode) {
		aspectRatioMode = &aspectRatioMode_sub;
		aspectRatioMode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	phpqt_qgraphicsscene_render(&_0, &_1, targetX, targetY, targetWidth, targetHeight, sourceX, sourceY, sourceWidth, sourceHeight, aspectRatioMode);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, itemIndexMethod)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_item_index_method(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setItemIndexMethod)
{
	zval *handle_param = NULL, *method_param = NULL, _0, _1;
	zend_long handle, method;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(method)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &method_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, method);
	phpqt_qgraphicsscene_set_item_index_method(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, bspTreeDepth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_bsp_tree_depth(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setBspTreeDepth)
{
	zval *handle_param = NULL, *depth_param = NULL, _0, _1;
	zend_long handle, depth;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(depth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &depth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, depth);
	phpqt_qgraphicsscene_set_bsp_tree_depth(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, itemsBoundingRect)
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
	phpqt_qgraphicsscene_items_bounding_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, items)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *order = NULL, order_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&order_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(order)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &order);
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_items(&result, &_0, order);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, itemsQPointFQtItemSelectionModeQtSortOrderQTransform)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, *mode = NULL, mode_sub, *order = NULL, order_sub, *deviceTransform = NULL, deviceTransform_sub, __$null, result, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&order_sub);
	ZVAL_UNDEF(&deviceTransform_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(order)
		Z_PARAM_ZVAL_OR_NULL(deviceTransform)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 3, &handle_param, &posX_param, &posY_param, &mode, &order, &deviceTransform);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	if (!deviceTransform) {
		deviceTransform = &deviceTransform_sub;
		deviceTransform = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	phpqt_qgraphicsscene_items_q_point_f_qt_item_selection_mode_qt_sort_order_q_transform(&result, &_0, &_1, &_2, mode, order, deviceTransform);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, itemsQRectFQtItemSelectionModeQtSortOrderQTransform)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *mode = NULL, mode_sub, *order = NULL, order_sub, *deviceTransform = NULL, deviceTransform_sub, __$null, result, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&order_sub);
	ZVAL_UNDEF(&deviceTransform_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(order)
		Z_PARAM_ZVAL_OR_NULL(deviceTransform)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 3, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &mode, &order, &deviceTransform);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	if (!deviceTransform) {
		deviceTransform = &deviceTransform_sub;
		deviceTransform = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qgraphicsscene_items_q_rect_f_qt_item_selection_mode_qt_sort_order_q_transform(&result, &_0, &_1, &_2, &_3, &_4, mode, order, deviceTransform);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, itemsQPolygonFQtItemSelectionModeQtSortOrderQTransform)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *polygon_param = NULL, *mode = NULL, mode_sub, *order = NULL, order_sub, *deviceTransform = NULL, deviceTransform_sub, __$null, result, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&order_sub);
	ZVAL_UNDEF(&deviceTransform_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(order)
		Z_PARAM_ZVAL_OR_NULL(deviceTransform)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &handle_param, &polygon_param, &mode, &order, &deviceTransform);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	if (!deviceTransform) {
		deviceTransform = &deviceTransform_sub;
		deviceTransform = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	phpqt_qgraphicsscene_items_q_polygon_f_qt_item_selection_mode_qt_sort_order_q_transform(&result, &_0, &_1, mode, order, deviceTransform);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, itemsQPainterPathQtItemSelectionModeQtSortOrderQTransform)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *path_param = NULL, *mode = NULL, mode_sub, *order = NULL, order_sub, *deviceTransform = NULL, deviceTransform_sub, __$null, result, _0, _1;
	zend_long handle, path;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&order_sub);
	ZVAL_UNDEF(&deviceTransform_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(order)
		Z_PARAM_ZVAL_OR_NULL(deviceTransform)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &handle_param, &path_param, &mode, &order, &deviceTransform);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!order) {
		order = &order_sub;
		order = &__$null;
	}
	if (!deviceTransform) {
		deviceTransform = &deviceTransform_sub;
		deviceTransform = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	phpqt_qgraphicsscene_items_q_painter_path_qt_item_selection_mode_qt_sort_order_q_transform(&result, &_0, &_1, mode, order, deviceTransform);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, itemsQrealQrealQrealQrealQtItemSelectionModeQtSortOrderQTransform)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *mode_param = NULL, *order_param = NULL, *deviceTransform = NULL, deviceTransform_sub, __$null, result, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, mode, order;

	ZVAL_UNDEF(&deviceTransform_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_LONG(mode)
		Z_PARAM_LONG(order)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(deviceTransform)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 1, &handle_param, &x_param, &y_param, &w_param, &h_param, &mode_param, &order_param, &deviceTransform);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	if (!deviceTransform) {
		deviceTransform = &deviceTransform_sub;
		deviceTransform = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	ZVAL_LONG(&_5, mode);
	ZVAL_LONG(&_6, order);
	phpqt_qgraphicsscene_items_qreal_qreal_qreal_qreal_qt_item_selection_mode_qt_sort_order_q_transform(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, deviceTransform);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, collidingItems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *item_param = NULL, *mode = NULL, mode_sub, __$null, result, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &item_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qgraphicsscene_colliding_items(&result, &_0, &_1, mode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, itemAt)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, *deviceTransform_param = NULL, _0, _1, _2, _3;
	zend_long handle, deviceTransform;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
		Z_PARAM_LONG(deviceTransform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &posX_param, &posY_param, &deviceTransform_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	ZVAL_LONG(&_3, deviceTransform);
	RETURN_LONG(phpqt_qgraphicsscene_item_at(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, itemAtQrealQrealQTransform)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *deviceTransform_param = NULL, _0, _1, _2, _3;
	zend_long handle, deviceTransform;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_LONG(deviceTransform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &deviceTransform_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_LONG(&_3, deviceTransform);
	RETURN_LONG(phpqt_qgraphicsscene_item_at_qreal_qreal_q_transform(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, selectedItems)
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
	phpqt_qgraphicsscene_selected_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, selectionArea)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_selection_area(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setSelectionArea)
{
	zval *handle_param = NULL, *path_param = NULL, *deviceTransform_param = NULL, _0, _1, _2;
	zend_long handle, path, deviceTransform;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
		Z_PARAM_LONG(deviceTransform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &path_param, &deviceTransform_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	ZVAL_LONG(&_2, deviceTransform);
	phpqt_qgraphicsscene_set_selection_area(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setSelectionAreaQPainterPathQtItemSelectionOperationQtItemSelectionModeQTransform)
{
	zval *handle_param = NULL, *path_param = NULL, *selectionOperation = NULL, selectionOperation_sub, *mode = NULL, mode_sub, *deviceTransform = NULL, deviceTransform_sub, __$null, _0, _1;
	zend_long handle, path;

	ZVAL_UNDEF(&selectionOperation_sub);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&deviceTransform_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(selectionOperation)
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(deviceTransform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 3, &handle_param, &path_param, &selectionOperation, &mode, &deviceTransform);
	if (!selectionOperation) {
		selectionOperation = &selectionOperation_sub;
		selectionOperation = &__$null;
	}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!deviceTransform) {
		deviceTransform = &deviceTransform_sub;
		deviceTransform = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	phpqt_qgraphicsscene_set_selection_area_q_painter_path_qt_item_selection_operation_qt_item_selection_mode_q_transform(&_0, &_1, selectionOperation, mode, deviceTransform);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, createItemGroup)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *handle_param = NULL, *items_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &items_param);
	zephir_get_arrval(&items, items_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qgraphicsscene_create_item_group(&_0, &items));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, destroyItemGroup)
{
	zval *handle_param = NULL, *group_param = NULL, _0, _1;
	zend_long handle, group;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(group)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &group_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, group);
	phpqt_qgraphicsscene_destroy_item_group(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qgraphicsscene_add_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addEllipse)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *pen = NULL, pen_sub, *brush = NULL, brush_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&pen_sub);
	ZVAL_UNDEF(&brush_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pen)
		Z_PARAM_ZVAL_OR_NULL(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 2, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &pen, &brush);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	if (!pen) {
		pen = &pen_sub;
		pen = &__$null;
	}
	if (!brush) {
		brush = &brush_sub;
		brush = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	RETURN_LONG(phpqt_qgraphicsscene_add_ellipse(&_0, &_1, &_2, &_3, &_4, pen, brush));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addLine)
{
	double lineX1, lineY1, lineX2, lineY2;
	zval *handle_param = NULL, *lineX1_param = NULL, *lineY1_param = NULL, *lineX2_param = NULL, *lineY2_param = NULL, *pen = NULL, pen_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&pen_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(lineX1)
		Z_PARAM_ZVAL(lineY1)
		Z_PARAM_ZVAL(lineX2)
		Z_PARAM_ZVAL(lineY2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &lineX1_param, &lineY1_param, &lineX2_param, &lineY2_param, &pen);
	lineX1 = zephir_get_doubleval(lineX1_param);
	lineY1 = zephir_get_doubleval(lineY1_param);
	lineX2 = zephir_get_doubleval(lineX2_param);
	lineY2 = zephir_get_doubleval(lineY2_param);
	if (!pen) {
		pen = &pen_sub;
		pen = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, lineX1);
	ZVAL_DOUBLE(&_2, lineY1);
	ZVAL_DOUBLE(&_3, lineX2);
	ZVAL_DOUBLE(&_4, lineY2);
	RETURN_LONG(phpqt_qgraphicsscene_add_line(&_0, &_1, &_2, &_3, &_4, pen));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addPath)
{
	zval *handle_param = NULL, *path_param = NULL, *pen = NULL, pen_sub, *brush = NULL, brush_sub, __$null, _0, _1;
	zend_long handle, path;

	ZVAL_UNDEF(&pen_sub);
	ZVAL_UNDEF(&brush_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pen)
		Z_PARAM_ZVAL_OR_NULL(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &path_param, &pen, &brush);
	if (!pen) {
		pen = &pen_sub;
		pen = &__$null;
	}
	if (!brush) {
		brush = &brush_sub;
		brush = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, path);
	RETURN_LONG(phpqt_qgraphicsscene_add_path(&_0, &_1, pen, brush));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addPixmap)
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
	RETURN_LONG(phpqt_qgraphicsscene_add_pixmap(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addPolygon)
{
	zval *handle_param = NULL, *polygon_param = NULL, *pen = NULL, pen_sub, *brush = NULL, brush_sub, __$null, _0, _1;
	zend_long handle, polygon;

	ZVAL_UNDEF(&pen_sub);
	ZVAL_UNDEF(&brush_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(polygon)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pen)
		Z_PARAM_ZVAL_OR_NULL(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &polygon_param, &pen, &brush);
	if (!pen) {
		pen = &pen_sub;
		pen = &__$null;
	}
	if (!brush) {
		brush = &brush_sub;
		brush = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, polygon);
	RETURN_LONG(phpqt_qgraphicsscene_add_polygon(&_0, &_1, pen, brush));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addRect)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *pen = NULL, pen_sub, *brush = NULL, brush_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&pen_sub);
	ZVAL_UNDEF(&brush_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pen)
		Z_PARAM_ZVAL_OR_NULL(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 2, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &pen, &brush);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	if (!pen) {
		pen = &pen_sub;
		pen = &__$null;
	}
	if (!brush) {
		brush = &brush_sub;
		brush = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	RETURN_LONG(phpqt_qgraphicsscene_add_rect(&_0, &_1, &_2, &_3, &_4, pen, brush));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *font = NULL, font_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&font_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(font)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &text_param, &font);
	zephir_get_strval(&text, text_param);
	if (!font) {
		font = &font_sub;
		font = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qgraphicsscene_add_text(&_0, &text, font));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addSimpleText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *font = NULL, font_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&font_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(font)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &text_param, &font);
	zephir_get_strval(&text, text_param);
	if (!font) {
		font = &font_sub;
		font = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qgraphicsscene_add_simple_text(&_0, &text, font));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addWidget)
{
	zval *handle_param = NULL, *widget_param = NULL, *wFlags = NULL, wFlags_sub, __$null, _0, _1;
	zend_long handle, widget;

	ZVAL_UNDEF(&wFlags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(wFlags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &widget_param, &wFlags);
	if (!wFlags) {
		wFlags = &wFlags_sub;
		wFlags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	RETURN_LONG(phpqt_qgraphicsscene_add_widget(&_0, &_1, wFlags));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addEllipseQrealQrealQrealQrealQPenQBrush)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *pen = NULL, pen_sub, *brush = NULL, brush_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&pen_sub);
	ZVAL_UNDEF(&brush_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pen)
		Z_PARAM_ZVAL_OR_NULL(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 2, &handle_param, &x_param, &y_param, &w_param, &h_param, &pen, &brush);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	if (!pen) {
		pen = &pen_sub;
		pen = &__$null;
	}
	if (!brush) {
		brush = &brush_sub;
		brush = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	RETURN_LONG(phpqt_qgraphicsscene_add_ellipse_qreal_qreal_qreal_qreal_q_pen_q_brush(&_0, &_1, &_2, &_3, &_4, pen, brush));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addLineQrealQrealQrealQrealQPen)
{
	double x1, y1, x2, y2;
	zval *handle_param = NULL, *x1_param = NULL, *y1_param = NULL, *x2_param = NULL, *y2_param = NULL, *pen = NULL, pen_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&pen_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x1)
		Z_PARAM_ZVAL(y1)
		Z_PARAM_ZVAL(x2)
		Z_PARAM_ZVAL(y2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pen)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &x1_param, &y1_param, &x2_param, &y2_param, &pen);
	x1 = zephir_get_doubleval(x1_param);
	y1 = zephir_get_doubleval(y1_param);
	x2 = zephir_get_doubleval(x2_param);
	y2 = zephir_get_doubleval(y2_param);
	if (!pen) {
		pen = &pen_sub;
		pen = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x1);
	ZVAL_DOUBLE(&_2, y1);
	ZVAL_DOUBLE(&_3, x2);
	ZVAL_DOUBLE(&_4, y2);
	RETURN_LONG(phpqt_qgraphicsscene_add_line_qreal_qreal_qreal_qreal_q_pen(&_0, &_1, &_2, &_3, &_4, pen));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, addRectQrealQrealQrealQrealQPenQBrush)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *pen = NULL, pen_sub, *brush = NULL, brush_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&pen_sub);
	ZVAL_UNDEF(&brush_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pen)
		Z_PARAM_ZVAL_OR_NULL(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 2, &handle_param, &x_param, &y_param, &w_param, &h_param, &pen, &brush);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	if (!pen) {
		pen = &pen_sub;
		pen = &__$null;
	}
	if (!brush) {
		brush = &brush_sub;
		brush = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	RETURN_LONG(phpqt_qgraphicsscene_add_rect_qreal_qreal_qreal_qreal_q_pen_q_brush(&_0, &_1, &_2, &_3, &_4, pen, brush));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, removeItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qgraphicsscene_remove_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, focusItem)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_focus_item(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setFocusItem)
{
	zval *handle_param = NULL, *item_param = NULL, *focusReason = NULL, focusReason_sub, __$null, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&focusReason_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(focusReason)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &item_param, &focusReason);
	if (!focusReason) {
		focusReason = &focusReason_sub;
		focusReason = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qgraphicsscene_set_focus_item(&_0, &_1, focusReason);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, hasFocus)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicsscene_has_focus(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setFocus)
{
	zval *handle_param = NULL, *focusReason = NULL, focusReason_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&focusReason_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(focusReason)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &focusReason);
	if (!focusReason) {
		focusReason = &focusReason_sub;
		focusReason = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_set_focus(&_0, focusReason);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, clearFocus)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_clear_focus(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setStickyFocus)
{
	zend_bool enabled;
	zval *handle_param = NULL, *enabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enabled ? 1 : 0));
	phpqt_qgraphicsscene_set_sticky_focus(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, stickyFocus)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicsscene_sticky_focus(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, mouseGrabberItem)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_mouse_grabber_item(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, backgroundBrush)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_background_brush(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setBackgroundBrush)
{
	zval *handle_param = NULL, *brush_param = NULL, _0, _1;
	zend_long handle, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, brush);
	phpqt_qgraphicsscene_set_background_brush(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, foregroundBrush)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_foreground_brush(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setForegroundBrush)
{
	zval *handle_param = NULL, *brush_param = NULL, _0, _1;
	zend_long handle, brush;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(brush)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &brush_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, brush);
	phpqt_qgraphicsscene_set_foreground_brush(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, inputMethodQuery)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *query_param = NULL, result, _0, _1;
	zend_long handle, query;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(query)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &query_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, query);
	phpqt_qgraphicsscene_input_method_query(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, views)
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
	phpqt_qgraphicsscene_views(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, update)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	phpqt_qgraphicsscene_update(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, invalidate)
{
	double x, y, w, h;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, *layers = NULL, layers_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&layers_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(layers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &x_param, &y_param, &w_param, &h_param, &layers);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	if (!layers) {
		layers = &layers_sub;
		layers = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, w);
	ZVAL_DOUBLE(&_4, h);
	phpqt_qgraphicsscene_invalidate(&_0, &_1, &_2, &_3, &_4, layers);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, style)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_style(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setStyle)
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
	phpqt_qgraphicsscene_set_style(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, font)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_font(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setFont)
{
	zval *handle_param = NULL, *font_param = NULL, _0, _1;
	zend_long handle, font;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(font)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &font_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, font);
	phpqt_qgraphicsscene_set_font(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, palette)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_palette(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setPalette)
{
	zval *handle_param = NULL, *palette_param = NULL, _0, _1;
	zend_long handle, palette;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(palette)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &palette_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, palette);
	phpqt_qgraphicsscene_set_palette(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, isActive)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicsscene_is_active(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, activePanel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_active_panel(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setActivePanel)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qgraphicsscene_set_active_panel(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, activeWindow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscene_active_window(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setActiveWindow)
{
	zval *handle_param = NULL, *widget_param = NULL, _0, _1;
	zend_long handle, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	phpqt_qgraphicsscene_set_active_window(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, sendEvent)
{
	zval *handle_param = NULL, *item_param = NULL, *event_param = NULL, _0, _1, _2;
	zend_long handle, item, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &item_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, event);
	r = phpqt_qgraphicsscene_send_event(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, minimumRenderSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsscene_minimum_render_size(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setMinimumRenderSize)
{
	double minSize;
	zval *handle_param = NULL, *minSize_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(minSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &minSize_param);
	minSize = zephir_get_doubleval(minSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, minSize);
	phpqt_qgraphicsscene_set_minimum_render_size(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, focusOnTouch)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicsscene_focus_on_touch(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, setFocusOnTouch)
{
	zend_bool enabled;
	zval *handle_param = NULL, *enabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enabled ? 1 : 0));
	phpqt_qgraphicsscene_set_focus_on_touch(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, updateQRectF)
{
	zval *handle_param = NULL, *rectX = NULL, rectX_sub, *rectY = NULL, rectY_sub, *rectWidth = NULL, rectWidth_sub, *rectHeight = NULL, rectHeight_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&rectX_sub);
	ZVAL_UNDEF(&rectY_sub);
	ZVAL_UNDEF(&rectWidth_sub);
	ZVAL_UNDEF(&rectHeight_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(rectX)
		Z_PARAM_ZVAL_OR_NULL(rectY)
		Z_PARAM_ZVAL_OR_NULL(rectWidth)
		Z_PARAM_ZVAL_OR_NULL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 4, &handle_param, &rectX, &rectY, &rectWidth, &rectHeight);
	if (!rectX) {
		rectX = &rectX_sub;
		rectX = &__$null;
	}
	if (!rectY) {
		rectY = &rectY_sub;
		rectY = &__$null;
	}
	if (!rectWidth) {
		rectWidth = &rectWidth_sub;
		rectWidth = &__$null;
	}
	if (!rectHeight) {
		rectHeight = &rectHeight_sub;
		rectHeight = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_update_q_rect_f(&_0, rectX, rectY, rectWidth, rectHeight);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, invalidateQRectFQGraphicsSceneSceneLayers)
{
	zval *handle_param = NULL, *rectX = NULL, rectX_sub, *rectY = NULL, rectY_sub, *rectWidth = NULL, rectWidth_sub, *rectHeight = NULL, rectHeight_sub, *layers = NULL, layers_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&rectX_sub);
	ZVAL_UNDEF(&rectY_sub);
	ZVAL_UNDEF(&rectWidth_sub);
	ZVAL_UNDEF(&rectHeight_sub);
	ZVAL_UNDEF(&layers_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(rectX)
		Z_PARAM_ZVAL_OR_NULL(rectY)
		Z_PARAM_ZVAL_OR_NULL(rectWidth)
		Z_PARAM_ZVAL_OR_NULL(rectHeight)
		Z_PARAM_ZVAL_OR_NULL(layers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 5, &handle_param, &rectX, &rectY, &rectWidth, &rectHeight, &layers);
	if (!rectX) {
		rectX = &rectX_sub;
		rectX = &__$null;
	}
	if (!rectY) {
		rectY = &rectY_sub;
		rectY = &__$null;
	}
	if (!rectWidth) {
		rectWidth = &rectWidth_sub;
		rectWidth = &__$null;
	}
	if (!rectHeight) {
		rectHeight = &rectHeight_sub;
		rectHeight = &__$null;
	}
	if (!layers) {
		layers = &layers_sub;
		layers = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_invalidate_q_rect_f_q_graphics_scene_scene_layers(&_0, rectX, rectY, rectWidth, rectHeight, layers);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, advance)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_advance(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, clearSelection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_clear_selection(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_clear(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, event)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = phpqt_qgraphicsscene_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, eventFilter)
{
	zval *handle_param = NULL, *watched_param = NULL, *event_param = NULL, _0, _1, _2;
	zend_long handle, watched, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(watched)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &watched_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, watched);
	ZVAL_LONG(&_2, event);
	r = phpqt_qgraphicsscene_event_filter(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, contextMenuEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_context_menu_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, dragEnterEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_drag_enter_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, dragMoveEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_drag_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, dragLeaveEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_drag_leave_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, dropEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_drop_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, focusInEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_focus_in_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, focusOutEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_focus_out_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, helpEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_help_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, keyPressEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, keyReleaseEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_key_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, mousePressEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, mouseMoveEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_mouse_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, mouseReleaseEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_mouse_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, mouseDoubleClickEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_mouse_double_click_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, wheelEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_wheel_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, inputMethodEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qgraphicsscene_input_method_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, drawBackground)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, painter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_DOUBLE(&_2, rectX);
	ZVAL_DOUBLE(&_3, rectY);
	ZVAL_DOUBLE(&_4, rectWidth);
	ZVAL_DOUBLE(&_5, rectHeight);
	phpqt_qgraphicsscene_draw_background(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, drawForeground)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, painter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_DOUBLE(&_2, rectX);
	ZVAL_DOUBLE(&_3, rectY);
	ZVAL_DOUBLE(&_4, rectWidth);
	ZVAL_DOUBLE(&_5, rectHeight);
	phpqt_qgraphicsscene_draw_foreground(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, focusNextPrevChild)
{
	zend_bool next;
	zval *handle_param = NULL, *next_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(next)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &next_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (next ? 1 : 0));
	r = phpqt_qgraphicsscene_focus_next_prev_child(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, changed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval region;
	zval *handle_param = NULL, *region_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&region);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(region)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &region_param);
	zephir_get_arrval(&region, region_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_changed(&_0, &region);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, sceneRectChanged)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qgraphicsscene_scene_rect_changed(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, selectionChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsscene_selection_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsScene_QGraphicsScene, focusItemChanged)
{
	zval *handle_param = NULL, *newFocus_param = NULL, *oldFocus_param = NULL, *reason_param = NULL, _0, _1, _2, _3;
	zend_long handle, newFocus, oldFocus, reason;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newFocus)
		Z_PARAM_LONG(oldFocus)
		Z_PARAM_LONG(reason)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &newFocus_param, &oldFocus_param, &reason_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newFocus);
	ZVAL_LONG(&_2, oldFocus);
	ZVAL_LONG(&_3, reason);
	phpqt_qgraphicsscene_focus_item_changed(&_0, &_1, &_2, &_3);
}

