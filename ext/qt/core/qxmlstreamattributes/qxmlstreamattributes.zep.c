
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
#include "src/core-qxmlstreamattributes.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QXmlStreamAttributes, QXmlStreamAttributes, qt, core_qxmlstreamattributes_qxmlstreamattributes, qt_core_qxmlstreamattributes_qxmlstreamattributes_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, new_)
{

	RETURN_LONG(phpqt_qxmlstreamattributes_new());
}

PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, value)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval namespaceUri, name;
	zval *handle_param = NULL, *namespaceUri_param = NULL, *name_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&namespaceUri);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(namespaceUri)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &namespaceUri_param, &name_param);
	zephir_get_strval(&namespaceUri, namespaceUri_param);
	zephir_get_strval(&name, name_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamattributes_value(&result, &_0, &namespaceUri, &name);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, valueQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval qualifiedName;
	zval *handle_param = NULL, *qualifiedName_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&qualifiedName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(qualifiedName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &qualifiedName_param);
	zephir_get_strval(&qualifiedName, qualifiedName_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamattributes_value_q_any_string_view(&result, &_0, &qualifiedName);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, append)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval namespaceUri, name, value;
	zval *handle_param = NULL, *namespaceUri_param = NULL, *name_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&namespaceUri);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(namespaceUri)
		Z_PARAM_STR(name)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &namespaceUri_param, &name_param, &value_param);
	zephir_get_strval(&namespaceUri, namespaceUri_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamattributes_append(&_0, &namespaceUri, &name, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, appendQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval qualifiedName, value;
	zval *handle_param = NULL, *qualifiedName_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&qualifiedName);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(qualifiedName)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &qualifiedName_param, &value_param);
	zephir_get_strval(&qualifiedName, qualifiedName_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamattributes_append_q_string_q_string(&_0, &qualifiedName, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, hasAttribute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval qualifiedName;
	zval *handle_param = NULL, *qualifiedName_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&qualifiedName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(qualifiedName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &qualifiedName_param);
	zephir_get_strval(&qualifiedName, qualifiedName_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qxmlstreamattributes_has_attribute(&_0, &qualifiedName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QXmlStreamAttributes_QXmlStreamAttributes, hasAttributeQAnyStringViewQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval namespaceUri, name;
	zval *handle_param = NULL, *namespaceUri_param = NULL, *name_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&namespaceUri);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(namespaceUri)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &namespaceUri_param, &name_param);
	zephir_get_strval(&namespaceUri, namespaceUri_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qxmlstreamattributes_has_attribute_q_any_string_view_q_any_string_view(&_0, &namespaceUri, &name);
	RETURN_MM_BOOL(r == 1);
}

