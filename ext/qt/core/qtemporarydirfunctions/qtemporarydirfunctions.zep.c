
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
#include "src/core-qtemporarydirfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTemporarydirFunctions_QTemporarydirFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTemporarydirFunctions, QTemporarydirFunctions, qt, core_qtemporarydirfunctions_qtemporarydirfunctions, qt_core_qtemporarydirfunctions_qtemporarydirfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTemporarydirFunctions_QTemporarydirFunctions, swap)
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
	phpqt_qtemporarydirfunctions_swap(&_0, &_1);
}

