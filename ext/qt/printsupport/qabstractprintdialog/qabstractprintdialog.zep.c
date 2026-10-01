
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
#include "src/printsupport-qabstractprintdialog.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog)
{
	ZEPHIR_REGISTER_CLASS(Qt\\PrintSupport\\QAbstractPrintDialog, QAbstractPrintDialog, qt, printsupport_qabstractprintdialog_qabstractprintdialog, qt_printsupport_qabstractprintdialog_qabstractprintdialog_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, staticMetaObject)
{

	RETURN_LONG(phpqt_qabstractprintdialog_static_meta_object());
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qabstractprintdialog_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, new_)
{
	zval *printer_param = NULL, *parent__param = NULL, _0, _1;
	zend_long printer, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(printer)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &printer_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, printer);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qabstractprintdialog_new(&_0, &_1));
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, setOptionTabs)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tabs;
	zval *handle_param = NULL, *tabs_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tabs);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(tabs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tabs_param);
	zephir_get_arrval(&tabs, tabs_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qabstractprintdialog_set_option_tabs(&_0, &tabs);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, setPrintRange)
{
	zval *handle_param = NULL, *range_param = NULL, _0, _1;
	zend_long handle, range;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(range)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &range_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, range);
	phpqt_qabstractprintdialog_set_print_range(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, printRange)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractprintdialog_print_range(&_0));
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, setMinMax)
{
	zval *handle_param = NULL, *min_param = NULL, *max_param = NULL, _0, _1, _2;
	zend_long handle, min, max;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(min)
		Z_PARAM_LONG(max)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &min_param, &max_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, min);
	ZVAL_LONG(&_2, max);
	phpqt_qabstractprintdialog_set_min_max(&_0, &_1, &_2);
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, minPage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractprintdialog_min_page(&_0));
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, maxPage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractprintdialog_max_page(&_0));
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, setFromTo)
{
	zval *handle_param = NULL, *fromPage_param = NULL, *toPage_param = NULL, _0, _1, _2;
	zend_long handle, fromPage, toPage;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fromPage)
		Z_PARAM_LONG(toPage)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &fromPage_param, &toPage_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fromPage);
	ZVAL_LONG(&_2, toPage);
	phpqt_qabstractprintdialog_set_from_to(&_0, &_1, &_2);
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, fromPage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractprintdialog_from_page(&_0));
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, toPage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractprintdialog_to_page(&_0));
}

PHP_METHOD(Qt_PrintSupport_QAbstractPrintDialog_QAbstractPrintDialog, printer)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractprintdialog_printer(&_0));
}

