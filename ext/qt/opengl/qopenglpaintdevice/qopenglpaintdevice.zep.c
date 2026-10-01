
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
#include "src/opengl-qopenglpaintdevice.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice)
{
	ZEPHIR_REGISTER_CLASS(Qt\\OpenGL\\QOpenGLPaintDevice, QOpenGLPaintDevice, qt, opengl_qopenglpaintdevice_qopenglpaintdevice, qt_opengl_qopenglpaintdevice_qopenglpaintdevice_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, new_)
{

	RETURN_LONG(phpqt_qopenglpaintdevice_new());
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, newQSize)
{
	zval *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1;
	zend_long sizeWidth, sizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &sizeWidth_param, &sizeHeight_param);
	ZVAL_LONG(&_0, sizeWidth);
	ZVAL_LONG(&_1, sizeHeight);
	RETURN_LONG(phpqt_qopenglpaintdevice_new_q_size(&_0, &_1));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, newIntInt)
{
	zval *width_param = NULL, *height_param = NULL, _0, _1;
	zend_long width, height;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &width_param, &height_param);
	ZVAL_LONG(&_0, width);
	ZVAL_LONG(&_1, height);
	RETURN_LONG(phpqt_qopenglpaintdevice_new_int_int(&_0, &_1));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, devType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglpaintdevice_dev_type(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, paintEngine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglpaintdevice_paint_engine(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, context)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qopenglpaintdevice_context(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, size)
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
	phpqt_qopenglpaintdevice_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setSize)
{
	zval *handle_param = NULL, *sizeWidth_param = NULL, *sizeHeight_param = NULL, _0, _1, _2;
	zend_long handle, sizeWidth, sizeHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sizeWidth)
		Z_PARAM_LONG(sizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sizeWidth_param, &sizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sizeWidth);
	ZVAL_LONG(&_2, sizeHeight);
	phpqt_qopenglpaintdevice_set_size(&_0, &_1, &_2);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setDevicePixelRatio)
{
	double devicePixelRatio;
	zval *handle_param = NULL, *devicePixelRatio_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(devicePixelRatio)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &devicePixelRatio_param);
	devicePixelRatio = zephir_get_doubleval(devicePixelRatio_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, devicePixelRatio);
	phpqt_qopenglpaintdevice_set_device_pixel_ratio(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, dotsPerMeterX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qopenglpaintdevice_dots_per_meter_x(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, dotsPerMeterY)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qopenglpaintdevice_dots_per_meter_y(&_0));
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setDotsPerMeterX)
{
	double arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	arg0 = zephir_get_doubleval(arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0);
	phpqt_qopenglpaintdevice_set_dots_per_meter_x(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setDotsPerMeterY)
{
	double arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	arg0 = zephir_get_doubleval(arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0);
	phpqt_qopenglpaintdevice_set_dots_per_meter_y(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, setPaintFlipped)
{
	zend_bool flipped;
	zval *handle_param = NULL, *flipped_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(flipped)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flipped_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (flipped ? 1 : 0));
	phpqt_qopenglpaintdevice_set_paint_flipped(&_0, &_1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, paintFlipped)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qopenglpaintdevice_paint_flipped(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, ensureActiveTarget)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qopenglpaintdevice_ensure_active_target(&_0);
}

PHP_METHOD(Qt_OpenGL_QOpenGLPaintDevice_QOpenGLPaintDevice, metric)
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
	RETURN_LONG(phpqt_qopenglpaintdevice_metric(&_0, &_1));
}

