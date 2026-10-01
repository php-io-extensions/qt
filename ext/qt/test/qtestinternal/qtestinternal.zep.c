
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
#include "src/test-qtestinternal.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Test_QTestInternal_QTestInternal)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Test\\QTestInternal, QTestInternal, qt, test_qtestinternal_qtestinternal, qt_test_qtestinternal_qtestinternal_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Test_QTestInternal_QTestInternal, throwOnFail)
{

	phpqt_qtestinternal_throw_on_fail();
}

PHP_METHOD(Qt_Test_QTestInternal_QTestInternal, throwOnSkip)
{

	phpqt_qtestinternal_throw_on_skip();
}

PHP_METHOD(Qt_Test_QTestInternal_QTestInternal, maybeThrowOnFail)
{

	phpqt_qtestinternal_maybe_throw_on_fail();
}

PHP_METHOD(Qt_Test_QTestInternal_QTestInternal, maybeThrowOnSkip)
{

	phpqt_qtestinternal_maybe_throw_on_skip();
}

