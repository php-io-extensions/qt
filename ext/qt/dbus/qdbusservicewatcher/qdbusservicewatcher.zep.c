
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
#include "src/dbus-qdbusservicewatcher.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusServiceWatcher, QDBusServiceWatcher, qt, dbus_qdbusservicewatcher_qdbusservicewatcher, qt_dbus_qdbusservicewatcher_qdbusservicewatcher_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, staticMetaObject)
{

	RETURN_LONG(phpqt_qdbusservicewatcher_static_meta_object());
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, tr)
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
	phpqt_qdbusservicewatcher_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, new_)
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
	RETURN_LONG(phpqt_qdbusservicewatcher_new(&_0));
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, newQStringQDBusConnectionQDBusServiceWatcherWatchModeQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long connection, parent_;
	zval *service_param = NULL, *connection_param = NULL, *watchMode = NULL, watchMode_sub, *parent__param = NULL, __$null, _0, _1;
	zval service;

	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&watchMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(service)
		Z_PARAM_LONG(connection)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(watchMode)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &service_param, &connection_param, &watchMode, &parent__param);
	zephir_get_strval(&service, service_param);
	if (!watchMode) {
		watchMode = &watchMode_sub;
		watchMode = &__$null;
	}
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, connection);
	ZVAL_LONG(&_1, parent_);
	RETURN_MM_LONG(phpqt_qdbusservicewatcher_new_q_string_q_d_bus_connection_q_d_bus_service_watcher_watch_mode_q_object(&service, &_0, watchMode, &_1));
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, watchedServices)
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
	phpqt_qdbusservicewatcher_watched_services(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, setWatchedServices)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval services;
	zval *handle_param = NULL, *services_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&services);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(services)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &services_param);
	zephir_get_arrval(&services, services_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusservicewatcher_set_watched_services(&_0, &services);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, addWatchedService)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval newService;
	zval *handle_param = NULL, *newService_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&newService);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(newService)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &newService_param);
	zephir_get_strval(&newService, newService_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusservicewatcher_add_watched_service(&_0, &newService);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, removeWatchedService)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval service;
	zval *handle_param = NULL, *service_param = NULL, _0;
	zend_long handle, r = 0;

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
	r = phpqt_qdbusservicewatcher_remove_watched_service(&_0, &service);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, watchMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusservicewatcher_watch_mode(&_0));
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, setWatchMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qdbusservicewatcher_set_watch_mode(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, connection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusservicewatcher_connection(&_0));
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, setConnection)
{
	zval *handle_param = NULL, *connection_param = NULL, _0, _1;
	zend_long handle, connection;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(connection)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &connection_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, connection);
	phpqt_qdbusservicewatcher_set_connection(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, serviceRegistered)
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
	phpqt_qdbusservicewatcher_service_registered(&_0, &service);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, serviceUnregistered)
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
	phpqt_qdbusservicewatcher_service_unregistered(&_0, &service);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusServiceWatcher_QDBusServiceWatcher, serviceOwnerChanged)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval service, oldOwner, newOwner;
	zval *handle_param = NULL, *service_param = NULL, *oldOwner_param = NULL, *newOwner_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&oldOwner);
	ZVAL_UNDEF(&newOwner);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(service)
		Z_PARAM_STR(oldOwner)
		Z_PARAM_STR(newOwner)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &service_param, &oldOwner_param, &newOwner_param);
	zephir_get_strval(&service, service_param);
	zephir_get_strval(&oldOwner, oldOwner_param);
	zephir_get_strval(&newOwner, newOwner_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusservicewatcher_service_owner_changed(&_0, &service, &oldOwner, &newOwner);
	ZEPHIR_MM_RESTORE();
}

