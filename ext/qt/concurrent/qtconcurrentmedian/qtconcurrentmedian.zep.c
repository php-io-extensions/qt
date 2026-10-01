
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
#include "src/concurrent-qtconcurrentmedian.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Concurrent_QtConcurrentMedian_QtConcurrentMedian)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Concurrent\\QtConcurrentMedian, QtConcurrentMedian, qt, concurrent_qtconcurrentmedian_qtconcurrentmedian, qt_concurrent_qtconcurrentmedian_qtconcurrentmedian_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Concurrent_QtConcurrentMedian_QtConcurrentMedian, new_)
{

	RETURN_LONG(phpqt_qtconcurrentmedian_new());
}

PHP_METHOD(Qt_Concurrent_QtConcurrentMedian_QtConcurrentMedian, reset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtconcurrentmedian_reset(&_0);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentMedian_QtConcurrentMedian, addValue)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qtconcurrentmedian_add_value(&_0, &_1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentMedian_QtConcurrentMedian, isMedianValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtconcurrentmedian_is_median_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Concurrent_QtConcurrentMedian_QtConcurrentMedian, median)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtconcurrentmedian_median(&_0));
}

