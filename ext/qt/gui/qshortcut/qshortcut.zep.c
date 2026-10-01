
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
#include "src/gui-qshortcut.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QShortcut_QShortcut)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QShortcut, QShortcut, qt, gui_qshortcut_qshortcut, qt_gui_qshortcut_qshortcut_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, staticMetaObject)
{

	RETURN_LONG(phpqt_qshortcut_static_meta_object());
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, tr)
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
	phpqt_qshortcut_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &parent__param);
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qshortcut_new(&_0));
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, newQKeySequenceQObjectCharCharQtShortcutContext)
{
	zval *key_param = NULL, *parent__param = NULL, *member = NULL, member_sub, *ambiguousMember = NULL, ambiguousMember_sub, *context = NULL, context_sub, __$null, _0, _1;
	zend_long key, parent_;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&ambiguousMember_sub);
	ZVAL_UNDEF(&context_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(key)
		Z_PARAM_LONG(parent_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(member)
		Z_PARAM_ZVAL_OR_NULL(ambiguousMember)
		Z_PARAM_ZVAL_OR_NULL(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 3, &key_param, &parent__param, &member, &ambiguousMember, &context);
	if (!member) {
		member = &member_sub;
		member = &__$null;
	}
	if (!ambiguousMember) {
		ambiguousMember = &ambiguousMember_sub;
		ambiguousMember = &__$null;
	}
	if (!context) {
		context = &context_sub;
		context = &__$null;
	}
	ZVAL_LONG(&_0, key);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qshortcut_new_q_key_sequence_q_object_char_char_qt_shortcut_context(&_0, &_1, member, ambiguousMember, context));
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, newQKeySequenceStandardKeyQObjectCharCharQtShortcutContext)
{
	zval *key_param = NULL, *parent__param = NULL, *member = NULL, member_sub, *ambiguousMember = NULL, ambiguousMember_sub, *context = NULL, context_sub, __$null, _0, _1;
	zend_long key, parent_;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&ambiguousMember_sub);
	ZVAL_UNDEF(&context_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(key)
		Z_PARAM_LONG(parent_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(member)
		Z_PARAM_ZVAL_OR_NULL(ambiguousMember)
		Z_PARAM_ZVAL_OR_NULL(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 3, &key_param, &parent__param, &member, &ambiguousMember, &context);
	if (!member) {
		member = &member_sub;
		member = &__$null;
	}
	if (!ambiguousMember) {
		ambiguousMember = &ambiguousMember_sub;
		ambiguousMember = &__$null;
	}
	if (!context) {
		context = &context_sub;
		context = &__$null;
	}
	ZVAL_LONG(&_0, key);
	ZVAL_LONG(&_1, parent_);
	RETURN_LONG(phpqt_qshortcut_new_q_key_sequence_standard_key_q_object_char_char_qt_shortcut_context(&_0, &_1, member, ambiguousMember, context));
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setKey)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	phpqt_qshortcut_set_key(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, key)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qshortcut_key(&_0));
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setKeys)
{
	zval *handle_param = NULL, *key_param = NULL, _0, _1;
	zend_long handle, key;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(key)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &key_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, key);
	phpqt_qshortcut_set_keys(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setKeysQListQKeySequence)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval keys;
	zval *handle_param = NULL, *keys_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&keys);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(keys)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &keys_param);
	zephir_get_arrval(&keys, keys_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qshortcut_set_keys_q_list_q_key_sequence(&_0, &keys);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, keys)
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
	phpqt_qshortcut_keys(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setEnabled)
{
	zend_bool enable;
	zval *handle_param = NULL, *enable_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enable_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enable ? 1 : 0));
	phpqt_qshortcut_set_enabled(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, isEnabled)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qshortcut_is_enabled(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setContext)
{
	zval *handle_param = NULL, *context_param = NULL, _0, _1;
	zend_long handle, context;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(context)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &context_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, context);
	phpqt_qshortcut_set_context(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, context)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qshortcut_context(&_0));
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setAutoRepeat)
{
	zend_bool on;
	zval *handle_param = NULL, *on_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &on_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (on ? 1 : 0));
	phpqt_qshortcut_set_auto_repeat(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, autoRepeat)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qshortcut_auto_repeat(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, id)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qshortcut_id(&_0));
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, setWhatsThis)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qshortcut_set_whats_this(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, whatsThis)
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
	phpqt_qshortcut_whats_this(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, activated)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qshortcut_activated(&_0);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, activatedAmbiguously)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qshortcut_activated_ambiguously(&_0);
}

PHP_METHOD(Qt_Gui_QShortcut_QShortcut, event)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	r = phpqt_qshortcut_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

