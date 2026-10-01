
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
#include "src/core-qtextstreamfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTextstreamFunctions_QTextstreamFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTextstreamFunctions, QTextstreamFunctions, qt, core_qtextstreamfunctions_qtextstreamfunctions, qt_core_qtextstreamfunctions_qtextstreamfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTextstreamFunctions_QTextstreamFunctions, qSetFieldWidth)
{
	zval *width_param = NULL, _0;
	zend_long width;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &width_param);
	ZVAL_LONG(&_0, width);
	RETURN_LONG(phpqt_qtextstreamfunctions_q_set_field_width(&_0));
}

PHP_METHOD(Qt_Core_QTextstreamFunctions_QTextstreamFunctions, qSetPadChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ch_param = NULL;
	zval ch;

	ZVAL_UNDEF(&ch);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(ch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ch_param);
	zephir_get_strval(&ch, ch_param);
	RETURN_MM_LONG(phpqt_qtextstreamfunctions_q_set_pad_char(&ch));
}

PHP_METHOD(Qt_Core_QTextstreamFunctions_QTextstreamFunctions, qSetRealNumberPrecision)
{
	zval *precision_param = NULL, _0;
	zend_long precision;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(precision)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &precision_param);
	ZVAL_LONG(&_0, precision);
	RETURN_LONG(phpqt_qtextstreamfunctions_q_set_real_number_precision(&_0));
}

