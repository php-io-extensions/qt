
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
#include "src/gui-qimage.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QImage_QImage)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QImage, QImage, qt, gui_qimage_qimage, qt_gui_qimage_qimage_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QImage_QImage, staticMetaObject)
{

	RETURN_LONG(phpqt_qimage_static_meta_object());
}

PHP_METHOD(Qt_Gui_QImage_QImage, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qimage_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QImage_QImage, new_)
{

	RETURN_LONG(phpqt_qimage_new());
}

PHP_METHOD(Qt_Gui_QImage_QImage, newQSizeQImageFormat)
{
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, *format_param = NULL, _0, _1, _2;
	zend_long sizeWidth, sizeHeight, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &sizeWidth_param, &sizeHeight_param, &format_param);
	ZVAL_LONG(&_0, sizeWidth);
	ZVAL_LONG(&_1, sizeHeight);
	ZVAL_LONG(&_2, format);
	RETURN_LONG(phpqt_qimage_new_q_size_q_image_format(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, newIntIntQImageFormat)
{
	zval *width_param = NULL, *height_param = NULL, *format_param = NULL, _0, _1, _2;
	zend_long width, height, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &width_param, &height_param, &format_param);
	ZVAL_LONG(&_0, width);
	ZVAL_LONG(&_1, height);
	ZVAL_LONG(&_2, format);
	RETURN_LONG(phpqt_qimage_new_int_int_q_image_format(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, newQStringChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL, *format = NULL, format_sub, __$null;
	zval fileName;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &fileName_param, &format);
	zephir_get_strval(&fileName, fileName_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	RETURN_MM_LONG(phpqt_qimage_new_q_string_char(&fileName, format));
}

PHP_METHOD(Qt_Gui_QImage_QImage, newQImage)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qimage_new_q_image(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, swap)
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
	phpqt_qimage_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qimage_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, devType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_dev_type(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, detach)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qimage_detach(&_0);
}

PHP_METHOD(Qt_Gui_QImage_QImage, isDetached)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qimage_is_detached(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, copy)
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
	RETURN_LONG(phpqt_qimage_copy(&_0, rectX, rectY, rectWidth, rectHeight));
}

PHP_METHOD(Qt_Gui_QImage_QImage, copyIntIntIntInt)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, x, y, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &x_param, &y_param, &w_param, &h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, w);
	ZVAL_LONG(&_4, h);
	RETURN_LONG(phpqt_qimage_copy_int_int_int_int(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QImage_QImage, format)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_format(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertToFormat)
{
	zval *handle_param = NULL, *f_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(f)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &f_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	RETURN_LONG(phpqt_qimage_convert_to_format(&_0, &_1, flags));
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertToFormatQImageFormatQListUnsignedIntQtImageConversionFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval colorTable;
	zval *handle_param = NULL, *f_param = NULL, *colorTable_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&colorTable);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(f)
		Z_PARAM_ARRAY(colorTable)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &f_param, &colorTable_param, &flags);
	zephir_get_arrval(&colorTable, colorTable_param);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	RETURN_MM_LONG(phpqt_qimage_convert_to_format_q_image_format_q_list_unsigned_int_qt_image_conversion_flags(&_0, &_1, &colorTable, flags));
}

PHP_METHOD(Qt_Gui_QImage_QImage, reinterpretAsFormat)
{
	zval *handle_param = NULL, *f_param = NULL, _0, _1;
	zend_long handle, f, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &f_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	r = phpqt_qimage_reinterpret_as_format(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertedTo)
{
	zval *handle_param = NULL, *f_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(f)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &f_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	RETURN_LONG(phpqt_qimage_converted_to(&_0, &_1, flags));
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertTo)
{
	zval *handle_param = NULL, *f_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(f)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &f_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	phpqt_qimage_convert_to(&_0, &_1, flags);
}

PHP_METHOD(Qt_Gui_QImage_QImage, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_width(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_height(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, size)
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
	phpqt_qimage_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QImage_QImage, rect)
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
	phpqt_qimage_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QImage_QImage, depth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_depth(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, colorCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_color_count(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, bitPlaneCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_bit_plane_count(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, color)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	RETURN_LONG(phpqt_qimage_color(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QImage_QImage, setColor)
{
	zval *handle_param = NULL, *i_param = NULL, *c_param = NULL, _0, _1, _2;
	zend_long handle, i, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &i_param, &c_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	ZVAL_LONG(&_2, c);
	phpqt_qimage_set_color(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QImage_QImage, setColorCount)
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
	phpqt_qimage_set_color_count(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, allGray)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qimage_all_gray(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, isGrayscale)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qimage_is_grayscale(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, sizeInBytes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_size_in_bytes(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, bytesPerLine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_bytes_per_line(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, valid)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, x, y, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	r = phpqt_qimage_valid(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, validQPoint)
{
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, _0, _1, _2;
	zend_long handle, ptX, ptY, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ptX)
		Z_PARAM_LONG(ptY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ptX_param, &ptY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ptX);
	ZVAL_LONG(&_2, ptY);
	r = phpqt_qimage_valid_q_point(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, pixelIndex)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	RETURN_LONG(phpqt_qimage_pixel_index(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, pixelIndexQPoint)
{
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, _0, _1, _2;
	zend_long handle, ptX, ptY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ptX)
		Z_PARAM_LONG(ptY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ptX_param, &ptY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ptX);
	ZVAL_LONG(&_2, ptY);
	RETURN_LONG(phpqt_qimage_pixel_index_q_point(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, pixel)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	RETURN_LONG(phpqt_qimage_pixel(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, pixelQPoint)
{
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, _0, _1, _2;
	zend_long handle, ptX, ptY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ptX)
		Z_PARAM_LONG(ptY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ptX_param, &ptY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ptX);
	ZVAL_LONG(&_2, ptY);
	RETURN_LONG(phpqt_qimage_pixel_q_point(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, setPixel)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *index_or_rgb_param = NULL, _0, _1, _2, _3;
	zend_long handle, x, y, index_or_rgb;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(index_or_rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &index_or_rgb_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, index_or_rgb);
	phpqt_qimage_set_pixel(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QImage_QImage, setPixelQPointUint)
{
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, *index_or_rgb_param = NULL, _0, _1, _2, _3;
	zend_long handle, ptX, ptY, index_or_rgb;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ptX)
		Z_PARAM_LONG(ptY)
		Z_PARAM_LONG(index_or_rgb)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &ptX_param, &ptY_param, &index_or_rgb_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ptX);
	ZVAL_LONG(&_2, ptY);
	ZVAL_LONG(&_3, index_or_rgb);
	phpqt_qimage_set_pixel_q_point_uint(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QImage_QImage, pixelColor)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	RETURN_LONG(phpqt_qimage_pixel_color(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, pixelColorQPoint)
{
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, _0, _1, _2;
	zend_long handle, ptX, ptY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ptX)
		Z_PARAM_LONG(ptY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &ptX_param, &ptY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ptX);
	ZVAL_LONG(&_2, ptY);
	RETURN_LONG(phpqt_qimage_pixel_color_q_point(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, setPixelColor)
{
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *c_param = NULL, _0, _1, _2, _3;
	zend_long handle, x, y, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &c_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	ZVAL_LONG(&_3, c);
	phpqt_qimage_set_pixel_color(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QImage_QImage, setPixelColorQPointQColor)
{
	zval *handle_param = NULL, *ptX_param = NULL, *ptY_param = NULL, *c_param = NULL, _0, _1, _2, _3;
	zend_long handle, ptX, ptY, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ptX)
		Z_PARAM_LONG(ptY)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &ptX_param, &ptY_param, &c_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ptX);
	ZVAL_LONG(&_2, ptY);
	ZVAL_LONG(&_3, c);
	phpqt_qimage_set_pixel_color_q_point_q_color(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QImage_QImage, colorTable)
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
	phpqt_qimage_color_table(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QImage_QImage, setColorTable)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval colors;
	zval *handle_param = NULL, *colors_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&colors);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(colors)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &colors_param);
	zephir_get_arrval(&colors, colors_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qimage_set_color_table(&_0, &colors);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QImage_QImage, devicePixelRatio)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qimage_device_pixel_ratio(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, setDevicePixelRatio)
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
	phpqt_qimage_set_device_pixel_ratio(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, deviceIndependentSize)
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
	phpqt_qimage_device_independent_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QImage_QImage, fill)
{
	zval *handle_param = NULL, *pixel_param = NULL, _0, _1;
	zend_long handle, pixel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pixel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pixel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pixel);
	phpqt_qimage_fill(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, fillQColor)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	phpqt_qimage_fill_q_color(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, fillQtGlobalColor)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	phpqt_qimage_fill_qt_global_color(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, hasAlphaChannel)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qimage_has_alpha_channel(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, setAlphaChannel)
{
	zval *handle_param = NULL, *alphaChannel_param = NULL, _0, _1;
	zend_long handle, alphaChannel;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alphaChannel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alphaChannel_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alphaChannel);
	phpqt_qimage_set_alpha_channel(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, createAlphaMask)
{
	zval *handle_param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_create_alpha_mask(&_0, flags));
}

PHP_METHOD(Qt_Gui_QImage_QImage, createHeuristicMask)
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
	RETURN_LONG(phpqt_qimage_create_heuristic_mask(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QImage_QImage, createMaskFromColor)
{
	zval *handle_param = NULL, *color_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &color_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	RETURN_LONG(phpqt_qimage_create_mask_from_color(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QImage_QImage, scaled)
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
	RETURN_LONG(phpqt_qimage_scaled(&_0, &_1, &_2, aspectMode, mode));
}

PHP_METHOD(Qt_Gui_QImage_QImage, scaledQSizeQtAspectRatioModeQtTransformationMode)
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
	RETURN_LONG(phpqt_qimage_scaled_q_size_qt_aspect_ratio_mode_qt_transformation_mode(&_0, &_1, &_2, aspectMode, mode));
}

PHP_METHOD(Qt_Gui_QImage_QImage, scaledToWidth)
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
	RETURN_LONG(phpqt_qimage_scaled_to_width(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QImage_QImage, scaledToHeight)
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
	RETURN_LONG(phpqt_qimage_scaled_to_height(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QImage_QImage, transformed)
{
	zval *handle_param = NULL, *matrix_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, matrix;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(matrix)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &matrix_param, &mode);
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, matrix);
	RETURN_LONG(phpqt_qimage_transformed(&_0, &_1, mode));
}

PHP_METHOD(Qt_Gui_QImage_QImage, trueMatrix)
{
	zval *arg0_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2;
	zend_long arg0, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &arg0_param, &w_param, &h_param);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, w);
	ZVAL_LONG(&_2, h);
	RETURN_LONG(phpqt_qimage_true_matrix(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, mirrored)
{
	zend_bool horizontally, vertically;
	zval *handle_param = NULL, *horizontally_param = NULL, *vertically_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(horizontally)
		Z_PARAM_BOOL(vertically)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &handle_param, &horizontally_param, &vertically_param);
	if (!horizontally_param) {
		horizontally = 0;
	} else {
		}
	if (!vertically_param) {
		vertically = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (horizontally ? 1 : 0));
	ZVAL_BOOL(&_2, (vertically ? 1 : 0));
	RETURN_LONG(phpqt_qimage_mirrored(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, rgbSwapped)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_rgb_swapped(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, mirror)
{
	zend_bool horizontally, vertically;
	zval *handle_param = NULL, *horizontally_param = NULL, *vertically_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(horizontally)
		Z_PARAM_BOOL(vertically)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &handle_param, &horizontally_param, &vertically_param);
	if (!horizontally_param) {
		horizontally = 0;
	} else {
		}
	if (!vertically_param) {
		vertically = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (horizontally ? 1 : 0));
	ZVAL_BOOL(&_2, (vertically ? 1 : 0));
	phpqt_qimage_mirror(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QImage_QImage, rgbSwap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qimage_rgb_swap(&_0);
}

PHP_METHOD(Qt_Gui_QImage_QImage, invertPixels)
{
	zval *handle_param = NULL, *arg0 = NULL, arg0_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &arg0);
	if (!arg0) {
		arg0 = &arg0_sub;
		arg0 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qimage_invert_pixels(&_0, arg0);
}

PHP_METHOD(Qt_Gui_QImage_QImage, colorSpace)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_color_space(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertedToColorSpace)
{
	zval *handle_param = NULL, *colorSpace_param = NULL, _0, _1;
	zend_long handle, colorSpace;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorSpace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &colorSpace_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorSpace);
	RETURN_LONG(phpqt_qimage_converted_to_color_space(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertedToColorSpaceQColorSpaceQImageFormatQtImageConversionFlags)
{
	zval *handle_param = NULL, *colorSpace_param = NULL, *format_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2;
	zend_long handle, colorSpace, format;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorSpace)
		Z_PARAM_LONG(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &colorSpace_param, &format_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorSpace);
	ZVAL_LONG(&_2, format);
	RETURN_LONG(phpqt_qimage_converted_to_color_space_q_color_space_q_image_format_qt_image_conversion_flags(&_0, &_1, &_2, flags));
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertToColorSpace)
{
	zval *handle_param = NULL, *colorSpace_param = NULL, _0, _1;
	zend_long handle, colorSpace;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorSpace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &colorSpace_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorSpace);
	phpqt_qimage_convert_to_color_space(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertToColorSpaceQColorSpaceQImageFormatQtImageConversionFlags)
{
	zval *handle_param = NULL, *colorSpace_param = NULL, *format_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2;
	zend_long handle, colorSpace, format;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorSpace)
		Z_PARAM_LONG(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &colorSpace_param, &format_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorSpace);
	ZVAL_LONG(&_2, format);
	phpqt_qimage_convert_to_color_space_q_color_space_q_image_format_qt_image_conversion_flags(&_0, &_1, &_2, flags);
}

PHP_METHOD(Qt_Gui_QImage_QImage, setColorSpace)
{
	zval *handle_param = NULL, *colorSpace_param = NULL, _0, _1;
	zend_long handle, colorSpace;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(colorSpace)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &colorSpace_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, colorSpace);
	phpqt_qimage_set_color_space(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, colorTransformed)
{
	zval *handle_param = NULL, *transform_param = NULL, _0, _1;
	zend_long handle, transform;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(transform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &transform_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, transform);
	RETURN_LONG(phpqt_qimage_color_transformed(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QImage_QImage, colorTransformedQColorTransformQImageFormatQtImageConversionFlags)
{
	zval *handle_param = NULL, *transform_param = NULL, *format_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2;
	zend_long handle, transform, format;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(transform)
		Z_PARAM_LONG(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &transform_param, &format_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, transform);
	ZVAL_LONG(&_2, format);
	RETURN_LONG(phpqt_qimage_color_transformed_q_color_transform_q_image_format_qt_image_conversion_flags(&_0, &_1, &_2, flags));
}

PHP_METHOD(Qt_Gui_QImage_QImage, applyColorTransform)
{
	zval *handle_param = NULL, *transform_param = NULL, _0, _1;
	zend_long handle, transform;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(transform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &transform_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, transform);
	phpqt_qimage_apply_color_transform(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, applyColorTransformQColorTransformQImageFormatQtImageConversionFlags)
{
	zval *handle_param = NULL, *transform_param = NULL, *format_param = NULL, *flags = NULL, flags_sub, __$null, _0, _1, _2;
	zend_long handle, transform, format;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(transform)
		Z_PARAM_LONG(format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &transform_param, &format_param, &flags);
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, transform);
	ZVAL_LONG(&_2, format);
	phpqt_qimage_apply_color_transform_q_color_transform_q_image_format_qt_image_conversion_flags(&_0, &_1, &_2, flags);
}

PHP_METHOD(Qt_Gui_QImage_QImage, load)
{
	zval *handle_param = NULL, *device_param = NULL, *format = NULL, format_sub, _0, _1;
	zend_long handle, device, r = 0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
		Z_PARAM_ZVAL(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &device_param, &format);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	r = phpqt_qimage_load(&_0, &_1, format);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, loadQStringChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, *format = NULL, format_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &fileName_param, &format);
	zephir_get_strval(&fileName, fileName_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qimage_load_q_string_char(&_0, &fileName, format);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, loadFromData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *data_param = NULL, *format = NULL, format_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&data);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &data_param, &format);
	zephir_get_strval(&data, data_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qimage_load_from_data(&_0, &data, format);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, loadFromDataUcharIntChar)
{
	zval *handle_param = NULL, *buf = NULL, buf_sub, *len_param = NULL, *format = NULL, format_sub, __$null, _0, _1;
	zend_long handle, len, r = 0;

	ZVAL_UNDEF(&buf_sub);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(buf)
		Z_PARAM_LONG(len)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &buf, &len_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len);
	r = phpqt_qimage_load_from_data_uchar_int_char(&_0, buf, &_1, format);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, loadFromDataQByteArrayChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *data_param = NULL, *format = NULL, format_sub, __$null, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&data);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &data_param, &format);
	zephir_get_strval(&data, data_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qimage_load_from_data_q_byte_array_char(&_0, &data, format);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, save)
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
	r = phpqt_qimage_save(&_0, &fileName, format, &_1);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, saveQIODeviceCharInt)
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
	r = phpqt_qimage_save_q_i_o_device_char_int(&_0, &_1, format, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, fromData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL, *format = NULL, format_sub, __$null;
	zval data;

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &data_param, &format);
	zephir_get_strval(&data, data_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	RETURN_MM_LONG(phpqt_qimage_from_data(&data, format));
}

PHP_METHOD(Qt_Gui_QImage_QImage, fromDataUcharIntChar)
{
	zend_long size;
	zval *data = NULL, data_sub, *size_param = NULL, *format = NULL, format_sub, __$null, _0;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(size)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &data, &size_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZVAL_LONG(&_0, size);
	RETURN_LONG(phpqt_qimage_from_data_uchar_int_char(data, &_0, format));
}

PHP_METHOD(Qt_Gui_QImage_QImage, fromDataQByteArrayChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data_param = NULL, *format = NULL, format_sub, __$null;
	zval data;

	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &data_param, &format);
	zephir_get_strval(&data, data_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	RETURN_MM_LONG(phpqt_qimage_from_data_q_byte_array_char(&data, format));
}

PHP_METHOD(Qt_Gui_QImage_QImage, cacheKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_cache_key(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, paintEngine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_paint_engine(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, dotsPerMeterX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_dots_per_meter_x(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, dotsPerMeterY)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_dots_per_meter_y(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, setDotsPerMeterX)
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
	phpqt_qimage_set_dots_per_meter_x(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, setDotsPerMeterY)
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
	phpqt_qimage_set_dots_per_meter_y(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, offset)
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
	phpqt_qimage_offset(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QImage_QImage, setOffset)
{
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, _0, _1, _2;
	zend_long handle, arg0X, arg0Y;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &arg0X_param, &arg0Y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	phpqt_qimage_set_offset(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QImage_QImage, textKeys)
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
	phpqt_qimage_text_keys(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QImage_QImage, text)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &key_param);
	if (!key_param) {
		ZEPHIR_INIT_VAR(&key);
		ZVAL_STRING(&key, "");
	} else {
		zephir_get_strval(&key, key_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qimage_text(&result, &_0, &key);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QImage_QImage, setText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key, value;
	zval *handle_param = NULL, *key_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &key_param, &value_param);
	zephir_get_strval(&key, key_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qimage_set_text(&_0, &key, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QImage_QImage, pixelFormat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_pixel_format(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, toPixelFormat)
{
	zval *format_param = NULL, _0;
	zend_long format;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &format_param);
	ZVAL_LONG(&_0, format);
	RETURN_LONG(phpqt_qimage_to_pixel_format(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, toImageFormat)
{
	zval *format_param = NULL, _0;
	zend_long format;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &format_param);
	ZVAL_LONG(&_0, format);
	RETURN_LONG(phpqt_qimage_to_image_format(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, metric)
{
	zval *handle_param = NULL, *metric_param = NULL, _0, _1;
	zend_long handle, metric;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(metric)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &metric_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, metric);
	RETURN_LONG(phpqt_qimage_metric(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QImage_QImage, mirrored_helper)
{
	zend_bool horizontal, vertical;
	zval *handle_param = NULL, *horizontal_param = NULL, *vertical_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(horizontal)
		Z_PARAM_BOOL(vertical)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &horizontal_param, &vertical_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (horizontal ? 1 : 0));
	ZVAL_BOOL(&_2, (vertical ? 1 : 0));
	RETURN_LONG(phpqt_qimage_mirrored_helper(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, rgbSwapped_helper)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qimage_rgb_swapped_helper(&_0));
}

PHP_METHOD(Qt_Gui_QImage_QImage, mirrored_inplace)
{
	zend_bool horizontal, vertical;
	zval *handle_param = NULL, *horizontal_param = NULL, *vertical_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(horizontal)
		Z_PARAM_BOOL(vertical)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &horizontal_param, &vertical_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (horizontal ? 1 : 0));
	ZVAL_BOOL(&_2, (vertical ? 1 : 0));
	phpqt_qimage_mirrored_inplace(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QImage_QImage, rgbSwapped_inplace)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qimage_rgb_swapped_inplace(&_0);
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertToFormat_helper)
{
	zval *handle_param = NULL, *format_param = NULL, *flags_param = NULL, _0, _1, _2;
	zend_long handle, format, flags;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &format_param, &flags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	ZVAL_LONG(&_2, flags);
	RETURN_LONG(phpqt_qimage_convert_to_format_helper(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, convertToFormat_inplace)
{
	zval *handle_param = NULL, *format_param = NULL, *flags_param = NULL, _0, _1, _2;
	zend_long handle, format, flags, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(format)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &format_param, &flags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, format);
	ZVAL_LONG(&_2, flags);
	r = phpqt_qimage_convert_to_format_inplace(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QImage_QImage, smoothScaled)
{
	zval *handle_param = NULL, *w_param = NULL, *h_param = NULL, _0, _1, _2;
	zend_long handle, w, h;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &w_param, &h_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, w);
	ZVAL_LONG(&_2, h);
	RETURN_LONG(phpqt_qimage_smooth_scaled(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QImage_QImage, detachMetadata)
{
	zend_bool invalidateCache;
	zval *handle_param = NULL, *invalidateCache_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(invalidateCache)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &invalidateCache_param);
	if (!invalidateCache_param) {
		invalidateCache = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (invalidateCache ? 1 : 0));
	phpqt_qimage_detach_metadata(&_0, &_1);
}

