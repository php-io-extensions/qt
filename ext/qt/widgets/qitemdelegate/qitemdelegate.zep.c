
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
#include "src/widgets-qitemdelegate.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QItemDelegate_QItemDelegate)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QItemDelegate, QItemDelegate, qt, widgets_qitemdelegate_qitemdelegate, qt_widgets_qitemdelegate_qitemdelegate_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, staticMetaObject)
{

	RETURN_LONG(phpqt_qitemdelegate_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, tr)
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
	phpqt_qitemdelegate_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, new_)
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
	RETURN_LONG(phpqt_qitemdelegate_new(&_0));
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, hasClipping)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qitemdelegate_has_clipping(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setClipping)
{
	zend_bool clip;
	zval *handle_param = NULL, *clip_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(clip)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &clip_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (clip ? 1 : 0));
	phpqt_qitemdelegate_set_clipping(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, paint)
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
	phpqt_qitemdelegate_paint(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, sizeHint)
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
	phpqt_qitemdelegate_size_hint(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, createEditor)
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
	RETURN_LONG(phpqt_qitemdelegate_create_editor(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setEditorData)
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
	phpqt_qitemdelegate_set_editor_data(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setModelData)
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
	phpqt_qitemdelegate_set_model_data(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, updateEditorGeometry)
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
	phpqt_qitemdelegate_update_editor_geometry(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, itemEditorFactory)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qitemdelegate_item_editor_factory(&_0));
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setItemEditorFactory)
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
	phpqt_qitemdelegate_set_item_editor_factory(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawDisplay)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *painter_param = NULL, *option_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *text_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, painter, option, rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &handle_param, &painter_param, &option_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, rectX);
	ZVAL_LONG(&_4, rectY);
	ZVAL_LONG(&_5, rectWidth);
	ZVAL_LONG(&_6, rectHeight);
	phpqt_qitemdelegate_draw_display(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawDecoration)
{
	zval *handle_param = NULL, *painter_param = NULL, *option_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *pixmap_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, painter, option, rectX, rectY, rectWidth, rectHeight, pixmap;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &painter_param, &option_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &pixmap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, rectX);
	ZVAL_LONG(&_4, rectY);
	ZVAL_LONG(&_5, rectWidth);
	ZVAL_LONG(&_6, rectHeight);
	ZVAL_LONG(&_7, pixmap);
	phpqt_qitemdelegate_draw_decoration(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawFocus)
{
	zval *handle_param = NULL, *painter_param = NULL, *option_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, painter, option, rectX, rectY, rectWidth, rectHeight;

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
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &painter_param, &option_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, rectX);
	ZVAL_LONG(&_4, rectY);
	ZVAL_LONG(&_5, rectWidth);
	ZVAL_LONG(&_6, rectHeight);
	phpqt_qitemdelegate_draw_focus(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawCheck)
{
	zval *handle_param = NULL, *painter_param = NULL, *option_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *state_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, painter, option, rectX, rectY, rectWidth, rectHeight, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(8, 0, &handle_param, &painter_param, &option_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, option);
	ZVAL_LONG(&_3, rectX);
	ZVAL_LONG(&_4, rectY);
	ZVAL_LONG(&_5, rectWidth);
	ZVAL_LONG(&_6, rectHeight);
	ZVAL_LONG(&_7, state);
	phpqt_qitemdelegate_draw_check(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, drawBackground)
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
	phpqt_qitemdelegate_draw_background(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, doLayout)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool hint;
	zval *handle_param = NULL, *option_param = NULL, *checkRect = NULL, checkRect_sub, *iconRect = NULL, iconRect_sub, *textRect = NULL, textRect_sub, *hint_param = NULL, result, _0, _1, _2;
	zend_long handle, option;

	ZVAL_UNDEF(&checkRect_sub);
	ZVAL_UNDEF(&iconRect_sub);
	ZVAL_UNDEF(&textRect_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_ZVAL(checkRect)
		Z_PARAM_ZVAL(iconRect)
		Z_PARAM_ZVAL(textRect)
		Z_PARAM_BOOL(hint)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &handle_param, &option_param, &checkRect, &iconRect, &textRect, &hint_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_BOOL(&_2, (hint ? 1 : 0));
	phpqt_qitemdelegate_do_layout(&result, &_0, &_1, checkRect, iconRect, textRect, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, rect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *option_param = NULL, *index_param = NULL, *role_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, option, index, role;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(role)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &option_param, &index_param, &role_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_LONG(&_2, index);
	ZVAL_LONG(&_3, role);
	phpqt_qitemdelegate_rect(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, eventFilter)
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
	r = phpqt_qitemdelegate_event_filter(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, editorEvent)
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
	r = phpqt_qitemdelegate_editor_event(&_0, &_1, &_2, &_3, &_4);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, setOptions)
{
	zval *handle_param = NULL, *index_param = NULL, *option_param = NULL, _0, _1, _2;
	zend_long handle, index, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, option);
	RETURN_LONG(phpqt_qitemdelegate_set_options(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, decoration)
{
	zval *handle_param = NULL, *option_param = NULL, *variant = NULL, variant_sub, _0, _1;
	zend_long handle, option;

	ZVAL_UNDEF(&variant_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &option_param, &variant);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	RETURN_LONG(phpqt_qitemdelegate_decoration(&_0, &_1, variant));
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, selectedPixmap)
{
	zend_bool enabled;
	zval *pixmap_param = NULL, *palette_param = NULL, *enabled_param = NULL, _0, _1, _2;
	zend_long pixmap, palette;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(pixmap)
		Z_PARAM_LONG(palette)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &pixmap_param, &palette_param, &enabled_param);
	ZVAL_LONG(&_0, pixmap);
	ZVAL_LONG(&_1, palette);
	ZVAL_BOOL(&_2, (enabled ? 1 : 0));
	RETURN_LONG(phpqt_qitemdelegate_selected_pixmap(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, doCheck)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *option_param = NULL, *boundingX_param = NULL, *boundingY_param = NULL, *boundingWidth_param = NULL, *boundingHeight_param = NULL, *variant = NULL, variant_sub, result, _0, _1, _2, _3, _4, _5;
	zend_long handle, option, boundingX, boundingY, boundingWidth, boundingHeight;

	ZVAL_UNDEF(&variant_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(boundingX)
		Z_PARAM_LONG(boundingY)
		Z_PARAM_LONG(boundingWidth)
		Z_PARAM_LONG(boundingHeight)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 0, &handle_param, &option_param, &boundingX_param, &boundingY_param, &boundingWidth_param, &boundingHeight_param, &variant);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_LONG(&_2, boundingX);
	ZVAL_LONG(&_3, boundingY);
	ZVAL_LONG(&_4, boundingWidth);
	ZVAL_LONG(&_5, boundingHeight);
	phpqt_qitemdelegate_do_check(&result, &_0, &_1, &_2, &_3, &_4, &_5, variant);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QItemDelegate_QItemDelegate, textRectangle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *font_param = NULL, *text_param = NULL, result, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, painter, rectX, rectY, rectWidth, rectHeight, font;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(8, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_LONG(font)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 8, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &font_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, rectX);
	ZVAL_LONG(&_3, rectY);
	ZVAL_LONG(&_4, rectWidth);
	ZVAL_LONG(&_5, rectHeight);
	ZVAL_LONG(&_6, font);
	phpqt_qitemdelegate_text_rectangle(&result, &_0, &_1, &_2, &_3, &_4, &_5, &_6, &text);
	RETURN_CCTOR(&result);
}

