
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
#include "src/core-qxmlstreamentityresolver.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QXmlStreamEntityResolver_QXmlStreamEntityResolver)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QXmlStreamEntityResolver, QXmlStreamEntityResolver, qt, core_qxmlstreamentityresolver_qxmlstreamentityresolver, qt_core_qxmlstreamentityresolver_qxmlstreamentityresolver_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QXmlStreamEntityResolver_QXmlStreamEntityResolver, new_)
{

	RETURN_LONG(phpqt_qxmlstreamentityresolver_new());
}

PHP_METHOD(Qt_Core_QXmlStreamEntityResolver_QXmlStreamEntityResolver, resolveEntity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval publicId, systemId;
	zval *handle_param = NULL, *publicId_param = NULL, *systemId_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&publicId);
	ZVAL_UNDEF(&systemId);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(publicId)
		Z_PARAM_STR(systemId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &publicId_param, &systemId_param);
	zephir_get_strval(&publicId, publicId_param);
	zephir_get_strval(&systemId, systemId_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamentityresolver_resolve_entity(&result, &_0, &publicId, &systemId);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamEntityResolver_QXmlStreamEntityResolver, resolveUndeclaredEntity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &name_param);
	zephir_get_strval(&name, name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamentityresolver_resolve_undeclared_entity(&result, &_0, &name);
	RETURN_CCTOR(&result);
}

