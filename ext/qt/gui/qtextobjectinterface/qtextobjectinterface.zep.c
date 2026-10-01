
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
#include "src/gui-qtextobjectinterface.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextObjectInterface_QTextObjectInterface)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextObjectInterface, QTextObjectInterface, qt, gui_qtextobjectinterface_qtextobjectinterface, qt_gui_qtextobjectinterface_qtextobjectinterface_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextObjectInterface_QTextObjectInterface, intrinsicSize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *doc_param = NULL, *posInDocument_param = NULL, *format_param = NULL, result, _0, _1, _2, _3;
	zend_long handle, doc, posInDocument, format;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(doc)
		Z_PARAM_LONG(posInDocument)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &doc_param, &posInDocument_param, &format_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, doc);
	ZVAL_LONG(&_2, posInDocument);
	ZVAL_LONG(&_3, format);
	phpqt_qtextobjectinterface_intrinsic_size(&result, &_0, &_1, &_2, &_3);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextObjectInterface_QTextObjectInterface, drawObject)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *painter_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, *doc_param = NULL, *posInDocument_param = NULL, *format_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	zend_long handle, painter, doc, posInDocument, format;

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
		Z_PARAM_LONG(doc)
		Z_PARAM_LONG(posInDocument)
		Z_PARAM_LONG(format)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &handle_param, &painter_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param, &doc_param, &posInDocument_param, &format_param);
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
	ZVAL_LONG(&_6, doc);
	ZVAL_LONG(&_7, posInDocument);
	ZVAL_LONG(&_8, format);
	phpqt_qtextobjectinterface_draw_object(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8);
}

