
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
#include "src/core-qpartialordering.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPartialOrdering_QPartialOrdering)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPartialOrdering, QPartialOrdering, qt, core_qpartialordering_qpartialordering, qt_core_qpartialordering_qpartialordering_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, Less)
{

	RETURN_LONG(phpqt_qpartialordering_less());
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, Equivalent)
{

	RETURN_LONG(phpqt_qpartialordering_equivalent());
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, Greater)
{

	RETURN_LONG(phpqt_qpartialordering_greater());
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, Unordered)
{

	RETURN_LONG(phpqt_qpartialordering_unordered());
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, less2)
{

	RETURN_LONG(phpqt_qpartialordering_less2());
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, equivalent2)
{

	RETURN_LONG(phpqt_qpartialordering_equivalent2());
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, greater2)
{

	RETURN_LONG(phpqt_qpartialordering_greater2());
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, unordered2)
{

	RETURN_LONG(phpqt_qpartialordering_unordered2());
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, new_)
{
	zval *order_param = NULL, _0;
	zend_long order;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(order)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &order_param);
	ZVAL_LONG(&_0, order);
	RETURN_LONG(phpqt_qpartialordering_new(&_0));
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, newQtWeakOrdering)
{
	zval *stdorder_param = NULL, _0;
	zend_long stdorder;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(stdorder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &stdorder_param);
	ZVAL_LONG(&_0, stdorder);
	RETURN_LONG(phpqt_qpartialordering_new_qt_weak_ordering(&_0));
}

PHP_METHOD(Qt_Core_QPartialOrdering_QPartialOrdering, newQtStrongOrdering)
{
	zval *stdorder_param = NULL, _0;
	zend_long stdorder;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(stdorder)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &stdorder_param);
	ZVAL_LONG(&_0, stdorder);
	RETURN_LONG(phpqt_qpartialordering_new_qt_strong_ordering(&_0));
}

