
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
#include "src/core-qreadlocker.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QReadLocker_QReadLocker)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QReadLocker, QReadLocker, qt, core_qreadlocker_qreadlocker, qt_core_qreadlocker_qreadlocker_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QReadLocker_QReadLocker, new_)
{
	zval *readWriteLock_param = NULL, _0;
	zend_long readWriteLock;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(readWriteLock)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &readWriteLock_param);
	ZVAL_LONG(&_0, readWriteLock);
	RETURN_LONG(phpqt_qreadlocker_new(&_0));
}

PHP_METHOD(Qt_Core_QReadLocker_QReadLocker, unlock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qreadlocker_unlock(&_0);
}

PHP_METHOD(Qt_Core_QReadLocker_QReadLocker, relock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qreadlocker_relock(&_0);
}

PHP_METHOD(Qt_Core_QReadLocker_QReadLocker, readWriteLock)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qreadlocker_read_write_lock(&_0));
}

