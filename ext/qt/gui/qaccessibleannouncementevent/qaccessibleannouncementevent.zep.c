
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
#include "src/gui-qaccessibleannouncementevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QAccessibleAnnouncementEvent, QAccessibleAnnouncementEvent, qt, gui_qaccessibleannouncementevent_qaccessibleannouncementevent, qt_gui_qaccessibleannouncementevent_qaccessibleannouncementevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval message;
	zval *object__param = NULL, *message_param = NULL, _0;
	zend_long object_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&message);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(object_)
		Z_PARAM_STR(message)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &object__param, &message_param);
	zephir_get_strval(&message, message_param);
	ZVAL_LONG(&_0, object_);
	RETURN_MM_LONG(phpqt_qaccessibleannouncementevent_new(&_0, &message));
}

PHP_METHOD(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent, newQAccessibleInterfaceQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval message;
	zval *iface_param = NULL, *message_param = NULL, _0;
	zend_long iface;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&message);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(iface)
		Z_PARAM_STR(message)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &iface_param, &message_param);
	zephir_get_strval(&message, message_param);
	ZVAL_LONG(&_0, iface);
	RETURN_MM_LONG(phpqt_qaccessibleannouncementevent_new_q_accessible_interface_q_string(&_0, &message));
}

PHP_METHOD(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent, message)
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
	phpqt_qaccessibleannouncementevent_message(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent, politeness)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleannouncementevent_politeness(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent, setPoliteness)
{
	zval *handle_param = NULL, *politeness_param = NULL, _0, _1;
	zend_long handle, politeness;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(politeness)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &politeness_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, politeness);
	phpqt_qaccessibleannouncementevent_set_politeness(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent, m_message)
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
	phpqt_qaccessibleannouncementevent_m_message(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent, setM_message)
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
	phpqt_qaccessibleannouncementevent_set_m_message(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent, m_politeness)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qaccessibleannouncementevent_m_politeness(&_0));
}

PHP_METHOD(Qt_Gui_QAccessibleAnnouncementEvent_QAccessibleAnnouncementEvent, setM_politeness)
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
	phpqt_qaccessibleannouncementevent_set_m_politeness(&_0, &_1);
}

