
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
#include "src/core-qlatin1char.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QLatin1Char_QLatin1Char)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QLatin1Char, QLatin1Char, qt, core_qlatin1char_qlatin1char, qt_core_qlatin1char_qlatin1char_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QLatin1Char_QLatin1Char, new_)
{
	zval *c_param = NULL, _0;
	zend_long c;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &c_param);
	ZVAL_LONG(&_0, c);
	RETURN_LONG(phpqt_qlatin1char_new(&_0));
}

PHP_METHOD(Qt_Core_QLatin1Char_QLatin1Char, toLatin1)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlatin1char_to_latin1(&_0));
}

PHP_METHOD(Qt_Core_QLatin1Char_QLatin1Char, unicode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qlatin1char_unicode(&_0));
}

