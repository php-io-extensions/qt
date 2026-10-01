
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
#include "src/gui-qpixelformat.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPixelFormat_QPixelFormat)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPixelFormat, QPixelFormat, qt, gui_qpixelformat_qpixelformat, qt_gui_qpixelformat_qpixelformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, new_)
{

	RETURN_LONG(phpqt_qpixelformat_new());
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, newQPixelFormatColorModelUcharUcharUcharUcharUcharUcharQPixelFormatAlphaUsageQPixelFormatAlphaPositionQPixelFormatAlphaPremultipliedQPixelFormatTypeInterpretationQPixelFormatByteOrderUchar)
{
	zval *colorModel_param = NULL, *firstSize_param = NULL, *secondSize_param = NULL, *thirdSize_param = NULL, *fourthSize_param = NULL, *fifthSize_param = NULL, *alphaSize_param = NULL, *alphaUsage_param = NULL, *alphaPosition_param = NULL, *premultiplied_param = NULL, *typeInterpretation_param = NULL, *byteOrder = NULL, byteOrder_sub, *subEnum_param = NULL, __$null, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11;
	zend_long colorModel, firstSize, secondSize, thirdSize, fourthSize, fifthSize, alphaSize, alphaUsage, alphaPosition, premultiplied, typeInterpretation, subEnum;

	ZVAL_UNDEF(&byteOrder_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(11, 13)
		Z_PARAM_LONG(colorModel)
		Z_PARAM_LONG(firstSize)
		Z_PARAM_LONG(secondSize)
		Z_PARAM_LONG(thirdSize)
		Z_PARAM_LONG(fourthSize)
		Z_PARAM_LONG(fifthSize)
		Z_PARAM_LONG(alphaSize)
		Z_PARAM_LONG(alphaUsage)
		Z_PARAM_LONG(alphaPosition)
		Z_PARAM_LONG(premultiplied)
		Z_PARAM_LONG(typeInterpretation)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(byteOrder)
		Z_PARAM_LONG(subEnum)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(11, 2, &colorModel_param, &firstSize_param, &secondSize_param, &thirdSize_param, &fourthSize_param, &fifthSize_param, &alphaSize_param, &alphaUsage_param, &alphaPosition_param, &premultiplied_param, &typeInterpretation_param, &byteOrder, &subEnum_param);
	if (!byteOrder) {
		byteOrder = &byteOrder_sub;
		byteOrder = &__$null;
	}
	if (!subEnum_param) {
		subEnum = 0;
	} else {
		}
	ZVAL_LONG(&_0, colorModel);
	ZVAL_LONG(&_1, firstSize);
	ZVAL_LONG(&_2, secondSize);
	ZVAL_LONG(&_3, thirdSize);
	ZVAL_LONG(&_4, fourthSize);
	ZVAL_LONG(&_5, fifthSize);
	ZVAL_LONG(&_6, alphaSize);
	ZVAL_LONG(&_7, alphaUsage);
	ZVAL_LONG(&_8, alphaPosition);
	ZVAL_LONG(&_9, premultiplied);
	ZVAL_LONG(&_10, typeInterpretation);
	ZVAL_LONG(&_11, subEnum);
	RETURN_LONG(phpqt_qpixelformat_new_q_pixel_format_color_model_uchar_uchar_uchar_uchar_uchar_uchar_q_pixel_format_alpha_usage_q_pixel_format_alpha_position_q_pixel_format_alpha_premultiplied_q_pixel_format_type_interpretation_q_pixel_format_byte_order_uchar(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, byteOrder, &_11));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, colorModel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_color_model(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, channelCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_channel_count(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, redSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_red_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, greenSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_green_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, blueSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_blue_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, cyanSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_cyan_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, magentaSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_magenta_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, yellowSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_yellow_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, blackSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_black_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, hueSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_hue_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, saturationSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_saturation_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, lightnessSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_lightness_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, brightnessSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_brightness_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, alphaSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_alpha_size(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, bitsPerPixel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_bits_per_pixel(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, alphaUsage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_alpha_usage(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, alphaPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_alpha_position(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, premultiplied)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_premultiplied(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, typeInterpretation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_type_interpretation(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, byteOrder)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_byte_order(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, yuvLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_yuv_layout(&_0));
}

PHP_METHOD(Qt_Gui_QPixelFormat_QPixelFormat, subEnum)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixelformat_sub_enum(&_0));
}

