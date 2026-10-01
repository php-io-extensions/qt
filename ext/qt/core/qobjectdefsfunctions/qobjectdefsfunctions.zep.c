
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
#include "src/core-qobjectdefsfunctions.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QObjectdefsFunctions_QObjectdefsFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QObjectdefsFunctions, QObjectdefsFunctions, qt, core_qobjectdefsfunctions_qobjectdefsfunctions, qt_core_qobjectdefsfunctions_qobjectdefsfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QObjectdefsFunctions_QObjectdefsFunctions, qFlagLocation)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *method = NULL, method_sub, result;

	ZVAL_UNDEF(&method_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(method)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &method);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qobjectdefsfunctions_q_flag_location(&result, method);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QObjectdefsFunctions_QObjectdefsFunctions, swap)
{
	zval *lhs_param = NULL, *rhs_param = NULL, _0, _1;
	zend_long lhs, rhs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(lhs)
		Z_PARAM_LONG(rhs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &lhs_param, &rhs_param);
	ZVAL_LONG(&_0, lhs);
	ZVAL_LONG(&_1, rhs);
	phpqt_qobjectdefsfunctions_swap(&_0, &_1);
}

