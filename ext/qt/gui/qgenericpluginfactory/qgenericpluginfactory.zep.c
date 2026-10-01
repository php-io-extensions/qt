
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
#include "src/gui-qgenericpluginfactory.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QGenericPluginFactory_QGenericPluginFactory)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QGenericPluginFactory, QGenericPluginFactory, qt, gui_qgenericpluginfactory_qgenericpluginfactory, qt_gui_qgenericpluginfactory_qgenericpluginfactory_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QGenericPluginFactory_QGenericPluginFactory, keys)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qgenericpluginfactory_keys(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QGenericPluginFactory_QGenericPluginFactory, create)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, *arg1_param = NULL;
	zval arg0, arg1;

	ZVAL_UNDEF(&arg0);
	ZVAL_UNDEF(&arg1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(arg0)
		Z_PARAM_STR(arg1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &arg0_param, &arg1_param);
	zephir_get_strval(&arg0, arg0_param);
	zephir_get_strval(&arg1, arg1_param);
	RETURN_MM_LONG(phpqt_qgenericpluginfactory_create(&arg0, &arg1));
}

