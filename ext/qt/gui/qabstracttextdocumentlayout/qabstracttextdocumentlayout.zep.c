
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
#include "src/gui-qabstracttextdocumentlayout.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAbstractTextDocumentLayout, QAbstractTextDocumentLayout, qt, gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout, qt_gui_qabstracttextdocumentlayout_qabstracttextdocumentlayout_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, staticMetaObject)
{

	RETURN_LONG(phpqt_qabstracttextdocumentlayout_static_meta_object());
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, tr)
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
	phpqt_qabstracttextdocumentlayout_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, new_)
{
	zval *doc_param = NULL, _0;
	zend_long doc;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(doc)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &doc_param);
	ZVAL_LONG(&_0, doc);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_new(&_0));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, draw)
{
	zval *handle_param = NULL, *painter_param = NULL, *context_param = NULL, _0, _1, _2;
	zend_long handle, painter, context;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &painter_param, &context_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_LONG(&_2, context);
	phpqt_qabstracttextdocumentlayout_draw(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, hitTest)
{
	double pointX, pointY;
	zval *handle_param = NULL, *pointX_param = NULL, *pointY_param = NULL, *accuracy_param = NULL, _0, _1, _2, _3;
	zend_long handle, accuracy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pointX)
		Z_PARAM_ZVAL(pointY)
		Z_PARAM_LONG(accuracy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &pointX_param, &pointY_param, &accuracy_param);
	pointX = zephir_get_doubleval(pointX_param);
	pointY = zephir_get_doubleval(pointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pointX);
	ZVAL_DOUBLE(&_2, pointY);
	ZVAL_LONG(&_3, accuracy);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_hit_test(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, anchorAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, result, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	phpqt_qabstracttextdocumentlayout_anchor_at(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, imageAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, result, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	phpqt_qabstracttextdocumentlayout_image_at(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, formatAt)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_format_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, blockWithMarkerAt)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_block_with_marker_at(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, pageCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_page_count(&_0));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, documentSize)
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
	phpqt_qabstracttextdocumentlayout_document_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, frameBoundingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *frame_param = NULL, result, _0, _1;
	zend_long handle, frame;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(frame)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &frame_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, frame);
	phpqt_qabstracttextdocumentlayout_frame_bounding_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, blockBoundingRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *block_param = NULL, result, _0, _1;
	zend_long handle, block;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(block)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &block_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, block);
	phpqt_qabstracttextdocumentlayout_block_bounding_rect(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, setPaintDevice)
{
	zval *handle_param = NULL, *device_param = NULL, _0, _1;
	zend_long handle, device;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &device_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	phpqt_qabstracttextdocumentlayout_set_paint_device(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, paintDevice)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_paint_device(&_0));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, document)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_document(&_0));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, registerHandler)
{
	zval *handle_param = NULL, *objectType_param = NULL, *component_param = NULL, _0, _1, _2;
	zend_long handle, objectType, component;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(objectType)
		Z_PARAM_LONG(component)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &objectType_param, &component_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, objectType);
	ZVAL_LONG(&_2, component);
	phpqt_qabstracttextdocumentlayout_register_handler(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, unregisterHandler)
{
	zval *handle_param = NULL, *objectType_param = NULL, *component_param = NULL, _0, _1, _2;
	zend_long handle, objectType, component;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(objectType)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(component)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &objectType_param, &component_param);
	if (!component_param) {
		component = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, objectType);
	ZVAL_LONG(&_2, component);
	phpqt_qabstracttextdocumentlayout_unregister_handler(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, handlerForObject)
{
	zval *handle_param = NULL, *objectType_param = NULL, _0, _1;
	zend_long handle, objectType;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(objectType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &objectType_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, objectType);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_handler_for_object(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, update)
{
	zval *handle_param = NULL, *arg0X = NULL, arg0X_sub, *arg0Y = NULL, arg0Y_sub, *arg0Width = NULL, arg0Width_sub, *arg0Height = NULL, arg0Height_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&arg0X_sub);
	ZVAL_UNDEF(&arg0Y_sub);
	ZVAL_UNDEF(&arg0Width_sub);
	ZVAL_UNDEF(&arg0Height_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg0X)
		Z_PARAM_ZVAL_OR_NULL(arg0Y)
		Z_PARAM_ZVAL_OR_NULL(arg0Width)
		Z_PARAM_ZVAL_OR_NULL(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 4, &handle_param, &arg0X, &arg0Y, &arg0Width, &arg0Height);
	if (!arg0X) {
		arg0X = &arg0X_sub;
		arg0X = &__$null;
	}
	if (!arg0Y) {
		arg0Y = &arg0Y_sub;
		arg0Y = &__$null;
	}
	if (!arg0Width) {
		arg0Width = &arg0Width_sub;
		arg0Width = &__$null;
	}
	if (!arg0Height) {
		arg0Height = &arg0Height_sub;
		arg0Height = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qabstracttextdocumentlayout_update(&_0, arg0X, arg0Y, arg0Width, arg0Height);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, updateBlock)
{
	zval *handle_param = NULL, *block_param = NULL, _0, _1;
	zend_long handle, block;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(block)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &block_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, block);
	phpqt_qabstracttextdocumentlayout_update_block(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, documentSizeChanged)
{
	double newSizeWidth, newSizeHeight;
	zval *handle_param = NULL, *newSizeWidth_param = NULL, *newSizeHeight_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(newSizeWidth)
		Z_PARAM_ZVAL(newSizeHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &newSizeWidth_param, &newSizeHeight_param);
	newSizeWidth = zephir_get_doubleval(newSizeWidth_param);
	newSizeHeight = zephir_get_doubleval(newSizeHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, newSizeWidth);
	ZVAL_DOUBLE(&_2, newSizeHeight);
	phpqt_qabstracttextdocumentlayout_document_size_changed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, pageCountChanged)
{
	zval *handle_param = NULL, *newPages_param = NULL, _0, _1;
	zend_long handle, newPages;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newPages)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newPages_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newPages);
	phpqt_qabstracttextdocumentlayout_page_count_changed(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, documentChanged)
{
	zval *handle_param = NULL, *from_param = NULL, *charsRemoved_param = NULL, *charsAdded_param = NULL, _0, _1, _2, _3;
	zend_long handle, from, charsRemoved, charsAdded;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(from)
		Z_PARAM_LONG(charsRemoved)
		Z_PARAM_LONG(charsAdded)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &from_param, &charsRemoved_param, &charsAdded_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, from);
	ZVAL_LONG(&_2, charsRemoved);
	ZVAL_LONG(&_3, charsAdded);
	phpqt_qabstracttextdocumentlayout_document_changed(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, resizeInlineObject)
{
	zval *handle_param = NULL, *item_param = NULL, *posInDocument_param = NULL, *format_param = NULL, _0, _1, _2, _3;
	zend_long handle, item, posInDocument, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(posInDocument)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &item_param, &posInDocument_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, posInDocument);
	ZVAL_LONG(&_3, format);
	phpqt_qabstracttextdocumentlayout_resize_inline_object(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, positionInlineObject)
{
	zval *handle_param = NULL, *item_param = NULL, *posInDocument_param = NULL, *format_param = NULL, _0, _1, _2, _3;
	zend_long handle, item, posInDocument, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
		Z_PARAM_LONG(posInDocument)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &item_param, &posInDocument_param, &format_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	ZVAL_LONG(&_2, posInDocument);
	ZVAL_LONG(&_3, format);
	phpqt_qabstracttextdocumentlayout_position_inline_object(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, drawInlineObject)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *object__param = NULL, *posInDocument_param = NULL, *format_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle, painter, object_, posInDocument, format;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
		Z_PARAM_LONG(object_)
		Z_PARAM_LONG(posInDocument)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &object__param, &posInDocument_param, &format_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	ZVAL_DOUBLE(&_2, rectX);
	ZVAL_DOUBLE(&_3, rectY);
	ZVAL_DOUBLE(&_4, rectWidth);
	ZVAL_DOUBLE(&_5, rectHeight);
	ZVAL_LONG(&_6, object_);
	ZVAL_LONG(&_7, posInDocument);
	ZVAL_LONG(&_8, format);
	phpqt_qabstracttextdocumentlayout_draw_inline_object(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, formatIndex)
{
	zval *handle_param = NULL, *pos_param = NULL, _0, _1;
	zend_long handle, pos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pos_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_format_index(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QAbstractTextDocumentLayout_QAbstractTextDocumentLayout, format)
{
	zval *handle_param = NULL, *pos_param = NULL, _0, _1;
	zend_long handle, pos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pos_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	RETURN_LONG(phpqt_qabstracttextdocumentlayout_format(&_0, &_1));
}

