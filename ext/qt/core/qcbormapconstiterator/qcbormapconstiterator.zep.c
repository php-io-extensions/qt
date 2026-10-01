
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
#include "src/core-qcbormapconstiterator.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCborMapConstIterator_QCborMapConstIterator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCborMapConstIterator, QCborMapConstIterator, qt, core_qcbormapconstiterator_qcbormapconstiterator, qt_core_qcbormapconstiterator_qcbormapconstiterator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCborMapConstIterator_QCborMapConstIterator, new_)
{

	RETURN_LONG(phpqt_qcbormapconstiterator_new());
}

PHP_METHOD(Qt_Core_QCborMapConstIterator_QCborMapConstIterator, key)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcbormapconstiterator_key(&_0));
}

PHP_METHOD(Qt_Core_QCborMapConstIterator_QCborMapConstIterator, value)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcbormapconstiterator_value(&_0));
}

