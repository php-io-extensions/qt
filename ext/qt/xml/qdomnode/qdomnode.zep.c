
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
#include "src/xml-qdomnode.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomNode_QDomNode)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomNode, QDomNode, qt, xml_qdomnode_qdomnode, qt_xml_qdomnode_qdomnode_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, new_)
{

	RETURN_LONG(phpqt_qdomnode_new());
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, newQDomNode)
{
	zval *node_param = NULL, _0;
	zend_long node;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(node)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &node_param);
	ZVAL_LONG(&_0, node);
	RETURN_LONG(phpqt_qdomnode_new_q_dom_node(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, insertBefore)
{
	zval *handle_param = NULL, *newChild_param = NULL, *refChild_param = NULL, _0, _1, _2;
	zend_long handle, newChild, refChild;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newChild)
		Z_PARAM_LONG(refChild)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &newChild_param, &refChild_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newChild);
	ZVAL_LONG(&_2, refChild);
	RETURN_LONG(phpqt_qdomnode_insert_before(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, insertAfter)
{
	zval *handle_param = NULL, *newChild_param = NULL, *refChild_param = NULL, _0, _1, _2;
	zend_long handle, newChild, refChild;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newChild)
		Z_PARAM_LONG(refChild)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &newChild_param, &refChild_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newChild);
	ZVAL_LONG(&_2, refChild);
	RETURN_LONG(phpqt_qdomnode_insert_after(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, replaceChild)
{
	zval *handle_param = NULL, *newChild_param = NULL, *oldChild_param = NULL, _0, _1, _2;
	zend_long handle, newChild, oldChild;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newChild)
		Z_PARAM_LONG(oldChild)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &newChild_param, &oldChild_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newChild);
	ZVAL_LONG(&_2, oldChild);
	RETURN_LONG(phpqt_qdomnode_replace_child(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, removeChild)
{
	zval *handle_param = NULL, *oldChild_param = NULL, _0, _1;
	zend_long handle, oldChild;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(oldChild)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &oldChild_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, oldChild);
	RETURN_LONG(phpqt_qdomnode_remove_child(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, appendChild)
{
	zval *handle_param = NULL, *newChild_param = NULL, _0, _1;
	zend_long handle, newChild;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newChild)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newChild_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newChild);
	RETURN_LONG(phpqt_qdomnode_append_child(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, hasChildNodes)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_has_child_nodes(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, cloneNode)
{
	zend_bool deep;
	zval *handle_param = NULL, *deep_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(deep)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &deep_param);
	if (!deep_param) {
		deep = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (deep ? 1 : 0));
	RETURN_LONG(phpqt_qdomnode_clone_node(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, normalize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomnode_normalize(&_0);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isSupported)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval feature, version;
	zval *handle_param = NULL, *feature_param = NULL, *version_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&feature);
	ZVAL_UNDEF(&version);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(feature)
		Z_PARAM_STR(version)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &feature_param, &version_param);
	zephir_get_strval(&feature, feature_param);
	zephir_get_strval(&version, version_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_supported(&_0, &feature, &version);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nodeName)
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
	phpqt_qdomnode_node_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_node_type(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, parentNode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_parent_node(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, childNodes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_child_nodes(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, firstChild)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_first_child(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, lastChild)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_last_child(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, previousSibling)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_previous_sibling(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nextSibling)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_next_sibling(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, attributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_attributes(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, ownerDocument)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_owner_document(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, namespaceURI)
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
	phpqt_qdomnode_namespace_u_r_i(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, localName)
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
	phpqt_qdomnode_local_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, hasAttributes)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_has_attributes(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nodeValue)
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
	phpqt_qdomnode_node_value(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, setNodeValue)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &value_param);
	zephir_get_strval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomnode_set_node_value(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, prefix)
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
	phpqt_qdomnode_prefix(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, setPrefix)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval pre;
	zval *handle_param = NULL, *pre_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&pre);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(pre)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &pre_param);
	zephir_get_strval(&pre, pre_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomnode_set_prefix(&_0, &pre);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isAttr)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_attr(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isCDATASection)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_c_d_a_t_a_section(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isDocumentFragment)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_document_fragment(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isDocument)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_document(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isDocumentType)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_document_type(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isElement)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_element(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isEntityReference)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_entity_reference(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isText)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_text(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isEntity)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_entity(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isNotation)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_notation(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isProcessingInstruction)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_processing_instruction(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isCharacterData)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_character_data(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isComment)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_comment(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, namedItem)
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
	RETURN_MM_LONG(phpqt_qdomnode_named_item(&_0, &name));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnode_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomnode_clear(&_0);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toAttr)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_attr(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toCDATASection)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_c_d_a_t_a_section(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toDocumentFragment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_document_fragment(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toDocument)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_document(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toDocumentType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_document_type(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toElement)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_element(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toEntityReference)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_entity_reference(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toText)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_text(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toEntity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_entity(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toNotation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_notation(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toProcessingInstruction)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_processing_instruction(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toCharacterData)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_character_data(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, toComment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_to_comment(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, save)
{
	zval *handle_param = NULL, *arg0_param = NULL, *arg1_param = NULL, *arg2 = NULL, arg2_sub, __$null, _0, _1, _2;
	zend_long handle, arg0, arg1;

	ZVAL_UNDEF(&arg2_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0)
		Z_PARAM_LONG(arg1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(arg2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 1, &handle_param, &arg0_param, &arg1_param, &arg2);
	if (!arg2) {
		arg2 = &arg2_sub;
		arg2 = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0);
	ZVAL_LONG(&_2, arg1);
	phpqt_qdomnode_save(&_0, &_1, &_2, arg2);
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, firstChildElement)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tagName, namespaceURI;
	zval *handle_param = NULL, *tagName_param = NULL, *namespaceURI_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tagName);
	ZVAL_UNDEF(&namespaceURI);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(tagName)
		Z_PARAM_STR(namespaceURI)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &handle_param, &tagName_param, &namespaceURI_param);
	if (!tagName_param) {
		ZEPHIR_INIT_VAR(&tagName);
		ZVAL_STRING(&tagName, "");
	} else {
		zephir_get_strval(&tagName, tagName_param);
	}
	if (!namespaceURI_param) {
		ZEPHIR_INIT_VAR(&namespaceURI);
		ZVAL_STRING(&namespaceURI, "");
	} else {
		zephir_get_strval(&namespaceURI, namespaceURI_param);
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomnode_first_child_element(&_0, &tagName, &namespaceURI));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, lastChildElement)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tagName, namespaceURI;
	zval *handle_param = NULL, *tagName_param = NULL, *namespaceURI_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tagName);
	ZVAL_UNDEF(&namespaceURI);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(tagName)
		Z_PARAM_STR(namespaceURI)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &handle_param, &tagName_param, &namespaceURI_param);
	if (!tagName_param) {
		ZEPHIR_INIT_VAR(&tagName);
		ZVAL_STRING(&tagName, "");
	} else {
		zephir_get_strval(&tagName, tagName_param);
	}
	if (!namespaceURI_param) {
		ZEPHIR_INIT_VAR(&namespaceURI);
		ZVAL_STRING(&namespaceURI, "");
	} else {
		zephir_get_strval(&namespaceURI, namespaceURI_param);
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomnode_last_child_element(&_0, &tagName, &namespaceURI));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, previousSiblingElement)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval tagName, namespaceURI;
	zval *handle_param = NULL, *tagName_param = NULL, *namespaceURI_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&tagName);
	ZVAL_UNDEF(&namespaceURI);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(tagName)
		Z_PARAM_STR(namespaceURI)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &handle_param, &tagName_param, &namespaceURI_param);
	if (!tagName_param) {
		ZEPHIR_INIT_VAR(&tagName);
		ZVAL_STRING(&tagName, "");
	} else {
		zephir_get_strval(&tagName, tagName_param);
	}
	if (!namespaceURI_param) {
		ZEPHIR_INIT_VAR(&namespaceURI);
		ZVAL_STRING(&namespaceURI, "");
	} else {
		zephir_get_strval(&namespaceURI, namespaceURI_param);
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomnode_previous_sibling_element(&_0, &tagName, &namespaceURI));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, nextSiblingElement)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval taName, namespaceURI;
	zval *handle_param = NULL, *taName_param = NULL, *namespaceURI_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&taName);
	ZVAL_UNDEF(&namespaceURI);
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(taName)
		Z_PARAM_STR(namespaceURI)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &handle_param, &taName_param, &namespaceURI_param);
	if (!taName_param) {
		ZEPHIR_INIT_VAR(&taName);
		ZVAL_STRING(&taName, "");
	} else {
		zephir_get_strval(&taName, taName_param);
	}
	if (!namespaceURI_param) {
		ZEPHIR_INIT_VAR(&namespaceURI);
		ZVAL_STRING(&namespaceURI, "");
	} else {
		zephir_get_strval(&namespaceURI, namespaceURI_param);
	}
	ZVAL_LONG(&_0, handle);
	RETURN_MM_LONG(phpqt_qdomnode_next_sibling_element(&_0, &taName, &namespaceURI));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, lineNumber)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_line_number(&_0));
}

PHP_METHOD(Qt_Xml_QDomNode_QDomNode, columnNumber)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnode_column_number(&_0));
}

