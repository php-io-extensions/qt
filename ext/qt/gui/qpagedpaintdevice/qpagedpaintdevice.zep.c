
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
#include "src/gui-qpagedpaintdevice.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPagedPaintDevice, QPagedPaintDevice, qt, gui_qpagedpaintdevice_qpagedpaintdevice, qt_gui_qpagedpaintdevice_qpagedpaintdevice_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, newPage)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpagedpaintdevice_new_page(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageLayout)
{
	zval *handle_param = NULL, *pageLayout_param = NULL, _0, _1;
	zend_long handle, pageLayout, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pageLayout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pageLayout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pageLayout);
	r = phpqt_qpagedpaintdevice_set_page_layout(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageSize)
{
	zval *handle_param = NULL, *pageSize_param = NULL, _0, _1;
	zend_long handle, pageSize, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pageSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pageSize_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pageSize);
	r = phpqt_qpagedpaintdevice_set_page_size(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	r = phpqt_qpagedpaintdevice_set_page_orientation(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageMargins)
{
	double marginsLeft, marginsTop, marginsRight, marginsBottom;
	zval *handle_param = NULL, *marginsLeft_param = NULL, *marginsTop_param = NULL, *marginsRight_param = NULL, *marginsBottom_param = NULL, *units = NULL, units_sub, __$null, _0, _1, _2, _3, _4;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&units_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(marginsLeft)
		Z_PARAM_ZVAL(marginsTop)
		Z_PARAM_ZVAL(marginsRight)
		Z_PARAM_ZVAL(marginsBottom)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(units)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 1, &handle_param, &marginsLeft_param, &marginsTop_param, &marginsRight_param, &marginsBottom_param, &units);
	marginsLeft = zephir_get_doubleval(marginsLeft_param);
	marginsTop = zephir_get_doubleval(marginsTop_param);
	marginsRight = zephir_get_doubleval(marginsRight_param);
	marginsBottom = zephir_get_doubleval(marginsBottom_param);
	if (!units) {
		units = &units_sub;
		units = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, marginsLeft);
	ZVAL_DOUBLE(&_2, marginsTop);
	ZVAL_DOUBLE(&_3, marginsRight);
	ZVAL_DOUBLE(&_4, marginsBottom);
	r = phpqt_qpagedpaintdevice_set_page_margins(&_0, &_1, &_2, &_3, &_4, units);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, pageLayout)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagedpaintdevice_page_layout(&_0));
}

PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, setPageRanges)
{
	zval *handle_param = NULL, *ranges_param = NULL, _0, _1;
	zend_long handle, ranges;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(ranges)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &ranges_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, ranges);
	phpqt_qpagedpaintdevice_set_page_ranges(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPagedPaintDevice_QPagedPaintDevice, pageRanges)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagedpaintdevice_page_ranges(&_0));
}

