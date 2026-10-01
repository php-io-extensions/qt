
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
#include "src/core-qobject.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QObject_QObject)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QObject, QObject, qt, core_qobject_qobject, qt_core_qobject_qobject_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QObject_QObject, staticMetaObject)
{

	RETURN_LONG(phpqt_qobject_static_meta_object());
}

PHP_METHOD(Qt_Core_QObject_QObject, tr)
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
	phpqt_qobject_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QObject_QObject, new_)
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
	RETURN_LONG(phpqt_qobject_new(&_0));
}

PHP_METHOD(Qt_Core_QObject_QObject, event)
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
	r = phpqt_qobject_event(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, eventFilter)
{
	zval *handle_param = NULL, *watched_param = NULL, *event_param = NULL, _0, _1, _2;
	zend_long handle, watched, event, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(watched)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &watched_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, watched);
	ZVAL_LONG(&_2, event);
	r = phpqt_qobject_event_filter(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, objectName)
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
	phpqt_qobject_object_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QObject_QObject, setObjectName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qobject_set_object_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QObject_QObject, isWidgetType)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qobject_is_widget_type(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, isWindowType)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qobject_is_window_type(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, isQuickItemType)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qobject_is_quick_item_type(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, signalsBlocked)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qobject_signals_blocked(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, blockSignals)
{
	zend_bool b;
	zval *handle_param = NULL, *b_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &b_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (b ? 1 : 0));
	r = phpqt_qobject_block_signals(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, thread)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qobject_thread(&_0));
}

PHP_METHOD(Qt_Core_QObject_QObject, moveToThread)
{
	zval *handle_param = NULL, *thread_param = NULL, *arg1 = NULL, arg1_sub, __$null, _0, _1;
	zend_long handle, thread, r = 0;

	ZVAL_UNDEF(&arg1_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(thread)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg1)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &thread_param, &arg1);
	if (!arg1) {
		arg1 = &arg1_sub;
		arg1 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, thread);
	r = phpqt_qobject_move_to_thread(&_0, &_1, arg1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, startTimer)
{
	zval *handle_param = NULL, *interval_param = NULL, *timerType = NULL, timerType_sub, __$null, _0, _1;
	zend_long handle, interval;

	ZVAL_UNDEF(&timerType_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(interval)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(timerType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &interval_param, &timerType);
	if (!timerType) {
		timerType = &timerType_sub;
		timerType = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, interval);
	RETURN_LONG(phpqt_qobject_start_timer(&_0, &_1, timerType));
}

PHP_METHOD(Qt_Core_QObject_QObject, killTimer)
{
	zval *handle_param = NULL, *id_param = NULL, _0, _1;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	phpqt_qobject_kill_timer(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, killTimerQtTimerId)
{
	zval *handle_param = NULL, *id_param = NULL, _0, _1;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	phpqt_qobject_kill_timer_qt_timer_id(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, children)
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
	phpqt_qobject_children(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QObject_QObject, setParent)
{
	zval *handle_param = NULL, *parent__param = NULL, _0, _1;
	zend_long handle, parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &parent__param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, parent_);
	phpqt_qobject_set_parent(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, installEventFilter)
{
	zval *handle_param = NULL, *filterObj_param = NULL, _0, _1;
	zend_long handle, filterObj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filterObj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filterObj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filterObj);
	phpqt_qobject_install_event_filter(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, removeEventFilter)
{
	zval *handle_param = NULL, *obj_param = NULL, _0, _1;
	zend_long handle, obj;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(obj)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &obj_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, obj);
	phpqt_qobject_remove_event_filter(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, connect)
{
	zval *sender_param = NULL, *signal = NULL, signal_sub, *receiver_param = NULL, *member = NULL, member_sub, *arg4 = NULL, arg4_sub, __$null, _0, _1;
	zend_long sender, receiver;

	ZVAL_UNDEF(&signal_sub);
	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&arg4_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(sender)
		Z_PARAM_ZVAL(signal)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg4)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &sender_param, &signal, &receiver_param, &member, &arg4);
	if (!arg4) {
		arg4 = &arg4_sub;
		arg4 = &__$null;
	}
	ZVAL_LONG(&_0, sender);
	ZVAL_LONG(&_1, receiver);
	RETURN_LONG(phpqt_qobject_connect(&_0, signal, &_1, member, arg4));
}

PHP_METHOD(Qt_Core_QObject_QObject, connectQObjectQMetaMethodQObjectQMetaMethodQtConnectionType)
{
	zval *sender_param = NULL, *signal_param = NULL, *receiver_param = NULL, *method_param = NULL, *type = NULL, type_sub, __$null, _0, _1, _2, _3;
	zend_long sender, signal, receiver, method;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(sender)
		Z_PARAM_LONG(signal)
		Z_PARAM_LONG(receiver)
		Z_PARAM_LONG(method)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &sender_param, &signal_param, &receiver_param, &method_param, &type);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, sender);
	ZVAL_LONG(&_1, signal);
	ZVAL_LONG(&_2, receiver);
	ZVAL_LONG(&_3, method);
	RETURN_LONG(phpqt_qobject_connect_q_object_q_meta_method_q_object_q_meta_method_qt_connection_type(&_0, &_1, &_2, &_3, type));
}

PHP_METHOD(Qt_Core_QObject_QObject, connectQObjectCharCharQtConnectionType)
{
	zval *handle_param = NULL, *sender_param = NULL, *signal = NULL, signal_sub, *member = NULL, member_sub, *type = NULL, type_sub, __$null, _0, _1;
	zend_long handle, sender;

	ZVAL_UNDEF(&signal_sub);
	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(sender)
		Z_PARAM_ZVAL(signal)
		Z_PARAM_ZVAL(member)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &sender_param, &signal, &member, &type);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, sender);
	RETURN_LONG(phpqt_qobject_connect_q_object_char_char_qt_connection_type(&_0, &_1, signal, member, type));
}

PHP_METHOD(Qt_Core_QObject_QObject, disconnect)
{
	zval *sender_param = NULL, *signal = NULL, signal_sub, *receiver_param = NULL, *member = NULL, member_sub, _0, _1;
	zend_long sender, receiver, r = 0;

	ZVAL_UNDEF(&signal_sub);
	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(sender)
		Z_PARAM_ZVAL(signal)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &sender_param, &signal, &receiver_param, &member);
	ZVAL_LONG(&_0, sender);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qobject_disconnect(&_0, signal, &_1, member);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, disconnectQObjectQMetaMethodQObjectQMetaMethod)
{
	zval *sender_param = NULL, *signal_param = NULL, *receiver_param = NULL, *member_param = NULL, _0, _1, _2, _3;
	zend_long sender, signal, receiver, member, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(sender)
		Z_PARAM_LONG(signal)
		Z_PARAM_LONG(receiver)
		Z_PARAM_LONG(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &sender_param, &signal_param, &receiver_param, &member_param);
	ZVAL_LONG(&_0, sender);
	ZVAL_LONG(&_1, signal);
	ZVAL_LONG(&_2, receiver);
	ZVAL_LONG(&_3, member);
	r = phpqt_qobject_disconnect_q_object_q_meta_method_q_object_q_meta_method(&_0, &_1, &_2, &_3);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, disconnectCharQObjectChar)
{
	zval *handle_param = NULL, *signal = NULL, signal_sub, *receiver_param = NULL, *member = NULL, member_sub, __$null, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&signal_sub);
	ZVAL_UNDEF(&member_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(signal)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL_OR_NULL(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 3, &handle_param, &signal, &receiver_param, &member);
	if (!signal) {
		signal = &signal_sub;
		signal = &__$null;
	}
	if (!receiver_param) {
		receiver = 0;
	} else {
		}
	if (!member) {
		member = &member_sub;
		member = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qobject_disconnect_char_q_object_char(&_0, signal, &_1, member);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, disconnectQObjectChar)
{
	zval *handle_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, __$null, _0, _1;
	zend_long handle, receiver, r = 0;

	ZVAL_UNDEF(&member_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(receiver)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &receiver_param, &member);
	if (!member) {
		member = &member_sub;
		member = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	r = phpqt_qobject_disconnect_q_object_char(&_0, &_1, member);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, disconnectQMetaObjectConnection)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	r = phpqt_qobject_disconnect_q_meta_object_connection(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, dumpObjectTree)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qobject_dump_object_tree(&_0);
}

PHP_METHOD(Qt_Core_QObject_QObject, dumpObjectInfo)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qobject_dump_object_info(&_0);
}

PHP_METHOD(Qt_Core_QObject_QObject, setProperty)
{
	zval *handle_param = NULL, *name = NULL, name_sub, *value = NULL, value_sub, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&value_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &name, &value);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qobject_set_property(&_0, name, value);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, property)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *name = NULL, name_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&name_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qobject_property(&result, &_0, name);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QObject_QObject, dynamicPropertyNames)
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
	phpqt_qobject_dynamic_property_names(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QObject_QObject, bindingStorage)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qobject_binding_storage(&_0));
}

PHP_METHOD(Qt_Core_QObject_QObject, destroyed)
{
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle, arg0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &arg0_param);
	if (!arg0_param) {
		arg0 = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	phpqt_qobject_destroyed(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, parent_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qobject_parent(&_0));
}

PHP_METHOD(Qt_Core_QObject_QObject, inherits)
{
	zval *handle_param = NULL, *classname = NULL, classname_sub, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&classname_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(classname)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &classname);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qobject_inherits(&_0, classname);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, deleteLater)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qobject_delete_later(&_0);
}

PHP_METHOD(Qt_Core_QObject_QObject, sender)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qobject_sender(&_0));
}

PHP_METHOD(Qt_Core_QObject_QObject, senderSignalIndex)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qobject_sender_signal_index(&_0));
}

PHP_METHOD(Qt_Core_QObject_QObject, receivers)
{
	zval *handle_param = NULL, *signal = NULL, signal_sub, _0;
	zend_long handle;

	ZVAL_UNDEF(&signal_sub);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(signal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &signal);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qobject_receivers(&_0, signal));
}

PHP_METHOD(Qt_Core_QObject_QObject, isSignalConnected)
{
	zval *handle_param = NULL, *signal_param = NULL, _0, _1;
	zend_long handle, signal, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(signal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &signal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, signal);
	r = phpqt_qobject_is_signal_connected(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QObject_QObject, timerEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qobject_timer_event(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, childEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qobject_child_event(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, customEvent)
{
	zval *handle_param = NULL, *event_param = NULL, _0, _1;
	zend_long handle, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, event);
	phpqt_qobject_custom_event(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, connectNotify)
{
	zval *handle_param = NULL, *signal_param = NULL, _0, _1;
	zend_long handle, signal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(signal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &signal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, signal);
	phpqt_qobject_connect_notify(&_0, &_1);
}

PHP_METHOD(Qt_Core_QObject_QObject, disconnectNotify)
{
	zval *handle_param = NULL, *signal_param = NULL, _0, _1;
	zend_long handle, signal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(signal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &signal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, signal);
	phpqt_qobject_disconnect_notify(&_0, &_1);
}

