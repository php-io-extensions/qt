
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
#include "src/gui-qtextoptiontab.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextOptionTab_QTextOptionTab)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextOptionTab, QTextOptionTab, qt, gui_qtextoptiontab_qtextoptiontab, qt_gui_qtextoptiontab_qtextoptiontab_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, new_)
{

	RETURN_LONG(phpqt_qtextoptiontab_new());
}

PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, newQrealQTextOptionTabTypeQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval delim;
	zend_long tabType;
	zval *pos_param = NULL, *tabType_param = NULL, *delim_param = NULL, _0, _1;
	double pos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&delim);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(pos)
		Z_PARAM_LONG(tabType)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(delim)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &pos_param, &tabType_param, &delim_param);
	pos = zephir_get_doubleval(pos_param);
	if (!delim_param) {
		ZEPHIR_INIT_VAR(&delim);
		ZVAL_STRING(&delim, "");
	} else {
		zephir_get_strval(&delim, delim_param);
	}
	ZVAL_DOUBLE(&_0, pos);
	ZVAL_LONG(&_1, tabType);
	RETURN_MM_LONG(phpqt_qtextoptiontab_new_qreal_q_text_option_tab_type_q_char(&_0, &_1, &delim));
}

PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, position)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtextoptiontab_position(&_0));
}

PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, setPosition)
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
	phpqt_qtextoptiontab_set_position(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextoptiontab_type(&_0));
}

PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, setType)
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
	phpqt_qtextoptiontab_set_type(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, delimiter)
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
	phpqt_qtextoptiontab_delimiter(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextOptionTab_QTextOptionTab, setDelimiter)
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
	phpqt_qtextoptiontab_set_delimiter(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

