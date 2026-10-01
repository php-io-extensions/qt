
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
#include "src/core-qbindingstorage.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QBindingStorage_QBindingStorage)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QBindingStorage, QBindingStorage, qt, core_qbindingstorage_qbindingstorage, qt_core_qbindingstorage_qbindingstorage_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QBindingStorage_QBindingStorage, new_)
{

	RETURN_LONG(phpqt_qbindingstorage_new());
}

PHP_METHOD(Qt_Core_QBindingStorage_QBindingStorage, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qbindingstorage_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QBindingStorage_QBindingStorage, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qbindingstorage_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

