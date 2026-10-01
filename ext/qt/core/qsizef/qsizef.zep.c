
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
#include "src/core-qsizef.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QSizeF_QSizeF)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QSizeF, QSizeF, qt, core_qsizef_qsizef, qt_core_qsizef_qsizef_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsizef_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, newQSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *szWidth_param = NULL, *szHeight_param = NULL, result, _0, _1;
	zend_long szWidth, szHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(szWidth)
		Z_PARAM_LONG(szHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &szWidth_param, &szHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, szWidth);
	ZVAL_LONG(&_1, szHeight);
	phpqt_qsizef_new_q_size(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, newQrealQreal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *w_param = NULL, *h_param = NULL, result, _0, _1;
	double w, h;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &w_param, &h_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, w);
	ZVAL_DOUBLE(&_1, h);
	phpqt_qsizef_new_qreal_qreal(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, isNull)
{
	zend_long r = 0;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	double selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	r = phpqt_qsizef_is_null(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, isEmpty)
{
	zend_long r = 0;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	double selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	r = phpqt_qsizef_is_empty(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, isValid)
{
	zend_long r = 0;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	double selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	r = phpqt_qsizef_is_valid(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, width)
{
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	double selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	RETURN_DOUBLE(phpqt_qsizef_width(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, height)
{
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	double selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	RETURN_DOUBLE(phpqt_qsizef_height(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, setWidth)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *w_param = NULL, result, _0, _1, _2;
	double selfWidth, selfHeight, w;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &selfWidth_param, &selfHeight_param, &w_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	w = zephir_get_doubleval(w_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, w);
	phpqt_qsizef_set_width(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, setHeight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *h_param = NULL, result, _0, _1, _2;
	double selfWidth, selfHeight, h;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &selfWidth_param, &selfHeight_param, &h_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	h = zephir_get_doubleval(h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, h);
	phpqt_qsizef_set_height(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, transpose)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1;
	double selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfWidth_param, &selfHeight_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	phpqt_qsizef_transpose(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, transposed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1;
	double selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfWidth_param, &selfHeight_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	phpqt_qsizef_transposed(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, scale)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long mode;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *w_param = NULL, *h_param = NULL, *mode_param = NULL, result, _0, _1, _2, _3, _4;
	double selfWidth, selfHeight, w, h;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfWidth_param, &selfHeight_param, &w_param, &h_param, &mode_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, w);
	ZVAL_DOUBLE(&_3, h);
	ZVAL_LONG(&_4, mode);
	phpqt_qsizef_scale(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, scaleQSizeFQtAspectRatioMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long mode;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *sWidth_param = NULL, *sHeight_param = NULL, *mode_param = NULL, result, _0, _1, _2, _3, _4;
	double selfWidth, selfHeight, sWidth, sHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(sWidth)
		Z_PARAM_ZVAL(sHeight)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfWidth_param, &selfHeight_param, &sWidth_param, &sHeight_param, &mode_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	sWidth = zephir_get_doubleval(sWidth_param);
	sHeight = zephir_get_doubleval(sHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, sWidth);
	ZVAL_DOUBLE(&_3, sHeight);
	ZVAL_LONG(&_4, mode);
	phpqt_qsizef_scale_q_size_f_qt_aspect_ratio_mode(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, scaled)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long mode;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *w_param = NULL, *h_param = NULL, *mode_param = NULL, result, _0, _1, _2, _3, _4;
	double selfWidth, selfHeight, w, h;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(w)
		Z_PARAM_ZVAL(h)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfWidth_param, &selfHeight_param, &w_param, &h_param, &mode_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	w = zephir_get_doubleval(w_param);
	h = zephir_get_doubleval(h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, w);
	ZVAL_DOUBLE(&_3, h);
	ZVAL_LONG(&_4, mode);
	phpqt_qsizef_scaled(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, scaledQSizeFQtAspectRatioMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long mode;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *sWidth_param = NULL, *sHeight_param = NULL, *mode_param = NULL, result, _0, _1, _2, _3, _4;
	double selfWidth, selfHeight, sWidth, sHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(sWidth)
		Z_PARAM_ZVAL(sHeight)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfWidth_param, &selfHeight_param, &sWidth_param, &sHeight_param, &mode_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	sWidth = zephir_get_doubleval(sWidth_param);
	sHeight = zephir_get_doubleval(sHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, sWidth);
	ZVAL_DOUBLE(&_3, sHeight);
	ZVAL_LONG(&_4, mode);
	phpqt_qsizef_scaled_q_size_f_qt_aspect_ratio_mode(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, expandedTo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, result, _0, _1, _2, _3;
	double selfWidth, selfHeight, arg0Width, arg0Height;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(arg0Width)
		Z_PARAM_ZVAL(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfWidth_param, &selfHeight_param, &arg0Width_param, &arg0Height_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	arg0Width = zephir_get_doubleval(arg0Width_param);
	arg0Height = zephir_get_doubleval(arg0Height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, arg0Width);
	ZVAL_DOUBLE(&_3, arg0Height);
	phpqt_qsizef_expanded_to(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, boundedTo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, result, _0, _1, _2, _3;
	double selfWidth, selfHeight, arg0Width, arg0Height;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(arg0Width)
		Z_PARAM_ZVAL(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfWidth_param, &selfHeight_param, &arg0Width_param, &arg0Height_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	arg0Width = zephir_get_doubleval(arg0Width_param);
	arg0Height = zephir_get_doubleval(arg0Height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, arg0Width);
	ZVAL_DOUBLE(&_3, arg0Height);
	phpqt_qsizef_bounded_to(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, grownBy)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *mLeft_param = NULL, *mTop_param = NULL, *mRight_param = NULL, *mBottom_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfWidth, selfHeight, mLeft, mTop, mRight, mBottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(mLeft)
		Z_PARAM_ZVAL(mTop)
		Z_PARAM_ZVAL(mRight)
		Z_PARAM_ZVAL(mBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfWidth_param, &selfHeight_param, &mLeft_param, &mTop_param, &mRight_param, &mBottom_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	mLeft = zephir_get_doubleval(mLeft_param);
	mTop = zephir_get_doubleval(mTop_param);
	mRight = zephir_get_doubleval(mRight_param);
	mBottom = zephir_get_doubleval(mBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, mLeft);
	ZVAL_DOUBLE(&_3, mTop);
	ZVAL_DOUBLE(&_4, mRight);
	ZVAL_DOUBLE(&_5, mBottom);
	phpqt_qsizef_grown_by(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, shrunkBy)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *mLeft_param = NULL, *mTop_param = NULL, *mRight_param = NULL, *mBottom_param = NULL, result, _0, _1, _2, _3, _4, _5;
	double selfWidth, selfHeight, mLeft, mTop, mRight, mBottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
		Z_PARAM_ZVAL(mLeft)
		Z_PARAM_ZVAL(mTop)
		Z_PARAM_ZVAL(mRight)
		Z_PARAM_ZVAL(mBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfWidth_param, &selfHeight_param, &mLeft_param, &mTop_param, &mRight_param, &mBottom_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	mLeft = zephir_get_doubleval(mLeft_param);
	mTop = zephir_get_doubleval(mTop_param);
	mRight = zephir_get_doubleval(mRight_param);
	mBottom = zephir_get_doubleval(mBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	ZVAL_DOUBLE(&_2, mLeft);
	ZVAL_DOUBLE(&_3, mTop);
	ZVAL_DOUBLE(&_4, mRight);
	ZVAL_DOUBLE(&_5, mBottom);
	phpqt_qsizef_shrunk_by(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSizeF_QSizeF, toSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1;
	double selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(selfWidth)
		Z_PARAM_ZVAL(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfWidth_param, &selfHeight_param);
	selfWidth = zephir_get_doubleval(selfWidth_param);
	selfHeight = zephir_get_doubleval(selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, selfWidth);
	ZVAL_DOUBLE(&_1, selfHeight);
	phpqt_qsizef_to_size(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

