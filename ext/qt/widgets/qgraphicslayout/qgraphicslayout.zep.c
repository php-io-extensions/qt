
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
#include "src/widgets-qgraphicslayout.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsLayout_QGraphicsLayout)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsLayout, QGraphicsLayout, qt, widgets_qgraphicslayout_qgraphicslayout, qt_widgets_qgraphicslayout_qgraphicslayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, new_)
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
	RETURN_LONG(phpqt_qgraphicslayout_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, setContentsMargins)
{
	double left, top, right, bottom;
	zval *handle_param = NULL, *left_param = NULL, *top_param = NULL, *right_param = NULL, *bottom_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(right)
		Z_PARAM_ZVAL(bottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &left_param, &top_param, &right_param, &bottom_param);
	left = zephir_get_doubleval(left_param);
	top = zephir_get_doubleval(top_param);
	right = zephir_get_doubleval(right_param);
	bottom = zephir_get_doubleval(bottom_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, left);
	ZVAL_DOUBLE(&_2, top);
	ZVAL_DOUBLE(&_3, right);
	ZVAL_DOUBLE(&_4, bottom);
	phpqt_qgraphicslayout_set_contents_margins(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, getContentsMargins)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *left = NULL, left_sub, *top = NULL, top_sub, *right = NULL, right_sub, *bottom = NULL, bottom_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&left_sub);
	ZVAL_UNDEF(&top_sub);
	ZVAL_UNDEF(&right_sub);
	ZVAL_UNDEF(&bottom_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(right)
		Z_PARAM_ZVAL(bottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &left, &top, &right, &bottom);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicslayout_get_contents_margins(&result, &_0, left, top, right, bottom);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, activate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicslayout_activate(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, isActivated)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicslayout_is_activated(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, invalidate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicslayout_invalidate(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, updateGeometry)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicslayout_update_geometry(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, widgetEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qgraphicslayout_widget_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicslayout_count(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, itemAt)
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
	RETURN_LONG(phpqt_qgraphicslayout_item_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, removeAt)
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
	phpqt_qgraphicslayout_remove_at(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, setInstantInvalidatePropagation)
{
	zval *enable_param = NULL, _0;
	zend_bool enable;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &enable_param);
	ZVAL_BOOL(&_0, (enable ? 1 : 0));
	phpqt_qgraphicslayout_set_instant_invalidate_propagation(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, instantInvalidatePropagation)
{
	zend_long r = 0;
	r = phpqt_qgraphicslayout_instant_invalidate_propagation();
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsLayout_QGraphicsLayout, addChildLayoutItem)
{
	zval *handle_param = NULL, *layoutItem_param = NULL, _0, _1;
	zend_long handle, layoutItem;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layoutItem)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layoutItem_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layoutItem);
	phpqt_qgraphicslayout_add_child_layout_item(&_0, &_1);
}

