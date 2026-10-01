
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
#include "src/widgets-qtreeview.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QTreeView_QTreeView)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QTreeView, QTreeView, qt, widgets_qtreeview_qtreeview, qt_widgets_qtreeview_qtreeview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, staticMetaObject)
{

	RETURN_LONG(phpqt_qtreeview_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, tr)
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
	phpqt_qtreeview_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, new_)
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
	RETURN_LONG(phpqt_qtreeview_new(&_0));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setModel)
{
	zval *handle_param = NULL, *model_param = NULL, _0, _1;
	zend_long handle, model;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(model)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &model_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, model);
	phpqt_qtreeview_set_model(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setRootIndex)
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
	phpqt_qtreeview_set_root_index(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setSelectionModel)
{
	zval *handle_param = NULL, *selectionModel_param = NULL, _0, _1;
	zend_long handle, selectionModel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selectionModel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selectionModel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selectionModel);
	phpqt_qtreeview_set_selection_model(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, header)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtreeview_header(&_0));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setHeader)
{
	zval *handle_param = NULL, *header_param = NULL, _0, _1;
	zend_long handle, header;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(header)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &header_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, header);
	phpqt_qtreeview_set_header(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, autoExpandDelay)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtreeview_auto_expand_delay(&_0));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setAutoExpandDelay)
{
	zval *handle_param = NULL, *delay_param = NULL, _0, _1;
	zend_long handle, delay;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delay)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delay_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delay);
	phpqt_qtreeview_set_auto_expand_delay(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, indentation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtreeview_indentation(&_0));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setIndentation)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qtreeview_set_indentation(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, resetIndentation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_reset_indentation(&_0);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, rootIsDecorated)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtreeview_root_is_decorated(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setRootIsDecorated)
{
	zend_bool show;
	zval *handle_param = NULL, *show_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(show)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &show_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (show ? 1 : 0));
	phpqt_qtreeview_set_root_is_decorated(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, uniformRowHeights)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtreeview_uniform_row_heights(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setUniformRowHeights)
{
	zend_bool uniform;
	zval *handle_param = NULL, *uniform_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(uniform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &uniform_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (uniform ? 1 : 0));
	phpqt_qtreeview_set_uniform_row_heights(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, itemsExpandable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtreeview_items_expandable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setItemsExpandable)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qtreeview_set_items_expandable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, expandsOnDoubleClick)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtreeview_expands_on_double_click(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setExpandsOnDoubleClick)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qtreeview_set_expands_on_double_click(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, columnViewportPosition)
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
	RETURN_LONG(phpqt_qtreeview_column_viewport_position(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, columnWidth)
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
	RETURN_LONG(phpqt_qtreeview_column_width(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setColumnWidth)
{
	zval *handle_param = NULL, *column_param = NULL, *width_param = NULL, _0, _1, _2;
	zend_long handle, column, width;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, width);
	phpqt_qtreeview_set_column_width(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, columnAt)
{
	zval *handle_param = NULL, *x_param = NULL, _0, _1;
	zend_long handle, x;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &x_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	RETURN_LONG(phpqt_qtreeview_column_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, isColumnHidden)
{
	zval *handle_param = NULL, *column_param = NULL, _0, _1;
	zend_long handle, column, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &column_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	r = phpqt_qtreeview_is_column_hidden(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setColumnHidden)
{
	zend_bool hide;
	zval *handle_param = NULL, *column_param = NULL, *hide_param = NULL, _0, _1, _2;
	zend_long handle, column;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_BOOL(hide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &hide_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_BOOL(&_2, (hide ? 1 : 0));
	phpqt_qtreeview_set_column_hidden(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, isHeaderHidden)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtreeview_is_header_hidden(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setHeaderHidden)
{
	zend_bool hide;
	zval *handle_param = NULL, *hide_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(hide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &hide_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (hide ? 1 : 0));
	phpqt_qtreeview_set_header_hidden(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, isRowHidden)
{
	zval *handle_param = NULL, *row_param = NULL, *parent__param = NULL, _0, _1, _2;
	zend_long handle, row, parent_, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &parent__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, parent_);
	r = phpqt_qtreeview_is_row_hidden(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setRowHidden)
{
	zend_bool hide;
	zval *handle_param = NULL, *row_param = NULL, *parent__param = NULL, *hide_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(parent_)
		Z_PARAM_BOOL(hide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &parent__param, &hide_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, parent_);
	ZVAL_BOOL(&_3, (hide ? 1 : 0));
	phpqt_qtreeview_set_row_hidden(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, isFirstColumnSpanned)
{
	zval *handle_param = NULL, *row_param = NULL, *parent__param = NULL, _0, _1, _2;
	zend_long handle, row, parent_, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &parent__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, parent_);
	r = phpqt_qtreeview_is_first_column_spanned(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setFirstColumnSpanned)
{
	zend_bool span;
	zval *handle_param = NULL, *row_param = NULL, *parent__param = NULL, *span_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(parent_)
		Z_PARAM_BOOL(span)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &parent__param, &span_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, parent_);
	ZVAL_BOOL(&_3, (span ? 1 : 0));
	phpqt_qtreeview_set_first_column_spanned(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, isExpanded)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = phpqt_qtreeview_is_expanded(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setExpanded)
{
	zend_bool expand;
	zval *handle_param = NULL, *index_param = NULL, *expand_param = NULL, _0, _1, _2;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_BOOL(expand)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &expand_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_BOOL(&_2, (expand ? 1 : 0));
	phpqt_qtreeview_set_expanded(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setSortingEnabled)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qtreeview_set_sorting_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, isSortingEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtreeview_is_sorting_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setAnimated)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qtreeview_set_animated(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, isAnimated)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtreeview_is_animated(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setAllColumnsShowFocus)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qtreeview_set_all_columns_show_focus(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, allColumnsShowFocus)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtreeview_all_columns_show_focus(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setWordWrap)
{
	zend_bool on;
	zval *handle_param = NULL, *on_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (on ? 1 : 0));
	phpqt_qtreeview_set_word_wrap(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, wordWrap)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtreeview_word_wrap(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setTreePosition)
{
	zval *handle_param = NULL, *logicalIndex_param = NULL, _0, _1;
	zend_long handle, logicalIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &logicalIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	phpqt_qtreeview_set_tree_position(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, treePosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtreeview_tree_position(&_0));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, keyboardSearch)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval search;
	zval *handle_param = NULL, *search_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&search);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(search)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &search_param);
	zephir_get_strval(&search, search_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_keyboard_search(&_0, &search);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, visualRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, result, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &index_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qtreeview_visual_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, scrollTo)
{
	zval *handle_param = NULL, *index_param = NULL, *hint = NULL, hint_sub, __$null, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&hint_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(hint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &index_param, &hint);
	if (!hint) {
		hint = &hint_sub;
		hint = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qtreeview_scroll_to(&_0, &_1, hint);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, indexAt)
{
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, _0, _1, _2;
	zend_long handle, pX, pY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &pX_param, &pY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	RETURN_LONG(phpqt_qtreeview_index_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, indexAbove)
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
	RETURN_LONG(phpqt_qtreeview_index_above(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, indexBelow)
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
	RETURN_LONG(phpqt_qtreeview_index_below(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, doItemsLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_do_items_layout(&_0);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, reset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_reset(&_0);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, dataChanged)
{
	zval *handle_param = NULL, *topLeft_param = NULL, *bottomRight_param = NULL, *roles = NULL, roles_sub, __$null, _0, _1, _2;
	zend_long handle, topLeft, bottomRight;

	ZVAL_UNDEF(&roles_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(topLeft)
		Z_PARAM_LONG(bottomRight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(roles)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &topLeft_param, &bottomRight_param, &roles);
	if (!roles) {
		roles = &roles_sub;
		roles = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, topLeft);
	ZVAL_LONG(&_2, bottomRight);
	phpqt_qtreeview_data_changed(&_0, &_1, &_2, roles);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, selectAll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_select_all(&_0);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, expanded)
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
	phpqt_qtreeview_expanded(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, collapsed)
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
	phpqt_qtreeview_collapsed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, hideColumn)
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
	phpqt_qtreeview_hide_column(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, showColumn)
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
	phpqt_qtreeview_show_column(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, expand)
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
	phpqt_qtreeview_expand(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, collapse)
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
	phpqt_qtreeview_collapse(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, resizeColumnToContents)
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
	phpqt_qtreeview_resize_column_to_contents(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, sortByColumn)
{
	zval *handle_param = NULL, *column_param = NULL, *order_param = NULL, _0, _1, _2;
	zend_long handle, column, order;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &column_param, &order_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, order);
	phpqt_qtreeview_sort_by_column(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, expandAll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_expand_all(&_0);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, expandRecursively)
{
	zval *handle_param = NULL, *index_param = NULL, *depth_param = NULL, _0, _1, _2;
	zend_long handle, index, depth;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(depth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &index_param, &depth_param);
	if (!depth_param) {
		depth = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, depth);
	phpqt_qtreeview_expand_recursively(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, collapseAll)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_collapse_all(&_0);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, expandToDepth)
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
	phpqt_qtreeview_expand_to_depth(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, columnResized)
{
	zval *handle_param = NULL, *column_param = NULL, *oldSize_param = NULL, *newSize_param = NULL, _0, _1, _2, _3;
	zend_long handle, column, oldSize, newSize;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(oldSize)
		Z_PARAM_LONG(newSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &column_param, &oldSize_param, &newSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, column);
	ZVAL_LONG(&_2, oldSize);
	ZVAL_LONG(&_3, newSize);
	phpqt_qtreeview_column_resized(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, columnCountChanged)
{
	zval *handle_param = NULL, *oldCount_param = NULL, *newCount_param = NULL, _0, _1, _2;
	zend_long handle, oldCount, newCount;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldCount)
		Z_PARAM_LONG(newCount)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &oldCount_param, &newCount_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldCount);
	ZVAL_LONG(&_2, newCount);
	phpqt_qtreeview_column_count_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, columnMoved)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_column_moved(&_0);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, reexpand)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_reexpand(&_0);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, rowsRemoved)
{
	zval *handle_param = NULL, *parent__param = NULL, *first_param = NULL, *last_param = NULL, _0, _1, _2, _3;
	zend_long handle, parent_, first, last;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
		Z_PARAM_LONG(first)
		Z_PARAM_LONG(last)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &parent__param, &first_param, &last_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	ZVAL_LONG(&_2, first);
	ZVAL_LONG(&_3, last);
	phpqt_qtreeview_rows_removed(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, verticalScrollbarValueChanged)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qtreeview_vertical_scrollbar_value_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, scrollContentsBy)
{
	zval *handle_param = NULL, *dx_param = NULL, *dy_param = NULL, _0, _1, _2;
	zend_long handle, dx, dy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &dx_param, &dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dx);
	ZVAL_LONG(&_2, dy);
	phpqt_qtreeview_scroll_contents_by(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, rowsInserted)
{
	zval *handle_param = NULL, *parent__param = NULL, *start_param = NULL, *end_param = NULL, _0, _1, _2, _3;
	zend_long handle, parent_, start, end;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(end)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &parent__param, &start_param, &end_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	ZVAL_LONG(&_2, start);
	ZVAL_LONG(&_3, end);
	phpqt_qtreeview_rows_inserted(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, rowsAboutToBeRemoved)
{
	zval *handle_param = NULL, *parent__param = NULL, *start_param = NULL, *end_param = NULL, _0, _1, _2, _3;
	zend_long handle, parent_, start, end;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(end)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &parent__param, &start_param, &end_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	ZVAL_LONG(&_2, start);
	ZVAL_LONG(&_3, end);
	phpqt_qtreeview_rows_about_to_be_removed(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, moveCursor)
{
	zval *handle_param = NULL, *cursorAction_param = NULL, *modifiers_param = NULL, _0, _1, _2;
	zend_long handle, cursorAction, modifiers;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cursorAction)
		Z_PARAM_LONG(modifiers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &cursorAction_param, &modifiers_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cursorAction);
	ZVAL_LONG(&_2, modifiers);
	RETURN_LONG(phpqt_qtreeview_move_cursor(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, horizontalOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtreeview_horizontal_offset(&_0));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, verticalOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtreeview_vertical_offset(&_0));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, setSelection)
{
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *command_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, rectX, rectY, rectWidth, rectHeight, command;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(command)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &command_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	ZVAL_LONG(&_5, command);
	phpqt_qtreeview_set_selection(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, visualRegionForSelection)
{
	zval *handle_param = NULL, *selection_param = NULL, _0, _1;
	zend_long handle, selection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &selection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selection);
	RETURN_LONG(phpqt_qtreeview_visual_region_for_selection(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, selectedIndexes)
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
	phpqt_qtreeview_selected_indexes(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, changeEvent)
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
	phpqt_qtreeview_change_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, timerEvent)
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
	phpqt_qtreeview_timer_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, paintEvent)
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
	phpqt_qtreeview_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, drawTree)
{
	zval *handle_param = NULL, *painter_param = NULL, *region_param = NULL, _0, _1, _2;
	zend_long handle, painter, region;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(region)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &painter_param, &region_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, region);
	phpqt_qtreeview_draw_tree(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, drawRow)
{
	zval *handle_param = NULL, *painter_param = NULL, *options_param = NULL, *index_param = NULL, _0, _1, _2, _3;
	zend_long handle, painter, options, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(options)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &painter_param, &options_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, options);
	ZVAL_LONG(&_3, index);
	phpqt_qtreeview_draw_row(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, drawBranches)
{
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *index_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, painter, rectX, rectY, rectWidth, rectHeight, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, rectX);
	ZVAL_LONG(&_3, rectY);
	ZVAL_LONG(&_4, rectWidth);
	ZVAL_LONG(&_5, rectHeight);
	ZVAL_LONG(&_6, index);
	phpqt_qtreeview_draw_branches(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, mousePressEvent)
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
	phpqt_qtreeview_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, mouseReleaseEvent)
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
	phpqt_qtreeview_mouse_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, mouseDoubleClickEvent)
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
	phpqt_qtreeview_mouse_double_click_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, mouseMoveEvent)
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
	phpqt_qtreeview_mouse_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, keyPressEvent)
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
	phpqt_qtreeview_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, dragMoveEvent)
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
	phpqt_qtreeview_drag_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, viewportEvent)
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
	r = phpqt_qtreeview_viewport_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, updateGeometries)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtreeview_update_geometries(&_0);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, viewportSizeHint)
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
	phpqt_qtreeview_viewport_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, sizeHintForColumn)
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
	RETURN_LONG(phpqt_qtreeview_size_hint_for_column(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, indexRowSizeHint)
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
	RETURN_LONG(phpqt_qtreeview_index_row_size_hint(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, rowHeight)
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
	RETURN_LONG(phpqt_qtreeview_row_height(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, horizontalScrollbarAction)
{
	zval *handle_param = NULL, *action_param = NULL, _0, _1;
	zend_long handle, action;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &action_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, action);
	phpqt_qtreeview_horizontal_scrollbar_action(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, isIndexHidden)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	r = phpqt_qtreeview_is_index_hidden(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, selectionChanged)
{
	zval *handle_param = NULL, *selected_param = NULL, *deselected_param = NULL, _0, _1, _2;
	zend_long handle, selected, deselected;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(selected)
		Z_PARAM_LONG(deselected)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &selected_param, &deselected_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, selected);
	ZVAL_LONG(&_2, deselected);
	phpqt_qtreeview_selection_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTreeView_QTreeView, currentChanged)
{
	zval *handle_param = NULL, *current_param = NULL, *previous_param = NULL, _0, _1, _2;
	zend_long handle, current, previous;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(current)
		Z_PARAM_LONG(previous)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &current_param, &previous_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, current);
	ZVAL_LONG(&_2, previous);
	phpqt_qtreeview_current_changed(&_0, &_1, &_2);
}

