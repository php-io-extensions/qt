
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
#include "src/dbus-qdbusunixfiledescriptor.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor)
{
	ZEPHIR_REGISTER_CLASS(Qt\\DBus\\QDBusUnixFileDescriptor, QDBusUnixFileDescriptor, qt, dbus_qdbusunixfiledescriptor_qdbusunixfiledescriptor, qt_dbus_qdbusunixfiledescriptor_qdbusunixfiledescriptor_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, new_)
{

	RETURN_LONG(phpqt_qdbusunixfiledescriptor_new());
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, newInt)
{
	zval *fileDescriptor_param = NULL, _0;
	zend_long fileDescriptor;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(fileDescriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &fileDescriptor_param);
	ZVAL_LONG(&_0, fileDescriptor);
	RETURN_LONG(phpqt_qdbusunixfiledescriptor_new_int(&_0));
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, newQDBusUnixFileDescriptor)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qdbusunixfiledescriptor_new_q_d_bus_unix_file_descriptor(&_0));
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, swap)
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
	phpqt_qdbusunixfiledescriptor_swap(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdbusunixfiledescriptor_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, fileDescriptor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusunixfiledescriptor_file_descriptor(&_0));
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, setFileDescriptor)
{
	zval *handle_param = NULL, *fileDescriptor_param = NULL, _0, _1;
	zend_long handle, fileDescriptor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fileDescriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &fileDescriptor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fileDescriptor);
	phpqt_qdbusunixfiledescriptor_set_file_descriptor(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, giveFileDescriptor)
{
	zval *handle_param = NULL, *fileDescriptor_param = NULL, _0, _1;
	zend_long handle, fileDescriptor;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fileDescriptor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &fileDescriptor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fileDescriptor);
	phpqt_qdbusunixfiledescriptor_give_file_descriptor(&_0, &_1);
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, takeFileDescriptor)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdbusunixfiledescriptor_take_file_descriptor(&_0));
}

PHP_METHOD(Qt_DBus_QDBusUnixFileDescriptor_QDBusUnixFileDescriptor, isSupported)
{
	zend_long r = 0;
	r = phpqt_qdbusunixfiledescriptor_is_supported();
	RETURN_BOOL(r == 1);
}

