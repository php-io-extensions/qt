
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
#include "src/core-qregularexpressionmatchiterator.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QRegularExpressionMatchIterator, QRegularExpressionMatchIterator, qt, core_qregularexpressionmatchiterator_qregularexpressionmatchiterator, qt_core_qregularexpressionmatchiterator_qregularexpressionmatchiterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator, new_)
{

	RETURN_LONG(phpqt_qregularexpressionmatchiterator_new());
}

PHP_METHOD(Qt_Core_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qregularexpressionmatchiterator_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator, hasNext)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qregularexpressionmatchiterator_has_next(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator, next)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qregularexpressionmatchiterator_next(&_0));
}

PHP_METHOD(Qt_Core_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator, peekNext)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qregularexpressionmatchiterator_peek_next(&_0));
}

PHP_METHOD(Qt_Core_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator, regularExpression)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qregularexpressionmatchiterator_regular_expression(&_0));
}

PHP_METHOD(Qt_Core_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator, matchType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qregularexpressionmatchiterator_match_type(&_0));
}

PHP_METHOD(Qt_Core_QRegularExpressionMatchIterator_QRegularExpressionMatchIterator, matchOptions)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qregularexpressionmatchiterator_match_options(&_0));
}

