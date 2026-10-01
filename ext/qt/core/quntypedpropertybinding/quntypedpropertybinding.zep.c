
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
#include "src/core-quntypedpropertybinding.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QUntypedPropertyBinding_QUntypedPropertyBinding)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QUntypedPropertyBinding, QUntypedPropertyBinding, qt, core_quntypedpropertybinding_quntypedpropertybinding, qt_core_quntypedpropertybinding_quntypedpropertybinding_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QUntypedPropertyBinding_QUntypedPropertyBinding, new_)
{

	RETURN_LONG(phpqt_quntypedpropertybinding_new());
}

PHP_METHOD(Qt_Core_QUntypedPropertyBinding_QUntypedPropertyBinding, newQUntypedPropertyBinding)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_quntypedpropertybinding_new_q_untyped_property_binding(&_0));
}

PHP_METHOD(Qt_Core_QUntypedPropertyBinding_QUntypedPropertyBinding, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_quntypedpropertybinding_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QUntypedPropertyBinding_QUntypedPropertyBinding, error)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quntypedpropertybinding_error(&_0));
}

PHP_METHOD(Qt_Core_QUntypedPropertyBinding_QUntypedPropertyBinding, valueMetaType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_quntypedpropertybinding_value_meta_type(&_0));
}

