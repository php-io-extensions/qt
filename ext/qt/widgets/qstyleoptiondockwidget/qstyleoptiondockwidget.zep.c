
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
#include "src/widgets-qstyleoptiondockwidget.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStyleOptionDockWidget, QStyleOptionDockWidget, qt, widgets_qstyleoptiondockwidget_qstyleoptiondockwidget, qt_widgets_qstyleoptiondockwidget_qstyleoptiondockwidget_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, title)
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
	phpqt_qstyleoptiondockwidget_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &value_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qstyleoptiondockwidget_set_title(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, closable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstyleoptiondockwidget_closable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, setClosable)
{
	zend_bool value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (value ? 1 : 0));
	phpqt_qstyleoptiondockwidget_set_closable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, movable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstyleoptiondockwidget_movable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, setMovable)
{
	zend_bool value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (value ? 1 : 0));
	phpqt_qstyleoptiondockwidget_set_movable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, floatable)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstyleoptiondockwidget_floatable(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, setFloatable)
{
	zend_bool value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (value ? 1 : 0));
	phpqt_qstyleoptiondockwidget_set_floatable(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, verticalTitleBar)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qstyleoptiondockwidget_vertical_title_bar(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, setVerticalTitleBar)
{
	zend_bool value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (value ? 1 : 0));
	phpqt_qstyleoptiondockwidget_set_vertical_title_bar(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, new_)
{

	RETURN_LONG(phpqt_qstyleoptiondockwidget_new());
}

PHP_METHOD(Qt_Widgets_QStyleOptionDockWidget_QStyleOptionDockWidget, newQStyleOptionDockWidget)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qstyleoptiondockwidget_new_q_style_option_dock_widget(&_0));
}

