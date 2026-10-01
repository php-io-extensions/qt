
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
#include "src/core-qmetaassociation.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QMetaAssociation_QMetaAssociation)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QMetaAssociation, QMetaAssociation, qt, core_qmetaassociation_qmetaassociation, qt_core_qmetaassociation_qmetaassociation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, new_)
{

	RETURN_LONG(phpqt_qmetaassociation_new());
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, keyMetaType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaassociation_key_meta_type(&_0));
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, mappedMetaType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmetaassociation_mapped_meta_type(&_0));
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canInsertKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_insert_key(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canRemoveKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_remove_key(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canContainsKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_contains_key(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canGetMappedAtKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_get_mapped_at_key(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canSetMappedAtKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_set_mapped_at_key(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canGetKeyAtIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_get_key_at_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canGetKeyAtConstIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_get_key_at_const_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canGetMappedAtIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_get_mapped_at_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canGetMappedAtConstIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_get_mapped_at_const_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canSetMappedAtIterator)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_set_mapped_at_iterator(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canCreateIteratorAtKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_create_iterator_at_key(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QMetaAssociation_QMetaAssociation, canCreateConstIteratorAtKey)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmetaassociation_can_create_const_iterator_at_key(&_0);
	RETURN_BOOL(r == 1);
}

