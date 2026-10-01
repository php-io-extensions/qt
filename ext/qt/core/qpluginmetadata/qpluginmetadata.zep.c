
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
#include "src/core-qpluginmetadata.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPluginMetaData_QPluginMetaData)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPluginMetaData, QPluginMetaData, qt, core_qpluginmetadata_qpluginmetadata, qt_core_qpluginmetadata_qpluginmetadata_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPluginMetaData_QPluginMetaData, CurrentMetaDataVersion)
{

	RETURN_LONG(phpqt_qpluginmetadata_current_meta_data_version());
}

PHP_METHOD(Qt_Core_QPluginMetaData_QPluginMetaData, archRequirements)
{

	RETURN_LONG(phpqt_qpluginmetadata_arch_requirements());
}

PHP_METHOD(Qt_Core_QPluginMetaData_QPluginMetaData, size)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpluginmetadata_size(&_0));
}

PHP_METHOD(Qt_Core_QPluginMetaData_QPluginMetaData, setSize)
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
	phpqt_qpluginmetadata_set_size(&_0, &_1);
}

