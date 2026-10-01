
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
#include "src/widgets-qtablewidgetselectionrange.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QTableWidgetSelectionRange_QTableWidgetSelectionRange)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QTableWidgetSelectionRange, QTableWidgetSelectionRange, qt, widgets_qtablewidgetselectionrange_qtablewidgetselectionrange, qt_widgets_qtablewidgetselectionrange_qtablewidgetselectionrange_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QTableWidgetSelectionRange_QTableWidgetSelectionRange, new_)
{

	RETURN_LONG(phpqt_qtablewidgetselectionrange_new());
}

PHP_METHOD(Qt_Widgets_QTableWidgetSelectionRange_QTableWidgetSelectionRange, newIntIntIntInt)
{
	zval *top_param = NULL, *left_param = NULL, *bottom_param = NULL, *right_param = NULL, _0, _1, _2, _3;
	zend_long top, left, bottom, right;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(top)
		Z_PARAM_LONG(left)
		Z_PARAM_LONG(bottom)
		Z_PARAM_LONG(right)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &top_param, &left_param, &bottom_param, &right_param);
	ZVAL_LONG(&_0, top);
	ZVAL_LONG(&_1, left);
	ZVAL_LONG(&_2, bottom);
	ZVAL_LONG(&_3, right);
	RETURN_LONG(phpqt_qtablewidgetselectionrange_new_int_int_int_int(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QTableWidgetSelectionRange_QTableWidgetSelectionRange, topRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidgetselectionrange_top_row(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidgetSelectionRange_QTableWidgetSelectionRange, bottomRow)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidgetselectionrange_bottom_row(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidgetSelectionRange_QTableWidgetSelectionRange, leftColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidgetselectionrange_left_column(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidgetSelectionRange_QTableWidgetSelectionRange, rightColumn)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidgetselectionrange_right_column(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidgetSelectionRange_QTableWidgetSelectionRange, rowCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidgetselectionrange_row_count(&_0));
}

PHP_METHOD(Qt_Widgets_QTableWidgetSelectionRange_QTableWidgetSelectionRange, columnCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtablewidgetselectionrange_column_count(&_0));
}

