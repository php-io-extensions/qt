
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
#include "src/xml-qdomprocessinginstruction.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomProcessingInstruction_QDomProcessingInstruction)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomProcessingInstruction, QDomProcessingInstruction, qt, xml_qdomprocessinginstruction_qdomprocessinginstruction, qt_xml_qdomprocessinginstruction_qdomprocessinginstruction_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomProcessingInstruction_QDomProcessingInstruction, new_)
{

	RETURN_LONG(phpqt_qdomprocessinginstruction_new());
}

PHP_METHOD(Qt_Xml_QDomProcessingInstruction_QDomProcessingInstruction, newQDomProcessingInstruction)
{
	zval *processingInstruction_param = NULL, _0;
	zend_long processingInstruction;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(processingInstruction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &processingInstruction_param);
	ZVAL_LONG(&_0, processingInstruction);
	RETURN_LONG(phpqt_qdomprocessinginstruction_new_q_dom_processing_instruction(&_0));
}

PHP_METHOD(Qt_Xml_QDomProcessingInstruction_QDomProcessingInstruction, target)
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
	phpqt_qdomprocessinginstruction_target(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomProcessingInstruction_QDomProcessingInstruction, data)
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
	phpqt_qdomprocessinginstruction_data(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomProcessingInstruction_QDomProcessingInstruction, setData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *data_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &data_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomprocessinginstruction_set_data(&_0, &data);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomProcessingInstruction_QDomProcessingInstruction, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomprocessinginstruction_node_type(&_0));
}

