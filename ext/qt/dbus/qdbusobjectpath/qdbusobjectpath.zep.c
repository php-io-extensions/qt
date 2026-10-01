
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
#include "src/dbus-qdbusobjectpath.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusObjectPath_QDBusObjectPath)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusObjectPath, QDBusObjectPath, qt, dbus_qdbusobjectpath_qdbusobjectpath, qt_dbus_qdbusobjectpath_qdbusobjectpath_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, new_)
{

	RETURN_LONG(phpqt_qdbusobjectpath_new());
}

PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, newChar)
{
	zval *path = NULL, path_sub;

	ZVAL_UNDEF(&path_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(path)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &path);
	RETURN_LONG(phpqt_qdbusobjectpath_new_char(path));
}

PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, newQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL;
	zval path;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &path_param);
	zephir_get_strval(&path, path_param);
	RETURN_MM_LONG(phpqt_qdbusobjectpath_new_q_latin1_string_view(&path));
}

PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *path_param = NULL;
	zval path;

	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &path_param);
	zephir_get_strval(&path, path_param);
	RETURN_MM_LONG(phpqt_qdbusobjectpath_new_q_string(&path));
}

PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, swap)
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
	phpqt_qdbusobjectpath_swap(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, setPath)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &path_param);
	zephir_get_strval(&path, path_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdbusobjectpath_set_path(&_0, &path);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_DBus_QDBusObjectPath_QDBusObjectPath, path)
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
	phpqt_qdbusobjectpath_path(&result, &_0);
	RETURN_CCTOR(&result);
}

