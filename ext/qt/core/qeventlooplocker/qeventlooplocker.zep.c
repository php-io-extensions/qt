
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
#include "src/core-qeventlooplocker.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QEventLoopLocker_QEventLoopLocker)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QEventLoopLocker, QEventLoopLocker, qt, core_qeventlooplocker_qeventlooplocker, qt_core_qeventlooplocker_qeventlooplocker_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QEventLoopLocker_QEventLoopLocker, new_)
{

	RETURN_LONG(phpqt_qeventlooplocker_new());
}

PHP_METHOD(Qt_Core_QEventLoopLocker_QEventLoopLocker, newQEventLoop)
{
	zval *loop__param = NULL, _0;
	zend_long loop_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(loop_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &loop__param);
	ZVAL_LONG(&_0, loop_);
	RETURN_LONG(phpqt_qeventlooplocker_new_q_event_loop(&_0));
}

PHP_METHOD(Qt_Core_QEventLoopLocker_QEventLoopLocker, newQThread)
{
	zval *thread_param = NULL, _0;
	zend_long thread;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(thread)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &thread_param);
	ZVAL_LONG(&_0, thread);
	RETURN_LONG(phpqt_qeventlooplocker_new_q_thread(&_0));
}

PHP_METHOD(Qt_Core_QEventLoopLocker_QEventLoopLocker, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qeventlooplocker_swap(&_0, &_1);
}

