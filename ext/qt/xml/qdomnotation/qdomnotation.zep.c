
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
#include "src/xml-qdomnotation.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomNotation_QDomNotation)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomNotation, QDomNotation, qt, xml_qdomnotation_qdomnotation, qt_xml_qdomnotation_qdomnotation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, new_)
{

	RETURN_LONG(phpqt_qdomnotation_new());
}

PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, newQDomNotation)
{
	zval *notation_param = NULL, _0;
	zend_long notation;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(notation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &notation_param);
	ZVAL_LONG(&_0, notation);
	RETURN_LONG(phpqt_qdomnotation_new_q_dom_notation(&_0));
}

PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, publicId)
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
	phpqt_qdomnotation_public_id(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, systemId)
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
	phpqt_qdomnotation_system_id(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomNotation_QDomNotation, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnotation_node_type(&_0));
}

