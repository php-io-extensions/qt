
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
#include "src/printsupport-qpagesetupdialog.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog)
{
	ZEPHIR_REGISTER_CLASS(Qt\\PrintSupport\\QPageSetupDialog, QPageSetupDialog, qt, printsupport_qpagesetupdialog_qpagesetupdialog, qt_printsupport_qpagesetupdialog_qpagesetupdialog_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, open)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpagesetupdialog_open(&_0);
}

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, staticMetaObject)
{

	RETURN_LONG(phpqt_qpagesetupdialog_static_meta_object());
}

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, tr)
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
	phpqt_qpagesetupdialog_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, new_)
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
	RETURN_LONG(phpqt_qpagesetupdialog_new(&_0, &_1));
}

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, newQWidget)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qpagesetupdialog_new_q_widget(&_0));
}

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, exec)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagesetupdialog_exec(&_0));
}

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, openQObjectChar)
{
	zval *handle_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, _0, _1;
	zend_long handle, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &receiver_param, &member);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	phpqt_qpagesetupdialog_open_q_object_char(&_0, &_1, member);
}

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, done)
{
	zval *handle_param = NULL, *result_param = NULL, _0, _1;
	zend_long handle, result;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(result)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &result_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, result);
	phpqt_qpagesetupdialog_done(&_0, &_1);
}

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, printer)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpagesetupdialog_printer(&_0));
}

