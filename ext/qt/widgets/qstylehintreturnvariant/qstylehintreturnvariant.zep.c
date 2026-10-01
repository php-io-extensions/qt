
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
#include "src/widgets-qstylehintreturnvariant.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleHintReturnVariant_QStyleHintReturnVariant)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QStyleHintReturnVariant, QStyleHintReturnVariant, qt, widgets_qstylehintreturnvariant_qstylehintreturnvariant, qt_widgets_qstylehintreturnvariant_qstylehintreturnvariant_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QStyleHintReturnVariant_QStyleHintReturnVariant, new_)
{

	RETURN_LONG(phpqt_qstylehintreturnvariant_new());
}

PHP_METHOD(Qt_Widgets_QStyleHintReturnVariant_QStyleHintReturnVariant, variant)
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
	phpqt_qstylehintreturnvariant_variant(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QStyleHintReturnVariant_QStyleHintReturnVariant, setVariant)
{
	zval *handle_param = NULL, *value = NULL, value_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value);
	ZVAL_LONG(&_0, handle);
	phpqt_qstylehintreturnvariant_set_variant(&_0, value);
}

