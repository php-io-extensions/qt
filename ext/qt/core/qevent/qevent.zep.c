
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
#include "src/core-qevent.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QEvent_QEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QEvent, QEvent, qt, core_qevent_qevent, qt_core_qevent_qevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QEvent_QEvent, staticMetaObject)
{

	RETURN_LONG(phpqt_qevent_static_meta_object());
}

PHP_METHOD(Qt_Core_QEvent_QEvent, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qevent_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QEvent_QEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qevent_new(&_0));
}

PHP_METHOD(Qt_Core_QEvent_QEvent, newQEventType)
{
	zval *type_param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &type_param);
	ZVAL_LONG(&_0, type);
	RETURN_LONG(phpqt_qevent_new_q_event_type(&_0));
}

PHP_METHOD(Qt_Core_QEvent_QEvent, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qevent_type(&_0));
}

PHP_METHOD(Qt_Core_QEvent_QEvent, spontaneous)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qevent_spontaneous(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QEvent_QEvent, setAccepted)
{
	zend_bool accepted;
	zval *handle_param = NULL, *accepted_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(accepted)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &accepted_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (accepted ? 1 : 0));
	phpqt_qevent_set_accepted(&_0, &_1);
}

PHP_METHOD(Qt_Core_QEvent_QEvent, isAccepted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qevent_is_accepted(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QEvent_QEvent, accept)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qevent_accept(&_0);
}

PHP_METHOD(Qt_Core_QEvent_QEvent, ignore)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qevent_ignore(&_0);
}

PHP_METHOD(Qt_Core_QEvent_QEvent, isInputEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qevent_is_input_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QEvent_QEvent, isPointerEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qevent_is_pointer_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QEvent_QEvent, isSinglePointEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qevent_is_single_point_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QEvent_QEvent, registerEventType)
{
	zval *hint_param = NULL, _0;
	zend_long hint;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(hint)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &hint_param);
	if (!hint_param) {
		hint = -1;
	} else {
		}
	ZVAL_LONG(&_0, hint);
	RETURN_LONG(phpqt_qevent_register_event_type(&_0));
}

PHP_METHOD(Qt_Core_QEvent_QEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qevent_clone(&_0));
}

PHP_METHOD(Qt_Core_QEvent_QEvent, t)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qevent_t(&_0));
}

PHP_METHOD(Qt_Core_QEvent_QEvent, setT)
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
	phpqt_qevent_set_t(&_0, &_1);
}

