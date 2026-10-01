
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
#include "src/gui-qkeysequence.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QKeySequence_QKeySequence)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QKeySequence, QKeySequence, qt, gui_qkeysequence_qkeysequence, qt_gui_qkeysequence_qkeysequence_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, staticMetaObject)
{

	RETURN_LONG(phpqt_qkeysequence_static_meta_object());
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qkeysequence_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, new_)
{

	RETURN_LONG(phpqt_qkeysequence_new());
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newQStringQKeySequenceSequenceFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *key_param = NULL, *format = NULL, format_sub, __$null;
	zval key;

	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &key_param, &format);
	zephir_get_strval(&key, key_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	RETURN_MM_LONG(phpqt_qkeysequence_new_q_string_q_key_sequence_sequence_format(&key, format));
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newIntIntIntInt)
{
	zval *k1_param = NULL, *k2_param = NULL, *k3_param = NULL, *k4_param = NULL, _0, _1, _2, _3;
	zend_long k1, k2, k3, k4;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_LONG(k1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(k2)
		Z_PARAM_LONG(k3)
		Z_PARAM_LONG(k4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 3, &k1_param, &k2_param, &k3_param, &k4_param);
	if (!k2_param) {
		k2 = 0;
	} else {
		}
	if (!k3_param) {
		k3 = 0;
	} else {
		}
	if (!k4_param) {
		k4 = 0;
	} else {
		}
	ZVAL_LONG(&_0, k1);
	ZVAL_LONG(&_1, k2);
	ZVAL_LONG(&_2, k3);
	ZVAL_LONG(&_3, k4);
	RETURN_LONG(phpqt_qkeysequence_new_int_int_int_int(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newQKeyCombinationQKeyCombinationQKeyCombinationQKeyCombination)
{
	zval *k1_param = NULL, *k2 = NULL, k2_sub, *k3 = NULL, k3_sub, *k4 = NULL, k4_sub, __$null, _0;
	zend_long k1;

	ZVAL_UNDEF(&k2_sub);
	ZVAL_UNDEF(&k3_sub);
	ZVAL_UNDEF(&k4_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_LONG(k1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(k2)
		Z_PARAM_ZVAL_OR_NULL(k3)
		Z_PARAM_ZVAL_OR_NULL(k4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 3, &k1_param, &k2, &k3, &k4);
	if (!k2) {
		k2 = &k2_sub;
		k2 = &__$null;
	}
	if (!k3) {
		k3 = &k3_sub;
		k3 = &__$null;
	}
	if (!k4) {
		k4 = &k4_sub;
		k4 = &__$null;
	}
	ZVAL_LONG(&_0, k1);
	RETURN_LONG(phpqt_qkeysequence_new_q_key_combination_q_key_combination_q_key_combination_q_key_combination(&_0, k2, k3, k4));
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newQKeySequence)
{
	zval *ks_param = NULL, _0;
	zend_long ks;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(ks)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &ks_param);
	ZVAL_LONG(&_0, ks);
	RETURN_LONG(phpqt_qkeysequence_new_q_key_sequence(&_0));
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, newQKeySequenceStandardKey)
{
	zval *key_param = NULL, _0;
	zend_long key;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &key_param);
	ZVAL_LONG(&_0, key);
	RETURN_LONG(phpqt_qkeysequence_new_q_key_sequence_standard_key(&_0));
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeysequence_count(&_0));
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qkeysequence_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *format = NULL, format_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &format);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qkeysequence_to_string(&result, &_0, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, fromString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL, *format = NULL, format_sub, __$null;
	zval str;

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &str_param, &format);
	zephir_get_strval(&str, str_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	RETURN_MM_LONG(phpqt_qkeysequence_from_string(&str, format));
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, listFromString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL, *format = NULL, format_sub, __$null, result;
	zval str;

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &str_param, &format);
	zephir_get_strval(&str, str_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qkeysequence_list_from_string(&result, &str, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, listToString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *list__param = NULL, *format = NULL, format_sub, __$null, result;
	zval list_;

	ZVAL_UNDEF(&list_);
	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ARRAY(list_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &list__param, &format);
	zephir_get_arrval(&list_, list__param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qkeysequence_list_to_string(&result, &list_, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, matches)
{
	zval *handle_param = NULL, *seq_param = NULL, _0, _1;
	zend_long handle, seq;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(seq)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &seq_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, seq);
	RETURN_LONG(phpqt_qkeysequence_matches(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, mnemonic)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *text_param = NULL;
	zval text;

	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &text_param);
	zephir_get_strval(&text, text_param);
	RETURN_MM_LONG(phpqt_qkeysequence_mnemonic(&text));
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, keyBindings)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *key_param = NULL, result, _0;
	zend_long key;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &key_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, key);
	phpqt_qkeysequence_key_bindings(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, swap)
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
	phpqt_qkeysequence_swap(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QKeySequence_QKeySequence, isDetached)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qkeysequence_is_detached(&_0);
	RETURN_BOOL(r == 1);
}

