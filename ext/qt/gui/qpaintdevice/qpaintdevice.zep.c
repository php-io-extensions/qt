
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
#include "src/gui-qpaintdevice.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPaintDevice_QPaintDevice)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPaintDevice, QPaintDevice, qt, gui_qpaintdevice_qpaintdevice, qt_gui_qpaintdevice_qpaintdevice_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, devType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_dev_type(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, paintingActive)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpaintdevice_painting_active(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, paintEngine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_paint_engine(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_width(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_height(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, widthMM)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_width_m_m(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, heightMM)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_height_m_m(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, logicalDpiX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_logical_dpi_x(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, logicalDpiY)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_logical_dpi_y(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, physicalDpiX)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_physical_dpi_x(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, physicalDpiY)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_physical_dpi_y(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, devicePixelRatio)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpaintdevice_device_pixel_ratio(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, devicePixelRatioF)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qpaintdevice_device_pixel_ratio_f(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, colorCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_color_count(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, depth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_depth(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, devicePixelRatioFScale)
{

	RETURN_DOUBLE(phpqt_qpaintdevice_device_pixel_ratio_f_scale());
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, encodeMetricF)
{
	double value;
	zval *metric_param = NULL, *value_param = NULL, _0, _1;
	zend_long metric;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(metric)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &metric_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, metric);
	ZVAL_DOUBLE(&_1, value);
	RETURN_LONG(phpqt_qpaintdevice_encode_metric_f(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, new_)
{

	RETURN_LONG(phpqt_qpaintdevice_new());
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, metric)
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
	RETURN_LONG(phpqt_qpaintdevice_metric(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, initPainter)
{
	zval *handle_param = NULL, *painter_param = NULL, _0, _1;
	zend_long handle, painter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &painter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	phpqt_qpaintdevice_init_painter(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, redirected)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *offset = NULL, offset_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&offset_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(offset)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &offset);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qpaintdevice_redirected(&result, &_0, offset);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, sharedPainter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_shared_painter(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, getDecodedMetricF)
{
	zval *handle_param = NULL, *metricA_param = NULL, *metricB_param = NULL, _0, _1, _2;
	zend_long handle, metricA, metricB;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(metricA)
		Z_PARAM_LONG(metricB)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &metricA_param, &metricB_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, metricA);
	ZVAL_LONG(&_2, metricB);
	RETURN_DOUBLE(phpqt_qpaintdevice_get_decoded_metric_f(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, painters)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpaintdevice_painters(&_0));
}

PHP_METHOD(Qt_Gui_QPaintDevice_QPaintDevice, setPainters)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpaintdevice_set_painters(&_0, &_1);
}

