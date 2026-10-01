
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
#include "src/core-qkeycombination.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QKeyCombination_QKeyCombination)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QKeyCombination, QKeyCombination, qt, core_qkeycombination_qkeycombination, qt_core_qkeycombination_qkeycombination_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, new_)
{
	zval *key = NULL, key_sub, __$null;

	ZVAL_UNDEF(&key_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &key);
	if (!key) {
		key = &key_sub;
		key = &__$null;
	}
	RETURN_LONG(phpqt_qkeycombination_new(key));
}

PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, newQtModifiersQtKey)
{
	zval *modifiers_param = NULL, *key = NULL, key_sub, __$null, _0;
	zend_long modifiers;

	ZVAL_UNDEF(&key_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &modifiers_param, &key);
	if (!key) {
		key = &key_sub;
		key = &__$null;
	}
	ZVAL_LONG(&_0, modifiers);
	RETURN_LONG(phpqt_qkeycombination_new_qt_modifiers_qt_key(&_0, key));
}

PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, newQtKeyboardModifiersQtKey)
{
	zval *modifiers_param = NULL, *key = NULL, key_sub, __$null, _0;
	zend_long modifiers;

	ZVAL_UNDEF(&key_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &modifiers_param, &key);
	if (!key) {
		key = &key_sub;
		key = &__$null;
	}
	ZVAL_LONG(&_0, modifiers);
	RETURN_LONG(phpqt_qkeycombination_new_qt_keyboard_modifiers_qt_key(&_0, key));
}

PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, keyboardModifiers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeycombination_keyboard_modifiers(&_0));
}

PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, key)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeycombination_key(&_0));
}

PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, fromCombined)
{
	zval *combined_param = NULL, _0;
	zend_long combined;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(combined)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &combined_param);
	ZVAL_LONG(&_0, combined);
	RETURN_LONG(phpqt_qkeycombination_from_combined(&_0));
}

PHP_METHOD(Qt_Core_QKeyCombination_QKeyCombination, toCombined)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeycombination_to_combined(&_0));
}

