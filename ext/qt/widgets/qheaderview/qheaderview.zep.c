
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
#include "src/widgets-qheaderview.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QHeaderView_QHeaderView)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QHeaderView, QHeaderView, qt, widgets_qheaderview_qheaderview, qt_widgets_qheaderview_qheaderview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, staticMetaObject)
{

	RETURN_LONG(phpqt_qheaderview_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, tr)
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
	phpqt_qheaderview_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, new_)
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
	RETURN_LONG(phpqt_qheaderview_new(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setModel)
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
	phpqt_qheaderview_set_model(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, orientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_orientation(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, offset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_offset(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_length(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sizeHint)
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
	phpqt_qheaderview_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setVisible)
{
	zend_bool v;
	zval *handle_param = NULL, *v_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &v_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (v ? 1 : 0));
	phpqt_qheaderview_set_visible(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionSizeHint)
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
	RETURN_LONG(phpqt_qheaderview_section_size_hint(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, visualIndexAt)
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
	RETURN_LONG(phpqt_qheaderview_visual_index_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, logicalIndexAt)
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
	RETURN_LONG(phpqt_qheaderview_logical_index_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, logicalIndexAtIntInt)
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
	RETURN_LONG(phpqt_qheaderview_logical_index_at_int_int(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, logicalIndexAtQPoint)
{
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle, posX, posY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, posX);
	ZVAL_LONG(&_2, posY);
	RETURN_LONG(phpqt_qheaderview_logical_index_at_q_point(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionSize)
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
	RETURN_LONG(phpqt_qheaderview_section_size(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionPosition)
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
	RETURN_LONG(phpqt_qheaderview_section_position(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionViewportPosition)
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
	RETURN_LONG(phpqt_qheaderview_section_viewport_position(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, moveSection)
{
	zval *handle_param = NULL, *from_param = NULL, *to_param = NULL, _0, _1, _2;
	zend_long handle, from, to;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(from)
		Z_PARAM_LONG(to)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &from_param, &to_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	ZVAL_LONG(&_2, to);
	phpqt_qheaderview_move_section(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, swapSections)
{
	zval *handle_param = NULL, *first_param = NULL, *second_param = NULL, _0, _1, _2;
	zend_long handle, first, second;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(first)
		Z_PARAM_LONG(second)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &first_param, &second_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, first);
	ZVAL_LONG(&_2, second);
	phpqt_qheaderview_swap_sections(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, resizeSection)
{
	zval *handle_param = NULL, *logicalIndex_param = NULL, *size_param = NULL, _0, _1, _2;
	zend_long handle, logicalIndex, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &logicalIndex_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	ZVAL_LONG(&_2, size);
	phpqt_qheaderview_resize_section(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, resizeSections)
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
	phpqt_qheaderview_resize_sections(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, isSectionHidden)
{
	zval *handle_param = NULL, *logicalIndex_param = NULL, _0, _1;
	zend_long handle, logicalIndex, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &logicalIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	r = phpqt_qheaderview_is_section_hidden(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setSectionHidden)
{
	zend_bool hide;
	zval *handle_param = NULL, *logicalIndex_param = NULL, *hide_param = NULL, _0, _1, _2;
	zend_long handle, logicalIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
		Z_PARAM_BOOL(hide)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &logicalIndex_param, &hide_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	ZVAL_BOOL(&_2, (hide ? 1 : 0));
	phpqt_qheaderview_set_section_hidden(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, hiddenSectionCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_hidden_section_count(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, hideSection)
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
	phpqt_qheaderview_hide_section(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, showSection)
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
	phpqt_qheaderview_show_section(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_count(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, visualIndex)
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
	RETURN_LONG(phpqt_qheaderview_visual_index(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, logicalIndex)
{
	zval *handle_param = NULL, *visualIndex_param = NULL, _0, _1;
	zend_long handle, visualIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(visualIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &visualIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, visualIndex);
	RETURN_LONG(phpqt_qheaderview_logical_index(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setSectionsMovable)
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
	phpqt_qheaderview_set_sections_movable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionsMovable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_sections_movable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setFirstSectionMovable)
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
	phpqt_qheaderview_set_first_section_movable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, isFirstSectionMovable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_is_first_section_movable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setSectionsClickable)
{
	zend_bool clickable;
	zval *handle_param = NULL, *clickable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(clickable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &clickable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (clickable ? 1 : 0));
	phpqt_qheaderview_set_sections_clickable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionsClickable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_sections_clickable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setHighlightSections)
{
	zend_bool highlight;
	zval *handle_param = NULL, *highlight_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(highlight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &highlight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (highlight ? 1 : 0));
	phpqt_qheaderview_set_highlight_sections(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, highlightSections)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_highlight_sections(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionResizeMode)
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
	RETURN_LONG(phpqt_qheaderview_section_resize_mode(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setSectionResizeMode)
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
	phpqt_qheaderview_set_section_resize_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setSectionResizeModeIntQHeaderViewResizeMode)
{
	zval *handle_param = NULL, *logicalIndex_param = NULL, *mode_param = NULL, _0, _1, _2;
	zend_long handle, logicalIndex, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &logicalIndex_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	ZVAL_LONG(&_2, mode);
	phpqt_qheaderview_set_section_resize_mode_int_q_header_view_resize_mode(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setResizeContentsPrecision)
{
	zval *handle_param = NULL, *precision_param = NULL, _0, _1;
	zend_long handle, precision;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(precision)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &precision_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, precision);
	phpqt_qheaderview_set_resize_contents_precision(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, resizeContentsPrecision)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_resize_contents_precision(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, stretchSectionCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_stretch_section_count(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setSortIndicatorShown)
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
	phpqt_qheaderview_set_sort_indicator_shown(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, isSortIndicatorShown)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_is_sort_indicator_shown(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setSortIndicator)
{
	zval *handle_param = NULL, *logicalIndex_param = NULL, *order_param = NULL, _0, _1, _2;
	zend_long handle, logicalIndex, order;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
		Z_PARAM_LONG(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &logicalIndex_param, &order_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	ZVAL_LONG(&_2, order);
	phpqt_qheaderview_set_sort_indicator(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sortIndicatorSection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_sort_indicator_section(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sortIndicatorOrder)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_sort_indicator_order(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setSortIndicatorClearable)
{
	zend_bool clearable;
	zval *handle_param = NULL, *clearable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(clearable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &clearable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (clearable ? 1 : 0));
	phpqt_qheaderview_set_sort_indicator_clearable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, isSortIndicatorClearable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_is_sort_indicator_clearable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, stretchLastSection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_stretch_last_section(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setStretchLastSection)
{
	zend_bool stretch;
	zval *handle_param = NULL, *stretch_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(stretch)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &stretch_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (stretch ? 1 : 0));
	phpqt_qheaderview_set_stretch_last_section(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, cascadingSectionResizes)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_cascading_section_resizes(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setCascadingSectionResizes)
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
	phpqt_qheaderview_set_cascading_section_resizes(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, defaultSectionSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_default_section_size(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setDefaultSectionSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qheaderview_set_default_section_size(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, resetDefaultSectionSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qheaderview_reset_default_section_size(&_0);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, minimumSectionSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_minimum_section_size(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setMinimumSectionSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qheaderview_set_minimum_section_size(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, maximumSectionSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_maximum_section_size(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setMaximumSectionSize)
{
	zval *handle_param = NULL, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &size_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qheaderview_set_maximum_section_size(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, defaultAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_default_alignment(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setDefaultAlignment)
{
	zval *handle_param = NULL, *alignment_param = NULL, _0, _1;
	zend_long handle, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alignment);
	phpqt_qheaderview_set_default_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, doItemsLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qheaderview_do_items_layout(&_0);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionsMoved)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_sections_moved(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionsHidden)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_sections_hidden(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, saveState)
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
	phpqt_qheaderview_save_state(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, restoreState)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval state;
	zval *handle_param = NULL, *state_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&state);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(state)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &state_param);
	zephir_get_strval(&state, state_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qheaderview_restore_state(&_0, &state);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, reset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qheaderview_reset(&_0);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setOffset)
{
	zval *handle_param = NULL, *offset_param = NULL, _0, _1;
	zend_long handle, offset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &offset_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	phpqt_qheaderview_set_offset(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setOffsetToSectionPosition)
{
	zval *handle_param = NULL, *visualIndex_param = NULL, _0, _1;
	zend_long handle, visualIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(visualIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &visualIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, visualIndex);
	phpqt_qheaderview_set_offset_to_section_position(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setOffsetToLastSection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qheaderview_set_offset_to_last_section(&_0);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, headerDataChanged)
{
	zval *handle_param = NULL, *orientation_param = NULL, *logicalFirst_param = NULL, *logicalLast_param = NULL, _0, _1, _2, _3;
	zend_long handle, orientation, logicalFirst, logicalLast;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
		Z_PARAM_LONG(logicalFirst)
		Z_PARAM_LONG(logicalLast)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &orientation_param, &logicalFirst_param, &logicalLast_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	ZVAL_LONG(&_2, logicalFirst);
	ZVAL_LONG(&_3, logicalLast);
	phpqt_qheaderview_header_data_changed(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionMoved)
{
	zval *handle_param = NULL, *logicalIndex_param = NULL, *oldVisualIndex_param = NULL, *newVisualIndex_param = NULL, _0, _1, _2, _3;
	zend_long handle, logicalIndex, oldVisualIndex, newVisualIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
		Z_PARAM_LONG(oldVisualIndex)
		Z_PARAM_LONG(newVisualIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &logicalIndex_param, &oldVisualIndex_param, &newVisualIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	ZVAL_LONG(&_2, oldVisualIndex);
	ZVAL_LONG(&_3, newVisualIndex);
	phpqt_qheaderview_section_moved(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionResized)
{
	zval *handle_param = NULL, *logicalIndex_param = NULL, *oldSize_param = NULL, *newSize_param = NULL, _0, _1, _2, _3;
	zend_long handle, logicalIndex, oldSize, newSize;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
		Z_PARAM_LONG(oldSize)
		Z_PARAM_LONG(newSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &logicalIndex_param, &oldSize_param, &newSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	ZVAL_LONG(&_2, oldSize);
	ZVAL_LONG(&_3, newSize);
	phpqt_qheaderview_section_resized(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionPressed)
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
	phpqt_qheaderview_section_pressed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionClicked)
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
	phpqt_qheaderview_section_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionEntered)
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
	phpqt_qheaderview_section_entered(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionDoubleClicked)
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
	phpqt_qheaderview_section_double_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionCountChanged)
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
	phpqt_qheaderview_section_count_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionHandleDoubleClicked)
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
	phpqt_qheaderview_section_handle_double_clicked(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, geometriesChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qheaderview_geometries_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sortIndicatorChanged)
{
	zval *handle_param = NULL, *logicalIndex_param = NULL, *order_param = NULL, _0, _1, _2;
	zend_long handle, logicalIndex, order;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
		Z_PARAM_LONG(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &logicalIndex_param, &order_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	ZVAL_LONG(&_2, order);
	phpqt_qheaderview_sort_indicator_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sortIndicatorClearableChanged)
{
	zend_bool clearable;
	zval *handle_param = NULL, *clearable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(clearable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &clearable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (clearable ? 1 : 0));
	phpqt_qheaderview_sort_indicator_clearable_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, updateSection)
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
	phpqt_qheaderview_update_section(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, resizeSections2)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qheaderview_resize_sections2(&_0);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionsInserted)
{
	zval *handle_param = NULL, *parent__param = NULL, *logicalFirst_param = NULL, *logicalLast_param = NULL, _0, _1, _2, _3;
	zend_long handle, parent_, logicalFirst, logicalLast;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
		Z_PARAM_LONG(logicalFirst)
		Z_PARAM_LONG(logicalLast)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &parent__param, &logicalFirst_param, &logicalLast_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	ZVAL_LONG(&_2, logicalFirst);
	ZVAL_LONG(&_3, logicalLast);
	phpqt_qheaderview_sections_inserted(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionsAboutToBeRemoved)
{
	zval *handle_param = NULL, *parent__param = NULL, *logicalFirst_param = NULL, *logicalLast_param = NULL, _0, _1, _2, _3;
	zend_long handle, parent_, logicalFirst, logicalLast;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
		Z_PARAM_LONG(logicalFirst)
		Z_PARAM_LONG(logicalLast)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &parent__param, &logicalFirst_param, &logicalLast_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	ZVAL_LONG(&_2, logicalFirst);
	ZVAL_LONG(&_3, logicalLast);
	phpqt_qheaderview_sections_about_to_be_removed(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, initialize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qheaderview_initialize(&_0);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, initializeSections)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qheaderview_initialize_sections(&_0);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, initializeSectionsIntInt)
{
	zval *handle_param = NULL, *start_param = NULL, *end_param = NULL, _0, _1, _2;
	zend_long handle, start, end;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(start)
		Z_PARAM_LONG(end)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &start_param, &end_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, start);
	ZVAL_LONG(&_2, end);
	phpqt_qheaderview_initialize_sections_int_int(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, currentChanged)
{
	zval *handle_param = NULL, *current_param = NULL, *old_param = NULL, _0, _1, _2;
	zend_long handle, current, old;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(current)
		Z_PARAM_LONG(old)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &current_param, &old_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, current);
	ZVAL_LONG(&_2, old);
	phpqt_qheaderview_current_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, event)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	r = phpqt_qheaderview_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, paintEvent)
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
	phpqt_qheaderview_paint_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, mousePressEvent)
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
	phpqt_qheaderview_mouse_press_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, mouseMoveEvent)
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
	phpqt_qheaderview_mouse_move_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, mouseReleaseEvent)
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
	phpqt_qheaderview_mouse_release_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, mouseDoubleClickEvent)
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
	phpqt_qheaderview_mouse_double_click_event(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, viewportEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	r = phpqt_qheaderview_viewport_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, paintSection)
{
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *logicalIndex_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, painter, rectX, rectY, rectWidth, rectHeight, logicalIndex;

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
		Z_PARAM_LONG(logicalIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &logicalIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, rectX);
	ZVAL_LONG(&_3, rectY);
	ZVAL_LONG(&_4, rectWidth);
	ZVAL_LONG(&_5, rectHeight);
	ZVAL_LONG(&_6, logicalIndex);
	phpqt_qheaderview_paint_section(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, sectionSizeFromContents)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *logicalIndex_param = NULL, result, _0, _1;
	zend_long handle, logicalIndex;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(logicalIndex)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &logicalIndex_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, logicalIndex);
	phpqt_qheaderview_section_size_from_contents(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, horizontalOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_horizontal_offset(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, verticalOffset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qheaderview_vertical_offset(&_0));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, updateGeometries)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qheaderview_update_geometries(&_0);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, scrollContentsBy)
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
	phpqt_qheaderview_scroll_contents_by(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, dataChanged)
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
	phpqt_qheaderview_data_changed(&_0, &_1, &_2, roles);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, rowsInserted)
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
	phpqt_qheaderview_rows_inserted(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, visualRect)
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
	phpqt_qheaderview_visual_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, scrollTo)
{
	zval *handle_param = NULL, *index_param = NULL, *hint_param = NULL, _0, _1, _2;
	zend_long handle, index, hint;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(hint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &hint_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, hint);
	phpqt_qheaderview_scroll_to(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, indexAt)
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
	RETURN_LONG(phpqt_qheaderview_index_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, isIndexHidden)
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
	r = phpqt_qheaderview_is_index_hidden(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, moveCursor)
{
	zval *handle_param = NULL, *arg0_param = NULL, *arg1_param = NULL, _0, _1, _2;
	zend_long handle, arg0, arg1;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &arg0_param, &arg1_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	ZVAL_LONG(&_2, arg1);
	RETURN_LONG(phpqt_qheaderview_move_cursor(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, setSelection)
{
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *flags_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, rectX, rectY, rectWidth, rectHeight, flags;

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
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &flags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	ZVAL_LONG(&_5, flags);
	phpqt_qheaderview_set_selection(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, visualRegionForSelection)
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
	RETURN_LONG(phpqt_qheaderview_visual_region_for_selection(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, initStyleOptionForIndex)
{
	zval *handle_param = NULL, *option_param = NULL, *logicalIndex_param = NULL, _0, _1, _2;
	zend_long handle, option, logicalIndex;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_LONG(logicalIndex)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &option_param, &logicalIndex_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_LONG(&_2, logicalIndex);
	phpqt_qheaderview_init_style_option_for_index(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QHeaderView_QHeaderView, initStyleOption)
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
	phpqt_qheaderview_init_style_option(&_0, &_1);
}

