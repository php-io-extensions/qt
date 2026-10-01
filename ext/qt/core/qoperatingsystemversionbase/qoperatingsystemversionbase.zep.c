
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
#include "src/core-qoperatingsystemversionbase.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QOperatingSystemVersionBase, QOperatingSystemVersionBase, qt, core_qoperatingsystemversionbase_qoperatingsystemversionbase, qt_core_qoperatingsystemversionbase_qoperatingsystemversionbase_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, new_)
{
	zval *osType_param = NULL, *vmajor_param = NULL, *vminor_param = NULL, *vmicro_param = NULL, _0, _1, _2, _3;
	zend_long osType, vmajor, vminor, vmicro;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(osType)
		Z_PARAM_LONG(vmajor)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(vminor)
		Z_PARAM_LONG(vmicro)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &osType_param, &vmajor_param, &vminor_param, &vmicro_param);
	if (!vminor_param) {
		vminor = -1;
	} else {
		}
	if (!vmicro_param) {
		vmicro = -1;
	} else {
		}
	ZVAL_LONG(&_0, osType);
	ZVAL_LONG(&_1, vmajor);
	ZVAL_LONG(&_2, vminor);
	ZVAL_LONG(&_3, vmicro);
	RETURN_LONG(phpqt_qoperatingsystemversionbase_new(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, current)
{

	RETURN_LONG(phpqt_qoperatingsystemversionbase_current());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, name)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *osversion_param = NULL, result, _0;
	zend_long osversion;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(osversion)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &osversion_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, osversion);
	phpqt_qoperatingsystemversionbase_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, currentType)
{

	RETURN_LONG(phpqt_qoperatingsystemversionbase_current_type());
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, version)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoperatingsystemversionbase_version(&_0));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, majorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoperatingsystemversionbase_major_version(&_0));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, minorVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoperatingsystemversionbase_minor_version(&_0));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, microVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoperatingsystemversionbase_micro_version(&_0));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, segmentCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoperatingsystemversionbase_segment_count(&_0));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qoperatingsystemversionbase_type(&_0));
}

PHP_METHOD(Qt_Core_QOperatingSystemVersionBase_QOperatingSystemVersionBase, name2)
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
	phpqt_qoperatingsystemversionbase_name2(&result, &_0);
	RETURN_CCTOR(&result);
}

