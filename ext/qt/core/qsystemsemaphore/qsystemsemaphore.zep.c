
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
#include "src/core-qsystemsemaphore.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QSystemSemaphore_QSystemSemaphore)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QSystemSemaphore, QSystemSemaphore, qt, core_qsystemsemaphore_qsystemsemaphore, qt_core_qsystemsemaphore_qsystemsemaphore_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, staticMetaObject)
{

	RETURN_LONG(phpqt_qsystemsemaphore_static_meta_object());
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qsystemsemaphore_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *sourceText = NULL, sourceText_sub, *disambiguation = NULL, disambiguation_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&sourceText_sub);
	ZVAL_UNDEF(&disambiguation_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(sourceText)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(disambiguation)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &sourceText, &disambiguation, &n_param);
	if (!disambiguation) {
		disambiguation = &disambiguation_sub;
		disambiguation = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qsystemsemaphore_tr(&result, sourceText, disambiguation, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, new_)
{
	zval *key_param = NULL, *initialValue_param = NULL, *arg2 = NULL, arg2_sub, __$null, _0, _1;
	zend_long key, initialValue;

	ZVAL_UNDEF(&arg2_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(initialValue)
		Z_PARAM_ZVAL_OR_NULL(arg2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &key_param, &initialValue_param, &arg2);
	if (!initialValue_param) {
		initialValue = 0;
	} else {
		}
	if (!arg2) {
		arg2 = &arg2_sub;
		arg2 = &__$null;
	}
	ZVAL_LONG(&_0, key);
	ZVAL_LONG(&_1, initialValue);
	RETURN_LONG(phpqt_qsystemsemaphore_new(&_0, &_1, arg2));
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, setNativeKey)
{
	zval *handle_param = NULL, *key_param = NULL, *initialValue_param = NULL, *arg2 = NULL, arg2_sub, __$null, _0, _1, _2;
	zend_long handle, key, initialValue;

	ZVAL_UNDEF(&arg2_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(initialValue)
		Z_PARAM_ZVAL_OR_NULL(arg2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &handle_param, &key_param, &initialValue_param, &arg2);
	if (!initialValue_param) {
		initialValue = 0;
	} else {
		}
	if (!arg2) {
		arg2 = &arg2_sub;
		arg2 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	ZVAL_LONG(&_2, initialValue);
	phpqt_qsystemsemaphore_set_native_key(&_0, &_1, &_2, arg2);
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, setNativeKeyQStringIntQSystemSemaphoreAccessModeQNativeIpcKeyType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, *initialValue_param = NULL, *mode = NULL, mode_sub, *type = NULL, type_sub, __$null, _0, _1;
	zend_long handle, initialValue;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&key);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(initialValue)
		Z_PARAM_ZVAL_OR_NULL(mode)
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &handle_param, &key_param, &initialValue_param, &mode, &type);
	zephir_get_strval(&key, key_param);
	if (!initialValue_param) {
		initialValue = 0;
	} else {
		}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, initialValue);
	phpqt_qsystemsemaphore_set_native_key_q_string_int_q_system_semaphore_access_mode_q_native_ipc_key_type(&_0, &key, &_1, mode, type);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, nativeIpcKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsystemsemaphore_native_ipc_key(&_0));
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, newQStringIntQSystemSemaphoreAccessMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long initialValue;
	zval *key_param = NULL, *initialValue_param = NULL, *mode = NULL, mode_sub, __$null, _0;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(initialValue)
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &key_param, &initialValue_param, &mode);
	zephir_get_strval(&key, key_param);
	if (!initialValue_param) {
		initialValue = 0;
	} else {
		}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, initialValue);
	RETURN_MM_LONG(phpqt_qsystemsemaphore_new_q_string_int_q_system_semaphore_access_mode(&key, &_0, mode));
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, setKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval key;
	zval *handle_param = NULL, *key_param = NULL, *initialValue_param = NULL, *mode = NULL, mode_sub, __$null, _0, _1;
	zend_long handle, initialValue;

	ZVAL_UNDEF(&mode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&key);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(initialValue)
		Z_PARAM_ZVAL_OR_NULL(mode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &handle_param, &key_param, &initialValue_param, &mode);
	zephir_get_strval(&key, key_param);
	if (!initialValue_param) {
		initialValue = 0;
	} else {
		}
	if (!mode) {
		mode = &mode_sub;
		mode = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, initialValue);
	phpqt_qsystemsemaphore_set_key(&_0, &key, &_1, mode);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, key)
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
	phpqt_qsystemsemaphore_key(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, acquire)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qsystemsemaphore_acquire(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, release)
{
	zval *handle_param = NULL, *n_param = NULL, _0, _1;
	zend_long handle, n, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &n_param);
	if (!n_param) {
		n = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	r = phpqt_qsystemsemaphore_release(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, error)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qsystemsemaphore_error(&_0));
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, errorString)
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
	phpqt_qsystemsemaphore_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, isKeyTypeSupported)
{
	zval *type_param = NULL, _0;
	zend_long type, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &type_param);
	ZVAL_LONG(&_0, type);
	r = phpqt_qsystemsemaphore_is_key_type_supported(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, platformSafeKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *key_param = NULL, *type = NULL, type_sub, __$null;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &key_param, &type);
	zephir_get_strval(&key, key_param);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	RETURN_MM_LONG(phpqt_qsystemsemaphore_platform_safe_key(&key, type));
}

PHP_METHOD(Qt_Core_QSystemSemaphore_QSystemSemaphore, legacyNativeKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *key_param = NULL, *type = NULL, type_sub, __$null;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &key_param, &type);
	zephir_get_strval(&key, key_param);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	RETURN_MM_LONG(phpqt_qsystemsemaphore_legacy_native_key(&key, type));
}

