
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
#include "src/dbus-qdbusinterface.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusInterface_QDBusInterface)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusInterface, QDBusInterface, qt, dbus_qdbusinterface_qdbusinterface, qt_dbus_qdbusinterface_qdbusinterface_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusInterface_QDBusInterface, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long parent_;
	zval *service_param = NULL, *path_param = NULL, *interface__param = NULL, *connection = NULL, connection_sub, *parent__param = NULL, __$null, _0;
	zval service, path, interface_;

	ZVAL_UNDEF(&service);
	ZVAL_UNDEF(&path);
	ZVAL_UNDEF(&interface_);
	ZVAL_UNDEF(&connection_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(service)
		Z_PARAM_STR(path)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(interface_)
		Z_PARAM_ZVAL_OR_NULL(connection)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &service_param, &path_param, &interface__param, &connection, &parent__param);
	zephir_get_strval(&service, service_param);
	zephir_get_strval(&path, path_param);
	if (!interface__param) {
		ZEPHIR_INIT_VAR(&interface_);
		ZVAL_STRING(&interface_, "");
	} else {
		zephir_get_strval(&interface_, interface__param);
	}
	if (!connection) {
		connection = &connection_sub;
		connection = &__$null;
	}
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qdbusinterface_new(&service, &path, &interface_, connection, &_0));
}

