
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
#include "src/gui-qfocusevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QFocusEvent_QFocusEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QFocusEvent, QFocusEvent, qt, gui_qfocusevent_qfocusevent, qt_gui_qfocusevent_qfocusevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qfocusevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfocusevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, newQEventTypeQtFocusReason)
{
	zval *type_param = NULL, *reason = NULL, reason_sub, __$null, _0;
	zend_long type;

	ZVAL_UNDEF(&reason_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(type)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(reason)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &type_param, &reason);
	if (!reason) {
		reason = &reason_sub;
		reason = &__$null;
	}
	ZVAL_LONG(&_0, type);
	RETURN_LONG(phpqt_qfocusevent_new_q_event_type_qt_focus_reason(&_0, reason));
}

PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, gotFocus)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfocusevent_got_focus(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, lostFocus)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfocusevent_lost_focus(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QFocusEvent_QFocusEvent, reason)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfocusevent_reason(&_0));
}

