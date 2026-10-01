
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
#include "src/core-qexceptionhandlingfunctions.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QExceptionhandlingFunctions_QExceptionhandlingFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QExceptionhandlingFunctions, QExceptionhandlingFunctions, qt, core_qexceptionhandlingfunctions_qexceptionhandlingfunctions, qt_core_qexceptionhandlingfunctions_qexceptionhandlingfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QExceptionhandlingFunctions_QExceptionhandlingFunctions, qTerminate)
{

	phpqt_qexceptionhandlingfunctions_q_terminate();
}

