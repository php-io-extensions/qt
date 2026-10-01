
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
#include "src/core-qabstractnativeeventfilter.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAbstractNativeEventFilter_QAbstractNativeEventFilter)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAbstractNativeEventFilter, QAbstractNativeEventFilter, qt, core_qabstractnativeeventfilter_qabstractnativeeventfilter, qt_core_qabstractnativeeventfilter_qabstractnativeeventfilter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAbstractNativeEventFilter_QAbstractNativeEventFilter, new_)
{

	RETURN_LONG(phpqt_qabstractnativeeventfilter_new());
}

