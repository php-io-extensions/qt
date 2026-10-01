
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
#include "src/core-qmarginsf.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMarginsF_QMarginsF)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMarginsF, QMarginsF, qt, core_qmarginsf_qmarginsf, qt_core_qmarginsf_qmarginsf_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qmarginsf_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, newQrealQrealQrealQreal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *left_param = NULL, *top_param = NULL, *right_param = NULL, *bottom_param = NULL, result, _0, _1, _2, _3;
	double left, top, right, bottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(right)
		Z_PARAM_ZVAL(bottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &left_param, &top_param, &right_param, &bottom_param);
	left = zephir_get_doubleval(left_param);
	top = zephir_get_doubleval(top_param);
	right = zephir_get_doubleval(right_param);
	bottom = zephir_get_doubleval(bottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, left);
	ZVAL_DOUBLE(&_1, top);
	ZVAL_DOUBLE(&_2, right);
	ZVAL_DOUBLE(&_3, bottom);
	phpqt_qmarginsf_new_qreal_qreal_qreal_qreal(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, newQMargins)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, result, _0, _1, _2, _3;
	zend_long marginsLeft, marginsTop, marginsRight, marginsBottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(marginsLeft)
		Z_PARAM_LONG(marginsTop)
		Z_PARAM_LONG(marginsRight)
		Z_PARAM_LONG(marginsBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, marginsLeft);
	ZVAL_LONG(&_1, marginsTop);
	ZVAL_LONG(&_2, marginsRight);
	ZVAL_LONG(&_3, marginsBottom);
	phpqt_qmarginsf_new_q_margins(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, isNull)
{
	zend_long r = 0;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	double selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	r = phpqt_qmarginsf_is_null(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, left)
{
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	double selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	RETURN_DOUBLE(phpqt_qmarginsf_left(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, top)
{
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	double selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	RETURN_DOUBLE(phpqt_qmarginsf_top(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, right)
{
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	double selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	RETURN_DOUBLE(phpqt_qmarginsf_right(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, bottom)
{
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, _0, _1, _2, _3;
	double selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	RETURN_DOUBLE(phpqt_qmarginsf_bottom(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, setLeft)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, *aleft_param = NULL, result, _0, _1, _2, _3, _4;
	double selfLeft, selfTop, selfRight, selfBottom, aleft;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
		Z_PARAM_ZVAL(aleft)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param, &aleft_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	aleft = zephir_get_doubleval(aleft_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	ZVAL_DOUBLE(&_4, aleft);
	phpqt_qmarginsf_set_left(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, setTop)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, *atop_param = NULL, result, _0, _1, _2, _3, _4;
	double selfLeft, selfTop, selfRight, selfBottom, atop;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
		Z_PARAM_ZVAL(atop)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param, &atop_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	atop = zephir_get_doubleval(atop_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	ZVAL_DOUBLE(&_4, atop);
	phpqt_qmarginsf_set_top(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, setRight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, *aright_param = NULL, result, _0, _1, _2, _3, _4;
	double selfLeft, selfTop, selfRight, selfBottom, aright;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
		Z_PARAM_ZVAL(aright)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param, &aright_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	aright = zephir_get_doubleval(aright_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	ZVAL_DOUBLE(&_4, aright);
	phpqt_qmarginsf_set_right(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, setBottom)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, *abottom_param = NULL, result, _0, _1, _2, _3, _4;
	double selfLeft, selfTop, selfRight, selfBottom, abottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
		Z_PARAM_ZVAL(abottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param, &abottom_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	abottom = zephir_get_doubleval(abottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	ZVAL_DOUBLE(&_4, abottom);
	phpqt_qmarginsf_set_bottom(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QMarginsF_QMarginsF, toMargins)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfLeft_param = NULL, *selfTop_param = NULL, *selfRight_param = NULL, *selfBottom_param = NULL, result, _0, _1, _2, _3;
	double selfLeft, selfTop, selfRight, selfBottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfLeft)
		Z_PARAM_ZVAL(selfTop)
		Z_PARAM_ZVAL(selfRight)
		Z_PARAM_ZVAL(selfBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfLeft_param, &selfTop_param, &selfRight_param, &selfBottom_param);
	selfLeft = zephir_get_doubleval(selfLeft_param);
	selfTop = zephir_get_doubleval(selfTop_param);
	selfRight = zephir_get_doubleval(selfRight_param);
	selfBottom = zephir_get_doubleval(selfBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfLeft);
	ZVAL_DOUBLE(&_1, selfTop);
	ZVAL_DOUBLE(&_2, selfRight);
	ZVAL_DOUBLE(&_3, selfBottom);
	phpqt_qmarginsf_to_margins(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

