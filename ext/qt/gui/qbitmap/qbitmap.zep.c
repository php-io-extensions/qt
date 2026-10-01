
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
#include "src/gui-qbitmap.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QBitmap_QBitmap)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QBitmap, QBitmap, qt, gui_qbitmap_qbitmap, qt_gui_qbitmap_qbitmap_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, new_)
{

	RETURN_LONG(phpqt_qbitmap_new());
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, newQPixmap)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qbitmap_new_q_pixmap(&_0));
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, newIntInt)
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
	RETURN_LONG(phpqt_qbitmap_new_int_int(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, newQSize)
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
	RETURN_LONG(phpqt_qbitmap_new_q_size(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, newQStringChar)
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
	RETURN_MM_LONG(phpqt_qbitmap_new_q_string_char(&fileName, format));
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, swap)
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
	phpqt_qbitmap_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qbitmap_clear(&_0);
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, fromImage)
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
	RETURN_LONG(phpqt_qbitmap_from_image(&_0, flags));
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, fromData)
{
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, *bits = NULL, bits_sub, *monoFormat = NULL, monoFormat_sub, __$null, _0, _1;
	zend_long sizeWidth, sizeHeight;

	ZVAL_UNDEF(&bits_sub);
	ZVAL_UNDEF(&monoFormat_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
		Z_PARAM_ZVAL(bits)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(monoFormat)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &sizeWidth_param, &sizeHeight_param, &bits, &monoFormat);
	if (!monoFormat) {
		monoFormat = &monoFormat_sub;
		monoFormat = &__$null;
	}
	ZVAL_LONG(&_0, sizeWidth);
	ZVAL_LONG(&_1, sizeHeight);
	RETURN_LONG(phpqt_qbitmap_from_data(&_0, &_1, bits, monoFormat));
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, fromPixmap)
{
	zval *pixmap_param = NULL, _0;
	zend_long pixmap;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(pixmap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &pixmap_param);
	ZVAL_LONG(&_0, pixmap);
	RETURN_LONG(phpqt_qbitmap_from_pixmap(&_0));
}

PHP_METHOD(Qt_Gui_QBitmap_QBitmap, transformed)
{
	zval *handle_param = NULL, *matrix_param = NULL, _0, _1;
	zend_long handle, matrix;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &matrix_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, matrix);
	RETURN_LONG(phpqt_qbitmap_transformed(&_0, &_1));
}

