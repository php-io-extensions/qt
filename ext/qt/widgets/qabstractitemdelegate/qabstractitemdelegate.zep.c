
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
#include "src/widgets-qabstractitemdelegate.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QAbstractItemDelegate, QAbstractItemDelegate, qt, widgets_qabstractitemdelegate_qabstractitemdelegate, qt_widgets_qabstractitemdelegate_qabstractitemdelegate_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, staticMetaObject)
{

	RETURN_LONG(phpqt_qabstractitemdelegate_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, tr)
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
	phpqt_qabstractitemdelegate_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, new_)
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
	RETURN_LONG(phpqt_qabstractitemdelegate_new(&_0));
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, paint)
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
	phpqt_qabstractitemdelegate_paint(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, sizeHint)
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
	phpqt_qabstractitemdelegate_size_hint(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, createEditor)
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
	RETURN_LONG(phpqt_qabstractitemdelegate_create_editor(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, destroyEditor)
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
	phpqt_qabstractitemdelegate_destroy_editor(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, setEditorData)
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
	phpqt_qabstractitemdelegate_set_editor_data(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, setModelData)
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
	phpqt_qabstractitemdelegate_set_model_data(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, updateEditorGeometry)
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
	phpqt_qabstractitemdelegate_update_editor_geometry(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, editorEvent)
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
	r = phpqt_qabstractitemdelegate_editor_event(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, helpEvent)
{
	zval *handle_param = NULL, *event_param = NULL, *view_param = NULL, *option_param = NULL, *index_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, event, view, option, index, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
		Z_PARAM_LONG(view)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &event_param, &view_param, &option_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	ZVAL_LONG(&_2, view);
	ZVAL_LONG(&_3, option);
	ZVAL_LONG(&_4, index);
	r = phpqt_qabstractitemdelegate_help_event(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, paintingRoles)
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
	phpqt_qabstractitemdelegate_painting_roles(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, commitData)
{
	zval *handle_param = NULL, *editor_param = NULL, _0, _1;
	zend_long handle, editor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(editor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &editor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, editor);
	phpqt_qabstractitemdelegate_commit_data(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, closeEditor)
{
	zval *handle_param = NULL, *editor_param = NULL, *hint = NULL, hint_sub, __$null, _0, _1;
	zend_long handle, editor;

	ZVAL_UNDEF(&hint_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(editor)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(hint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &editor_param, &hint);
	if (!hint) {
		hint = &hint_sub;
		hint = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, editor);
	phpqt_qabstractitemdelegate_close_editor(&_0, &_1, hint);
}

PHP_METHOD(Qt_Widgets_QAbstractItemDelegate_QAbstractItemDelegate, sizeHintChanged)
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
	phpqt_qabstractitemdelegate_size_hint_changed(&_0, &_1);
}

