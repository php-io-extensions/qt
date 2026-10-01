
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
#include "src/core-qpluginfunctions.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPluginFunctions_QPluginFunctions)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPluginFunctions, QPluginFunctions, qt, core_qpluginfunctions_qpluginfunctions, qt_core_qpluginfunctions_qpluginfunctions_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPluginFunctions_QPluginFunctions, qPluginArchRequirements)
{

	RETURN_LONG(phpqt_qpluginfunctions_q_plugin_arch_requirements());
}

PHP_METHOD(Qt_Core_QPluginFunctions_QPluginFunctions, qRegisterStaticPluginFunction)
{
	zval *staticPlugin_param = NULL, _0;
	zend_long staticPlugin;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(staticPlugin)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &staticPlugin_param);
	ZVAL_LONG(&_0, staticPlugin);
	phpqt_qpluginfunctions_q_register_static_plugin_function(&_0);
}

