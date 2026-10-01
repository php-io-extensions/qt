
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
#include "src/core-qxmlstreamnamespacedeclaration.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QXmlStreamNamespaceDeclaration, QXmlStreamNamespaceDeclaration, qt, core_qxmlstreamnamespacedeclaration_qxmlstreamnamespacedeclaration, qt_core_qxmlstreamnamespacedeclaration_qxmlstreamnamespacedeclaration_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration, new_)
{

	RETURN_LONG(phpqt_qxmlstreamnamespacedeclaration_new());
}

PHP_METHOD(Qt_Core_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration, newQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *prefix_param = NULL, *namespaceUri_param = NULL;
	zval prefix, namespaceUri;

	ZVAL_UNDEF(&prefix);
	ZVAL_UNDEF(&namespaceUri);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(prefix)
		Z_PARAM_STR(namespaceUri)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &prefix_param, &namespaceUri_param);
	zephir_get_strval(&prefix, prefix_param);
	zephir_get_strval(&namespaceUri, namespaceUri_param);
	RETURN_MM_LONG(phpqt_qxmlstreamnamespacedeclaration_new_q_string_q_string(&prefix, &namespaceUri));
}

PHP_METHOD(Qt_Core_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration, prefix)
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
	phpqt_qxmlstreamnamespacedeclaration_prefix(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamNamespaceDeclaration_QXmlStreamNamespaceDeclaration, namespaceUri)
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
	phpqt_qxmlstreamnamespacedeclaration_namespace_uri(&result, &_0);
	RETURN_CCTOR(&result);
}

