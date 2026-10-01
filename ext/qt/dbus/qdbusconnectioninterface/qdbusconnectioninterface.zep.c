
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
#include "src/dbus-qdbusconnectioninterface.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusConnectionInterface, QDBusConnectionInterface, qt, dbus_qdbusconnectioninterface_qdbusconnectioninterface, qt_dbus_qdbusconnectioninterface_qdbusconnectioninterface_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, staticMetaObject)
{

	RETURN_LONG(phpqt_qdbusconnectioninterface_static_meta_object());
}

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, tr)
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
	phpqt_qdbusconnectioninterface_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, serviceRegistered)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval service;
	zval *handle_param = NULL, *service_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&service);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(service)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &service_param);
	zephir_get_strval(&service, service_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusconnectioninterface_service_registered(&_0, &service);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, serviceUnregistered)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval service;
	zval *handle_param = NULL, *service_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&service);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(service)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &service_param);
	zephir_get_strval(&service, service_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusconnectioninterface_service_unregistered(&_0, &service);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, serviceOwnerChanged)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name, oldOwner, newOwner;
	zval *handle_param = NULL, *name_param = NULL, *oldOwner_param = NULL, *newOwner_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&oldOwner);
	ZVAL_UNDEF(&newOwner);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_STR(oldOwner)
		Z_PARAM_STR(newOwner)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &name_param, &oldOwner_param, &newOwner_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&oldOwner, oldOwner_param);
	zephir_get_strval(&newOwner, newOwner_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusconnectioninterface_service_owner_changed(&_0, &name, &oldOwner, &newOwner);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, callWithCallbackFailed)
{
	zval *handle_param = NULL, *error_param = NULL, *call_param = NULL, _0, _1, _2;
	zend_long handle, error, call;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(error)
		Z_PARAM_LONG(call)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &error_param, &call_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, error);
	ZVAL_LONG(&_2, call);
	phpqt_qdbusconnectioninterface_call_with_callback_failed(&_0, &_1, &_2);
}

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, NameAcquired)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusconnectioninterface_name_acquired(&_0, &arg0);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, NameLost)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arg0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusconnectioninterface_name_lost(&_0, &arg0);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusConnectionInterface_QDBusConnectionInterface, NameOwnerChanged)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg0, arg1, arg2;
	zval *handle_param = NULL, *arg0_param = NULL, *arg1_param = NULL, *arg2_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arg0);
	ZVAL_UNDEF(&arg1);
	ZVAL_UNDEF(&arg2);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(arg0)
		Z_PARAM_STR(arg1)
		Z_PARAM_STR(arg2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &arg0_param, &arg1_param, &arg2_param);
	zephir_get_strval(&arg0, arg0_param);
	zephir_get_strval(&arg1, arg1_param);
	zephir_get_strval(&arg2, arg2_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusconnectioninterface_name_owner_changed(&_0, &arg0, &arg1, &arg2);
	ZEPHIR_MM_RESTORE();
}

