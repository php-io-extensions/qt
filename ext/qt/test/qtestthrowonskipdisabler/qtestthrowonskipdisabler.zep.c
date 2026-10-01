
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
#include "src/test-qtestthrowonskipdisabler.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Test_QTestThrowOnSkipDisabler_QTestThrowOnSkipDisabler)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Test\\QTestThrowOnSkipDisabler, QTestThrowOnSkipDisabler, qt, test_qtestthrowonskipdisabler_qtestthrowonskipdisabler, qt_test_qtestthrowonskipdisabler_qtestthrowonskipdisabler_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Test_QTestThrowOnSkipDisabler_QTestThrowOnSkipDisabler, new_)
{

	RETURN_LONG(phpqt_qtestthrowonskipdisabler_new());
}

