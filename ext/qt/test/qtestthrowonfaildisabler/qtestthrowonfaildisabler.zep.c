
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
#include "src/test-qtestthrowonfaildisabler.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Test_QTestThrowOnFailDisabler_QTestThrowOnFailDisabler)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Test\\QTestThrowOnFailDisabler, QTestThrowOnFailDisabler, qt, test_qtestthrowonfaildisabler_qtestthrowonfaildisabler, qt_test_qtestthrowonfaildisabler_qtestthrowonfaildisabler_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Test_QTestThrowOnFailDisabler_QTestThrowOnFailDisabler, new_)
{

	RETURN_LONG(phpqt_qtestthrowonfaildisabler_new());
}

