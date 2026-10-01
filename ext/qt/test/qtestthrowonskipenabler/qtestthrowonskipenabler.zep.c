
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
#include "src/test-qtestthrowonskipenabler.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Test_QTestThrowOnSkipEnabler_QTestThrowOnSkipEnabler)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Test\\QTestThrowOnSkipEnabler, QTestThrowOnSkipEnabler, qt, test_qtestthrowonskipenabler_qtestthrowonskipenabler, qt_test_qtestthrowonskipenabler_qtestthrowonskipenabler_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Test_QTestThrowOnSkipEnabler_QTestThrowOnSkipEnabler, new_)
{

	RETURN_LONG(phpqt_qtestthrowonskipenabler_new());
}

