
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
#include "src/test-qsignalspy.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Test_QSignalSpy_QSignalSpy)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Test\\QSignalSpy, QSignalSpy, qt, test_qsignalspy_qsignalspy, qt_test_qsignalspy_qsignalspy_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, new_)
{
	zval *obj_param = NULL, *aSignal = NULL, aSignal_sub, _0;
	zend_long obj;

	ZVAL_UNDEF(&aSignal_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(obj)
		Z_PARAM_ZVAL(aSignal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &obj_param, &aSignal);
	ZVAL_LONG(&_0, obj);
	RETURN_LONG(phpqt_qsignalspy_new(&_0, aSignal));
}

PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, newQObjectQMetaMethod)
{
	zval *obj_param = NULL, *signal_param = NULL, _0, _1;
	zend_long obj, signal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(obj)
		Z_PARAM_LONG(signal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &obj_param, &signal_param);
	ZVAL_LONG(&_0, obj);
	ZVAL_LONG(&_1, signal);
	RETURN_LONG(phpqt_qsignalspy_new_q_object_q_meta_method(&_0, &_1));
}

PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsignalspy_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, signal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &handle_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qsignalspy_signal(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Test_QSignalSpy_QSignalSpy, wait)
{
	zval *handle_param = NULL, *timeout_param = NULL, _0, _1;
	zend_long handle, timeout, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeout)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeout_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeout);
	r = phpqt_qsignalspy_wait(&_0, &_1);
	RETURN_BOOL(r == 1);
}

