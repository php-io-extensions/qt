
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
#include "src/widgets-qgraphicsanchorlayout.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsAnchorLayout, QGraphicsAnchorLayout, qt, widgets_qgraphicsanchorlayout_qgraphicsanchorlayout, qt_widgets_qgraphicsanchorlayout_qgraphicsanchorlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, new_)
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
	RETURN_LONG(phpqt_qgraphicsanchorlayout_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, addAnchor)
{
	zval *handle_param = NULL, *firstItem_param = NULL, *firstEdge_param = NULL, *secondItem_param = NULL, *secondEdge_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, firstItem, firstEdge, secondItem, secondEdge;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(firstItem)
		Z_PARAM_LONG(firstEdge)
		Z_PARAM_LONG(secondItem)
		Z_PARAM_LONG(secondEdge)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &firstItem_param, &firstEdge_param, &secondItem_param, &secondEdge_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, firstItem);
	ZVAL_LONG(&_2, firstEdge);
	ZVAL_LONG(&_3, secondItem);
	ZVAL_LONG(&_4, secondEdge);
	RETURN_LONG(phpqt_qgraphicsanchorlayout_add_anchor(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, anchor)
{
	zval *handle_param = NULL, *firstItem_param = NULL, *firstEdge_param = NULL, *secondItem_param = NULL, *secondEdge_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, firstItem, firstEdge, secondItem, secondEdge;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(firstItem)
		Z_PARAM_LONG(firstEdge)
		Z_PARAM_LONG(secondItem)
		Z_PARAM_LONG(secondEdge)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &firstItem_param, &firstEdge_param, &secondItem_param, &secondEdge_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, firstItem);
	ZVAL_LONG(&_2, firstEdge);
	ZVAL_LONG(&_3, secondItem);
	ZVAL_LONG(&_4, secondEdge);
	RETURN_LONG(phpqt_qgraphicsanchorlayout_anchor(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, addCornerAnchors)
{
	zval *handle_param = NULL, *firstItem_param = NULL, *firstCorner_param = NULL, *secondItem_param = NULL, *secondCorner_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, firstItem, firstCorner, secondItem, secondCorner;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(firstItem)
		Z_PARAM_LONG(firstCorner)
		Z_PARAM_LONG(secondItem)
		Z_PARAM_LONG(secondCorner)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &firstItem_param, &firstCorner_param, &secondItem_param, &secondCorner_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, firstItem);
	ZVAL_LONG(&_2, firstCorner);
	ZVAL_LONG(&_3, secondItem);
	ZVAL_LONG(&_4, secondCorner);
	phpqt_qgraphicsanchorlayout_add_corner_anchors(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, addAnchors)
{
	zval *handle_param = NULL, *firstItem_param = NULL, *secondItem_param = NULL, *orientations = NULL, orientations_sub, __$null, _0, _1, _2;
	zend_long handle, firstItem, secondItem;

	ZVAL_UNDEF(&orientations_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(firstItem)
		Z_PARAM_LONG(secondItem)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(orientations)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &firstItem_param, &secondItem_param, &orientations);
	if (!orientations) {
		orientations = &orientations_sub;
		orientations = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, firstItem);
	ZVAL_LONG(&_2, secondItem);
	phpqt_qgraphicsanchorlayout_add_anchors(&_0, &_1, &_2, orientations);
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setHorizontalSpacing)
{
	double spacing;
	zval *handle_param = NULL, *spacing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, spacing);
	phpqt_qgraphicsanchorlayout_set_horizontal_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setVerticalSpacing)
{
	double spacing;
	zval *handle_param = NULL, *spacing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, spacing);
	phpqt_qgraphicsanchorlayout_set_vertical_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setSpacing)
{
	double spacing;
	zval *handle_param = NULL, *spacing_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, spacing);
	phpqt_qgraphicsanchorlayout_set_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, horizontalSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsanchorlayout_horizontal_spacing(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, verticalSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsanchorlayout_vertical_spacing(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, removeAt)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qgraphicsanchorlayout_remove_at(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, setGeometry)
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
	phpqt_qgraphicsanchorlayout_set_geometry(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsanchorlayout_count(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, itemAt)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qgraphicsanchorlayout_item_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, invalidate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsanchorlayout_invalidate(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsAnchorLayout_QGraphicsAnchorLayout, sizeHint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *which_param = NULL, *constraintWidth = NULL, constraintWidth_sub, *constraintHeight = NULL, constraintHeight_sub, __$null, result, _0, _1;
	zend_long handle, which;

	ZVAL_UNDEF(&constraintWidth_sub);
	ZVAL_UNDEF(&constraintHeight_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(which)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(constraintWidth)
		Z_PARAM_ZVAL_OR_NULL(constraintHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &which_param, &constraintWidth, &constraintHeight);
	if (!constraintWidth) {
		constraintWidth = &constraintWidth_sub;
		constraintWidth = &__$null;
	}
	if (!constraintHeight) {
		constraintHeight = &constraintHeight_sub;
		constraintHeight = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, which);
	phpqt_qgraphicsanchorlayout_size_hint(&result, &_0, &_1, constraintWidth, constraintHeight);
	RETURN_CCTOR(&result);
}

