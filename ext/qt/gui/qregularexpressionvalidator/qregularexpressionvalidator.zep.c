
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
#include "src/gui-qregularexpressionvalidator.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QRegularExpressionValidator_QRegularExpressionValidator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QRegularExpressionValidator, QRegularExpressionValidator, qt, gui_qregularexpressionvalidator_qregularexpressionvalidator, qt_gui_qregularexpressionvalidator_qregularexpressionvalidator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QRegularExpressionValidator_QRegularExpressionValidator, staticMetaObject)
{

	RETURN_LONG(phpqt_qregularexpressionvalidator_static_meta_object());
}

PHP_METHOD(Qt_Gui_QRegularExpressionValidator_QRegularExpressionValidator, tr)
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
	phpqt_qregularexpressionvalidator_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRegularExpressionValidator_QRegularExpressionValidator, new_)
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
	RETURN_LONG(phpqt_qregularexpressionvalidator_new(&_0));
}

PHP_METHOD(Qt_Gui_QRegularExpressionValidator_QRegularExpressionValidator, newQRegularExpressionQObject)
{
	zval *re_param = NULL, *parent__param = NULL, _0, _1;
	zend_long re, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(re)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &re_param, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, re);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qregularexpressionvalidator_new_q_regular_expression_q_object(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QRegularExpressionValidator_QRegularExpressionValidator, validate)
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
	phpqt_qregularexpressionvalidator_validate(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRegularExpressionValidator_QRegularExpressionValidator, regularExpression)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qregularexpressionvalidator_regular_expression(&_0));
}

PHP_METHOD(Qt_Gui_QRegularExpressionValidator_QRegularExpressionValidator, setRegularExpression)
{
	zval *handle_param = NULL, *re_param = NULL, _0, _1;
	zend_long handle, re;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(re)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &re_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, re);
	phpqt_qregularexpressionvalidator_set_regular_expression(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QRegularExpressionValidator_QRegularExpressionValidator, regularExpressionChanged)
{
	zval *handle_param = NULL, *re_param = NULL, _0, _1;
	zend_long handle, re;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(re)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &re_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, re);
	phpqt_qregularexpressionvalidator_regular_expression_changed(&_0, &_1);
}

