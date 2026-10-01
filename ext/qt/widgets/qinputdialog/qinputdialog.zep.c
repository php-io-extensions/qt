
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
#include "src/widgets-qinputdialog.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QInputDialog_QInputDialog)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QInputDialog, QInputDialog, qt, widgets_qinputdialog_qinputdialog, qt_widgets_qinputdialog_qinputdialog_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, open)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qinputdialog_open(&_0);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, staticMetaObject)
{

	RETURN_LONG(phpqt_qinputdialog_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, tr)
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
	phpqt_qinputdialog_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, new_)
{
	zval *parent__param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &parent__param, &flags);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qinputdialog_new(&_0, flags));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setInputMode)
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
	phpqt_qinputdialog_set_input_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, inputMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdialog_input_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setLabelText)
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
	phpqt_qinputdialog_set_label_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, labelText)
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
	phpqt_qinputdialog_label_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setOption)
{
	zend_bool on;
	zval *handle_param = NULL, *option_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &option_param, &on_param);
	if (!on_param) {
		on = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qinputdialog_set_option(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, testOption)
{
	zval *handle_param = NULL, *option_param = NULL, _0, _1;
	zend_long handle, option, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	r = phpqt_qinputdialog_test_option(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setOptions)
{
	zval *handle_param = NULL, *options_param = NULL, _0, _1;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	phpqt_qinputdialog_set_options(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, options)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdialog_options(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setTextValue)
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
	phpqt_qinputdialog_set_text_value(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, textValue)
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
	phpqt_qinputdialog_text_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setTextEchoMode)
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
	phpqt_qinputdialog_set_text_echo_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, textEchoMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdialog_text_echo_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setComboBoxEditable)
{
	zend_bool editable;
	zval *handle_param = NULL, *editable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(editable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &editable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (editable ? 1 : 0));
	phpqt_qinputdialog_set_combo_box_editable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, isComboBoxEditable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qinputdialog_is_combo_box_editable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setComboBoxItems)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval items;
	zval *handle_param = NULL, *items_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&items);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(items)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &items_param);
	zephir_get_arrval(&items, items_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qinputdialog_set_combo_box_items(&_0, &items);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, comboBoxItems)
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
	phpqt_qinputdialog_combo_box_items(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntValue)
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
	phpqt_qinputdialog_set_int_value(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdialog_int_value(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntMinimum)
{
	zval *handle_param = NULL, *min_param = NULL, _0, _1;
	zend_long handle, min;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(min)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &min_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, min);
	phpqt_qinputdialog_set_int_minimum(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intMinimum)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdialog_int_minimum(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntMaximum)
{
	zval *handle_param = NULL, *max_param = NULL, _0, _1;
	zend_long handle, max;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &max_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, max);
	phpqt_qinputdialog_set_int_maximum(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intMaximum)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdialog_int_maximum(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntRange)
{
	zval *handle_param = NULL, *min_param = NULL, *max_param = NULL, _0, _1, _2;
	zend_long handle, min, max;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(min)
		Z_PARAM_LONG(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &min_param, &max_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, min);
	ZVAL_LONG(&_2, max);
	phpqt_qinputdialog_set_int_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setIntStep)
{
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle, step;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, step);
	phpqt_qinputdialog_set_int_step(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intStep)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdialog_int_step(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleValue)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qinputdialog_set_double_value(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qinputdialog_double_value(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleMinimum)
{
	double min;
	zval *handle_param = NULL, *min_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(min)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &min_param);
	min = zephir_get_doubleval(min_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, min);
	phpqt_qinputdialog_set_double_minimum(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleMinimum)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qinputdialog_double_minimum(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleMaximum)
{
	double max;
	zval *handle_param = NULL, *max_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &max_param);
	max = zephir_get_doubleval(max_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, max);
	phpqt_qinputdialog_set_double_maximum(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleMaximum)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qinputdialog_double_maximum(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleRange)
{
	double min, max;
	zval *handle_param = NULL, *min_param = NULL, *max_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(min)
		Z_PARAM_ZVAL(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &min_param, &max_param);
	min = zephir_get_doubleval(min_param);
	max = zephir_get_doubleval(max_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, min);
	ZVAL_DOUBLE(&_2, max);
	phpqt_qinputdialog_set_double_range(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleDecimals)
{
	zval *handle_param = NULL, *decimals_param = NULL, _0, _1;
	zend_long handle, decimals;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(decimals)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &decimals_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, decimals);
	phpqt_qinputdialog_set_double_decimals(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleDecimals)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdialog_double_decimals(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setOkButtonText)
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
	phpqt_qinputdialog_set_ok_button_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, okButtonText)
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
	phpqt_qinputdialog_ok_button_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setCancelButtonText)
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
	phpqt_qinputdialog_set_cancel_button_text(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, cancelButtonText)
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
	phpqt_qinputdialog_cancel_button_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, openQObjectChar)
{
	zval *handle_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, _0, _1;
	zend_long handle, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &receiver_param, &member);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	phpqt_qinputdialog_open_q_object_char(&_0, &_1, member);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, minimumSizeHint)
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
	phpqt_qinputdialog_minimum_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, sizeHint)
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
	phpqt_qinputdialog_size_hint(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setVisible)
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
	phpqt_qinputdialog_set_visible(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, label, text;
	zval *parent__param = NULL, *title_param = NULL, *label_param = NULL, *echo_ = NULL, echo__sub, *text_param = NULL, *ok = NULL, ok_sub, *flags = NULL, flags_sub, *inputMethodHints = NULL, inputMethodHints_sub, __$null, result, _0;
	zend_long parent_;

	ZVAL_UNDEF(&echo__sub);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_UNDEF(&inputMethodHints_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&label);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 8)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(label)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(echo_)
		Z_PARAM_STR(text)
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_ZVAL_OR_NULL(flags)
		Z_PARAM_ZVAL_OR_NULL(inputMethodHints)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 5, &parent__param, &title_param, &label_param, &echo_, &text_param, &ok, &flags, &inputMethodHints);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&label, label_param);
	if (!echo_) {
		echo_ = &echo__sub;
		echo_ = &__$null;
	}
	if (!text_param) {
		ZEPHIR_INIT_VAR(&text);
		ZVAL_STRING(&text, "");
	} else {
		zephir_get_strval(&text, text_param);
	}
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	if (!inputMethodHints) {
		inputMethodHints = &inputMethodHints_sub;
		inputMethodHints = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	phpqt_qinputdialog_get_text(&result, &_0, &title, &label, echo_, &text, ok, flags, inputMethodHints);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getMultiLineText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, label, text;
	zval *parent__param = NULL, *title_param = NULL, *label_param = NULL, *text_param = NULL, *ok = NULL, ok_sub, *flags = NULL, flags_sub, *inputMethodHints = NULL, inputMethodHints_sub, __$null, result, _0;
	zend_long parent_;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_UNDEF(&inputMethodHints_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&label);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 7)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(label)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(text)
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_ZVAL_OR_NULL(flags)
		Z_PARAM_ZVAL_OR_NULL(inputMethodHints)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 4, &parent__param, &title_param, &label_param, &text_param, &ok, &flags, &inputMethodHints);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&label, label_param);
	if (!text_param) {
		ZEPHIR_INIT_VAR(&text);
		ZVAL_STRING(&text, "");
	} else {
		zephir_get_strval(&text, text_param);
	}
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	if (!inputMethodHints) {
		inputMethodHints = &inputMethodHints_sub;
		inputMethodHints = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	phpqt_qinputdialog_get_multi_line_text(&result, &_0, &title, &label, &text, ok, flags, inputMethodHints);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getItem)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool editable;
	zval items;
	zval title, label;
	zval *parent__param = NULL, *title_param = NULL, *label_param = NULL, *items_param = NULL, *current_param = NULL, *editable_param = NULL, *ok = NULL, ok_sub, *flags = NULL, flags_sub, *inputMethodHints = NULL, inputMethodHints_sub, __$null, result, _0, _1, _2;
	zend_long parent_, current;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_UNDEF(&inputMethodHints_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&label);
	ZVAL_UNDEF(&items);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 9)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(label)
		Z_PARAM_ARRAY(items)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(current)
		Z_PARAM_BOOL(editable)
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_ZVAL_OR_NULL(flags)
		Z_PARAM_ZVAL_OR_NULL(inputMethodHints)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 5, &parent__param, &title_param, &label_param, &items_param, &current_param, &editable_param, &ok, &flags, &inputMethodHints);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&label, label_param);
	zephir_get_arrval(&items, items_param);
	if (!current_param) {
		current = 0;
	} else {
		}
	if (!editable_param) {
		editable = 1;
	} else {
		}
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	if (!inputMethodHints) {
		inputMethodHints = &inputMethodHints_sub;
		inputMethodHints = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	ZVAL_LONG(&_1, current);
	ZVAL_BOOL(&_2, (editable ? 1 : 0));
	phpqt_qinputdialog_get_item(&result, &_0, &title, &label, &items, &_1, &_2, ok, flags, inputMethodHints);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title, label;
	zval *parent__param = NULL, *title_param = NULL, *label_param = NULL, *value_param = NULL, *minValue_param = NULL, *maxValue_param = NULL, *step_param = NULL, *ok = NULL, ok_sub, *flags = NULL, flags_sub, __$null, result, _0, _1, _2, _3, _4;
	zend_long parent_, value, minValue, maxValue, step;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&label);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 9)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(label)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(value)
		Z_PARAM_LONG(minValue)
		Z_PARAM_LONG(maxValue)
		Z_PARAM_LONG(step)
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 6, &parent__param, &title_param, &label_param, &value_param, &minValue_param, &maxValue_param, &step_param, &ok, &flags);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&label, label_param);
	if (!value_param) {
		value = 0;
	} else {
		}
	if (!minValue_param) {
		minValue = -2147483647;
	} else {
		}
	if (!maxValue_param) {
		maxValue = 2147483647;
	} else {
		}
	if (!step_param) {
		step = 1;
	} else {
		}
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	ZVAL_LONG(&_1, value);
	ZVAL_LONG(&_2, minValue);
	ZVAL_LONG(&_3, maxValue);
	ZVAL_LONG(&_4, step);
	phpqt_qinputdialog_get_int(&result, &_0, &title, &label, &_1, &_2, &_3, &_4, ok, flags);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, getDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double value, minValue, maxValue, step;
	zval title, label;
	zval *parent__param = NULL, *title_param = NULL, *label_param = NULL, *value_param = NULL, *minValue_param = NULL, *maxValue_param = NULL, *decimals_param = NULL, *ok = NULL, ok_sub, *flags = NULL, flags_sub, *step_param = NULL, __$null, result, _0, _1, _2, _3, _4, _5;
	zend_long parent_, decimals;

	ZVAL_UNDEF(&ok_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&title);
	ZVAL_UNDEF(&label);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 10)
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(title)
		Z_PARAM_STR(label)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(value)
		Z_PARAM_ZVAL(minValue)
		Z_PARAM_ZVAL(maxValue)
		Z_PARAM_LONG(decimals)
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_ZVAL_OR_NULL(flags)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 7, &parent__param, &title_param, &label_param, &value_param, &minValue_param, &maxValue_param, &decimals_param, &ok, &flags, &step_param);
	zephir_get_strval(&title, title_param);
	zephir_get_strval(&label, label_param);
	if (!value_param) {
		value = 0.0;
	} else {
		value = zephir_get_doubleval(value_param);
	}
	if (!minValue_param) {
		minValue = -2147483647.0;
	} else {
		minValue = zephir_get_doubleval(minValue_param);
	}
	if (!maxValue_param) {
		maxValue = 2147483647.0;
	} else {
		maxValue = zephir_get_doubleval(maxValue_param);
	}
	if (!decimals_param) {
		decimals = 1;
	} else {
		}
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	if (!step_param) {
		step = 1.0;
	} else {
		step = zephir_get_doubleval(step_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	ZVAL_DOUBLE(&_1, value);
	ZVAL_DOUBLE(&_2, minValue);
	ZVAL_DOUBLE(&_3, maxValue);
	ZVAL_LONG(&_4, decimals);
	ZVAL_DOUBLE(&_5, step);
	phpqt_qinputdialog_get_double(&result, &_0, &title, &label, &_1, &_2, &_3, &_4, ok, flags, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, setDoubleStep)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	phpqt_qinputdialog_set_double_step(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleStep)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qinputdialog_double_step(&_0));
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, textValueChanged)
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
	phpqt_qinputdialog_text_value_changed(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, textValueSelected)
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
	phpqt_qinputdialog_text_value_selected(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intValueChanged)
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
	phpqt_qinputdialog_int_value_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, intValueSelected)
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
	phpqt_qinputdialog_int_value_selected(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleValueChanged)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qinputdialog_double_value_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, doubleValueSelected)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qinputdialog_double_value_selected(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QInputDialog_QInputDialog, done)
{
	zval *handle_param = NULL, *result_param = NULL, _0, _1;
	zend_long handle, result;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(result)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &result_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, result);
	phpqt_qinputdialog_done(&_0, &_1);
}

