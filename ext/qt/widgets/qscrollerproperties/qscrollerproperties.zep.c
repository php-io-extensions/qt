
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
#include "src/widgets-qscrollerproperties.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QScrollerProperties_QScrollerProperties)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QScrollerProperties, QScrollerProperties, qt, widgets_qscrollerproperties_qscrollerproperties, qt_widgets_qscrollerproperties_qscrollerproperties_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QScrollerProperties_QScrollerProperties, new_)
{

	RETURN_LONG(phpqt_qscrollerproperties_new());
}

PHP_METHOD(Qt_Widgets_QScrollerProperties_QScrollerProperties, newQScrollerProperties)
{
	zval *sp_param = NULL, _0;
	zend_long sp;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sp)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sp_param);
	ZVAL_LONG(&_0, sp);
	RETURN_LONG(phpqt_qscrollerproperties_new_q_scroller_properties(&_0));
}

PHP_METHOD(Qt_Widgets_QScrollerProperties_QScrollerProperties, setDefaultScrollerProperties)
{
	zval *sp_param = NULL, _0;
	zend_long sp;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(sp)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &sp_param);
	ZVAL_LONG(&_0, sp);
	phpqt_qscrollerproperties_set_default_scroller_properties(&_0);
}

PHP_METHOD(Qt_Widgets_QScrollerProperties_QScrollerProperties, unsetDefaultScrollerProperties)
{

	phpqt_qscrollerproperties_unset_default_scroller_properties();
}

PHP_METHOD(Qt_Widgets_QScrollerProperties_QScrollerProperties, scrollMetric)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *metric_param = NULL, result, _0, _1;
	zend_long handle, metric;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(metric)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &metric_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, metric);
	phpqt_qscrollerproperties_scroll_metric(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QScrollerProperties_QScrollerProperties, setScrollMetric)
{
	zval *handle_param = NULL, *metric_param = NULL, *value = NULL, value_sub, _0, _1;
	zend_long handle, metric;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(metric)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &metric_param, &value);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, metric);
	phpqt_qscrollerproperties_set_scroll_metric(&_0, &_1, value);
}

