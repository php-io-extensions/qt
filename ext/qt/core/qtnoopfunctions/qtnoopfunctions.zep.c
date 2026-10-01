
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
#include "src/core-qtnoopfunctions.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTnoopFunctions_QTnoopFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTnoopFunctions, QTnoopFunctions, qt, core_qtnoopfunctions_qtnoopfunctions, qt_core_qtnoopfunctions_qtnoopfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTnoopFunctions_QTnoopFunctions, qt_noop)
{

	phpqt_qtnoopfunctions_qt_noop();
}

