
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
#include "src/widgets-qstylehintreturn.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleHintReturn_QStyleHintReturn)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStyleHintReturn, QStyleHintReturn, qt, widgets_qstylehintreturn_qstylehintreturn, qt_widgets_qstylehintreturn_qstylehintreturn_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, new_)
{
	zval *version = NULL, version_sub, *type = NULL, type_sub, __$null;

	ZVAL_UNDEF(&version_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(version)
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 2, &version, &type);
	if (!version) {
		version = &version_sub;
		version = &__$null;
	}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	RETURN_LONG(phpqt_qstylehintreturn_new(version, type));
}

PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, version)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehintreturn_version(&_0));
}

PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, setVersion)
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
	phpqt_qstylehintreturn_set_version(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qstylehintreturn_type(&_0));
}

PHP_METHOD(Qt_Widgets_QStyleHintReturn_QStyleHintReturn, setType)
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
	phpqt_qstylehintreturn_set_type(&_0, &_1);
}

