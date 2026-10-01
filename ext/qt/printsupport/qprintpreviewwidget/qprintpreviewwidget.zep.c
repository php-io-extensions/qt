
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
#include "src/printsupport-qprintpreviewwidget.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget)
{
	ZEPHIR_REGISTER_CLASS(Qt\\PrintSupport\\QPrintPreviewWidget, QPrintPreviewWidget, qt, printsupport_qprintpreviewwidget_qprintpreviewwidget, qt_printsupport_qprintpreviewwidget_qprintpreviewwidget_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, staticMetaObject)
{

	RETURN_LONG(phpqt_qprintpreviewwidget_static_meta_object());
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qprintpreviewwidget_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, new_)
{
	zval *printer_param = NULL, *parent__param = NULL, *flags = NULL, flags_sub, __$null, _0, _1;
	zend_long printer, parent_;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(printer)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &printer_param, &parent__param, &flags);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, printer);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qprintpreviewwidget_new(&_0, &_1, flags));
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, newQWidgetQtWindowFlags)
{
	zval *parent__param = NULL, *flags = NULL, flags_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &parent__param, &flags);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qprintpreviewwidget_new_q_widget_qt_window_flags(&_0, flags));
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, zoomFactor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qprintpreviewwidget_zoom_factor(&_0));
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, orientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprintpreviewwidget_orientation(&_0));
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, viewMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprintpreviewwidget_view_mode(&_0));
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, zoomMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprintpreviewwidget_zoom_mode(&_0));
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, currentPage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprintpreviewwidget_current_page(&_0));
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, pageCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qprintpreviewwidget_page_count(&_0));
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setVisible)
{
	zend_bool visible;
	zval *handle_param = NULL, *visible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &visible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (visible ? 1 : 0));
	phpqt_qprintpreviewwidget_set_visible(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, print_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_print(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, zoomIn)
{
	double zoom;
	zval *handle_param = NULL, *zoom_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(zoom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &zoom_param);
	if (!zoom_param) {
		zoom = 1.1000000000000001;
	} else {
		zoom = zephir_get_doubleval(zoom_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, zoom);
	phpqt_qprintpreviewwidget_zoom_in(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, zoomOut)
{
	double zoom;
	zval *handle_param = NULL, *zoom_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(zoom)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &zoom_param);
	if (!zoom_param) {
		zoom = 1.1000000000000001;
	} else {
		zoom = zephir_get_doubleval(zoom_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, zoom);
	phpqt_qprintpreviewwidget_zoom_out(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setZoomFactor)
{
	double zoomFactor;
	zval *handle_param = NULL, *zoomFactor_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(zoomFactor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &zoomFactor_param);
	zoomFactor = zephir_get_doubleval(zoomFactor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, zoomFactor);
	phpqt_qprintpreviewwidget_set_zoom_factor(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	phpqt_qprintpreviewwidget_set_orientation(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setViewMode)
{
	zval *handle_param = NULL, *viewMode_param = NULL, _0, _1;
	zend_long handle, viewMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(viewMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &viewMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, viewMode);
	phpqt_qprintpreviewwidget_set_view_mode(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setZoomMode)
{
	zval *handle_param = NULL, *zoomMode_param = NULL, _0, _1;
	zend_long handle, zoomMode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(zoomMode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &zoomMode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, zoomMode);
	phpqt_qprintpreviewwidget_set_zoom_mode(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setCurrentPage)
{
	zval *handle_param = NULL, *pageNumber_param = NULL, _0, _1;
	zend_long handle, pageNumber;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pageNumber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pageNumber_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pageNumber);
	phpqt_qprintpreviewwidget_set_current_page(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, fitToWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_fit_to_width(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, fitInView)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_fit_in_view(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setLandscapeOrientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_set_landscape_orientation(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setPortraitOrientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_set_portrait_orientation(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setSinglePageViewMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_set_single_page_view_mode(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setFacingPagesViewMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_set_facing_pages_view_mode(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, setAllPagesViewMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_set_all_pages_view_mode(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, updatePreview)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_update_preview(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, paintRequested)
{
	zval *handle_param = NULL, *printer_param = NULL, _0, _1;
	zend_long handle, printer;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(printer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &printer_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, printer);
	phpqt_qprintpreviewwidget_paint_requested(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPrintPreviewWidget_QPrintPreviewWidget, previewChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qprintpreviewwidget_preview_changed(&_0);
}

