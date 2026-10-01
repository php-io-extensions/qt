
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
#include "src/core-qcoreapplicationfunctions.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCoreapplicationFunctions_QCoreapplicationFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCoreapplicationFunctions, QCoreapplicationFunctions, qt, core_qcoreapplicationfunctions_qcoreapplicationfunctions, qt_core_qcoreapplicationfunctions_qcoreapplicationfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCoreapplicationFunctions_QCoreapplicationFunctions, qAppName)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qcoreapplicationfunctions_q_app_name(&result);
	RETURN_CCTOR(&result);
}

