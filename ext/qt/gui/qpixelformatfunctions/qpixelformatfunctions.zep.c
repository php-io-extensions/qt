
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
#include "src/gui-qpixelformatfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPixelformatFunctions, QPixelformatFunctions, qt, gui_qpixelformatfunctions_qpixelformatfunctions, qt_gui_qpixelformatfunctions_qpixelformatfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatRgba)
{
	zval *red_param = NULL, *green_param = NULL, *blue_param = NULL, *alfa_param = NULL, *usage_param = NULL, *position_param = NULL, *pmul = NULL, pmul_sub, *typeInt = NULL, typeInt_sub, __$null, _0, _1, _2, _3, _4, _5;
	zend_long red, green, blue, alfa, usage, position;

	ZVAL_UNDEF(&pmul_sub);
	ZVAL_UNDEF(&typeInt_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 8)
		Z_PARAM_LONG(red)
		Z_PARAM_LONG(green)
		Z_PARAM_LONG(blue)
		Z_PARAM_LONG(alfa)
		Z_PARAM_LONG(usage)
		Z_PARAM_LONG(position)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(pmul)
		Z_PARAM_ZVAL_OR_NULL(typeInt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 2, &red_param, &green_param, &blue_param, &alfa_param, &usage_param, &position_param, &pmul, &typeInt);
	if (!pmul) {
		pmul = &pmul_sub;
		pmul = &__$null;
	}
	if (!typeInt) {
		typeInt = &typeInt_sub;
		typeInt = &__$null;
	}
	ZVAL_LONG(&_0, red);
	ZVAL_LONG(&_1, green);
	ZVAL_LONG(&_2, blue);
	ZVAL_LONG(&_3, alfa);
	ZVAL_LONG(&_4, usage);
	ZVAL_LONG(&_5, position);
	RETURN_LONG(phpqt_qpixelformatfunctions_q_pixel_format_rgba(&_0, &_1, &_2, &_3, &_4, &_5, pmul, typeInt));
}

PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatGrayscale)
{
	zval *channelSize_param = NULL, *typeInt = NULL, typeInt_sub, __$null, _0;
	zend_long channelSize;

	ZVAL_UNDEF(&typeInt_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(channelSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(typeInt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &channelSize_param, &typeInt);
	if (!typeInt) {
		typeInt = &typeInt_sub;
		typeInt = &__$null;
	}
	ZVAL_LONG(&_0, channelSize);
	RETURN_LONG(phpqt_qpixelformatfunctions_q_pixel_format_grayscale(&_0, typeInt));
}

PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatAlpha)
{
	zval *channelSize_param = NULL, *typeInt = NULL, typeInt_sub, __$null, _0;
	zend_long channelSize;

	ZVAL_UNDEF(&typeInt_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(channelSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(typeInt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &channelSize_param, &typeInt);
	if (!typeInt) {
		typeInt = &typeInt_sub;
		typeInt = &__$null;
	}
	ZVAL_LONG(&_0, channelSize);
	RETURN_LONG(phpqt_qpixelformatfunctions_q_pixel_format_alpha(&_0, typeInt));
}

PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatCmyk)
{
	zval *channelSize_param = NULL, *alfa_param = NULL, *usage = NULL, usage_sub, *position = NULL, position_sub, *typeInt = NULL, typeInt_sub, __$null, _0, _1;
	zend_long channelSize, alfa;

	ZVAL_UNDEF(&usage_sub);
	ZVAL_UNDEF(&position_sub);
	ZVAL_UNDEF(&typeInt_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 5)
		Z_PARAM_LONG(channelSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(alfa)
		Z_PARAM_ZVAL_OR_NULL(usage)
		Z_PARAM_ZVAL_OR_NULL(position)
		Z_PARAM_ZVAL_OR_NULL(typeInt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 4, &channelSize_param, &alfa_param, &usage, &position, &typeInt);
	if (!alfa_param) {
		alfa = 0;
	} else {
		}
	if (!usage) {
		usage = &usage_sub;
		usage = &__$null;
	}
	if (!position) {
		position = &position_sub;
		position = &__$null;
	}
	if (!typeInt) {
		typeInt = &typeInt_sub;
		typeInt = &__$null;
	}
	ZVAL_LONG(&_0, channelSize);
	ZVAL_LONG(&_1, alfa);
	RETURN_LONG(phpqt_qpixelformatfunctions_q_pixel_format_cmyk(&_0, &_1, usage, position, typeInt));
}

PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatHsl)
{
	zval *channelSize_param = NULL, *alfa_param = NULL, *usage = NULL, usage_sub, *position = NULL, position_sub, *typeInt = NULL, typeInt_sub, __$null, _0, _1;
	zend_long channelSize, alfa;

	ZVAL_UNDEF(&usage_sub);
	ZVAL_UNDEF(&position_sub);
	ZVAL_UNDEF(&typeInt_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 5)
		Z_PARAM_LONG(channelSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(alfa)
		Z_PARAM_ZVAL_OR_NULL(usage)
		Z_PARAM_ZVAL_OR_NULL(position)
		Z_PARAM_ZVAL_OR_NULL(typeInt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 4, &channelSize_param, &alfa_param, &usage, &position, &typeInt);
	if (!alfa_param) {
		alfa = 0;
	} else {
		}
	if (!usage) {
		usage = &usage_sub;
		usage = &__$null;
	}
	if (!position) {
		position = &position_sub;
		position = &__$null;
	}
	if (!typeInt) {
		typeInt = &typeInt_sub;
		typeInt = &__$null;
	}
	ZVAL_LONG(&_0, channelSize);
	ZVAL_LONG(&_1, alfa);
	RETURN_LONG(phpqt_qpixelformatfunctions_q_pixel_format_hsl(&_0, &_1, usage, position, typeInt));
}

PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatHsv)
{
	zval *channelSize_param = NULL, *alfa_param = NULL, *usage = NULL, usage_sub, *position = NULL, position_sub, *typeInt = NULL, typeInt_sub, __$null, _0, _1;
	zend_long channelSize, alfa;

	ZVAL_UNDEF(&usage_sub);
	ZVAL_UNDEF(&position_sub);
	ZVAL_UNDEF(&typeInt_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 5)
		Z_PARAM_LONG(channelSize)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(alfa)
		Z_PARAM_ZVAL_OR_NULL(usage)
		Z_PARAM_ZVAL_OR_NULL(position)
		Z_PARAM_ZVAL_OR_NULL(typeInt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 4, &channelSize_param, &alfa_param, &usage, &position, &typeInt);
	if (!alfa_param) {
		alfa = 0;
	} else {
		}
	if (!usage) {
		usage = &usage_sub;
		usage = &__$null;
	}
	if (!position) {
		position = &position_sub;
		position = &__$null;
	}
	if (!typeInt) {
		typeInt = &typeInt_sub;
		typeInt = &__$null;
	}
	ZVAL_LONG(&_0, channelSize);
	ZVAL_LONG(&_1, alfa);
	RETURN_LONG(phpqt_qpixelformatfunctions_q_pixel_format_hsv(&_0, &_1, usage, position, typeInt));
}

PHP_METHOD(Qt_Gui_QPixelformatFunctions_QPixelformatFunctions, qPixelFormatYuv)
{
	zval *layout_param = NULL, *alfa_param = NULL, *usage = NULL, usage_sub, *position = NULL, position_sub, *p_mul = NULL, p_mul_sub, *typeInt = NULL, typeInt_sub, *b_order = NULL, b_order_sub, __$null, _0, _1;
	zend_long layout, alfa;

	ZVAL_UNDEF(&usage_sub);
	ZVAL_UNDEF(&position_sub);
	ZVAL_UNDEF(&p_mul_sub);
	ZVAL_UNDEF(&typeInt_sub);
	ZVAL_UNDEF(&b_order_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 7)
		Z_PARAM_LONG(layout)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(alfa)
		Z_PARAM_ZVAL_OR_NULL(usage)
		Z_PARAM_ZVAL_OR_NULL(position)
		Z_PARAM_ZVAL_OR_NULL(p_mul)
		Z_PARAM_ZVAL_OR_NULL(typeInt)
		Z_PARAM_ZVAL_OR_NULL(b_order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 6, &layout_param, &alfa_param, &usage, &position, &p_mul, &typeInt, &b_order);
	if (!alfa_param) {
		alfa = 0;
	} else {
		}
	if (!usage) {
		usage = &usage_sub;
		usage = &__$null;
	}
	if (!position) {
		position = &position_sub;
		position = &__$null;
	}
	if (!p_mul) {
		p_mul = &p_mul_sub;
		p_mul = &__$null;
	}
	if (!typeInt) {
		typeInt = &typeInt_sub;
		typeInt = &__$null;
	}
	if (!b_order) {
		b_order = &b_order_sub;
		b_order = &__$null;
	}
	ZVAL_LONG(&_0, layout);
	ZVAL_LONG(&_1, alfa);
	RETURN_LONG(phpqt_qpixelformatfunctions_q_pixel_format_yuv(&_0, &_1, usage, position, p_mul, typeInt, b_order));
}

