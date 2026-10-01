
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
#include "src/core-qflag.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QFlag_QFlag)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QFlag, QFlag, qt, core_qflag_qflag, qt_core_qflag_qflag_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QFlag_QFlag, new_)
{
	zval *value_param = NULL, _0;
	zend_long value;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &value_param);
	ZVAL_LONG(&_0, value);
	RETURN_LONG(phpqt_qflag_new(&_0));
}

PHP_METHOD(Qt_Core_QFlag_QFlag, newUint)
{
	zval *value_param = NULL, _0;
	zend_long value;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &value_param);
	ZVAL_LONG(&_0, value);
	RETURN_LONG(phpqt_qflag_new_uint(&_0));
}

PHP_METHOD(Qt_Core_QFlag_QFlag, newShortInt)
{
	zval *value_param = NULL, _0;
	zend_long value;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &value_param);
	ZVAL_LONG(&_0, value);
	RETURN_LONG(phpqt_qflag_new_short_int(&_0));
}

PHP_METHOD(Qt_Core_QFlag_QFlag, newUshort)
{
	zval *value_param = NULL, _0;
	zend_long value;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &value_param);
	ZVAL_LONG(&_0, value);
	RETURN_LONG(phpqt_qflag_new_ushort(&_0));
}

