
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
#include "src/core-qpropertybindingerror.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPropertyBindingError_QPropertyBindingError)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPropertyBindingError, QPropertyBindingError, qt, core_qpropertybindingerror_qpropertybindingerror, qt_core_qpropertybindingerror_qpropertybindingerror_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPropertyBindingError_QPropertyBindingError, new_)
{

	RETURN_LONG(phpqt_qpropertybindingerror_new());
}

PHP_METHOD(Qt_Core_QPropertyBindingError_QPropertyBindingError, newQPropertyBindingErrorTypeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval description;
	zval *type_param = NULL, *description_param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&description);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(description)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &type_param, &description_param);
	if (!description_param) {
		ZEPHIR_INIT_VAR(&description);
		ZVAL_STRING(&description, "");
	} else {
		zephir_get_strval(&description, description_param);
	}
	ZVAL_LONG(&_0, type);
	RETURN_MM_LONG(phpqt_qpropertybindingerror_new_q_property_binding_error_type_q_string(&_0, &description));
}

PHP_METHOD(Qt_Core_QPropertyBindingError_QPropertyBindingError, newQPropertyBindingError)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qpropertybindingerror_new_q_property_binding_error(&_0));
}

PHP_METHOD(Qt_Core_QPropertyBindingError_QPropertyBindingError, hasError)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpropertybindingerror_has_error(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QPropertyBindingError_QPropertyBindingError, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpropertybindingerror_type(&_0));
}

PHP_METHOD(Qt_Core_QPropertyBindingError_QPropertyBindingError, description)
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
	phpqt_qpropertybindingerror_description(&result, &_0);
	RETURN_CCTOR(&result);
}

