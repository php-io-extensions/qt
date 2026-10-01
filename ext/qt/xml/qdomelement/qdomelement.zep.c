
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
#include "src/xml-qdomelement.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomElement_QDomElement)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomElement, QDomElement, qt, xml_qdomelement_qdomelement, qt_xml_qdomelement_qdomelement_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, new_)
{

	RETURN_LONG(phpqt_qdomelement_new());
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, newQDomElement)
{
	zval *element_param = NULL, _0;
	zend_long element;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(element)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &element_param);
	ZVAL_LONG(&_0, element);
	RETURN_LONG(phpqt_qdomelement_new_q_dom_element(&_0));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attribute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name, defValue;
	zval *handle_param = NULL, *name_param = NULL, *defValue_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&defValue);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(defValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &name_param, &defValue_param);
	zephir_get_strval(&name, name_param);
	if (!defValue_param) {
		ZEPHIR_INIT_VAR(&defValue);
		ZVAL_STRING(&defValue, "");
	} else {
		zephir_get_strval(&defValue, defValue_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomelement_attribute(&result, &_0, &name, &defValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttribute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name, value;
	zval *handle_param = NULL, *name_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomelement_set_attribute(&_0, &name, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringQlonglong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qdomelement_set_attribute_q_string_qlonglong(&_0, &name, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringQulonglong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qdomelement_set_attribute_q_string_qulonglong(&_0, &name, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qdomelement_set_attribute_q_string_int(&_0, &name, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringUint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qdomelement_set_attribute_q_string_uint(&_0, &name, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringFloat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double value;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qdomelement_set_attribute_q_string_float(&_0, &name, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeQStringDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double value;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&name);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(name)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &name_param, &value_param);
	zephir_get_strval(&name, name_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qdomelement_set_attribute_q_string_double(&_0, &name, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, removeAttribute)
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
	phpqt_qdomelement_remove_attribute(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attributeNode)
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
	RETURN_MM_LONG(phpqt_qdomelement_attribute_node(&_0, &name));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNode)
{
	zval *handle_param = NULL, *newAttr_param = NULL, _0, _1;
	zend_long handle, newAttr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newAttr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newAttr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newAttr);
	RETURN_LONG(phpqt_qdomelement_set_attribute_node(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, removeAttributeNode)
{
	zval *handle_param = NULL, *oldAttr_param = NULL, _0, _1;
	zend_long handle, oldAttr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldAttr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &oldAttr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldAttr);
	RETURN_LONG(phpqt_qdomelement_remove_attribute_node(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, elementsByTagName)
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
	RETURN_MM_LONG(phpqt_qdomelement_elements_by_tag_name(&_0, &tagname));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, hasAttribute)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval name;
	zval *handle_param = NULL, *name_param = NULL, _0;
	zend_long handle, r = 0;

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
	r = phpqt_qdomelement_has_attribute(&_0, &name);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attributeNS)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, localName, defValue;
	zval *handle_param = NULL, *nsURI_param = NULL, *localName_param = NULL, *defValue_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&localName);
	ZVAL_UNDEF(&defValue);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(localName)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(defValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &nsURI_param, &localName_param, &defValue_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&localName, localName_param);
	if (!defValue_param) {
		ZEPHIR_INIT_VAR(&defValue);
		ZVAL_STRING(&defValue, "");
	} else {
		zephir_get_strval(&defValue, defValue_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomelement_attribute_n_s(&result, &_0, &nsURI, &localName, &defValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNS)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, qName, value;
	zval *handle_param = NULL, *nsURI_param = NULL, *qName_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&qName);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(qName)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &nsURI_param, &qName_param, &value_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&qName, qName_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomelement_set_attribute_n_s(&_0, &nsURI, &qName, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, qName;
	zval *handle_param = NULL, *nsURI_param = NULL, *qName_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&qName);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(qName)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &nsURI_param, &qName_param, &value_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&qName, qName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qdomelement_set_attribute_n_s_q_string_q_string_int(&_0, &nsURI, &qName, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringUint)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, qName;
	zval *handle_param = NULL, *nsURI_param = NULL, *qName_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&qName);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(qName)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &nsURI_param, &qName_param, &value_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&qName, qName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qdomelement_set_attribute_n_s_q_string_q_string_uint(&_0, &nsURI, &qName, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringQlonglong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, qName;
	zval *handle_param = NULL, *nsURI_param = NULL, *qName_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&qName);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(qName)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &nsURI_param, &qName_param, &value_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&qName, qName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qdomelement_set_attribute_n_s_q_string_q_string_qlonglong(&_0, &nsURI, &qName, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringQulonglong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, qName;
	zval *handle_param = NULL, *nsURI_param = NULL, *qName_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&qName);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(qName)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &nsURI_param, &qName_param, &value_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&qName, qName_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qdomelement_set_attribute_n_s_q_string_q_string_qulonglong(&_0, &nsURI, &qName, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNSQStringQStringDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double value;
	zval nsURI, qName;
	zval *handle_param = NULL, *nsURI_param = NULL, *qName_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&nsURI);
	ZVAL_UNDEF(&qName);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(nsURI)
		Z_PARAM_STR(qName)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &nsURI_param, &qName_param, &value_param);
	zephir_get_strval(&nsURI, nsURI_param);
	zephir_get_strval(&qName, qName_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qdomelement_set_attribute_n_s_q_string_q_string_double(&_0, &nsURI, &qName, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, removeAttributeNS)
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
	phpqt_qdomelement_remove_attribute_n_s(&_0, &nsURI, &localName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attributeNodeNS)
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
	RETURN_MM_LONG(phpqt_qdomelement_attribute_node_n_s(&_0, &nsURI, &localName));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setAttributeNodeNS)
{
	zval *handle_param = NULL, *newAttr_param = NULL, _0, _1;
	zend_long handle, newAttr;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newAttr)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newAttr_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newAttr);
	RETURN_LONG(phpqt_qdomelement_set_attribute_node_n_s(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, elementsByTagNameNS)
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
	RETURN_MM_LONG(phpqt_qdomelement_elements_by_tag_name_n_s(&_0, &nsURI, &localName));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, hasAttributeNS)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval nsURI, localName;
	zval *handle_param = NULL, *nsURI_param = NULL, *localName_param = NULL, _0;
	zend_long handle, r = 0;

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
	r = phpqt_qdomelement_has_attribute_n_s(&_0, &nsURI, &localName);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, tagName)
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
	phpqt_qdomelement_tag_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, setTagName)
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
	phpqt_qdomelement_set_tag_name(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, attributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomelement_attributes(&_0));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomelement_node_type(&_0));
}

PHP_METHOD(Qt_Xml_QDomElement_QDomElement, text)
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
	phpqt_qdomelement_text(&result, &_0);
	RETURN_CCTOR(&result);
}

