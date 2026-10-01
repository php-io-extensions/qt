
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
#include "src/core-qpropertyanimation.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPropertyAnimation_QPropertyAnimation)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPropertyAnimation, QPropertyAnimation, qt, core_qpropertyanimation_qpropertyanimation, qt_core_qpropertyanimation_qpropertyanimation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, staticMetaObject)
{

	RETURN_LONG(phpqt_qpropertyanimation_static_meta_object());
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, tr)
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
	phpqt_qpropertyanimation_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, new_)
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
	RETURN_LONG(phpqt_qpropertyanimation_new(&_0));
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, newQObjectQByteArrayQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval propertyName;
	zval *target_param = NULL, *propertyName_param = NULL, *parent__param = NULL, _0, _1;
	zend_long target, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&propertyName);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(target)
		Z_PARAM_STR(propertyName)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &target_param, &propertyName_param, &parent__param);
	zephir_get_strval(&propertyName, propertyName_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, target);
	ZVAL_LONG(&_1, parent_);
	RETURN_MM_LONG(phpqt_qpropertyanimation_new_q_object_q_byte_array_q_object(&_0, &propertyName, &_1));
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, targetObject)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpropertyanimation_target_object(&_0));
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, setTargetObject)
{
	zval *handle_param = NULL, *target_param = NULL, _0, _1;
	zend_long handle, target;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &target_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	phpqt_qpropertyanimation_set_target_object(&_0, &_1);
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, propertyName)
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
	phpqt_qpropertyanimation_property_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, setPropertyName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval propertyName;
	zval *handle_param = NULL, *propertyName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&propertyName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(propertyName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &propertyName_param);
	zephir_get_strval(&propertyName, propertyName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpropertyanimation_set_property_name(&_0, &propertyName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, event)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	r = phpqt_qpropertyanimation_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, updateCurrentValue)
{
	zval *handle_param = NULL, *value = NULL, value_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value);
	ZVAL_LONG(&_0, handle);
	phpqt_qpropertyanimation_update_current_value(&_0, value);
}

PHP_METHOD(Qt_Core_QPropertyAnimation_QPropertyAnimation, updateState)
{
	zval *handle_param = NULL, *newState_param = NULL, *oldState_param = NULL, _0, _1, _2;
	zend_long handle, newState, oldState;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newState)
		Z_PARAM_LONG(oldState)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &newState_param, &oldState_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newState);
	ZVAL_LONG(&_2, oldState);
	phpqt_qpropertyanimation_update_state(&_0, &_1, &_2);
}

