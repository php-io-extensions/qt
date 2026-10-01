
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
#include "src/core-qvariantfunctions.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QVariantFunctions_QVariantFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QVariantFunctions, QVariantFunctions, qt, core_qvariantfunctions_qvariantfunctions, qt_core_qvariantfunctions_qvariantfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QVariantFunctions_QVariantFunctions, swap)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qvariantfunctions_swap(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QVariantFunctions_QVariantFunctions, comparesEqual)
{
	zend_long r = 0;
	zval *a = NULL, a_sub, *b = NULL, b_sub;

	ZVAL_UNDEF(&a_sub);
	ZVAL_UNDEF(&b_sub);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(a)
		Z_PARAM_ZVAL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &a, &b);
	r = phpqt_qvariantfunctions_compares_equal(a, b);
	RETURN_BOOL(r == 1);
}

