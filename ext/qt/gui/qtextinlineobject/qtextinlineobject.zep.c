
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
#include "src/gui-qtextinlineobject.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextInlineObject_QTextInlineObject)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextInlineObject, QTextInlineObject, qt, gui_qtextinlineobject_qtextinlineobject, qt_gui_qtextinlineobject_qtextinlineobject_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, new_)
{

	RETURN_LONG(phpqt_qtextinlineobject_new());
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextinlineobject_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, rect)
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
	phpqt_qtextinlineobject_rect(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextinlineobject_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, ascent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextinlineobject_ascent(&_0));
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, descent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextinlineobject_descent(&_0));
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextinlineobject_height(&_0));
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, textDirection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextinlineobject_text_direction(&_0));
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, setWidth)
{
	double w;
	zval *handle_param = NULL, *w_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &w_param);
	w = zephir_get_doubleval(w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, w);
	phpqt_qtextinlineobject_set_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, setAscent)
{
	double a;
	zval *handle_param = NULL, *a_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &a_param);
	a = zephir_get_doubleval(a_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, a);
	phpqt_qtextinlineobject_set_ascent(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, setDescent)
{
	double d;
	zval *handle_param = NULL, *d_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, d);
	phpqt_qtextinlineobject_set_descent(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, textPosition)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextinlineobject_text_position(&_0));
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, formatIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextinlineobject_format_index(&_0));
}

PHP_METHOD(Qt_Gui_QTextInlineObject_QTextInlineObject, format)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextinlineobject_format(&_0));
}

