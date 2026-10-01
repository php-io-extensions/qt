
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
#include "src/xml-qdomdocumentfragment.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomDocumentFragment_QDomDocumentFragment)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomDocumentFragment, QDomDocumentFragment, qt, xml_qdomdocumentfragment_qdomdocumentfragment, qt_xml_qdomdocumentfragment_qdomdocumentfragment_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomDocumentFragment_QDomDocumentFragment, new_)
{

	RETURN_LONG(phpqt_qdomdocumentfragment_new());
}

PHP_METHOD(Qt_Xml_QDomDocumentFragment_QDomDocumentFragment, newQDomDocumentFragment)
{
	zval *documentFragment_param = NULL, _0;
	zend_long documentFragment;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(documentFragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &documentFragment_param);
	ZVAL_LONG(&_0, documentFragment);
	RETURN_LONG(phpqt_qdomdocumentfragment_new_q_dom_document_fragment(&_0));
}

PHP_METHOD(Qt_Xml_QDomDocumentFragment_QDomDocumentFragment, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomdocumentfragment_node_type(&_0));
}

