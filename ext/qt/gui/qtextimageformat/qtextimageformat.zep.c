
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
#include "src/gui-qtextimageformat.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextImageFormat_QTextImageFormat)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextImageFormat, QTextImageFormat, qt, gui_qtextimageformat_qtextimageformat, qt_gui_qtextimageformat_qtextimageformat_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, new_)
{

	RETURN_LONG(phpqt_qtextimageformat_new());
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextimageformat_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextimageformat_set_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, name)
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
	phpqt_qtextimageformat_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setWidth)
{
	double width;
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	width = zephir_get_doubleval(width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, width);
	phpqt_qtextimageformat_set_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, width)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextimageformat_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setMaximumWidth)
{
	zval *handle_param = NULL, *maxWidth_param = NULL, _0, _1;
	zend_long handle, maxWidth;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maxWidth)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &maxWidth_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maxWidth);
	phpqt_qtextimageformat_set_maximum_width(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, maximumWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextimageformat_maximum_width(&_0));
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setHeight)
{
	double height;
	zval *handle_param = NULL, *height_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(height)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &height_param);
	height = zephir_get_doubleval(height_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, height);
	phpqt_qtextimageformat_set_height(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, height)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextimageformat_height(&_0));
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, setQuality)
{
	zval *handle_param = NULL, *quality_param = NULL, _0, _1;
	zend_long handle, quality;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(quality)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &quality_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, quality);
	phpqt_qtextimageformat_set_quality(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextImageFormat_QTextImageFormat, quality)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextimageformat_quality(&_0));
}

