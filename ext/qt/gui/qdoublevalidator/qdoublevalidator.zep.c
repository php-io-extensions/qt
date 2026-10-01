
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
#include "src/gui-qdoublevalidator.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QDoubleValidator_QDoubleValidator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QDoubleValidator, QDoubleValidator, qt, gui_qdoublevalidator_qdoublevalidator, qt_gui_qdoublevalidator_qdoublevalidator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, staticMetaObject)
{

	RETURN_LONG(phpqt_qdoublevalidator_static_meta_object());
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, tr)
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
	phpqt_qdoublevalidator_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, new_)
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
	RETURN_LONG(phpqt_qdoublevalidator_new(&_0));
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, newDoubleDoubleIntQObject)
{
	zend_long decimals, parent_;
	zval *bottom_param = NULL, *top_param = NULL, *decimals_param = NULL, *parent__param = NULL, _0, _1, _2, _3;
	double bottom, top;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(top)
		Z_PARAM_LONG(decimals)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &bottom_param, &top_param, &decimals_param, &parent__param);
	bottom = zephir_get_doubleval(bottom_param);
	top = zephir_get_doubleval(top_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_DOUBLE(&_0, bottom);
	ZVAL_DOUBLE(&_1, top);
	ZVAL_LONG(&_2, decimals);
	ZVAL_LONG(&_3, parent_);
	RETURN_LONG(phpqt_qdoublevalidator_new_double_double_int_q_object(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, validate)
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
	phpqt_qdoublevalidator_validate(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, fixup)
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
	phpqt_qdoublevalidator_fixup(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setRange)
{
	double bottom, top;
	zval *handle_param = NULL, *bottom_param = NULL, *top_param = NULL, *decimals_param = NULL, _0, _1, _2, _3;
	zend_long handle, decimals;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(top)
		Z_PARAM_LONG(decimals)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &bottom_param, &top_param, &decimals_param);
	bottom = zephir_get_doubleval(bottom_param);
	top = zephir_get_doubleval(top_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, bottom);
	ZVAL_DOUBLE(&_2, top);
	ZVAL_LONG(&_3, decimals);
	phpqt_qdoublevalidator_set_range(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setRangeDoubleDouble)
{
	double bottom, top;
	zval *handle_param = NULL, *bottom_param = NULL, *top_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(top)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &bottom_param, &top_param);
	bottom = zephir_get_doubleval(bottom_param);
	top = zephir_get_doubleval(top_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, bottom);
	ZVAL_DOUBLE(&_2, top);
	phpqt_qdoublevalidator_set_range_double_double(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setBottom)
{
	double arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	arg0 = zephir_get_doubleval(arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0);
	phpqt_qdoublevalidator_set_bottom(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setTop)
{
	double arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	arg0 = zephir_get_doubleval(arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0);
	phpqt_qdoublevalidator_set_top(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setDecimals)
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
	phpqt_qdoublevalidator_set_decimals(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, setNotation)
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
	phpqt_qdoublevalidator_set_notation(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, bottom)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qdoublevalidator_bottom(&_0));
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, top)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qdoublevalidator_top(&_0));
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, decimals)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdoublevalidator_decimals(&_0));
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, notation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdoublevalidator_notation(&_0));
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, bottomChanged)
{
	double bottom;
	zval *handle_param = NULL, *bottom_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(bottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &bottom_param);
	bottom = zephir_get_doubleval(bottom_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, bottom);
	phpqt_qdoublevalidator_bottom_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, topChanged)
{
	double top;
	zval *handle_param = NULL, *top_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(top)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &top_param);
	top = zephir_get_doubleval(top_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, top);
	phpqt_qdoublevalidator_top_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, decimalsChanged)
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
	phpqt_qdoublevalidator_decimals_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QDoubleValidator_QDoubleValidator, notationChanged)
{
	zval *handle_param = NULL, *notation_param = NULL, _0, _1;
	zend_long handle, notation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(notation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &notation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, notation);
	phpqt_qdoublevalidator_notation_changed(&_0, &_1);
}

