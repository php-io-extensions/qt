
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
#include "src/core-qpropertyobserver.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPropertyObserver_QPropertyObserver)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPropertyObserver, QPropertyObserver, qt, core_qpropertyobserver_qpropertyobserver, qt_core_qpropertyobserver_qpropertyobserver_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPropertyObserver_QPropertyObserver, new_)
{

	RETURN_LONG(phpqt_qpropertyobserver_new());
}

