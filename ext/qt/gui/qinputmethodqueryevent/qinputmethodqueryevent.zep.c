
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
#include "src/gui-qinputmethodqueryevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QInputMethodQueryEvent_QInputMethodQueryEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QInputMethodQueryEvent, QInputMethodQueryEvent, qt, gui_qinputmethodqueryevent_qinputmethodqueryevent, qt_gui_qinputmethodqueryevent_qinputmethodqueryevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QInputMethodQueryEvent_QInputMethodQueryEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qinputmethodqueryevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QInputMethodQueryEvent_QInputMethodQueryEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputmethodqueryevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QInputMethodQueryEvent_QInputMethodQueryEvent, newQtInputMethodQueries)
{
	zval *queries_param = NULL, _0;
	zend_long queries;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(queries)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &queries_param);
	ZVAL_LONG(&_0, queries);
	RETURN_LONG(phpqt_qinputmethodqueryevent_new_qt_input_method_queries(&_0));
}

PHP_METHOD(Qt_Gui_QInputMethodQueryEvent_QInputMethodQueryEvent, queries)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputmethodqueryevent_queries(&_0));
}

PHP_METHOD(Qt_Gui_QInputMethodQueryEvent_QInputMethodQueryEvent, setValue)
{
	zval *handle_param = NULL, *query_param = NULL, *value = NULL, value_sub, _0, _1;
	zend_long handle, query;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(query)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &query_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, query);
	phpqt_qinputmethodqueryevent_set_value(&_0, &_1, value);
}

PHP_METHOD(Qt_Gui_QInputMethodQueryEvent_QInputMethodQueryEvent, value)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *query_param = NULL, result, _0, _1;
	zend_long handle, query;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(query)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &query_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, query);
	phpqt_qinputmethodqueryevent_value(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

