
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
#include "src/core-qmetacontainer.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMetaContainer_QMetaContainer)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMetaContainer, QMetaContainer, qt, core_qmetacontainer_qmetacontainer, qt_core_qmetacontainer_qmetacontainer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, new_)
{

	RETURN_LONG(phpqt_qmetacontainer_new());
}

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasInputIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetacontainer_has_input_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasForwardIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetacontainer_has_forward_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasBidirectionalIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetacontainer_has_bidirectional_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasRandomAccessIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetacontainer_has_random_access_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasSize)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetacontainer_has_size(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, canClear)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetacontainer_can_clear(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetacontainer_has_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaContainer_QMetaContainer, hasConstIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetacontainer_has_const_iterator(&_0);
	RETURN_BOOL(r == 1);
}

