
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
#include "src/gui-qinputevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QInputEvent_QInputEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QInputEvent, QInputEvent, qt, gui_qinputevent_qinputevent, qt_gui_qinputevent_qinputevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qinputevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, newQEventTypeQInputDeviceQtKeyboardModifiers)
{
	zval *type_param = NULL, *m_dev_param = NULL, *modifiers = NULL, modifiers_sub, __$null, _0, _1;
	zend_long type, m_dev;

	ZVAL_UNDEF(&modifiers_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(m_dev)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(modifiers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &type_param, &m_dev_param, &modifiers);
	if (!modifiers) {
		modifiers = &modifiers_sub;
		modifiers = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, m_dev);
	RETURN_LONG(phpqt_qinputevent_new_q_event_type_q_input_device_qt_keyboard_modifiers(&_0, &_1, modifiers));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, device)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputevent_device(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, deviceType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputevent_device_type(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, modifiers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputevent_modifiers(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setModifiers)
{
	zval *handle_param = NULL, *modifiers_param = NULL, _0, _1;
	zend_long handle, modifiers;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(modifiers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &modifiers_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, modifiers);
	phpqt_qinputevent_set_modifiers(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, timestamp)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputevent_timestamp(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setTimestamp)
{
	zval *handle_param = NULL, *timestamp_param = NULL, _0, _1;
	zend_long handle, timestamp;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timestamp)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timestamp_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timestamp);
	phpqt_qinputevent_set_timestamp(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, m_dev)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputevent_m_dev(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, m_timeStamp)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputevent_m_time_stamp(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setM_timeStamp)
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
	phpqt_qinputevent_set_m_time_stamp(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, m_modState)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputevent_m_mod_state(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setM_modState)
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
	phpqt_qinputevent_set_m_mod_state(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, m_reserved)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputevent_m_reserved(&_0));
}

PHP_METHOD(Qt_Gui_QInputEvent_QInputEvent, setM_reserved)
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
	phpqt_qinputevent_set_m_reserved(&_0, &_1);
}

