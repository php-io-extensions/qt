
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
#include "src/gui-qpaintdevicefunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPaintdeviceFunctions_QPaintdeviceFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPaintdeviceFunctions, QPaintdeviceFunctions, qt, gui_qpaintdevicefunctions_qpaintdevicefunctions, qt_gui_qpaintdevicefunctions_qpaintdevicefunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPaintdeviceFunctions_QPaintdeviceFunctions, qt_paint_device_metric)
{
	zval *device_param = NULL, *metric_param = NULL, _0, _1;
	zend_long device, metric;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(device)
		Z_PARAM_LONG(metric)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &device_param, &metric_param);
	ZVAL_LONG(&_0, device);
	ZVAL_LONG(&_1, metric);
	RETURN_LONG(phpqt_qpaintdevicefunctions_qt_paint_device_metric(&_0, &_1));
}

