
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
#include "src/gui-qbackingstore.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QBackingStore_QBackingStore)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QBackingStore, QBackingStore, qt, gui_qbackingstore_qbackingstore, qt_gui_qbackingstore_qbackingstore_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, new_)
{
	zval *window_param = NULL, _0;
	zend_long window;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(window)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &window_param);
	ZVAL_LONG(&_0, window);
	RETURN_LONG(phpqt_qbackingstore_new(&_0));
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, window)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbackingstore_window(&_0));
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, paintDevice)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbackingstore_paint_device(&_0));
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, flush)
{
	zval *handle_param = NULL, *region_param = NULL, *window_param = NULL, *offsetX = NULL, offsetX_sub, *offsetY = NULL, offsetY_sub, __$null, _0, _1, _2;
	zend_long handle, region, window;

	ZVAL_UNDEF(&offsetX_sub);
	ZVAL_UNDEF(&offsetY_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(region)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(window)
		Z_PARAM_ZVAL_OR_NULL(offsetX)
		Z_PARAM_ZVAL_OR_NULL(offsetY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 3, &handle_param, &region_param, &window_param, &offsetX, &offsetY);
	if (!window_param) {
		window = 0;
	} else {
		}
	if (!offsetX) {
		offsetX = &offsetX_sub;
		offsetX = &__$null;
	}
	if (!offsetY) {
		offsetY = &offsetY_sub;
		offsetY = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, region);
	ZVAL_LONG(&_2, window);
	phpqt_qbackingstore_flush(&_0, &_1, &_2, offsetX, offsetY);
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, resize)
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
	phpqt_qbackingstore_resize(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, size)
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
	phpqt_qbackingstore_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, scroll)
{
	zval *handle_param = NULL, *area_param = NULL, *dx_param = NULL, *dy_param = NULL, _0, _1, _2, _3;
	zend_long handle, area, dx, dy, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(area)
		Z_PARAM_LONG(dx)
		Z_PARAM_LONG(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &area_param, &dx_param, &dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, area);
	ZVAL_LONG(&_2, dx);
	ZVAL_LONG(&_3, dy);
	r = phpqt_qbackingstore_scroll(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, beginPaint)
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
	phpqt_qbackingstore_begin_paint(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, endPaint)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qbackingstore_end_paint(&_0);
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, setStaticContents)
{
	zval *handle_param = NULL, *region_param = NULL, _0, _1;
	zend_long handle, region;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(region)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &region_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, region);
	phpqt_qbackingstore_set_static_contents(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, staticContents)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qbackingstore_static_contents(&_0));
}

PHP_METHOD(Qt_Gui_QBackingStore_QBackingStore, hasStaticContents)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qbackingstore_has_static_contents(&_0);
	RETURN_BOOL(r == 1);
}

