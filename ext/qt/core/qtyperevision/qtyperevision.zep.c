
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
#include "src/core-qtyperevision.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTypeRevision_QTypeRevision)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTypeRevision, QTypeRevision, qt, core_qtyperevision_qtyperevision, qt_core_qtyperevision_qtyperevision_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, zero)
{

	RETURN_LONG(phpqt_qtyperevision_zero());
}

PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, new_)
{

	RETURN_LONG(phpqt_qtyperevision_new());
}

PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, hasMajorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtyperevision_has_major_version(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, majorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtyperevision_major_version(&_0));
}

PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, hasMinorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtyperevision_has_minor_version(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, minorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtyperevision_minor_version(&_0));
}

PHP_METHOD(Qt_Core_QTypeRevision_QTypeRevision, isValid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtyperevision_is_valid(&_0);
	RETURN_BOOL(r == 1);
}

