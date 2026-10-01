
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
#include "src/core-qatomicint.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAtomicInt_QAtomicInt)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAtomicInt, QAtomicInt, qt, core_qatomicint_qatomicint, qt_core_qatomicint_qatomicint_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAtomicInt_QAtomicInt, new_)
{
	zval *value_param = NULL, _0;
	zend_long value;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &value_param);
	if (!value_param) {
		value = 0;
	} else {
		}
	ZVAL_LONG(&_0, value);
	RETURN_LONG(phpqt_qatomicint_new(&_0));
}

