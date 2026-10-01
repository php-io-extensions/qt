
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
#include "src/core-qvariantprivateshared.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QVariantPrivateShared_QVariantPrivateShared)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QVariantPrivateShared, QVariantPrivateShared, qt, core_qvariantprivateshared_qvariantprivateshared, qt_core_qvariantprivateshared_qvariantprivateshared_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, computeOffset)
{
	zval *ps_param = NULL, *align_param = NULL, _0, _1;
	zend_long ps, align;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(ps)
		Z_PARAM_LONG(align)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &ps_param, &align_param);
	ZVAL_LONG(&_0, ps);
	ZVAL_LONG(&_1, align);
	RETURN_LONG(phpqt_qvariantprivateshared_compute_offset(&_0, &_1));
}

PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, computeAllocationSize)
{
	zval *size_param = NULL, *align_param = NULL, _0, _1;
	zend_long size, align;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(size)
		Z_PARAM_LONG(align)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &size_param, &align_param);
	ZVAL_LONG(&_0, size);
	ZVAL_LONG(&_1, align);
	RETURN_LONG(phpqt_qvariantprivateshared_compute_allocation_size(&_0, &_1));
}

PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, create)
{
	zval *size_param = NULL, *align_param = NULL, _0, _1;
	zend_long size, align;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(size)
		Z_PARAM_LONG(align)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &size_param, &align_param);
	ZVAL_LONG(&_0, size);
	ZVAL_LONG(&_1, align);
	RETURN_LONG(phpqt_qvariantprivateshared_create(&_0, &_1));
}

PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, free)
{
	zval *p_param = NULL, _0;
	zend_long p;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(p)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &p_param);
	ZVAL_LONG(&_0, p);
	phpqt_qvariantprivateshared_free(&_0);
}

PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, ref)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvariantprivateshared_ref(&_0));
}

PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, setRef)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qvariantprivateshared_set_ref(&_0, &_1);
}

PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, offset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvariantprivateshared_offset(&_0));
}

PHP_METHOD(Qt_Core_QVariantPrivateShared_QVariantPrivateShared, setOffset)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qvariantprivateshared_set_offset(&_0, &_1);
}

