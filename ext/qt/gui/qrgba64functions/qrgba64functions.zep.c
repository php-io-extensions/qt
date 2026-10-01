
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
#include "src/gui-qrgba64functions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QRgba64Functions_QRgba64Functions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QRgba64Functions, QRgba64Functions, qt, gui_qrgba64functions_qrgba64functions, qt_gui_qrgba64functions_qrgba64functions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qRgba64)
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
	RETURN_LONG(phpqt_qrgba64functions_q_rgba64(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qRgba64Quint64)
{
	zval *c_param = NULL, _0;
	zend_long c;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &c_param);
	ZVAL_LONG(&_0, c);
	RETURN_LONG(phpqt_qrgba64functions_q_rgba64_quint64(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qPremultiply)
{
	zval *c_param = NULL, _0;
	zend_long c;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &c_param);
	ZVAL_LONG(&_0, c);
	RETURN_LONG(phpqt_qrgba64functions_q_premultiply(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qUnpremultiply)
{
	zval *c_param = NULL, _0;
	zend_long c;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &c_param);
	ZVAL_LONG(&_0, c);
	RETURN_LONG(phpqt_qrgba64functions_q_unpremultiply(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qRed)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgba64functions_q_red(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qGreen)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgba64functions_q_green(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qBlue)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgba64functions_q_blue(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64Functions_QRgba64Functions, qAlpha)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgba64functions_q_alpha(&_0));
}

