
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
#include "src/gui-qshortcutevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QShortcutEvent_QShortcutEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QShortcutEvent, QShortcutEvent, qt, gui_qshortcutevent_qshortcutevent, qt_gui_qshortcutevent_qshortcutevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qshortcutevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qshortcutevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, newQKeySequenceIntBool)
{
	zend_bool ambiguous;
	zval *key_param = NULL, *id_param = NULL, *ambiguous_param = NULL, _0, _1, _2;
	zend_long key, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(key)
		Z_PARAM_LONG(id)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(ambiguous)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &key_param, &id_param, &ambiguous_param);
	if (!ambiguous_param) {
		ambiguous = 0;
	} else {
		}
	ZVAL_LONG(&_0, key);
	ZVAL_LONG(&_1, id);
	ZVAL_BOOL(&_2, (ambiguous ? 1 : 0));
	RETURN_LONG(phpqt_qshortcutevent_new_q_key_sequence_int_bool(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, newQKeySequenceQShortcutBool)
{
	zend_bool ambiguous;
	zval *key_param = NULL, *shortcut_param = NULL, *ambiguous_param = NULL, _0, _1, _2;
	zend_long key, shortcut;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(shortcut)
		Z_PARAM_BOOL(ambiguous)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 2, &key_param, &shortcut_param, &ambiguous_param);
	if (!shortcut_param) {
		shortcut = 0;
	} else {
		}
	if (!ambiguous_param) {
		ambiguous = 0;
	} else {
		}
	ZVAL_LONG(&_0, key);
	ZVAL_LONG(&_1, shortcut);
	ZVAL_BOOL(&_2, (ambiguous ? 1 : 0));
	RETURN_LONG(phpqt_qshortcutevent_new_q_key_sequence_q_shortcut_bool(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, key)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qshortcutevent_key(&_0));
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, shortcutId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qshortcutevent_shortcut_id(&_0));
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, isAmbiguous)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qshortcutevent_is_ambiguous(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, m_sequence)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qshortcutevent_m_sequence(&_0));
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, setM_sequence)
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
	phpqt_qshortcutevent_set_m_sequence(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, m_shortcutId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qshortcutevent_m_shortcut_id(&_0));
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, setM_shortcutId)
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
	phpqt_qshortcutevent_set_m_shortcut_id(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, m_ambiguous)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qshortcutevent_m_ambiguous(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QShortcutEvent_QShortcutEvent, setM_ambiguous)
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
	phpqt_qshortcutevent_set_m_ambiguous(&_0, &_1);
}

