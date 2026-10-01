
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
#include "src/gui-qrgba64.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QRgba64_QRgba64)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QRgba64, QRgba64, qt, gui_qrgba64_qrgba64, qt_gui_qrgba64_qrgba64_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, new_)
{

	RETURN_LONG(phpqt_qrgba64_new());
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, fromRgba64)
{
	zval *c_param = NULL, _0;
	zend_long c;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &c_param);
	ZVAL_LONG(&_0, c);
	RETURN_LONG(phpqt_qrgba64_from_rgba64(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, fromRgba64Quint16Quint16Quint16Quint16)
{
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	zend_long red, green, blue, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(red)
		Z_PARAM_LONG(green)
		Z_PARAM_LONG(blue)
		Z_PARAM_LONG(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &red_param, &green_param, &blue_param, &alpha_param);
	ZVAL_LONG(&_0, red);
	ZVAL_LONG(&_1, green);
	ZVAL_LONG(&_2, blue);
	ZVAL_LONG(&_3, alpha);
	RETURN_LONG(phpqt_qrgba64_from_rgba64_quint16_quint16_quint16_quint16(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, fromRgba)
{
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alpha_param = NULL, _0, _1, _2, _3;
	zend_long red, green, blue, alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(red)
		Z_PARAM_LONG(green)
		Z_PARAM_LONG(blue)
		Z_PARAM_LONG(alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &red_param, &green_param, &blue_param, &alpha_param);
	ZVAL_LONG(&_0, red);
	ZVAL_LONG(&_1, green);
	ZVAL_LONG(&_2, blue);
	ZVAL_LONG(&_3, alpha);
	RETURN_LONG(phpqt_qrgba64_from_rgba(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, fromArgb32)
{
	zval *rgb_param = NULL, _0;
	zend_long rgb;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rgb_param);
	ZVAL_LONG(&_0, rgb);
	RETURN_LONG(phpqt_qrgba64_from_argb32(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, isOpaque)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qrgba64_is_opaque(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, isTransparent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qrgba64_is_transparent(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, red)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_red(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, green)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_green(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, blue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_blue(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, alpha)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_alpha(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, setRed)
{
	zval *handle_param = NULL, *_red_param = NULL, _0, _1;
	zend_long handle, _red;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(_red)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &_red_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, _red);
	phpqt_qrgba64_set_red(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, setGreen)
{
	zval *handle_param = NULL, *_green_param = NULL, _0, _1;
	zend_long handle, _green;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(_green)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &_green_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, _green);
	phpqt_qrgba64_set_green(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, setBlue)
{
	zval *handle_param = NULL, *_blue_param = NULL, _0, _1;
	zend_long handle, _blue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(_blue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &_blue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, _blue);
	phpqt_qrgba64_set_blue(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, setAlpha)
{
	zval *handle_param = NULL, *_alpha_param = NULL, _0, _1;
	zend_long handle, _alpha;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(_alpha)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &_alpha_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, _alpha);
	phpqt_qrgba64_set_alpha(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, red8)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_red8(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, green8)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_green8(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, blue8)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_blue8(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, alpha8)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_alpha8(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, toArgb32)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_to_argb32(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, toRgb16)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_to_rgb16(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, premultiplied)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_premultiplied(&_0));
}

PHP_METHOD(Qt_Gui_QRgba64_QRgba64, unpremultiplied)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qrgba64_unpremultiplied(&_0));
}

