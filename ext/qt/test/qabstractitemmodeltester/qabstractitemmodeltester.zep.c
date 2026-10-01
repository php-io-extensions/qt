
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
#include "src/test-qabstractitemmodeltester.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Test_QAbstractItemModelTester_QAbstractItemModelTester)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Test\\QAbstractItemModelTester, QAbstractItemModelTester, qt, test_qabstractitemmodeltester_qabstractitemmodeltester, qt_test_qabstractitemmodeltester_qabstractitemmodeltester_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Test_QAbstractItemModelTester_QAbstractItemModelTester, staticMetaObject)
{

	RETURN_LONG(phpqt_qabstractitemmodeltester_static_meta_object());
}

PHP_METHOD(Qt_Test_QAbstractItemModelTester_QAbstractItemModelTester, tr)
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
	phpqt_qabstractitemmodeltester_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Test_QAbstractItemModelTester_QAbstractItemModelTester, new_)
{
	zval *model_param = NULL, *parent__param = NULL, _0, _1;
	zend_long model, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(model)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &model_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, model);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qabstractitemmodeltester_new(&_0, &_1));
}

PHP_METHOD(Qt_Test_QAbstractItemModelTester_QAbstractItemModelTester, newQAbstractItemModelQAbstractItemModelTesterFailureReportingModeQObject)
{
	zval *model_param = NULL, *mode_param = NULL, *parent__param = NULL, _0, _1, _2;
	zend_long model, mode, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(model)
		Z_PARAM_LONG(mode)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &model_param, &mode_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, model);
	ZVAL_LONG(&_1, mode);
	ZVAL_LONG(&_2, parent_);
	RETURN_LONG(phpqt_qabstractitemmodeltester_new_q_abstract_item_model_q_abstract_item_model_tester_failure_reporting_mode_q_object(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Test_QAbstractItemModelTester_QAbstractItemModelTester, model)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractitemmodeltester_model(&_0));
}

PHP_METHOD(Qt_Test_QAbstractItemModelTester_QAbstractItemModelTester, failureReportingMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qabstractitemmodeltester_failure_reporting_mode(&_0));
}

PHP_METHOD(Qt_Test_QAbstractItemModelTester_QAbstractItemModelTester, setUseFetchMore)
{
	zend_bool value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (value ? 1 : 0));
	phpqt_qabstractitemmodeltester_set_use_fetch_more(&_0, &_1);
}

