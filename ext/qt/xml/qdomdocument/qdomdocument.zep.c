
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
#include "src/xml-qdomdocument.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomDocument_QDomDocument)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomDocument, QDomDocument, qt, xml_qdomdocument_qdomdocument, qt_xml_qdomdocument_qdomdocument_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, new_)
{

	RETURN_LONG(phpqt_qdomdocument_new());
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *name_param = NULL;
	zval name;

	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &name_param);
	zephir_get_strval(&name, name_param);
	RETURN_MM_LONG(phpqt_qdomdocument_new_q_string(&name));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, newQDomDocumentType)
{
	zval *doctype_param = NULL, _0;
	zend_long doctype;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(doctype)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &doctype_param);
	ZVAL_LONG(&_0, doctype);
	RETURN_LONG(phpqt_qdomdocument_new_q_dom_document_type(&_0));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, newQDomDocument)
{
	zval *document_param = NULL, _0;
	zend_long document;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &document_param);
	ZVAL_LONG(&_0, document);
	RETURN_LONG(phpqt_qdomdocument_new_q_dom_document(&_0));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createElement)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tagName;
	zval *handle_param = NULL, *tagName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tagName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(tagName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tagName_param);
	zephir_get_strval(&tagName, tagName_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_create_element(&_0, &tagName));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createDocumentFragment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomdocument_create_document_fragment(&_0));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createTextNode)
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
	RETURN_MM_LONG(phpqt_qdomdocument_create_text_node(&_0, &data));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createComment)
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
	RETURN_MM_LONG(phpqt_qdomdocument_create_comment(&_0, &data));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createCDATASection)
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
	RETURN_MM_LONG(phpqt_qdomdocument_create_c_d_a_t_a_section(&_0, &data));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createProcessingInstruction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval target, data;
	zval *handle_param = NULL, *target_param = NULL, *data_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&target);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(target)
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &target_param, &data_param);
	zephir_get_strval(&target, target_param);
	zephir_get_strval(&data, data_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_create_processing_instruction(&_0, &target, &data));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createAttribute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

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
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_create_attribute(&_0, &name));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createEntityReference)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle;

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
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_create_entity_reference(&_0, &name));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, elementsByTagName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tagname;
	zval *handle_param = NULL, *tagname_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tagname);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(tagname)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &tagname_param);
	zephir_get_strval(&tagname, tagname_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_elements_by_tag_name(&_0, &tagname));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, importNode)
{
	zend_bool deep;
	zval *handle_param = NULL, *importedNode_param = NULL, *deep_param = NULL, _0, _1, _2;
	zend_long handle, importedNode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(importedNode)
		Z_PARAM_BOOL(deep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &importedNode_param, &deep_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, importedNode);
	ZVAL_BOOL(&_2, (deep ? 1 : 0));
	RETURN_LONG(phpqt_qdomdocument_import_node(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createElementNS)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, qName;
	zval *handle_param = NULL, *nsURI_param = NULL, *qName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&qName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(qName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &nsURI_param, &qName_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&qName, qName_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_create_element_n_s(&_0, &nsURI, &qName));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, createAttributeNS)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, qName;
	zval *handle_param = NULL, *nsURI_param = NULL, *qName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&qName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(qName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &nsURI_param, &qName_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&qName, qName_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_create_attribute_n_s(&_0, &nsURI, &qName));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, elementsByTagNameNS)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, localName;
	zval *handle_param = NULL, *nsURI_param = NULL, *localName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&localName);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(localName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &nsURI_param, &localName_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&localName, localName_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_elements_by_tag_name_n_s(&_0, &nsURI, &localName));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, elementById)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval elementId;
	zval *handle_param = NULL, *elementId_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&elementId);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(elementId)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &elementId_param);
	zephir_get_strval(&elementId, elementId_param);
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_element_by_id(&_0, &elementId));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, doctype)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomdocument_doctype(&_0));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, implementation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomdocument_implementation(&_0));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, documentElement)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomdocument_document_element(&_0));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomdocument_node_type(&_0));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, setContent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval data;
	zval *handle_param = NULL, *data_param = NULL, *options = NULL, options_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&data);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &data_param, &options);
	zephir_get_strval(&data, data_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomdocument_set_content(&_0, &data, options));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, setContentQIODeviceQDomDocumentParseOptions)
{
	zval *handle_param = NULL, *device_param = NULL, *options = NULL, options_sub, __$null, _0, _1;
	zend_long handle, device;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &device_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	RETURN_LONG(phpqt_qdomdocument_set_content_q_i_o_device_q_dom_document_parse_options(&_0, &_1, options));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, setContentQXmlStreamReaderQDomDocumentParseOptions)
{
	zval *handle_param = NULL, *reader_param = NULL, *options = NULL, options_sub, __$null, _0, _1;
	zend_long handle, reader;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(reader)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &reader_param, &options);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, reader);
	RETURN_LONG(phpqt_qdomdocument_set_content_q_xml_stream_reader_q_dom_document_parse_options(&_0, &_1, options));
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *indent_param = NULL, result, _0, _1;
	zend_long handle, indent;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(indent)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &indent_param);
	if (!indent_param) {
		indent = 1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indent);
	phpqt_qdomdocument_to_string(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomDocument_QDomDocument, toByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *indent_param = NULL, result, _0, _1;
	zend_long handle, indent;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(indent)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &indent_param);
	if (!indent_param) {
		indent = 1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, indent);
	phpqt_qdomdocument_to_byte_array(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

