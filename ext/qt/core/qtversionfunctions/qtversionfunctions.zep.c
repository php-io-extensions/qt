
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
#include "src/core-qtversionfunctions.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTversionFunctions_QTversionFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTversionFunctions, QTversionFunctions, qt, core_qtversionfunctions_qtversionfunctions, qt_core_qtversionfunctions_qtversionfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTversionFunctions_QTversionFunctions, qVersion)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qtversionfunctions_q_version(&result);
	RETURN_CCTOR(&result);
}

