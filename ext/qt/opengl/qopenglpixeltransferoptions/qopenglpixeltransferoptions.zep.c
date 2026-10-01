
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
#include "src/opengl-qopenglpixeltransferoptions.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLPixelTransferOptions, QOpenGLPixelTransferOptions, qt, opengl_qopenglpixeltransferoptions_qopenglpixeltransferoptions, qt_opengl_qopenglpixeltransferoptions_qopenglpixeltransferoptions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, new_)
{

	RETURN_LONG(phpqt_qopenglpixeltransferoptions_new());
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, newQOpenGLPixelTransferOptions)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qopenglpixeltransferoptions_new_q_open_g_l_pixel_transfer_options(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, swap)
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
	phpqt_qopenglpixeltransferoptions_swap(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, setAlignment)
{
	zval *handle_param = NULL, *alignment_param = NULL, _0, _1;
	zend_long handle, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alignment);
	phpqt_qopenglpixeltransferoptions_set_alignment(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, alignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglpixeltransferoptions_alignment(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, setSkipImages)
{
	zval *handle_param = NULL, *skipImages_param = NULL, _0, _1;
	zend_long handle, skipImages;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(skipImages)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &skipImages_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, skipImages);
	phpqt_qopenglpixeltransferoptions_set_skip_images(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, skipImages)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglpixeltransferoptions_skip_images(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, setSkipRows)
{
	zval *handle_param = NULL, *skipRows_param = NULL, _0, _1;
	zend_long handle, skipRows;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(skipRows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &skipRows_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, skipRows);
	phpqt_qopenglpixeltransferoptions_set_skip_rows(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, skipRows)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglpixeltransferoptions_skip_rows(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, setSkipPixels)
{
	zval *handle_param = NULL, *skipPixels_param = NULL, _0, _1;
	zend_long handle, skipPixels;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(skipPixels)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &skipPixels_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, skipPixels);
	phpqt_qopenglpixeltransferoptions_set_skip_pixels(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, skipPixels)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglpixeltransferoptions_skip_pixels(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, setImageHeight)
{
	zval *handle_param = NULL, *imageHeight_param = NULL, _0, _1;
	zend_long handle, imageHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(imageHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &imageHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, imageHeight);
	phpqt_qopenglpixeltransferoptions_set_image_height(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, imageHeight)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglpixeltransferoptions_image_height(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, setRowLength)
{
	zval *handle_param = NULL, *rowLength_param = NULL, _0, _1;
	zend_long handle, rowLength;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rowLength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &rowLength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rowLength);
	phpqt_qopenglpixeltransferoptions_set_row_length(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, rowLength)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglpixeltransferoptions_row_length(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, setLeastSignificantByteFirst)
{
	zend_bool lsbFirst;
	zval *handle_param = NULL, *lsbFirst_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(lsbFirst)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &lsbFirst_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (lsbFirst ? 1 : 0));
	phpqt_qopenglpixeltransferoptions_set_least_significant_byte_first(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, isLeastSignificantBitFirst)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglpixeltransferoptions_is_least_significant_bit_first(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, setSwapBytesEnabled)
{
	zend_bool swapBytes;
	zval *handle_param = NULL, *swapBytes_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(swapBytes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &swapBytes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (swapBytes ? 1 : 0));
	phpqt_qopenglpixeltransferoptions_set_swap_bytes_enabled(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPixelTransferOptions_QOpenGLPixelTransferOptions, isSwapBytesEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglpixeltransferoptions_is_swap_bytes_enabled(&_0);
	RETURN_BOOL(r == 1);
}

