
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
#include "src/core-qloggingcategory.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLoggingCategory_QLoggingCategory)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLoggingCategory, QLoggingCategory, qt, core_qloggingcategory_qloggingcategory, qt_core_qloggingcategory_qloggingcategory_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, new_)
{
	zval *category = NULL, category_sub, *severityLevel = NULL, severityLevel_sub, __$null;

	ZVAL_UNDEF(&category_sub);
	ZVAL_UNDEF(&severityLevel_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(category)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(severityLevel)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &category, &severityLevel);
	if (!severityLevel) {
		severityLevel = &severityLevel_sub;
		severityLevel = &__$null;
	}
	RETURN_LONG(phpqt_qloggingcategory_new(category, severityLevel));
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isEnabled)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	r = phpqt_qloggingcategory_is_enabled(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, setEnabled)
{
	zend_bool enable;
	zval *handle_param = NULL, *type_param = NULL, *enable_param = NULL, _0, _1, _2;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &type_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	ZVAL_BOOL(&_2, (enable ? 1 : 0));
	phpqt_qloggingcategory_set_enabled(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isDebugEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qloggingcategory_is_debug_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isInfoEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qloggingcategory_is_info_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isWarningEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qloggingcategory_is_warning_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, isCriticalEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qloggingcategory_is_critical_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, categoryName)
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
	phpqt_qloggingcategory_category_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, defaultCategory)
{

	RETURN_LONG(phpqt_qloggingcategory_default_category());
}

PHP_METHOD(Qt_Core_QLoggingCategory_QLoggingCategory, setFilterRules)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *rules_param = NULL;
	zval rules;

	ZVAL_UNDEF(&rules);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(rules)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &rules_param);
	zephir_get_strval(&rules, rules_param);
	phpqt_qloggingcategory_set_filter_rules(&rules);
	ZEPHIR_MM_RESTORE();
}

