
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
#include "src/xml-qdomtext.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomText_QDomText)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomText, QDomText, qt, xml_qdomtext_qdomtext, qt_xml_qdomtext_qdomtext_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomText_QDomText, new_)
{

	RETURN_LONG(phpqt_qdomtext_new());
}

PHP_METHOD(Qt_Xml_QDomText_QDomText, newQDomText)
{
	zval *text_param = NULL, _0;
	zend_long text;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(text)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &text_param);
	ZVAL_LONG(&_0, text);
	RETURN_LONG(phpqt_qdomtext_new_q_dom_text(&_0));
}

PHP_METHOD(Qt_Xml_QDomText_QDomText, splitText)
{
	zval *handle_param = NULL, *offset_param = NULL, _0, _1;
	zend_long handle, offset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &offset_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	RETURN_LONG(phpqt_qdomtext_split_text(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomText_QDomText, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomtext_node_type(&_0));
}

