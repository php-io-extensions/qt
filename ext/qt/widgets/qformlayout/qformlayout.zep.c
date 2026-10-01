
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
#include "src/widgets-qformlayout.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QFormLayout_QFormLayout)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QFormLayout, QFormLayout, qt, widgets_qformlayout_qformlayout, qt_widgets_qformlayout_qformlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, staticMetaObject)
{

	RETURN_LONG(phpqt_qformlayout_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, tr)
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
	phpqt_qformlayout_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, new_)
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
	RETURN_LONG(phpqt_qformlayout_new(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setFieldGrowthPolicy)
{
	zval *handle_param = NULL, *policy_param = NULL, _0, _1;
	zend_long handle, policy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(policy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &policy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, policy);
	phpqt_qformlayout_set_field_growth_policy(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, fieldGrowthPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_field_growth_policy(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setRowWrapPolicy)
{
	zval *handle_param = NULL, *policy_param = NULL, _0, _1;
	zend_long handle, policy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(policy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &policy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, policy);
	phpqt_qformlayout_set_row_wrap_policy(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, rowWrapPolicy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_row_wrap_policy(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setLabelAlignment)
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
	phpqt_qformlayout_set_label_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, labelAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_label_alignment(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setFormAlignment)
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
	phpqt_qformlayout_set_form_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, formAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_form_alignment(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setHorizontalSpacing)
{
	zval *handle_param = NULL, *spacing_param = NULL, _0, _1;
	zend_long handle, spacing;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, spacing);
	phpqt_qformlayout_set_horizontal_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, horizontalSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_horizontal_spacing(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setVerticalSpacing)
{
	zval *handle_param = NULL, *spacing_param = NULL, _0, _1;
	zend_long handle, spacing;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(spacing)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &spacing_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, spacing);
	phpqt_qformlayout_set_vertical_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, verticalSpacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_vertical_spacing(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, spacing)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_spacing(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setSpacing)
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
	phpqt_qformlayout_set_spacing(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRow)
{
	zval *handle_param = NULL, *label_param = NULL, *field_param = NULL, _0, _1, _2;
	zend_long handle, label, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(label)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &label_param, &field_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, label);
	ZVAL_LONG(&_2, field);
	phpqt_qformlayout_add_row(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQWidgetQLayout)
{
	zval *handle_param = NULL, *label_param = NULL, *field_param = NULL, _0, _1, _2;
	zend_long handle, label, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(label)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &label_param, &field_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, label);
	ZVAL_LONG(&_2, field);
	phpqt_qformlayout_add_row_q_widget_q_layout(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQStringQWidget)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval labelText;
	zval *handle_param = NULL, *labelText_param = NULL, *field_param = NULL, _0, _1;
	zend_long handle, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&labelText);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(labelText)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &labelText_param, &field_param);
	zephir_get_strval(&labelText, labelText_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, field);
	phpqt_qformlayout_add_row_q_string_q_widget(&_0, &labelText, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQStringQLayout)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval labelText;
	zval *handle_param = NULL, *labelText_param = NULL, *field_param = NULL, _0, _1;
	zend_long handle, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&labelText);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(labelText)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &labelText_param, &field_param);
	zephir_get_strval(&labelText, labelText_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, field);
	phpqt_qformlayout_add_row_q_string_q_layout(&_0, &labelText, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQWidget)
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
	phpqt_qformlayout_add_row_q_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addRowQLayout)
{
	zval *handle_param = NULL, *layout_param = NULL, _0, _1;
	zend_long handle, layout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layout);
	phpqt_qformlayout_add_row_q_layout(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRow)
{
	zval *handle_param = NULL, *row_param = NULL, *label_param = NULL, *field_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, label, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(label)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &label_param, &field_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, label);
	ZVAL_LONG(&_3, field);
	phpqt_qformlayout_insert_row(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQWidgetQLayout)
{
	zval *handle_param = NULL, *row_param = NULL, *label_param = NULL, *field_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, label, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(label)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &label_param, &field_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, label);
	ZVAL_LONG(&_3, field);
	phpqt_qformlayout_insert_row_int_q_widget_q_layout(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQStringQWidget)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval labelText;
	zval *handle_param = NULL, *row_param = NULL, *labelText_param = NULL, *field_param = NULL, _0, _1, _2;
	zend_long handle, row, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&labelText);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_STR(labelText)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &row_param, &labelText_param, &field_param);
	zephir_get_strval(&labelText, labelText_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, field);
	phpqt_qformlayout_insert_row_int_q_string_q_widget(&_0, &_1, &labelText, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQStringQLayout)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval labelText;
	zval *handle_param = NULL, *row_param = NULL, *labelText_param = NULL, *field_param = NULL, _0, _1, _2;
	zend_long handle, row, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&labelText);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_STR(labelText)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &row_param, &labelText_param, &field_param);
	zephir_get_strval(&labelText, labelText_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, field);
	phpqt_qformlayout_insert_row_int_q_string_q_layout(&_0, &_1, &labelText, &_2);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQWidget)
{
	zval *handle_param = NULL, *row_param = NULL, *widget_param = NULL, _0, _1, _2;
	zend_long handle, row, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, widget);
	phpqt_qformlayout_insert_row_int_q_widget(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, insertRowIntQLayout)
{
	zval *handle_param = NULL, *row_param = NULL, *layout_param = NULL, _0, _1, _2;
	zend_long handle, row, layout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &layout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, layout);
	phpqt_qformlayout_insert_row_int_q_layout(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, removeRow)
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
	phpqt_qformlayout_remove_row(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, removeRowQWidget)
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
	phpqt_qformlayout_remove_row_q_widget(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, removeRowQLayout)
{
	zval *handle_param = NULL, *layout_param = NULL, _0, _1;
	zend_long handle, layout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layout);
	phpqt_qformlayout_remove_row_q_layout(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, takeRow)
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
	RETURN_LONG(phpqt_qformlayout_take_row(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, takeRowQWidget)
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
	RETURN_LONG(phpqt_qformlayout_take_row_q_widget(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, takeRowQLayout)
{
	zval *handle_param = NULL, *layout_param = NULL, _0, _1;
	zend_long handle, layout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layout);
	RETURN_LONG(phpqt_qformlayout_take_row_q_layout(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setItem)
{
	zval *handle_param = NULL, *row_param = NULL, *role_param = NULL, *item_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, role, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(role)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &role_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, role);
	ZVAL_LONG(&_3, item);
	phpqt_qformlayout_set_item(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setWidget)
{
	zval *handle_param = NULL, *row_param = NULL, *role_param = NULL, *widget_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, role, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(role)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &role_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, role);
	ZVAL_LONG(&_3, widget);
	phpqt_qformlayout_set_widget(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setLayout)
{
	zval *handle_param = NULL, *row_param = NULL, *role_param = NULL, *layout_param = NULL, _0, _1, _2, _3;
	zend_long handle, row, role, layout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(role)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &row_param, &role_param, &layout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, role);
	ZVAL_LONG(&_3, layout);
	phpqt_qformlayout_set_layout(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setRowVisible)
{
	zend_bool on;
	zval *handle_param = NULL, *row_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, row;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qformlayout_set_row_visible(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setRowVisibleQWidgetBool)
{
	zend_bool on;
	zval *handle_param = NULL, *widget_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, widget;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &widget_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qformlayout_set_row_visible_q_widget_bool(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setRowVisibleQLayoutBool)
{
	zend_bool on;
	zval *handle_param = NULL, *layout_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, layout;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layout)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &layout_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layout);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qformlayout_set_row_visible_q_layout_bool(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, isRowVisible)
{
	zval *handle_param = NULL, *row_param = NULL, _0, _1;
	zend_long handle, row, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &row_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	r = phpqt_qformlayout_is_row_visible(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, isRowVisibleQWidget)
{
	zval *handle_param = NULL, *widget_param = NULL, _0, _1;
	zend_long handle, widget, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &widget_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	r = phpqt_qformlayout_is_row_visible_q_widget(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, isRowVisibleQLayout)
{
	zval *handle_param = NULL, *layout_param = NULL, _0, _1;
	zend_long handle, layout, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &layout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layout);
	r = phpqt_qformlayout_is_row_visible_q_layout(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, itemAt)
{
	zval *handle_param = NULL, *row_param = NULL, *role_param = NULL, _0, _1, _2;
	zend_long handle, row, role;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(role)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &row_param, &role_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, row);
	ZVAL_LONG(&_2, role);
	RETURN_LONG(phpqt_qformlayout_item_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, getItemPosition)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *index_param = NULL, *rowPtr = NULL, rowPtr_sub, *rolePtr = NULL, rolePtr_sub, result, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&rowPtr_sub);
	ZVAL_UNDEF(&rolePtr_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_ZVAL(rowPtr)
		Z_PARAM_ZVAL(rolePtr)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &index_param, &rowPtr, &rolePtr);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	phpqt_qformlayout_get_item_position(&result, &_0, &_1, rowPtr, rolePtr);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, getWidgetPosition)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *widget_param = NULL, *rowPtr = NULL, rowPtr_sub, *rolePtr = NULL, rolePtr_sub, result, _0, _1;
	zend_long handle, widget;

	ZVAL_UNDEF(&rowPtr_sub);
	ZVAL_UNDEF(&rolePtr_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(widget)
		Z_PARAM_ZVAL(rowPtr)
		Z_PARAM_ZVAL(rolePtr)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &widget_param, &rowPtr, &rolePtr);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, widget);
	phpqt_qformlayout_get_widget_position(&result, &_0, &_1, rowPtr, rolePtr);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, getLayoutPosition)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *layout_param = NULL, *rowPtr = NULL, rowPtr_sub, *rolePtr = NULL, rolePtr_sub, result, _0, _1;
	zend_long handle, layout;

	ZVAL_UNDEF(&rowPtr_sub);
	ZVAL_UNDEF(&rolePtr_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(layout)
		Z_PARAM_ZVAL(rowPtr)
		Z_PARAM_ZVAL(rolePtr)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &layout_param, &rowPtr, &rolePtr);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, layout);
	phpqt_qformlayout_get_layout_position(&result, &_0, &_1, rowPtr, rolePtr);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, labelForField)
{
	zval *handle_param = NULL, *field_param = NULL, _0, _1;
	zend_long handle, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &field_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, field);
	RETURN_LONG(phpqt_qformlayout_label_for_field(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, labelForFieldQLayout)
{
	zval *handle_param = NULL, *field_param = NULL, _0, _1;
	zend_long handle, field;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(field)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &field_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, field);
	RETURN_LONG(phpqt_qformlayout_label_for_field_q_layout(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, addItem)
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
	phpqt_qformlayout_add_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, itemAtInt)
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
	RETURN_LONG(phpqt_qformlayout_item_at_int(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, takeAt)
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
	RETURN_LONG(phpqt_qformlayout_take_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, setGeometry)
{
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	phpqt_qformlayout_set_geometry(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, minimumSize)
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
	phpqt_qformlayout_minimum_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, sizeHint)
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
	phpqt_qformlayout_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, invalidate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qformlayout_invalidate(&_0);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, hasHeightForWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qformlayout_has_height_for_width(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, heightForWidth)
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
	RETURN_LONG(phpqt_qformlayout_height_for_width(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, expandingDirections)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_expanding_directions(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_count(&_0));
}

PHP_METHOD(Qt_Widgets_QFormLayout_QFormLayout, rowCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qformlayout_row_count(&_0));
}

