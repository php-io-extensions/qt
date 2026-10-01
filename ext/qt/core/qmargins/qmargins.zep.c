
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
#include "src/core-qmargins.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMargins_QMargins)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMargins, QMargins, qt, core_qmargins_qmargins, qt_core_qmargins_qmargins_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMargins_QMargins, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qmargins_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMargins_QMargins, newIntIntIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *left_param = NULL, *top_param = NULL, *right_param = NULL, *bottom_param = NULL, result, _0, _1, _2, _3;
	zend_long left, top, right, bottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(left)
		Z_PARAM_LONG(top)
		Z_PARAM_LONG(right)
		Z_PARAM_LONG(bottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &left_param, &top_param, &right_param, &bottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, left);
	ZVAL_LONG(&_1, top);
	ZVAL_LONG(&_2, right);
	ZVAL_LONG(&_3, bottom);
	phpqt_qmargins_new_int_int_int_int(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMargins_QMargins, isNull)
{
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	zend_long selfLeft, selfTop, selfRight, selfBottom, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	r = phpqt_qmargins_is_null(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMargins_QMargins, left)
{
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	zend_long selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	RETURN_LONG(phpqt_qmargins_left(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QMargins_QMargins, top)
{
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	zend_long selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	RETURN_LONG(phpqt_qmargins_top(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QMargins_QMargins, right)
{
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	zend_long selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	RETURN_LONG(phpqt_qmargins_right(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QMargins_QMargins, bottom)
{
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	zend_long selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	RETURN_LONG(phpqt_qmargins_bottom(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QMargins_QMargins, setLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, *left_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfLeft, selfTop, selfRight, selfBottom, left;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
		Z_PARAM_LONG(left)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param, &left_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	ZVAL_LONG(&_4, left);
	phpqt_qmargins_set_left(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMargins_QMargins, setTop)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, *top_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfLeft, selfTop, selfRight, selfBottom, top;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
		Z_PARAM_LONG(top)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param, &top_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	ZVAL_LONG(&_4, top);
	phpqt_qmargins_set_top(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMargins_QMargins, setRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, *right_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfLeft, selfTop, selfRight, selfBottom, right;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
		Z_PARAM_LONG(right)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param, &right_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	ZVAL_LONG(&_4, right);
	phpqt_qmargins_set_right(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMargins_QMargins, setBottom)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, *bottom_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfLeft, selfTop, selfRight, selfBottom, bottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
		Z_PARAM_LONG(bottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param, &bottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	ZVAL_LONG(&_4, bottom);
	phpqt_qmargins_set_bottom(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMargins_QMargins, toMarginsF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, result, _0, _1, _2, _3;
	zend_long selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfLeft)
		Z_PARAM_LONG(selfTop)
		Z_PARAM_LONG(selfRight)
		Z_PARAM_LONG(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfLeft);
	ZVAL_LONG(&_1, selfTop);
	ZVAL_LONG(&_2, selfRight);
	ZVAL_LONG(&_3, selfBottom);
	phpqt_qmargins_to_margins_f(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

