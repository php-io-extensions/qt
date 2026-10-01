
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
#include "src/widgets-qtabwidget.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QTabWidget_QTabWidget)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QTabWidget, QTabWidget, qt, widgets_qtabwidget_qtabwidget, qt_widgets_qtabwidget_qtabwidget_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, staticMetaObject)
{

	RETURN_LONG(phpqt_qtabwidget_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tr)
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
	phpqt_qtabwidget_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, new_)
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
	RETURN_LONG(phpqt_qtabwidget_new(&_0));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, addTab)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg1;
	zval *handle_param = NULL, *widget_param = NULL, *arg1_param = NULL, _0, _1;
	zend_long handle, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&arg1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
		Z_PARAM_STR(arg1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &widget_param, &arg1_param);
	zephir_get_strval(&arg1, arg1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	RETURN_MM_LONG(phpqt_qtabwidget_add_tab(&_0, &_1, &arg1));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, addTabQWidgetQIconQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *handle_param = NULL, *widget_param = NULL, *icon_param = NULL, *label_param = NULL, _0, _1, _2;
	zend_long handle, widget, icon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
		Z_PARAM_LONG(icon)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &widget_param, &icon_param, &label_param);
	zephir_get_strval(&label, label_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	ZVAL_LONG(&_2, icon);
	RETURN_MM_LONG(phpqt_qtabwidget_add_tab_q_widget_q_icon_q_string(&_0, &_1, &_2, &label));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, insertTab)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg2;
	zval *handle_param = NULL, *index_param = NULL, *widget_param = NULL, *arg2_param = NULL, _0, _1, _2;
	zend_long handle, index, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&arg2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(widget)
		Z_PARAM_STR(arg2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &index_param, &widget_param, &arg2_param);
	zephir_get_strval(&arg2, arg2_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, widget);
	RETURN_MM_LONG(phpqt_qtabwidget_insert_tab(&_0, &_1, &_2, &arg2));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, insertTabIntQWidgetQIconQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval label;
	zval *handle_param = NULL, *index_param = NULL, *widget_param = NULL, *icon_param = NULL, *label_param = NULL, _0, _1, _2, _3;
	zend_long handle, index, widget, icon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&label);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(widget)
		Z_PARAM_LONG(icon)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &index_param, &widget_param, &icon_param, &label_param);
	zephir_get_strval(&label, label_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, widget);
	ZVAL_LONG(&_3, icon);
	RETURN_MM_LONG(phpqt_qtabwidget_insert_tab_int_q_widget_q_icon_q_string(&_0, &_1, &_2, &_3, &label));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, removeTab)
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
	phpqt_qtabwidget_remove_tab(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, isTabEnabled)
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
	r = phpqt_qtabwidget_is_tab_enabled(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabEnabled)
{
	zend_bool enabled;
	zval *handle_param = NULL, *index_param = NULL, *enabled_param = NULL, _0, _1, _2;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &enabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_BOOL(&_2, (enabled ? 1 : 0));
	phpqt_qtabwidget_set_tab_enabled(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, isTabVisible)
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
	r = phpqt_qtabwidget_is_tab_visible(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabVisible)
{
	zend_bool visible;
	zval *handle_param = NULL, *index_param = NULL, *visible_param = NULL, _0, _1, _2;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &visible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_BOOL(&_2, (visible ? 1 : 0));
	phpqt_qtabwidget_set_tab_visible(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabText)
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
	phpqt_qtabwidget_tab_text(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *index_param = NULL, *text_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &index_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qtabwidget_set_tab_text(&_0, &_1, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabIcon)
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
	RETURN_LONG(phpqt_qtabwidget_tab_icon(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabIcon)
{
	zval *handle_param = NULL, *index_param = NULL, *icon_param = NULL, _0, _1, _2;
	zend_long handle, index, icon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(icon)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &icon_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, icon);
	phpqt_qtabwidget_set_tab_icon(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabToolTip)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tip;
	zval *handle_param = NULL, *index_param = NULL, *tip_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&tip);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_STR(tip)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &index_param, &tip_param);
	zephir_get_strval(&tip, tip_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qtabwidget_set_tab_tool_tip(&_0, &_1, &tip);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabToolTip)
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
	phpqt_qtabwidget_tab_tool_tip(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabWhatsThis)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *index_param = NULL, *text_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &index_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qtabwidget_set_tab_whats_this(&_0, &_1, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabWhatsThis)
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
	phpqt_qtabwidget_tab_whats_this(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, currentIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtabwidget_current_index(&_0));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, currentWidget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtabwidget_current_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, widget)
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
	RETURN_LONG(phpqt_qtabwidget_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, indexOf)
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
	RETURN_LONG(phpqt_qtabwidget_index_of(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtabwidget_count(&_0));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtabwidget_tab_position(&_0));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabPosition)
{
	zval *handle_param = NULL, *position_param = NULL, _0, _1;
	zend_long handle, position;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(position)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &position_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, position);
	phpqt_qtabwidget_set_tab_position(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabsClosable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtabwidget_tabs_closable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabsClosable)
{
	zend_bool closeable;
	zval *handle_param = NULL, *closeable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(closeable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &closeable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (closeable ? 1 : 0));
	phpqt_qtabwidget_set_tabs_closable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, isMovable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtabwidget_is_movable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setMovable)
{
	zend_bool movable;
	zval *handle_param = NULL, *movable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(movable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &movable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (movable ? 1 : 0));
	phpqt_qtabwidget_set_movable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabShape)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtabwidget_tab_shape(&_0));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabShape)
{
	zval *handle_param = NULL, *s_param = NULL, _0, _1;
	zend_long handle, s;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &s_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, s);
	phpqt_qtabwidget_set_tab_shape(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, sizeHint)
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
	phpqt_qtabwidget_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, minimumSizeHint)
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
	phpqt_qtabwidget_minimum_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, heightForWidth)
{
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle, width;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, width);
	RETURN_LONG(phpqt_qtabwidget_height_for_width(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, hasHeightForWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtabwidget_has_height_for_width(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setCornerWidget)
{
	zval *handle_param = NULL, *w_param = NULL, *corner = NULL, corner_sub, __$null, _0, _1;
	zend_long handle, w;

	ZVAL_UNDEF(&corner_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(w)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(corner)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &w_param, &corner);
	if (!corner) {
		corner = &corner_sub;
		corner = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, w);
	phpqt_qtabwidget_set_corner_widget(&_0, &_1, corner);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, cornerWidget)
{
	zval *handle_param = NULL, *corner = NULL, corner_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&corner_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(corner)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &corner);
	if (!corner) {
		corner = &corner_sub;
		corner = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtabwidget_corner_widget(&_0, corner));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, elideMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtabwidget_elide_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setElideMode)
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
	phpqt_qtabwidget_set_elide_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, iconSize)
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
	phpqt_qtabwidget_icon_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setIconSize)
{
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2;
	zend_long handle, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sizeWidth_param, &sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	phpqt_qtabwidget_set_icon_size(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, usesScrollButtons)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtabwidget_uses_scroll_buttons(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setUsesScrollButtons)
{
	zend_bool useButtons;
	zval *handle_param = NULL, *useButtons_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(useButtons)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &useButtons_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (useButtons ? 1 : 0));
	phpqt_qtabwidget_set_uses_scroll_buttons(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, documentMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtabwidget_document_mode(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setDocumentMode)
{
	zend_bool set;
	zval *handle_param = NULL, *set_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(set)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &set_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (set ? 1 : 0));
	phpqt_qtabwidget_set_document_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabBarAutoHide)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtabwidget_tab_bar_auto_hide(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabBarAutoHide)
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
	phpqt_qtabwidget_set_tab_bar_auto_hide(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtabwidget_clear(&_0);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabBar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtabwidget_tab_bar(&_0));
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setCurrentIndex)
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
	phpqt_qtabwidget_set_current_index(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setCurrentWidget)
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
	phpqt_qtabwidget_set_current_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, currentChanged)
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
	phpqt_qtabwidget_current_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabCloseRequested)
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
	phpqt_qtabwidget_tab_close_requested(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabBarClicked)
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
	phpqt_qtabwidget_tab_bar_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabBarDoubleClicked)
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
	phpqt_qtabwidget_tab_bar_double_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabInserted)
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
	phpqt_qtabwidget_tab_inserted(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, tabRemoved)
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
	phpqt_qtabwidget_tab_removed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, showEvent)
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
	phpqt_qtabwidget_show_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, resizeEvent)
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
	phpqt_qtabwidget_resize_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, keyPressEvent)
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
	phpqt_qtabwidget_key_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, paintEvent)
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
	phpqt_qtabwidget_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, setTabBar)
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
	phpqt_qtabwidget_set_tab_bar(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, changeEvent)
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
	phpqt_qtabwidget_change_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, event)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	r = phpqt_qtabwidget_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QTabWidget_QTabWidget, initStyleOption)
{
	zval *handle_param = NULL, *option_param = NULL, _0, _1;
	zend_long handle, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	phpqt_qtabwidget_init_style_option(&_0, &_1);
}

