
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
#include "src/gui-qabstracttextdocumentlayoutpaintcontext.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAbstractTextDocumentLayoutPaintContext, QAbstractTextDocumentLayoutPaintContext, qt, gui_qabstracttextdocumentlayoutpaintcontext_qabstracttextdocumentlayoutpaintcontext, qt_gui_qabstracttextdocumentlayoutpaintcontext_qabstracttextdocumentlayoutpaintcontext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext, new_)
{

	RETURN_LONG(phpqt_qabstracttextdocumentlayoutpaintcontext_new());
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext, cursorPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstracttextdocumentlayoutpaintcontext_cursor_position(&_0));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext, setCursorPosition)
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
	phpqt_qabstracttextdocumentlayoutpaintcontext_set_cursor_position(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext, palette)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstracttextdocumentlayoutpaintcontext_palette(&_0));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext, setPalette)
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
	phpqt_qabstracttextdocumentlayoutpaintcontext_set_palette(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext, clip)
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
	phpqt_qabstracttextdocumentlayoutpaintcontext_clip(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext, setClip)
{
	double valueX, valueY, valueWidth, valueHeight;
	zval *handle_param = NULL, *valueX_param = NULL, *valueY_param = NULL, *valueWidth_param = NULL, *valueHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(valueX)
		Z_PARAM_ZVAL(valueY)
		Z_PARAM_ZVAL(valueWidth)
		Z_PARAM_ZVAL(valueHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &valueX_param, &valueY_param, &valueWidth_param, &valueHeight_param);
	valueX = zephir_get_doubleval(valueX_param);
	valueY = zephir_get_doubleval(valueY_param);
	valueWidth = zephir_get_doubleval(valueWidth_param);
	valueHeight = zephir_get_doubleval(valueHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, valueX);
	ZVAL_DOUBLE(&_2, valueY);
	ZVAL_DOUBLE(&_3, valueWidth);
	ZVAL_DOUBLE(&_4, valueHeight);
	phpqt_qabstracttextdocumentlayoutpaintcontext_set_clip(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext, selections)
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
	phpqt_qabstracttextdocumentlayoutpaintcontext_selections(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayoutPaintContext_QAbstractTextDocumentLayoutPaintContext, setSelections)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &value_param);
	zephir_get_arrval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstracttextdocumentlayoutpaintcontext_set_selections(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

