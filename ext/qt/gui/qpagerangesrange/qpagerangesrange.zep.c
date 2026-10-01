
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
#include "src/gui-qpagerangesrange.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPageRangesRange_QPageRangesRange)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPageRangesRange, QPageRangesRange, qt, gui_qpagerangesrange_qpagerangesrange, qt_gui_qpagerangesrange_qpagerangesrange_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, from)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagerangesrange_from(&_0));
}

PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, setFrom)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpagerangesrange_set_from(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, to)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagerangesrange_to(&_0));
}

PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, setTo)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpagerangesrange_set_to(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPageRangesRange_QPageRangesRange, contains)
{
	zval *handle_param = NULL, *pageNumber_param = NULL, _0, _1;
	zend_long handle, pageNumber, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pageNumber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pageNumber_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pageNumber);
	r = phpqt_qpagerangesrange_contains(&_0, &_1);
	RETURN_BOOL(r == 1);
}

