
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
#include "src/test-qtestthrowonfailenabler.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Test_QTestThrowOnFailEnabler_QTestThrowOnFailEnabler)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Test\\QTestThrowOnFailEnabler, QTestThrowOnFailEnabler, qt, test_qtestthrowonfailenabler_qtestthrowonfailenabler, qt_test_qtestthrowonfailenabler_qtestthrowonfailenabler_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Test_QTestThrowOnFailEnabler_QTestThrowOnFailEnabler, new_)
{

	RETURN_LONG(phpqt_qtestthrowonfailenabler_new());
}

