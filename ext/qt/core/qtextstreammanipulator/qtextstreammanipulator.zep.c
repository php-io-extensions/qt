
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
#include "src/core-qtextstreammanipulator.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTextStreamManipulator_QTextStreamManipulator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTextStreamManipulator, QTextStreamManipulator, qt, core_qtextstreammanipulator_qtextstreammanipulator, qt_core_qtextstreammanipulator_qtextstreammanipulator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTextStreamManipulator_QTextStreamManipulator, exec)
{
	zval *handle_param = NULL, *s_param = NULL, _0, _1;
	zend_long handle, s;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &s_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, s);
	phpqt_qtextstreammanipulator_exec(&_0, &_1);
}

