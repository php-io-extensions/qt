
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
#include "src/core-qpropertynotifier.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPropertyNotifier_QPropertyNotifier)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPropertyNotifier, QPropertyNotifier, qt, core_qpropertynotifier_qpropertynotifier, qt_core_qpropertynotifier_qpropertynotifier_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPropertyNotifier_QPropertyNotifier, new_)
{

	RETURN_LONG(phpqt_qpropertynotifier_new());
}

