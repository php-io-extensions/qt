
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
#include "src/gui-qrgbfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QRgbFunctions_QRgbFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QRgbFunctions, QRgbFunctions, qt, gui_qrgbfunctions_qrgbfunctions, qt_gui_qrgbfunctions_qrgbfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qRed)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgbfunctions_q_red(&_0));
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qGreen)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgbfunctions_q_green(&_0));
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qBlue)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgbfunctions_q_blue(&_0));
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qAlpha)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgbfunctions_q_alpha(&_0));
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qRgb)
{
	zval *r_param = NULL, *g_param = NULL, *b_param = NULL, _0, _1, _2;
	zend_long r, g, b;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &r_param, &g_param, &b_param);
	ZVAL_LONG(&_0, r);
	ZVAL_LONG(&_1, g);
	ZVAL_LONG(&_2, b);
	RETURN_LONG(phpqt_qrgbfunctions_q_rgb(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qRgba)
{
	zval *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3;
	zend_long r, g, b, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &r_param, &g_param, &b_param, &a_param);
	ZVAL_LONG(&_0, r);
	ZVAL_LONG(&_1, g);
	ZVAL_LONG(&_2, b);
	ZVAL_LONG(&_3, a);
	RETURN_LONG(phpqt_qrgbfunctions_q_rgba(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qGray)
{
	zval *r_param = NULL, *g_param = NULL, *b_param = NULL, _0, _1, _2;
	zend_long r, g, b;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &r_param, &g_param, &b_param);
	ZVAL_LONG(&_0, r);
	ZVAL_LONG(&_1, g);
	ZVAL_LONG(&_2, b);
	RETURN_LONG(phpqt_qrgbfunctions_q_gray(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qGrayQRgb)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgbfunctions_q_gray_q_rgb(&_0));
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qIsGray)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	r = phpqt_qrgbfunctions_q_is_gray(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qPremultiply)
{
	zval *x_param = NULL, _0;
	zend_long x;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(x)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &x_param);
	ZVAL_LONG(&_0, x);
	RETURN_LONG(phpqt_qrgbfunctions_q_premultiply(&_0));
}

PHP_METHOD(Qt_Gui_QRgbFunctions_QRgbFunctions, qUnpremultiply)
{
	zval *p_param = NULL, _0;
	zend_long p;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(p)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &p_param);
	ZVAL_LONG(&_0, p);
	RETURN_LONG(phpqt_qrgbfunctions_q_unpremultiply(&_0));
}

