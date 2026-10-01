
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
#include "src/gui-qcolor.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QColor_QColor)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QColor, QColor, qt, gui_qcolor_qcolor, qt_gui_qcolor_qcolor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QColor_QColor, new_)
{

	RETURN_LONG(phpqt_qcolor_new());
}

PHP_METHOD(Qt_Gui_QColor_QColor, newQtGlobalColor)
{
	zval *color_param = NULL, _0;
	zend_long color;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &color_param);
	ZVAL_LONG(&_0, color);
	RETURN_LONG(phpqt_qcolor_new_qt_global_color(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, newIntIntIntInt)
{
	zval *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3;
	zend_long r, g, b, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &r_param, &g_param, &b_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	ZVAL_LONG(&_0, r);
	ZVAL_LONG(&_1, g);
	ZVAL_LONG(&_2, b);
	ZVAL_LONG(&_3, a);
	RETURN_LONG(phpqt_qcolor_new_int_int_int_int(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QColor_QColor, newQRgb)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qcolor_new_q_rgb(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, newQRgba64)
{
	zval *rgba64_param = NULL, _0;
	zend_long rgba64;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgba64)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgba64_param);
	ZVAL_LONG(&_0, rgba64);
	RETURN_LONG(phpqt_qcolor_new_q_rgba64(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qcolor_new_q_string(&name));
}

PHP_METHOD(Qt_Gui_QColor_QColor, newQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qcolor_new_q_string_view(&name));
}

PHP_METHOD(Qt_Gui_QColor_QColor, newChar)
{
	zval *aname = NULL, aname_sub;

	ZVAL_UNDEF(&aname_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(aname)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &aname);
	RETURN_LONG(phpqt_qcolor_new_char(aname));
}

PHP_METHOD(Qt_Gui_QColor_QColor, newQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qcolor_new_q_latin1_string_view(&name));
}

PHP_METHOD(Qt_Gui_QColor_QColor, newQColorSpec)
{
	zval *spec_param = NULL, _0;
	zend_long spec;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(spec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &spec_param);
	ZVAL_LONG(&_0, spec);
	RETURN_LONG(phpqt_qcolor_new_q_color_spec(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qcolor_from_string(&name));
}

PHP_METHOD(Qt_Gui_QColor_QColor, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcolor_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, name)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *format = NULL, format_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolor_name(&result, &_0, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, colorNames)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcolor_color_names(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, spec)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_spec(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, alpha)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_alpha(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, setAlpha)
{
	zval *handle_param = NULL, *alpha_param = NULL, _0, _1;
	zend_long handle, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alpha);
	phpqt_qcolor_set_alpha(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, alphaF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_alpha_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, setAlphaF)
{
	double alpha;
	zval *handle_param = NULL, *alpha_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alpha_param);
	alpha = zephir_get_doubleval(alpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, alpha);
	phpqt_qcolor_set_alpha_f(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, red)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_red(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, green)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_green(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, blue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_blue(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, setRed)
{
	zval *handle_param = NULL, *red_param = NULL, _0, _1;
	zend_long handle, red;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(red)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &red_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, red);
	phpqt_qcolor_set_red(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setGreen)
{
	zval *handle_param = NULL, *green_param = NULL, _0, _1;
	zend_long handle, green;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(green)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &green_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, green);
	phpqt_qcolor_set_green(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setBlue)
{
	zval *handle_param = NULL, *blue_param = NULL, _0, _1;
	zend_long handle, blue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(blue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &blue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, blue);
	phpqt_qcolor_set_blue(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, redF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_red_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, greenF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_green_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, blueF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_blue_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, setRedF)
{
	double red;
	zval *handle_param = NULL, *red_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(red)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &red_param);
	red = zephir_get_doubleval(red_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, red);
	phpqt_qcolor_set_red_f(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setGreenF)
{
	double green;
	zval *handle_param = NULL, *green_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(green)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &green_param);
	green = zephir_get_doubleval(green_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, green);
	phpqt_qcolor_set_green_f(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setBlueF)
{
	double blue;
	zval *handle_param = NULL, *blue_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(blue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &blue_param);
	blue = zephir_get_doubleval(blue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, blue);
	phpqt_qcolor_set_blue_f(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, getRgb)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *r = NULL, r_sub, *g = NULL, g_sub, *b = NULL, b_sub, *a = NULL, a_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&r_sub);
	ZVAL_UNDEF(&g_sub);
	ZVAL_UNDEF(&b_sub);
	ZVAL_UNDEF(&a_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(r)
		Z_PARAM_ZVAL(g)
		Z_PARAM_ZVAL(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &r, &g, &b, &a);
	if (!a) {
		a = &a_sub;
		a = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolor_get_rgb(&result, &_0, r, g, b, a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setRgb)
{
	zval *handle_param = NULL, *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, r, g, b, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &r_param, &g_param, &b_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	ZVAL_LONG(&_2, g);
	ZVAL_LONG(&_3, b);
	ZVAL_LONG(&_4, a);
	phpqt_qcolor_set_rgb(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QColor_QColor, getRgbF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *r = NULL, r_sub, *g = NULL, g_sub, *b = NULL, b_sub, *a = NULL, a_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&r_sub);
	ZVAL_UNDEF(&g_sub);
	ZVAL_UNDEF(&b_sub);
	ZVAL_UNDEF(&a_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(r)
		Z_PARAM_ZVAL(g)
		Z_PARAM_ZVAL(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &r, &g, &b, &a);
	if (!a) {
		a = &a_sub;
		a = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolor_get_rgb_f(&result, &_0, r, g, b, a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setRgbF)
{
	double r, g, b, a;
	zval *handle_param = NULL, *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(r)
		Z_PARAM_ZVAL(g)
		Z_PARAM_ZVAL(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &r_param, &g_param, &b_param, &a_param);
	r = zephir_get_doubleval(r_param);
	g = zephir_get_doubleval(g_param);
	b = zephir_get_doubleval(b_param);
	if (!a_param) {
		a = 1.0;
	} else {
		a = zephir_get_doubleval(a_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, r);
	ZVAL_DOUBLE(&_2, g);
	ZVAL_DOUBLE(&_3, b);
	ZVAL_DOUBLE(&_4, a);
	phpqt_qcolor_set_rgb_f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QColor_QColor, rgba64)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_rgba64(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, setRgba64)
{
	zval *handle_param = NULL, *rgba_param = NULL, _0, _1;
	zend_long handle, rgba;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rgba)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rgba_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rgba);
	phpqt_qcolor_set_rgba64(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, rgba)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_rgba(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, setRgba)
{
	zval *handle_param = NULL, *rgba_param = NULL, _0, _1;
	zend_long handle, rgba;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rgba)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rgba_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rgba);
	phpqt_qcolor_set_rgba(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, rgb)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_rgb(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, setRgbQRgb)
{
	zval *handle_param = NULL, *rgb_param = NULL, _0, _1;
	zend_long handle, rgb;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rgb_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rgb);
	phpqt_qcolor_set_rgb_q_rgb(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, hue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_hue(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, saturation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_saturation(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, hsvHue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_hsv_hue(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, hsvSaturation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_hsv_saturation(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, value)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_value(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, hueF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_hue_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, saturationF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_saturation_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, hsvHueF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_hsv_hue_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, hsvSaturationF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_hsv_saturation_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, valueF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_value_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, getHsv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *h = NULL, h_sub, *s = NULL, s_sub, *v = NULL, v_sub, *a = NULL, a_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&h_sub);
	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&a_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(v)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &h, &s, &v, &a);
	if (!a) {
		a = &a_sub;
		a = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolor_get_hsv(&result, &_0, h, s, v, a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setHsv)
{
	zval *handle_param = NULL, *h_param = NULL, *s_param = NULL, *v_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, h, s, v, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(s)
		Z_PARAM_LONG(v)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &h_param, &s_param, &v_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, h);
	ZVAL_LONG(&_2, s);
	ZVAL_LONG(&_3, v);
	ZVAL_LONG(&_4, a);
	phpqt_qcolor_set_hsv(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QColor_QColor, getHsvF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *h = NULL, h_sub, *s = NULL, s_sub, *v = NULL, v_sub, *a = NULL, a_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&h_sub);
	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&v_sub);
	ZVAL_UNDEF(&a_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(v)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &h, &s, &v, &a);
	if (!a) {
		a = &a_sub;
		a = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolor_get_hsv_f(&result, &_0, h, s, v, a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setHsvF)
{
	double h, s, v, a;
	zval *handle_param = NULL, *h_param = NULL, *s_param = NULL, *v_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(v)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &h_param, &s_param, &v_param, &a_param);
	h = zephir_get_doubleval(h_param);
	s = zephir_get_doubleval(s_param);
	v = zephir_get_doubleval(v_param);
	if (!a_param) {
		a = 1.0;
	} else {
		a = zephir_get_doubleval(a_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, h);
	ZVAL_DOUBLE(&_2, s);
	ZVAL_DOUBLE(&_3, v);
	ZVAL_DOUBLE(&_4, a);
	phpqt_qcolor_set_hsv_f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QColor_QColor, cyan)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_cyan(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, magenta)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_magenta(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, yellow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_yellow(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, black)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_black(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, cyanF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_cyan_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, magentaF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_magenta_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, yellowF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_yellow_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, blackF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_black_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, getCmyk)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *c = NULL, c_sub, *m = NULL, m_sub, *y = NULL, y_sub, *k = NULL, k_sub, *a = NULL, a_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&c_sub);
	ZVAL_UNDEF(&m_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&k_sub);
	ZVAL_UNDEF(&a_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(c)
		Z_PARAM_ZVAL(m)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(k)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 1, &handle_param, &c, &m, &y, &k, &a);
	if (!a) {
		a = &a_sub;
		a = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolor_get_cmyk(&result, &_0, c, m, y, k, a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setCmyk)
{
	zval *handle_param = NULL, *c_param = NULL, *m_param = NULL, *y_param = NULL, *k_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle, c, m, y, k, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(c)
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(k)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &c_param, &m_param, &y_param, &k_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, c);
	ZVAL_LONG(&_2, m);
	ZVAL_LONG(&_3, y);
	ZVAL_LONG(&_4, k);
	ZVAL_LONG(&_5, a);
	phpqt_qcolor_set_cmyk(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QColor_QColor, getCmykF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *c = NULL, c_sub, *m = NULL, m_sub, *y = NULL, y_sub, *k = NULL, k_sub, *a = NULL, a_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&c_sub);
	ZVAL_UNDEF(&m_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&k_sub);
	ZVAL_UNDEF(&a_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(c)
		Z_PARAM_ZVAL(m)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(k)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 1, &handle_param, &c, &m, &y, &k, &a);
	if (!a) {
		a = &a_sub;
		a = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolor_get_cmyk_f(&result, &_0, c, m, y, k, a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setCmykF)
{
	double c, m, y, k, a;
	zval *handle_param = NULL, *c_param = NULL, *m_param = NULL, *y_param = NULL, *k_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(c)
		Z_PARAM_ZVAL(m)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(k)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &c_param, &m_param, &y_param, &k_param, &a_param);
	c = zephir_get_doubleval(c_param);
	m = zephir_get_doubleval(m_param);
	y = zephir_get_doubleval(y_param);
	k = zephir_get_doubleval(k_param);
	if (!a_param) {
		a = 1.0;
	} else {
		a = zephir_get_doubleval(a_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, c);
	ZVAL_DOUBLE(&_2, m);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, k);
	ZVAL_DOUBLE(&_5, a);
	phpqt_qcolor_set_cmyk_f(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QColor_QColor, hslHue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_hsl_hue(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, hslSaturation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_hsl_saturation(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, lightness)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_lightness(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, hslHueF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_hsl_hue_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, hslSaturationF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_hsl_saturation_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, lightnessF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qcolor_lightness_f(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, getHsl)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *h = NULL, h_sub, *s = NULL, s_sub, *l = NULL, l_sub, *a = NULL, a_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&h_sub);
	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&l_sub);
	ZVAL_UNDEF(&a_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(l)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &h, &s, &l, &a);
	if (!a) {
		a = &a_sub;
		a = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolor_get_hsl(&result, &_0, h, s, l, a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setHsl)
{
	zval *handle_param = NULL, *h_param = NULL, *s_param = NULL, *l_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, h, s, l, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(s)
		Z_PARAM_LONG(l)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &h_param, &s_param, &l_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, h);
	ZVAL_LONG(&_2, s);
	ZVAL_LONG(&_3, l);
	ZVAL_LONG(&_4, a);
	phpqt_qcolor_set_hsl(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QColor_QColor, getHslF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *h = NULL, h_sub, *s = NULL, s_sub, *l = NULL, l_sub, *a = NULL, a_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&h_sub);
	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&l_sub);
	ZVAL_UNDEF(&a_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(l)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 1, &handle_param, &h, &s, &l, &a);
	if (!a) {
		a = &a_sub;
		a = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcolor_get_hsl_f(&result, &_0, h, s, l, a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QColor_QColor, setHslF)
{
	double h, s, l, a;
	zval *handle_param = NULL, *h_param = NULL, *s_param = NULL, *l_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(l)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &h_param, &s_param, &l_param, &a_param);
	h = zephir_get_doubleval(h_param);
	s = zephir_get_doubleval(s_param);
	l = zephir_get_doubleval(l_param);
	if (!a_param) {
		a = 1.0;
	} else {
		a = zephir_get_doubleval(a_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, h);
	ZVAL_DOUBLE(&_2, s);
	ZVAL_DOUBLE(&_3, l);
	ZVAL_DOUBLE(&_4, a);
	phpqt_qcolor_set_hsl_f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QColor_QColor, toRgb)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_to_rgb(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, toHsv)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_to_hsv(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, toCmyk)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_to_cmyk(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, toHsl)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_to_hsl(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, toExtendedRgb)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcolor_to_extended_rgb(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, convertTo)
{
	zval *handle_param = NULL, *colorSpec_param = NULL, _0, _1;
	zend_long handle, colorSpec;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorSpec)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &colorSpec_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorSpec);
	RETURN_LONG(phpqt_qcolor_convert_to(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromRgb)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qcolor_from_rgb(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromRgba)
{
	zval *rgba_param = NULL, _0;
	zend_long rgba;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgba)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgba_param);
	ZVAL_LONG(&_0, rgba);
	RETURN_LONG(phpqt_qcolor_from_rgba(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromRgbIntIntIntInt)
{
	zval *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3;
	zend_long r, g, b, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &r_param, &g_param, &b_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	ZVAL_LONG(&_0, r);
	ZVAL_LONG(&_1, g);
	ZVAL_LONG(&_2, b);
	ZVAL_LONG(&_3, a);
	RETURN_LONG(phpqt_qcolor_from_rgb_int_int_int_int(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromRgbF)
{
	zval *r_param = NULL, *g_param = NULL, *b_param = NULL, *a_param = NULL, _0, _1, _2, _3;
	double r, g, b, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_ZVAL(r)
		Z_PARAM_ZVAL(g)
		Z_PARAM_ZVAL(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &r_param, &g_param, &b_param, &a_param);
	r = zephir_get_doubleval(r_param);
	g = zephir_get_doubleval(g_param);
	b = zephir_get_doubleval(b_param);
	if (!a_param) {
		a = 1.0;
	} else {
		a = zephir_get_doubleval(a_param);
	}
	ZVAL_DOUBLE(&_0, r);
	ZVAL_DOUBLE(&_1, g);
	ZVAL_DOUBLE(&_2, b);
	ZVAL_DOUBLE(&_3, a);
	RETURN_LONG(phpqt_qcolor_from_rgb_f(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromRgba64)
{
	zval *r_param = NULL, *g_param = NULL, *b_param = NULL, *a = NULL, a_sub, __$null, _0, _1, _2;
	zend_long r, g, b;

	ZVAL_UNDEF(&a_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(r)
		Z_PARAM_LONG(g)
		Z_PARAM_LONG(b)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &r_param, &g_param, &b_param, &a);
	if (!a) {
		a = &a_sub;
		a = &__$null;
	}
	ZVAL_LONG(&_0, r);
	ZVAL_LONG(&_1, g);
	ZVAL_LONG(&_2, b);
	RETURN_LONG(phpqt_qcolor_from_rgba64(&_0, &_1, &_2, a));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromRgba64QRgba64)
{
	zval *rgba_param = NULL, _0;
	zend_long rgba;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgba)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgba_param);
	ZVAL_LONG(&_0, rgba);
	RETURN_LONG(phpqt_qcolor_from_rgba64_q_rgba64(&_0));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromHsv)
{
	zval *h_param = NULL, *s_param = NULL, *v_param = NULL, *a_param = NULL, _0, _1, _2, _3;
	zend_long h, s, v, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(s)
		Z_PARAM_LONG(v)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &h_param, &s_param, &v_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	ZVAL_LONG(&_0, h);
	ZVAL_LONG(&_1, s);
	ZVAL_LONG(&_2, v);
	ZVAL_LONG(&_3, a);
	RETURN_LONG(phpqt_qcolor_from_hsv(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromHsvF)
{
	zval *h_param = NULL, *s_param = NULL, *v_param = NULL, *a_param = NULL, _0, _1, _2, _3;
	double h, s, v, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(v)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &h_param, &s_param, &v_param, &a_param);
	h = zephir_get_doubleval(h_param);
	s = zephir_get_doubleval(s_param);
	v = zephir_get_doubleval(v_param);
	if (!a_param) {
		a = 1.0;
	} else {
		a = zephir_get_doubleval(a_param);
	}
	ZVAL_DOUBLE(&_0, h);
	ZVAL_DOUBLE(&_1, s);
	ZVAL_DOUBLE(&_2, v);
	ZVAL_DOUBLE(&_3, a);
	RETURN_LONG(phpqt_qcolor_from_hsv_f(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromCmyk)
{
	zval *c_param = NULL, *m_param = NULL, *y_param = NULL, *k_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	zend_long c, m, y, k, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(c)
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(k)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &c_param, &m_param, &y_param, &k_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	ZVAL_LONG(&_0, c);
	ZVAL_LONG(&_1, m);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, k);
	ZVAL_LONG(&_4, a);
	RETURN_LONG(phpqt_qcolor_from_cmyk(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromCmykF)
{
	zval *c_param = NULL, *m_param = NULL, *y_param = NULL, *k_param = NULL, *a_param = NULL, _0, _1, _2, _3, _4;
	double c, m, y, k, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_ZVAL(c)
		Z_PARAM_ZVAL(m)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(k)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &c_param, &m_param, &y_param, &k_param, &a_param);
	c = zephir_get_doubleval(c_param);
	m = zephir_get_doubleval(m_param);
	y = zephir_get_doubleval(y_param);
	k = zephir_get_doubleval(k_param);
	if (!a_param) {
		a = 1.0;
	} else {
		a = zephir_get_doubleval(a_param);
	}
	ZVAL_DOUBLE(&_0, c);
	ZVAL_DOUBLE(&_1, m);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, k);
	ZVAL_DOUBLE(&_4, a);
	RETURN_LONG(phpqt_qcolor_from_cmyk_f(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromHsl)
{
	zval *h_param = NULL, *s_param = NULL, *l_param = NULL, *a_param = NULL, _0, _1, _2, _3;
	zend_long h, s, l, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(h)
		Z_PARAM_LONG(s)
		Z_PARAM_LONG(l)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &h_param, &s_param, &l_param, &a_param);
	if (!a_param) {
		a = 255;
	} else {
		}
	ZVAL_LONG(&_0, h);
	ZVAL_LONG(&_1, s);
	ZVAL_LONG(&_2, l);
	ZVAL_LONG(&_3, a);
	RETURN_LONG(phpqt_qcolor_from_hsl(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QColor_QColor, fromHslF)
{
	zval *h_param = NULL, *s_param = NULL, *l_param = NULL, *a_param = NULL, _0, _1, _2, _3;
	double h, s, l, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_ZVAL(h)
		Z_PARAM_ZVAL(s)
		Z_PARAM_ZVAL(l)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &h_param, &s_param, &l_param, &a_param);
	h = zephir_get_doubleval(h_param);
	s = zephir_get_doubleval(s_param);
	l = zephir_get_doubleval(l_param);
	if (!a_param) {
		a = 1.0;
	} else {
		a = zephir_get_doubleval(a_param);
	}
	ZVAL_DOUBLE(&_0, h);
	ZVAL_DOUBLE(&_1, s);
	ZVAL_DOUBLE(&_2, l);
	ZVAL_DOUBLE(&_3, a);
	RETURN_LONG(phpqt_qcolor_from_hsl_f(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QColor_QColor, lighter)
{
	zval *handle_param = NULL, *f_param = NULL, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &f_param);
	if (!f_param) {
		f = 150;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	RETURN_LONG(phpqt_qcolor_lighter(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QColor_QColor, darker)
{
	zval *handle_param = NULL, *f_param = NULL, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &f_param);
	if (!f_param) {
		f = 200;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	RETURN_LONG(phpqt_qcolor_darker(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QColor_QColor, isValidColorName)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	r = phpqt_qcolor_is_valid_color_name(&arg0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QColor_QColor, newQColorSpecUshortUshortUshortUshortUshort)
{
	zval *spec_param = NULL, *a1_param = NULL, *a2_param = NULL, *a3_param = NULL, *a4_param = NULL, *a5_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long spec, a1, a2, a3, a4, a5;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(spec)
		Z_PARAM_LONG(a1)
		Z_PARAM_LONG(a2)
		Z_PARAM_LONG(a3)
		Z_PARAM_LONG(a4)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(a5)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &spec_param, &a1_param, &a2_param, &a3_param, &a4_param, &a5_param);
	if (!a5_param) {
		a5 = 0;
	} else {
		}
	ZVAL_LONG(&_0, spec);
	ZVAL_LONG(&_1, a1);
	ZVAL_LONG(&_2, a2);
	ZVAL_LONG(&_3, a3);
	ZVAL_LONG(&_4, a4);
	ZVAL_LONG(&_5, a5);
	RETURN_LONG(phpqt_qcolor_new_q_color_spec_ushort_ushort_ushort_ushort_ushort(&_0, &_1, &_2, &_3, &_4, &_5));
}

