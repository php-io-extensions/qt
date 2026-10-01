
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
#include "src/core-qsize.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QSize_QSize)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QSize, QSize, qt, core_qsize_qsize, qt_core_qsize_qsize_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QSize_QSize, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qsize_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, newIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *w_param = NULL, *h_param = NULL, result, _0, _1;
	zend_long w, h;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &w_param, &h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, w);
	ZVAL_LONG(&_1, h);
	phpqt_qsize_new_int_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, isNull)
{
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	zend_long selfWidth, selfHeight, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	r = phpqt_qsize_is_null(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSize_QSize, isEmpty)
{
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	zend_long selfWidth, selfHeight, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	r = phpqt_qsize_is_empty(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSize_QSize, isValid)
{
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	zend_long selfWidth, selfHeight, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	r = phpqt_qsize_is_valid(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSize_QSize, width)
{
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	zend_long selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	RETURN_LONG(phpqt_qsize_width(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSize_QSize, height)
{
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, _0, _1;
	zend_long selfWidth, selfHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &selfWidth_param, &selfHeight_param);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	RETURN_LONG(phpqt_qsize_height(&_0, &_1));
}

PHP_METHOD(Qt_Core_QSize_QSize, setWidth)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *w_param = NULL, result, _0, _1, _2;
	zend_long selfWidth, selfHeight, w;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(w)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &selfWidth_param, &selfHeight_param, &w_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, w);
	phpqt_qsize_set_width(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, setHeight)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *h_param = NULL, result, _0, _1, _2;
	zend_long selfWidth, selfHeight, h;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &selfWidth_param, &selfHeight_param, &h_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, h);
	phpqt_qsize_set_height(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, transpose)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1;
	zend_long selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	phpqt_qsize_transpose(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, transposed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1;
	zend_long selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	phpqt_qsize_transposed(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, scale)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *w_param = NULL, *h_param = NULL, *mode_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfWidth, selfHeight, w, h, mode;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfWidth_param, &selfHeight_param, &w_param, &h_param, &mode_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, w);
	ZVAL_LONG(&_3, h);
	ZVAL_LONG(&_4, mode);
	phpqt_qsize_scale(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, scaleQSizeQtAspectRatioMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *sWidth_param = NULL, *sHeight_param = NULL, *mode_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfWidth, selfHeight, sWidth, sHeight, mode;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(sWidth)
		Z_PARAM_LONG(sHeight)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfWidth_param, &selfHeight_param, &sWidth_param, &sHeight_param, &mode_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, sWidth);
	ZVAL_LONG(&_3, sHeight);
	ZVAL_LONG(&_4, mode);
	phpqt_qsize_scale_q_size_qt_aspect_ratio_mode(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, scaled)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *w_param = NULL, *h_param = NULL, *mode_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfWidth, selfHeight, w, h, mode;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfWidth_param, &selfHeight_param, &w_param, &h_param, &mode_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, w);
	ZVAL_LONG(&_3, h);
	ZVAL_LONG(&_4, mode);
	phpqt_qsize_scaled(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, scaledQSizeQtAspectRatioMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *sWidth_param = NULL, *sHeight_param = NULL, *mode_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long selfWidth, selfHeight, sWidth, sHeight, mode;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(sWidth)
		Z_PARAM_LONG(sHeight)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &selfWidth_param, &selfHeight_param, &sWidth_param, &sHeight_param, &mode_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, sWidth);
	ZVAL_LONG(&_3, sHeight);
	ZVAL_LONG(&_4, mode);
	phpqt_qsize_scaled_q_size_qt_aspect_ratio_mode(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, expandedTo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, result, _0, _1, _2, _3;
	zend_long selfWidth, selfHeight, arg0Width, arg0Height;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfWidth_param, &selfHeight_param, &arg0Width_param, &arg0Height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, arg0Width);
	ZVAL_LONG(&_3, arg0Height);
	phpqt_qsize_expanded_to(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, boundedTo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, result, _0, _1, _2, _3;
	zend_long selfWidth, selfHeight, arg0Width, arg0Height;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &selfWidth_param, &selfHeight_param, &arg0Width_param, &arg0Height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, arg0Width);
	ZVAL_LONG(&_3, arg0Height);
	phpqt_qsize_bounded_to(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, grownBy)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *mLeft_param = NULL, *mTop_param = NULL, *mRight_param = NULL, *mBottom_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfWidth, selfHeight, mLeft, mTop, mRight, mBottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(mLeft)
		Z_PARAM_LONG(mTop)
		Z_PARAM_LONG(mRight)
		Z_PARAM_LONG(mBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfWidth_param, &selfHeight_param, &mLeft_param, &mTop_param, &mRight_param, &mBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, mLeft);
	ZVAL_LONG(&_3, mTop);
	ZVAL_LONG(&_4, mRight);
	ZVAL_LONG(&_5, mBottom);
	phpqt_qsize_grown_by(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, shrunkBy)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, *mLeft_param = NULL, *mTop_param = NULL, *mRight_param = NULL, *mBottom_param = NULL, result, _0, _1, _2, _3, _4, _5;
	zend_long selfWidth, selfHeight, mLeft, mTop, mRight, mBottom;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
		Z_PARAM_LONG(mLeft)
		Z_PARAM_LONG(mTop)
		Z_PARAM_LONG(mRight)
		Z_PARAM_LONG(mBottom)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 0, &selfWidth_param, &selfHeight_param, &mLeft_param, &mTop_param, &mRight_param, &mBottom_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	ZVAL_LONG(&_2, mLeft);
	ZVAL_LONG(&_3, mTop);
	ZVAL_LONG(&_4, mRight);
	ZVAL_LONG(&_5, mBottom);
	phpqt_qsize_shrunk_by(&result, &_0, &_1, &_2, &_3, &_4, &_5);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSize_QSize, toSizeF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *selfWidth_param = NULL, *selfHeight_param = NULL, result, _0, _1;
	zend_long selfWidth, selfHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(selfWidth)
		Z_PARAM_LONG(selfHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &selfWidth_param, &selfHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, selfWidth);
	ZVAL_LONG(&_1, selfHeight);
	phpqt_qsize_to_size_f(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

