
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
#include "src/core-qxmlstreamattribute.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QXmlStreamAttribute, QXmlStreamAttribute, qt, core_qxmlstreamattribute_qxmlstreamattribute, qt_core_qxmlstreamattribute_qxmlstreamattribute_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute, new_)
{

	RETURN_LONG(phpqt_qxmlstreamattribute_new());
}

PHP_METHOD(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute, newQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *qualifiedName_param = NULL, *value_param = NULL;
	zval qualifiedName, value;

	ZVAL_UNDEF(&qualifiedName);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(qualifiedName)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &qualifiedName_param, &value_param);
	zephir_get_strval(&qualifiedName, qualifiedName_param);
	zephir_get_strval(&value, value_param);
	RETURN_MM_LONG(phpqt_qxmlstreamattribute_new_q_string_q_string(&qualifiedName, &value));
}

PHP_METHOD(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute, newQStringQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *namespaceUri_param = NULL, *name_param = NULL, *value_param = NULL;
	zval namespaceUri, name, value;

	ZVAL_UNDEF(&namespaceUri);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(namespaceUri)
		Z_PARAM_STR(name)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &namespaceUri_param, &name_param, &value_param);
	zephir_get_strval(&namespaceUri, namespaceUri_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&value, value_param);
	RETURN_MM_LONG(phpqt_qxmlstreamattribute_new_q_string_q_string_q_string(&namespaceUri, &name, &value));
}

PHP_METHOD(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute, namespaceUri)
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
	phpqt_qxmlstreamattribute_namespace_uri(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute, name)
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
	phpqt_qxmlstreamattribute_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute, qualifiedName)
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
	phpqt_qxmlstreamattribute_qualified_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute, prefix)
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
	phpqt_qxmlstreamattribute_prefix(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute, value)
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
	phpqt_qxmlstreamattribute_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamAttribute_QXmlStreamAttribute, isDefault)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qxmlstreamattribute_is_default(&_0);
	RETURN_BOOL(r == 1);
}

