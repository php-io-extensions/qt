
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
#include "src/widgets-qtilerules.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QTileRules_QTileRules)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QTileRules, QTileRules, qt, widgets_qtilerules_qtilerules, qt_widgets_qtilerules_qtilerules_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, new_)
{
	zval *horizontalRule_param = NULL, *verticalRule_param = NULL, _0, _1;
	zend_long horizontalRule, verticalRule;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(horizontalRule)
		Z_PARAM_LONG(verticalRule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &horizontalRule_param, &verticalRule_param);
	ZVAL_LONG(&_0, horizontalRule);
	ZVAL_LONG(&_1, verticalRule);
	RETURN_LONG(phpqt_qtilerules_new(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, newQtTileRule)
{
	zval *rule = NULL, rule_sub, __$null;

	ZVAL_UNDEF(&rule_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(rule)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &rule);
	if (!rule) {
		rule = &rule_sub;
		rule = &__$null;
	}
	RETURN_LONG(phpqt_qtilerules_new_qt_tile_rule(rule));
}

PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, horizontal)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtilerules_horizontal(&_0));
}

PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, setHorizontal)
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
	phpqt_qtilerules_set_horizontal(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, vertical)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtilerules_vertical(&_0));
}

PHP_METHOD(Qt_Widgets_QTileRules_QTileRules, setVertical)
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
	phpqt_qtilerules_set_vertical(&_0, &_1);
}

