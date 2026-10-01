
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
#include "src/dbus-qdbuserror.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusError_QDBusError)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusError, QDBusError, qt, dbus_qdbuserror_qdbuserror, qt_dbus_qdbuserror_qdbuserror_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, staticMetaObject)
{

	RETURN_LONG(phpqt_qdbuserror_static_meta_object());
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbuserror_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, new_)
{

	RETURN_LONG(phpqt_qdbuserror_new());
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, newQDBusMessage)
{
	zval *msg_param = NULL, _0;
	zend_long msg;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(msg)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &msg_param);
	ZVAL_LONG(&_0, msg);
	RETURN_LONG(phpqt_qdbuserror_new_q_d_bus_message(&_0));
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, newQDBusErrorErrorTypeQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval message;
	zval *error_param = NULL, *message_param = NULL, _0;
	zend_long error;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&message);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(error)
		Z_PARAM_STR(message)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &error_param, &message_param);
	zephir_get_strval(&message, message_param);
	ZVAL_LONG(&_0, error);
	RETURN_MM_LONG(phpqt_qdbuserror_new_q_d_bus_error_error_type_q_string(&_0, &message));
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, newQDBusError)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qdbuserror_new_q_d_bus_error(&_0));
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, swap)
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
	phpqt_qdbuserror_swap(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbuserror_type(&_0));
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, name)
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
	phpqt_qdbuserror_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, message)
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
	phpqt_qdbuserror_message(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbuserror_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusError_QDBusError, errorString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *error_param = NULL, result, _0;
	zend_long error;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &error_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, error);
	phpqt_qdbuserror_error_string(&result, &_0);
	RETURN_CCTOR(&result);
}

