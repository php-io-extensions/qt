
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
#include "src/gui-qkeyevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QKeyEvent_QKeyEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QKeyEvent, QKeyEvent, qt, gui_qkeyevent_qkeyevent, qt_gui_qkeyevent_qkeyevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qkeyevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, newQEventTypeIntQtKeyboardModifiersQStringBoolQuint16)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool autorep;
	zval text;
	zval *type_param = NULL, *key_param = NULL, *modifiers_param = NULL, *text_param = NULL, *autorep_param = NULL, *count_param = NULL, _0, _1, _2, _3, _4;
	zend_long type, key, modifiers, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 6)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(key)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(text)
		Z_PARAM_BOOL(autorep)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 3, &type_param, &key_param, &modifiers_param, &text_param, &autorep_param, &count_param);
	if (!text_param) {
		ZEPHIR_INIT_VAR(&text);
		ZVAL_STRING(&text, "");
	} else {
		zephir_get_strval(&text, text_param);
	}
	if (!autorep_param) {
		autorep = 0;
	} else {
		}
	if (!count_param) {
		count = 1;
	} else {
		}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, key);
	ZVAL_LONG(&_2, modifiers);
	ZVAL_BOOL(&_3, (autorep ? 1 : 0));
	ZVAL_LONG(&_4, count);
	RETURN_MM_LONG(phpqt_qkeyevent_new_q_event_type_int_qt_keyboard_modifiers_q_string_bool_quint16(&_0, &_1, &_2, &text, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, newQEventTypeIntQtKeyboardModifiersQuint32Quint32Quint32QStringBoolQuint16QInputDevice)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool autorep;
	zval text;
	zval *type_param = NULL, *key_param = NULL, *modifiers_param = NULL, *nativeScanCode_param = NULL, *nativeVirtualKey_param = NULL, *nativeModifiers_param = NULL, *text_param = NULL, *autorep_param = NULL, *count_param = NULL, *device = NULL, device_sub, __$null, _0, _1, _2, _3, _4, _5, _6, _7;
	zend_long type, key, modifiers, nativeScanCode, nativeVirtualKey, nativeModifiers, count;

	ZVAL_UNDEF(&device_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&text);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 10)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(key)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_LONG(nativeScanCode)
		Z_PARAM_LONG(nativeVirtualKey)
		Z_PARAM_LONG(nativeModifiers)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(text)
		Z_PARAM_BOOL(autorep)
		Z_PARAM_LONG(count)
		Z_PARAM_ZVAL_OR_NULL(device)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 6, 4, &type_param, &key_param, &modifiers_param, &nativeScanCode_param, &nativeVirtualKey_param, &nativeModifiers_param, &text_param, &autorep_param, &count_param, &device);
	if (!text_param) {
		ZEPHIR_INIT_VAR(&text);
		ZVAL_STRING(&text, "");
	} else {
		zephir_get_strval(&text, text_param);
	}
	if (!autorep_param) {
		autorep = 0;
	} else {
		}
	if (!count_param) {
		count = 1;
	} else {
		}
	if (!device) {
		device = &device_sub;
		device = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, key);
	ZVAL_LONG(&_2, modifiers);
	ZVAL_LONG(&_3, nativeScanCode);
	ZVAL_LONG(&_4, nativeVirtualKey);
	ZVAL_LONG(&_5, nativeModifiers);
	ZVAL_BOOL(&_6, (autorep ? 1 : 0));
	ZVAL_LONG(&_7, count);
	RETURN_MM_LONG(phpqt_qkeyevent_new_q_event_type_int_qt_keyboard_modifiers_quint32_quint32_quint32_q_string_bool_quint16_q_input_device(&_0, &_1, &_2, &_3, &_4, &_5, &text, &_6, &_7, device));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, key)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_key(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, matches)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	r = phpqt_qkeyevent_matches(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, modifiers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_modifiers(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, keyCombination)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_key_combination(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, text)
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
	phpqt_qkeyevent_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, isAutoRepeat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qkeyevent_is_auto_repeat(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_count(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, nativeScanCode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_native_scan_code(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, nativeVirtualKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_native_virtual_key(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, nativeModifiers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_native_modifiers(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_text)
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
	phpqt_qkeyevent_m_text(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_text)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &value_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qkeyevent_set_m_text(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_key)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_m_key(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_key)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qkeyevent_set_m_key(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_scanCode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_m_scan_code(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_scanCode)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qkeyevent_set_m_scan_code(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_virtualKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_m_virtual_key(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_virtualKey)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qkeyevent_set_m_virtual_key(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_nativeModifiers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_m_native_modifiers(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_nativeModifiers)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qkeyevent_set_m_native_modifiers(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_m_count(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_count)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qkeyevent_set_m_count(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, m_autoRepeat)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qkeyevent_m_auto_repeat(&_0));
}

PHP_METHOD(Qt_Gui_QKeyEvent_QKeyEvent, setM_autoRepeat)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qkeyevent_set_m_auto_repeat(&_0, &_1);
}

