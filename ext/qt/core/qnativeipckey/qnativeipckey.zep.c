
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
#include "src/core-qnativeipckey.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QNativeIpcKey_QNativeIpcKey)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QNativeIpcKey, QNativeIpcKey, qt, core_qnativeipckey_qnativeipckey, qt_core_qnativeipckey_qnativeipckey_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, staticMetaObject)
{

	RETURN_LONG(phpqt_qnativeipckey_static_meta_object());
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnativeipckey_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, DefaultTypeForOs)
{

	RETURN_LONG(phpqt_qnativeipckey_default_type_for_os());
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, legacyDefaultTypeForOs)
{

	RETURN_LONG(phpqt_qnativeipckey_legacy_default_type_for_os());
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, new_)
{

	RETURN_LONG(phpqt_qnativeipckey_new());
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, newQNativeIpcKeyType)
{
	zval *type_param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &type_param);
	ZVAL_LONG(&_0, type);
	RETURN_LONG(phpqt_qnativeipckey_new_q_native_ipc_key_type(&_0));
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, newQStringQNativeIpcKeyType)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *k_param = NULL, *type = NULL, type_sub, __$null;
	zval k;

	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(k)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &k_param, &type);
	zephir_get_strval(&k, k_param);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	RETURN_MM_LONG(phpqt_qnativeipckey_new_q_string_q_native_ipc_key_type(&k, type));
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, newQNativeIpcKey)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qnativeipckey_new_q_native_ipc_key(&_0));
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qnativeipckey_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnativeipckey_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qnativeipckey_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qnativeipckey_type(&_0));
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, setType)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	phpqt_qnativeipckey_set_type(&_0, &_1);
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, nativeKey)
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
	phpqt_qnativeipckey_native_key(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, setNativeKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval newKey;
	zval *handle_param = NULL, *newKey_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&newKey);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(newKey)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &newKey_param);
	zephir_get_strval(&newKey, newKey_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qnativeipckey_set_native_key(&_0, &newKey);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, toString)
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
	phpqt_qnativeipckey_to_string(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QNativeIpcKey_QNativeIpcKey, fromString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string__param = NULL;
	zval string_;

	ZVAL_UNDEF(&string_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string__param);
	zephir_get_strval(&string_, string__param);
	RETURN_MM_LONG(phpqt_qnativeipckey_from_string(&string_));
}

