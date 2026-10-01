
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
#include "src/widgets-qtoolbar.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QToolBar_QToolBar)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QToolBar, QToolBar, qt, widgets_qtoolbar_qtoolbar, qt_widgets_qtoolbar_qtoolbar_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addAction)
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
	phpqt_qtoolbar_add_action(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qtoolbar_add_action_q_string(&_0, &text));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQIconQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *icon_param = NULL, *text_param = NULL, _0, _1;
	zend_long handle, icon;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(icon)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &icon_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, icon);
	RETURN_MM_LONG(phpqt_qtoolbar_add_action_q_icon_q_string(&_0, &_1, &text));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQStringQObjectCharQtConnectionType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, *type = NULL, type_sub, __$null, _0, _1;
	zend_long handle, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &text_param, &receiver_param, &member, &type);
	zephir_get_strval(&text, text_param);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	RETURN_MM_LONG(phpqt_qtoolbar_add_action_q_string_q_object_char_qt_connection_type(&_0, &text, &_1, member, type));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQIconQStringQObjectCharQtConnectionType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *icon_param = NULL, *text_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, *type = NULL, type_sub, __$null, _0, _1, _2;
	zend_long handle, icon, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(icon)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 1, &handle_param, &icon_param, &text_param, &receiver_param, &member, &type);
	zephir_get_strval(&text, text_param);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, icon);
	ZVAL_LONG(&_2, receiver);
	RETURN_MM_LONG(phpqt_qtoolbar_add_action_q_icon_q_string_q_object_char_qt_connection_type(&_0, &_1, &text, &_2, member, type));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQStringQKeySequence)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *shortcut_param = NULL, _0, _1;
	zend_long handle, shortcut;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(shortcut)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &text_param, &shortcut_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shortcut);
	RETURN_MM_LONG(phpqt_qtoolbar_add_action_q_string_q_key_sequence(&_0, &text, &_1));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQIconQStringQKeySequence)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *icon_param = NULL, *text_param = NULL, *shortcut_param = NULL, _0, _1, _2;
	zend_long handle, icon, shortcut;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(icon)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(shortcut)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &icon_param, &text_param, &shortcut_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, icon);
	ZVAL_LONG(&_2, shortcut);
	RETURN_MM_LONG(phpqt_qtoolbar_add_action_q_icon_q_string_q_key_sequence(&_0, &_1, &text, &_2));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQStringQKeySequenceQObjectCharQtConnectionType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, *shortcut_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, *type = NULL, type_sub, __$null, _0, _1, _2;
	zend_long handle, shortcut, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(shortcut)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 1, &handle_param, &text_param, &shortcut_param, &receiver_param, &member, &type);
	zephir_get_strval(&text, text_param);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, shortcut);
	ZVAL_LONG(&_2, receiver);
	RETURN_MM_LONG(phpqt_qtoolbar_add_action_q_string_q_key_sequence_q_object_char_qt_connection_type(&_0, &text, &_1, &_2, member, type));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addActionQIconQStringQKeySequenceQObjectCharQtConnectionType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *icon_param = NULL, *text_param = NULL, *shortcut_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, *type = NULL, type_sub, __$null, _0, _1, _2, _3;
	zend_long handle, icon, shortcut, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(icon)
		Z_PARAM_STR(text)
		Z_PARAM_LONG(shortcut)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 1, &handle_param, &icon_param, &text_param, &shortcut_param, &receiver_param, &member, &type);
	zephir_get_strval(&text, text_param);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, icon);
	ZVAL_LONG(&_2, shortcut);
	ZVAL_LONG(&_3, receiver);
	RETURN_MM_LONG(phpqt_qtoolbar_add_action_q_icon_q_string_q_key_sequence_q_object_char_qt_connection_type(&_0, &_1, &text, &_2, &_3, member, type));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, staticMetaObject)
{

	RETURN_LONG(phpqt_qtoolbar_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, tr)
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
	phpqt_qtoolbar_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long parent_;
	zval *title_param = NULL, *parent__param = NULL, _0;
	zval title;

	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(title)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &title_param, &parent__param);
	zephir_get_strval(&title, title_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qtoolbar_new(&title, &_0));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, newQWidget)
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
	RETURN_LONG(phpqt_qtoolbar_new_q_widget(&_0));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setMovable)
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
	phpqt_qtoolbar_set_movable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, isMovable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtoolbar_is_movable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setAllowedAreas)
{
	zval *handle_param = NULL, *areas_param = NULL, _0, _1;
	zend_long handle, areas;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(areas)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &areas_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, areas);
	phpqt_qtoolbar_set_allowed_areas(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, allowedAreas)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtoolbar_allowed_areas(&_0));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, isAreaAllowed)
{
	zval *handle_param = NULL, *area_param = NULL, _0, _1;
	zend_long handle, area, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(area)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &area_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, area);
	r = phpqt_qtoolbar_is_area_allowed(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setOrientation)
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
	phpqt_qtoolbar_set_orientation(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, orientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtoolbar_orientation(&_0));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtoolbar_clear(&_0);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addSeparator)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtoolbar_add_separator(&_0));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, insertSeparator)
{
	zval *handle_param = NULL, *before_param = NULL, _0, _1;
	zend_long handle, before;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(before)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &before_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, before);
	RETURN_LONG(phpqt_qtoolbar_insert_separator(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, addWidget)
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
	RETURN_LONG(phpqt_qtoolbar_add_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, insertWidget)
{
	zval *handle_param = NULL, *before_param = NULL, *widget_param = NULL, _0, _1, _2;
	zend_long handle, before, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(before)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &before_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, before);
	ZVAL_LONG(&_2, widget);
	RETURN_LONG(phpqt_qtoolbar_insert_widget(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionGeometry)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *action_param = NULL, result, _0, _1;
	zend_long handle, action;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(action)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &action_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, action);
	phpqt_qtoolbar_action_geometry(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionAt)
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
	RETURN_LONG(phpqt_qtoolbar_action_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionAtIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	RETURN_LONG(phpqt_qtoolbar_action_at_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, toggleViewAction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtoolbar_toggle_view_action(&_0));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, iconSize)
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
	phpqt_qtoolbar_icon_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, toolButtonStyle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtoolbar_tool_button_style(&_0));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, widgetForAction)
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
	RETURN_LONG(phpqt_qtoolbar_widget_for_action(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, isFloatable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtoolbar_is_floatable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setFloatable)
{
	zend_bool floatable;
	zval *handle_param = NULL, *floatable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(floatable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &floatable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (floatable ? 1 : 0));
	phpqt_qtoolbar_set_floatable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, isFloating)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtoolbar_is_floating(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setIconSize)
{
	zval *handle_param = NULL, *iconSizeWidth_param = NULL, *iconSizeHeight_param = NULL, _0, _1, _2;
	zend_long handle, iconSizeWidth, iconSizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(iconSizeWidth)
		Z_PARAM_LONG(iconSizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &iconSizeWidth_param, &iconSizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, iconSizeWidth);
	ZVAL_LONG(&_2, iconSizeHeight);
	phpqt_qtoolbar_set_icon_size(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, setToolButtonStyle)
{
	zval *handle_param = NULL, *toolButtonStyle_param = NULL, _0, _1;
	zend_long handle, toolButtonStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toolButtonStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolButtonStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toolButtonStyle);
	phpqt_qtoolbar_set_tool_button_style(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionTriggered)
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
	phpqt_qtoolbar_action_triggered(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, movableChanged)
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
	phpqt_qtoolbar_movable_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, allowedAreasChanged)
{
	zval *handle_param = NULL, *allowedAreas_param = NULL, _0, _1;
	zend_long handle, allowedAreas;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(allowedAreas)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &allowedAreas_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, allowedAreas);
	phpqt_qtoolbar_allowed_areas_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, orientationChanged)
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
	phpqt_qtoolbar_orientation_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, iconSizeChanged)
{
	zval *handle_param = NULL, *iconSizeWidth_param = NULL, *iconSizeHeight_param = NULL, _0, _1, _2;
	zend_long handle, iconSizeWidth, iconSizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(iconSizeWidth)
		Z_PARAM_LONG(iconSizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &iconSizeWidth_param, &iconSizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, iconSizeWidth);
	ZVAL_LONG(&_2, iconSizeHeight);
	phpqt_qtoolbar_icon_size_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, toolButtonStyleChanged)
{
	zval *handle_param = NULL, *toolButtonStyle_param = NULL, _0, _1;
	zend_long handle, toolButtonStyle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(toolButtonStyle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &toolButtonStyle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, toolButtonStyle);
	phpqt_qtoolbar_tool_button_style_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, topLevelChanged)
{
	zend_bool topLevel;
	zval *handle_param = NULL, *topLevel_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(topLevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &topLevel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (topLevel ? 1 : 0));
	phpqt_qtoolbar_top_level_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, visibilityChanged)
{
	zend_bool visible;
	zval *handle_param = NULL, *visible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &visible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (visible ? 1 : 0));
	phpqt_qtoolbar_visibility_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, actionEvent)
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
	phpqt_qtoolbar_action_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, changeEvent)
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
	phpqt_qtoolbar_change_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, paintEvent)
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
	phpqt_qtoolbar_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, event)
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
	r = phpqt_qtoolbar_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QToolBar_QToolBar, initStyleOption)
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
	phpqt_qtoolbar_init_style_option(&_0, &_1);
}

