
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
#include "src/gui-qiconenginescaledpixmapargument.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QIconEngineScaledPixmapArgument, QIconEngineScaledPixmapArgument, qt, gui_qiconenginescaledpixmapargument_qiconenginescaledpixmapargument, qt_gui_qiconenginescaledpixmapargument_qiconenginescaledpixmapargument_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, size)
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
	phpqt_qiconenginescaledpixmapargument_size(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, setSize)
{
	zval *handle_param = NULL, *valueWidth_param = NULL, *valueHeight_param = NULL, _0, _1, _2;
	zend_long handle, valueWidth, valueHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(valueWidth)
		Z_PARAM_LONG(valueHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &valueWidth_param, &valueHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, valueWidth);
	ZVAL_LONG(&_2, valueHeight);
	phpqt_qiconenginescaledpixmapargument_set_size(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, mode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qiconenginescaledpixmapargument_mode(&_0));
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, setMode)
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
	phpqt_qiconenginescaledpixmapargument_set_mode(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, state)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qiconenginescaledpixmapargument_state(&_0));
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, setState)
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
	phpqt_qiconenginescaledpixmapargument_set_state(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, scale)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qiconenginescaledpixmapargument_scale(&_0));
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, setScale)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qiconenginescaledpixmapargument_set_scale(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, pixmap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qiconenginescaledpixmapargument_pixmap(&_0));
}

PHP_METHOD(Qt_Gui_QIconEngineScaledPixmapArgument_QIconEngineScaledPixmapArgument, setPixmap)
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
	phpqt_qiconenginescaledpixmapargument_set_pixmap(&_0, &_1);
}

