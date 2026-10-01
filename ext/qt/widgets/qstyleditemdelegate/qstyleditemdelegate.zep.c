
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
#include "src/widgets-qstyleditemdelegate.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStyledItemDelegate, QStyledItemDelegate, qt, widgets_qstyleditemdelegate_qstyleditemdelegate, qt_widgets_qstyleditemdelegate_qstyleditemdelegate_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, staticMetaObject)
{

	RETURN_LONG(phpqt_qstyleditemdelegate_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, tr)
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
	phpqt_qstyleditemdelegate_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, new_)
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
	RETURN_LONG(phpqt_qstyleditemdelegate_new(&_0));
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, paint)
{
	zval *handle_param = NULL, *painter_param = NULL, *option_param = NULL, *index_param = NULL, _0, _1, _2, _3;
	zend_long handle, painter, option, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &painter_param, &option_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, index);
	phpqt_qstyleditemdelegate_paint(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, sizeHint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *option_param = NULL, *index_param = NULL, result, _0, _1, _2;
	zend_long handle, option, index;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &option_param, &index_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_LONG(&_2, index);
	phpqt_qstyleditemdelegate_size_hint(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, createEditor)
{
	zval *handle_param = NULL, *parent__param = NULL, *option_param = NULL, *index_param = NULL, _0, _1, _2, _3;
	zend_long handle, parent_, option, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &parent__param, &option_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, index);
	RETURN_LONG(phpqt_qstyleditemdelegate_create_editor(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, setEditorData)
{
	zval *handle_param = NULL, *editor_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, editor, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(editor)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &editor_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, editor);
	ZVAL_LONG(&_2, index);
	phpqt_qstyleditemdelegate_set_editor_data(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, setModelData)
{
	zval *handle_param = NULL, *editor_param = NULL, *model_param = NULL, *index_param = NULL, _0, _1, _2, _3;
	zend_long handle, editor, model, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(editor)
		Z_PARAM_LONG(model)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &editor_param, &model_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, editor);
	ZVAL_LONG(&_2, model);
	ZVAL_LONG(&_3, index);
	phpqt_qstyleditemdelegate_set_model_data(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, updateEditorGeometry)
{
	zval *handle_param = NULL, *editor_param = NULL, *option_param = NULL, *index_param = NULL, _0, _1, _2, _3;
	zend_long handle, editor, option, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(editor)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &editor_param, &option_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, editor);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, index);
	phpqt_qstyleditemdelegate_update_editor_geometry(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, itemEditorFactory)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstyleditemdelegate_item_editor_factory(&_0));
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, setItemEditorFactory)
{
	zval *handle_param = NULL, *factory_param = NULL, _0, _1;
	zend_long handle, factory;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(factory)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &factory_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, factory);
	phpqt_qstyleditemdelegate_set_item_editor_factory(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, displayText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *value = NULL, value_sub, *locale_param = NULL, result, _0, _1;
	zend_long handle, locale;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &value, &locale_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	phpqt_qstyleditemdelegate_display_text(&result, &_0, value, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, initStyleOption)
{
	zval *handle_param = NULL, *option_param = NULL, *index_param = NULL, _0, _1, _2;
	zend_long handle, option, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &option_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_LONG(&_2, index);
	phpqt_qstyleditemdelegate_init_style_option(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, eventFilter)
{
	zval *handle_param = NULL, *object__param = NULL, *event_param = NULL, _0, _1, _2;
	zend_long handle, object_, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(object_)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &object__param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, object_);
	ZVAL_LONG(&_2, event);
	r = phpqt_qstyleditemdelegate_event_filter(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QStyledItemDelegate_QStyledItemDelegate, editorEvent)
{
	zval *handle_param = NULL, *event_param = NULL, *model_param = NULL, *option_param = NULL, *index_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, event, model, option, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
		Z_PARAM_LONG(model)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &event_param, &model_param, &option_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ZVAL_LONG(&_2, model);
	ZVAL_LONG(&_3, option);
	ZVAL_LONG(&_4, index);
	r = phpqt_qstyleditemdelegate_editor_event(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

