
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
#include "src/widgets-qgraphicsgridlayout.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsGridLayout, QGraphicsGridLayout, qt, widgets_qgraphicsgridlayout_qgraphicsgridlayout, qt_widgets_qgraphicsgridlayout_qgraphicsgridlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, new_)
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
	RETURN_LONG(phpqt_qgraphicsgridlayout_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, addItem)
{
	zval *handle_param = NULL, *item_param = NULL, *row_param = NULL, *column_param = NULL, *rowSpan_param = NULL, *columnSpan_param = NULL, *alignment = NULL, alignment_sub, __$null, _0, _1, _2, _3, _4, _5;
	zend_long handle, item, row, column, rowSpan, columnSpan;

	ZVAL_UNDEF(&alignment_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(rowSpan)
		Z_PARAM_LONG(columnSpan)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 1, &handle_param, &item_param, &row_param, &column_param, &rowSpan_param, &columnSpan_param, &alignment);
	if (!alignment) {
		alignment = &alignment_sub;
		alignment = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, row);
	ZVAL_LONG(&_3, column);
	ZVAL_LONG(&_4, rowSpan);
	ZVAL_LONG(&_5, columnSpan);
	phpqt_qgraphicsgridlayout_add_item(&_0, &_1, &_2, &_3, &_4, &_5, alignment);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, addItemQGraphicsLayoutItemIntIntQtAlignment)
{
	zval *handle_param = NULL, *item_param = NULL, *row_param = NULL, *column_param = NULL, *alignment = NULL, alignment_sub, __$null, _0, _1, _2, _3;
	zend_long handle, item, row, column;

	ZVAL_UNDEF(&alignment_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &item_param, &row_param, &column_param, &alignment);
	if (!alignment) {
		alignment = &alignment_sub;
		alignment = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, row);
	ZVAL_LONG(&_3, column);
	phpqt_qgraphicsgridlayout_add_item_q_graphics_layout_item_int_int_qt_alignment(&_0, &_1, &_2, &_3, alignment);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setHorizontalSpacing)
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
	phpqt_qgraphicsgridlayout_set_horizontal_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, horizontalSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_horizontal_spacing(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setVerticalSpacing)
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
	phpqt_qgraphicsgridlayout_set_vertical_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, verticalSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_vertical_spacing(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setSpacing)
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
	phpqt_qgraphicsgridlayout_set_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowSpacing)
{
	double spacing;
	zval *handle_param = NULL, *row_param = NULL, *spacing_param = NULL, _0, _1, _2;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_DOUBLE(&_2, spacing);
	phpqt_qgraphicsgridlayout_set_row_spacing(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowSpacing)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_row_spacing(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnSpacing)
{
	double spacing;
	zval *handle_param = NULL, *column_param = NULL, *spacing_param = NULL, _0, _1, _2;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &spacing_param);
	spacing = zephir_get_doubleval(spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_DOUBLE(&_2, spacing);
	phpqt_qgraphicsgridlayout_set_column_spacing(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnSpacing)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_column_spacing(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowStretchFactor)
{
	zval *handle_param = NULL, *row_param = NULL, *stretch_param = NULL, _0, _1, _2;
	zend_long handle, row, stretch;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(stretch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &stretch_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, stretch);
	phpqt_qgraphicsgridlayout_set_row_stretch_factor(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowStretchFactor)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	RETURN_LONG(phpqt_qgraphicsgridlayout_row_stretch_factor(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnStretchFactor)
{
	zval *handle_param = NULL, *column_param = NULL, *stretch_param = NULL, _0, _1, _2;
	zend_long handle, column, stretch;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(stretch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &stretch_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, stretch);
	phpqt_qgraphicsgridlayout_set_column_stretch_factor(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnStretchFactor)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_LONG(phpqt_qgraphicsgridlayout_column_stretch_factor(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowMinimumHeight)
{
	double height;
	zval *handle_param = NULL, *row_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &height_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_DOUBLE(&_2, height);
	phpqt_qgraphicsgridlayout_set_row_minimum_height(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowMinimumHeight)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_row_minimum_height(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowPreferredHeight)
{
	double height;
	zval *handle_param = NULL, *row_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &height_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_DOUBLE(&_2, height);
	phpqt_qgraphicsgridlayout_set_row_preferred_height(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowPreferredHeight)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_row_preferred_height(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowMaximumHeight)
{
	double height;
	zval *handle_param = NULL, *row_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &height_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_DOUBLE(&_2, height);
	phpqt_qgraphicsgridlayout_set_row_maximum_height(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowMaximumHeight)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_row_maximum_height(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowFixedHeight)
{
	double height;
	zval *handle_param = NULL, *row_param = NULL, *height_param = NULL, _0, _1, _2;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &height_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_DOUBLE(&_2, height);
	phpqt_qgraphicsgridlayout_set_row_fixed_height(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnMinimumWidth)
{
	double width;
	zval *handle_param = NULL, *column_param = NULL, *width_param = NULL, _0, _1, _2;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_DOUBLE(&_2, width);
	phpqt_qgraphicsgridlayout_set_column_minimum_width(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnMinimumWidth)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_column_minimum_width(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnPreferredWidth)
{
	double width;
	zval *handle_param = NULL, *column_param = NULL, *width_param = NULL, _0, _1, _2;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_DOUBLE(&_2, width);
	phpqt_qgraphicsgridlayout_set_column_preferred_width(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnPreferredWidth)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_column_preferred_width(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnMaximumWidth)
{
	double width;
	zval *handle_param = NULL, *column_param = NULL, *width_param = NULL, _0, _1, _2;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_DOUBLE(&_2, width);
	phpqt_qgraphicsgridlayout_set_column_maximum_width(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnMaximumWidth)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_DOUBLE(phpqt_qgraphicsgridlayout_column_maximum_width(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnFixedWidth)
{
	double width;
	zval *handle_param = NULL, *column_param = NULL, *width_param = NULL, _0, _1, _2;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_DOUBLE(&_2, width);
	phpqt_qgraphicsgridlayout_set_column_fixed_width(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setRowAlignment)
{
	zval *handle_param = NULL, *row_param = NULL, *alignment_param = NULL, _0, _1, _2;
	zend_long handle, row, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &alignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, alignment);
	phpqt_qgraphicsgridlayout_set_row_alignment(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowAlignment)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	RETURN_LONG(phpqt_qgraphicsgridlayout_row_alignment(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setColumnAlignment)
{
	zval *handle_param = NULL, *column_param = NULL, *alignment_param = NULL, _0, _1, _2;
	zend_long handle, column, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &alignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, alignment);
	phpqt_qgraphicsgridlayout_set_column_alignment(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnAlignment)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	RETURN_LONG(phpqt_qgraphicsgridlayout_column_alignment(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setAlignment)
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
	phpqt_qgraphicsgridlayout_set_alignment(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, alignment)
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
	RETURN_LONG(phpqt_qgraphicsgridlayout_alignment(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, rowCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsgridlayout_row_count(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, columnCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsgridlayout_column_count(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, itemAt)
{
	zval *handle_param = NULL, *row_param = NULL, *column_param = NULL, _0, _1, _2;
	zend_long handle, row, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, column);
	RETURN_LONG(phpqt_qgraphicsgridlayout_item_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsgridlayout_count(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, itemAtInt)
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
	RETURN_LONG(phpqt_qgraphicsgridlayout_item_at_int(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, removeAt)
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
	phpqt_qgraphicsgridlayout_remove_at(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, removeItem)
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
	phpqt_qgraphicsgridlayout_remove_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, invalidate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsgridlayout_invalidate(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, setGeometry)
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
	phpqt_qgraphicsgridlayout_set_geometry(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsGridLayout_QGraphicsGridLayout, sizeHint)
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
	phpqt_qgraphicsgridlayout_size_hint(&result, &_0, &_1, constraintWidth, constraintHeight);
	RETURN_CCTOR(&result);
}

