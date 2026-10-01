
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
#include "src/widgets-qgraphicslinearlayout.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsLinearLayout, QGraphicsLinearLayout, qt, widgets_qgraphicslinearlayout_qgraphicslinearlayout, qt_widgets_qgraphicslinearlayout_qgraphicslinearlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, new_)
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
	RETURN_LONG(phpqt_qgraphicslinearlayout_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, newQtOrientationQGraphicsLayoutItem)
{
	zval *orientation_param = NULL, *parent__param = NULL, _0, _1;
	zend_long orientation, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(orientation)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &orientation_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, orientation);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qgraphicslinearlayout_new_qt_orientation_q_graphics_layout_item(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	phpqt_qgraphicslinearlayout_set_orientation(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, orientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicslinearlayout_orientation(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, addItem)
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
	phpqt_qgraphicslinearlayout_add_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, addStretch)
{
	zval *handle_param = NULL, *stretch_param = NULL, _0, _1;
	zend_long handle, stretch;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stretch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &stretch_param);
	if (!stretch_param) {
		stretch = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, stretch);
	phpqt_qgraphicslinearlayout_add_stretch(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, insertItem)
{
	zval *handle_param = NULL, *index_param = NULL, *item_param = NULL, _0, _1, _2;
	zend_long handle, index, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, item);
	phpqt_qgraphicslinearlayout_insert_item(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, insertStretch)
{
	zval *handle_param = NULL, *index_param = NULL, *stretch_param = NULL, _0, _1, _2;
	zend_long handle, index, stretch;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stretch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &index_param, &stretch_param);
	if (!stretch_param) {
		stretch = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, stretch);
	phpqt_qgraphicslinearlayout_insert_stretch(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, removeItem)
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
	phpqt_qgraphicslinearlayout_remove_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, removeAt)
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
	phpqt_qgraphicslinearlayout_remove_at(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setSpacing)
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
	phpqt_qgraphicslinearlayout_set_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, spacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicslinearlayout_spacing(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setItemSpacing)
{
	double spacing;
	zval *handle_param = NULL, *index_param = NULL, *spacing_param = NULL, _0, _1, _2;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_DOUBLE(&_2, spacing);
	phpqt_qgraphicslinearlayout_set_item_spacing(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, itemSpacing)
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
	RETURN_DOUBLE(phpqt_qgraphicslinearlayout_item_spacing(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setStretchFactor)
{
	zval *handle_param = NULL, *item_param = NULL, *stretch_param = NULL, _0, _1, _2;
	zend_long handle, item, stretch;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(stretch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &item_param, &stretch_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, stretch);
	phpqt_qgraphicslinearlayout_set_stretch_factor(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, stretchFactor)
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
	RETURN_LONG(phpqt_qgraphicslinearlayout_stretch_factor(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setAlignment)
{
	zval *handle_param = NULL, *item_param = NULL, *alignment_param = NULL, _0, _1, _2;
	zend_long handle, item, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &item_param, &alignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, alignment);
	phpqt_qgraphicslinearlayout_set_alignment(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, alignment)
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
	RETURN_LONG(phpqt_qgraphicslinearlayout_alignment(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, setGeometry)
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
	phpqt_qgraphicslinearlayout_set_geometry(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicslinearlayout_count(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, itemAt)
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
	RETURN_LONG(phpqt_qgraphicslinearlayout_item_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, invalidate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicslinearlayout_invalidate(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, sizeHint)
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
	phpqt_qgraphicslinearlayout_size_hint(&result, &_0, &_1, constraintWidth, constraintHeight);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsLinearLayout_QGraphicsLinearLayout, dump)
{
	zval *handle_param = NULL, *indent_param = NULL, _0, _1;
	zend_long handle, indent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(indent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &indent_param);
	if (!indent_param) {
		indent = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indent);
	phpqt_qgraphicslinearlayout_dump(&_0, &_1);
}

