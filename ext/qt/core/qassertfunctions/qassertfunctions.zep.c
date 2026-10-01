
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
#include "src/core-qassertfunctions.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QAssertFunctions_QAssertFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QAssertFunctions, QAssertFunctions, qt, core_qassertfunctions_qassertfunctions, qt_core_qassertfunctions_qassertfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QAssertFunctions_QAssertFunctions, qt_assert)
{
	zend_long line;
	zval *assertion = NULL, assertion_sub, *file = NULL, file_sub, *line_param = NULL, _0;

	ZVAL_UNDEF(&assertion_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(assertion)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &assertion, &file, &line_param);
	ZVAL_LONG(&_0, line);
	phpqt_qassertfunctions_qt_assert(assertion, file, &_0);
}

PHP_METHOD(Qt_Core_QAssertFunctions_QAssertFunctions, qt_assert_x)
{
	zend_long line;
	zval *where = NULL, where_sub, *what = NULL, what_sub, *file = NULL, file_sub, *line_param = NULL, _0;

	ZVAL_UNDEF(&where_sub);
	ZVAL_UNDEF(&what_sub);
	ZVAL_UNDEF(&file_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(where)
		Z_PARAM_ZVAL(what)
		Z_PARAM_ZVAL(file)
		Z_PARAM_LONG(line)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &where, &what, &file, &line_param);
	ZVAL_LONG(&_0, line);
	phpqt_qassertfunctions_qt_assert_x(where, what, file, &_0);
}

PHP_METHOD(Qt_Core_QAssertFunctions_QAssertFunctions, qt_check_pointer)
{
	zend_long arg1;
	zval *arg0 = NULL, arg0_sub, *arg1_param = NULL, _0;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &arg0, &arg1_param);
	ZVAL_LONG(&_0, arg1);
	phpqt_qassertfunctions_qt_check_pointer(arg0, &_0);
}

PHP_METHOD(Qt_Core_QAssertFunctions_QAssertFunctions, qBadAlloc)
{

	phpqt_qassertfunctions_q_bad_alloc();
}

