
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
#include "src/gui-qpixmap.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPixmap_QPixmap)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPixmap, QPixmap, qt, gui_qpixmap_qpixmap, qt_gui_qpixmap_qpixmap_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, new_)
{

	RETURN_LONG(phpqt_qpixmap_new());
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, newIntInt)
{
	zval *w_param = NULL, *h_param = NULL, _0, _1;
	zend_long w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &w_param, &h_param);
	ZVAL_LONG(&_0, w);
	ZVAL_LONG(&_1, h);
	RETURN_LONG(phpqt_qpixmap_new_int_int(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, newQSize)
{
	zval *arg0Width_param = NULL, *arg0Height_param = NULL, _0, _1;
	zend_long arg0Width, arg0Height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &arg0Width_param, &arg0Height_param);
	ZVAL_LONG(&_0, arg0Width);
	ZVAL_LONG(&_1, arg0Height);
	RETURN_LONG(phpqt_qpixmap_new_q_size(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, newQStringCharQtImageConversionFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL, *format = NULL, format_sub, *flags = NULL, flags_sub, __$null;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &fileName_param, &format, &flags);
	zephir_get_strval(&fileName, fileName_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	RETURN_MM_LONG(phpqt_qpixmap_new_q_string_char_qt_image_conversion_flags(&fileName, format, flags));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, newQPixmap)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qpixmap_new_q_pixmap(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qpixmap_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpixmap_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, devType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixmap_dev_type(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixmap_width(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixmap_height(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qpixmap_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, rect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qpixmap_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, depth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixmap_depth(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, defaultDepth)
{

	RETURN_LONG(phpqt_qpixmap_default_depth());
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, fill)
{
	zval *handle_param = NULL, *fillColor = NULL, fillColor_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&fillColor_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(fillColor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &fillColor);
	if (!fillColor) {
		fillColor = &fillColor_sub;
		fillColor = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qpixmap_fill(&_0, fillColor);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, mask)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixmap_mask(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, setMask)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qpixmap_set_mask(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, devicePixelRatio)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpixmap_device_pixel_ratio(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, setDevicePixelRatio)
{
	double scaleFactor;
	zval *handle_param = NULL, *scaleFactor_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(scaleFactor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scaleFactor_param);
	scaleFactor = zephir_get_doubleval(scaleFactor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, scaleFactor);
	phpqt_qpixmap_set_device_pixel_ratio(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, deviceIndependentSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qpixmap_device_independent_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, hasAlpha)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpixmap_has_alpha(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, hasAlphaChannel)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpixmap_has_alpha_channel(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, createHeuristicMask)
{
	zend_bool clipTight;
	zval *handle_param = NULL, *clipTight_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(clipTight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &clipTight_param);
	if (!clipTight_param) {
		clipTight = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (clipTight ? 1 : 0));
	RETURN_LONG(phpqt_qpixmap_create_heuristic_mask(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, createMaskFromColor)
{
	zval *handle_param = NULL, *maskColor_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, maskColor;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maskColor)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &maskColor_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maskColor);
	RETURN_LONG(phpqt_qpixmap_create_mask_from_color(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scaled)
{
	zval *handle_param = NULL, *w_param = NULL, *h_param = NULL, *aspectMode = NULL, aspectMode_sub, *mode = NULL, mode_sub, __$null, _0, _1, _2;
	zend_long handle, w, h;

	ZVAL_UNDEF(&aspectMode_sub);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(aspectMode)
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 2, &handle_param, &w_param, &h_param, &aspectMode, &mode);
	if (!aspectMode) {
		aspectMode = &aspectMode_sub;
		aspectMode = &__$null;
	}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, w);
	ZVAL_LONG(&_2, h);
	RETURN_LONG(phpqt_qpixmap_scaled(&_0, &_1, &_2, aspectMode, mode));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scaledQSizeQtAspectRatioModeQtTransformationMode)
{
	zval *handle_param = NULL, *sWidth_param = NULL, *sHeight_param = NULL, *aspectMode = NULL, aspectMode_sub, *mode = NULL, mode_sub, __$null, _0, _1, _2;
	zend_long handle, sWidth, sHeight;

	ZVAL_UNDEF(&aspectMode_sub);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sWidth)
		Z_PARAM_LONG(sHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(aspectMode)
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 2, &handle_param, &sWidth_param, &sHeight_param, &aspectMode, &mode);
	if (!aspectMode) {
		aspectMode = &aspectMode_sub;
		aspectMode = &__$null;
	}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sWidth);
	ZVAL_LONG(&_2, sHeight);
	RETURN_LONG(phpqt_qpixmap_scaled_q_size_qt_aspect_ratio_mode_qt_transformation_mode(&_0, &_1, &_2, aspectMode, mode));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scaledToWidth)
{
	zval *handle_param = NULL, *w_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, w;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(w)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &w_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, w);
	RETURN_LONG(phpqt_qpixmap_scaled_to_width(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scaledToHeight)
{
	zval *handle_param = NULL, *h_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, h;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &h_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, h);
	RETURN_LONG(phpqt_qpixmap_scaled_to_height(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, transformed)
{
	zval *handle_param = NULL, *arg0_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &arg0_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	RETURN_LONG(phpqt_qpixmap_transformed(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, trueMatrix)
{
	zval *m_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2;
	zend_long m, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &m_param, &w_param, &h_param);
	ZVAL_LONG(&_0, m);
	ZVAL_LONG(&_1, w);
	ZVAL_LONG(&_2, h);
	RETURN_LONG(phpqt_qpixmap_true_matrix(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, toImage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixmap_to_image(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, fromImage)
{
	zval *image_param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long image;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &image_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, image);
	RETURN_LONG(phpqt_qpixmap_from_image(&_0, flags));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, fromImageReader)
{
	zval *imageReader_param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long imageReader;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(imageReader)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &imageReader_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, imageReader);
	RETURN_LONG(phpqt_qpixmap_from_image_reader(&_0, flags));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, load)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, *format = NULL, format_sub, *flags = NULL, flags_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &fileName_param, &format, &flags);
	zephir_get_strval(&fileName, fileName_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpixmap_load(&_0, &fileName, format, flags);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, loadFromData)
{
	zval *handle_param = NULL, *buf = NULL, buf_sub, *len_param = NULL, *format = NULL, format_sub, *flags = NULL, flags_sub, __$null, _0, _1;
	zend_long handle, len, r = 0;

	ZVAL_UNDEF(&buf_sub);
	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(buf)
		Z_PARAM_LONG(len)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 2, &handle_param, &buf, &len_param, &format, &flags);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len);
	r = phpqt_qpixmap_load_from_data(&_0, buf, &_1, format, flags);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, loadFromDataQByteArrayCharQtImageConversionFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *data_param = NULL, *format = NULL, format_sub, *flags = NULL, flags_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&data);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &data_param, &format, &flags);
	zephir_get_strval(&data, data_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpixmap_load_from_data_q_byte_array_char_qt_image_conversion_flags(&_0, &data, format, flags);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, save)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, *format = NULL, format_sub, *quality_param = NULL, __$null, _0, _1;
	zend_long handle, quality, r = 0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&fileName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_LONG(quality)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &fileName_param, &format, &quality_param);
	zephir_get_strval(&fileName, fileName_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!quality_param) {
		quality = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, quality);
	r = phpqt_qpixmap_save(&_0, &fileName, format, &_1);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, saveQIODeviceCharInt)
{
	zval *handle_param = NULL, *device_param = NULL, *format = NULL, format_sub, *quality_param = NULL, __$null, _0, _1, _2;
	zend_long handle, device, quality, r = 0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_LONG(quality)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &device_param, &format, &quality_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!quality_param) {
		quality = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	ZVAL_LONG(&_2, quality);
	r = phpqt_qpixmap_save_q_i_o_device_char_int(&_0, &_1, format, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, convertFromImage)
{
	zval *handle_param = NULL, *img_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1;
	zend_long handle, img, r = 0;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(img)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &img_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, img);
	r = phpqt_qpixmap_convert_from_image(&_0, &_1, flags);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, copy)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &width_param, &height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, width);
	ZVAL_LONG(&_4, height);
	RETURN_LONG(phpqt_qpixmap_copy(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, copyQRect)
{
	zval *handle_param = NULL, *rectX = NULL, rectX_sub, *rectY = NULL, rectY_sub, *rectWidth = NULL, rectWidth_sub, *rectHeight = NULL, rectHeight_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&rectX_sub);
	ZVAL_UNDEF(&rectY_sub);
	ZVAL_UNDEF(&rectWidth_sub);
	ZVAL_UNDEF(&rectHeight_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(rectX)
		Z_PARAM_ZVAL_OR_NULL(rectY)
		Z_PARAM_ZVAL_OR_NULL(rectWidth)
		Z_PARAM_ZVAL_OR_NULL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 4, &handle_param, &rectX, &rectY, &rectWidth, &rectHeight);
	if (!rectX) {
		rectX = &rectX_sub;
		rectX = &__$null;
	}
	if (!rectY) {
		rectY = &rectY_sub;
		rectY = &__$null;
	}
	if (!rectWidth) {
		rectWidth = &rectWidth_sub;
		rectWidth = &__$null;
	}
	if (!rectHeight) {
		rectHeight = &rectHeight_sub;
		rectHeight = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixmap_copy_q_rect(&_0, rectX, rectY, rectWidth, rectHeight));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scroll)
{
	zval *handle_param = NULL, *dx_param = NULL, *dy_param = NULL, *x_param = NULL, *y_param = NULL, *width_param = NULL, *height_param = NULL, *exposed_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, dx, dy, x, y, width, height, exposed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(exposed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 1, &handle_param, &dx_param, &dy_param, &x_param, &y_param, &width_param, &height_param, &exposed_param);
	if (!exposed_param) {
		exposed = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dx);
	ZVAL_LONG(&_2, dy);
	ZVAL_LONG(&_3, x);
	ZVAL_LONG(&_4, y);
	ZVAL_LONG(&_5, width);
	ZVAL_LONG(&_6, height);
	ZVAL_LONG(&_7, exposed);
	phpqt_qpixmap_scroll(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, scrollIntIntQRectQRegion)
{
	zval *handle_param = NULL, *dx_param = NULL, *dy_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *exposed_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long handle, dx, dy, rectX, rectY, rectWidth, rectHeight, exposed;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(exposed)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 1, &handle_param, &dx_param, &dy_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &exposed_param);
	if (!exposed_param) {
		exposed = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, dx);
	ZVAL_LONG(&_2, dy);
	ZVAL_LONG(&_3, rectX);
	ZVAL_LONG(&_4, rectY);
	ZVAL_LONG(&_5, rectWidth);
	ZVAL_LONG(&_6, rectHeight);
	ZVAL_LONG(&_7, exposed);
	phpqt_qpixmap_scroll_int_int_q_rect_q_region(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, cacheKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixmap_cache_key(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, isDetached)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpixmap_is_detached(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, detach)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpixmap_detach(&_0);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, isQBitmap)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpixmap_is_q_bitmap(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, paintEngine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpixmap_paint_engine(&_0));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, metric)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	RETURN_LONG(phpqt_qpixmap_metric(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPixmap_QPixmap, fromImageInPlace)
{
	zval *image_param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long image;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(image)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &image_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, image);
	RETURN_LONG(phpqt_qpixmap_from_image_in_place(&_0, flags));
}

