
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
#include "src/xml-qdomnamednodemap.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomNamedNodeMap, QDomNamedNodeMap, qt, xml_qdomnamednodemap_qdomnamednodemap, qt_xml_qdomnamednodemap_qdomnamednodemap_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, new_)
{

	RETURN_LONG(phpqt_qdomnamednodemap_new());
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, newQDomNamedNodeMap)
{
	zval *namedNodeMap_param = NULL, _0;
	zend_long namedNodeMap;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(namedNodeMap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &namedNodeMap_param);
	ZVAL_LONG(&_0, namedNodeMap);
	RETURN_LONG(phpqt_qdomnamednodemap_new_q_dom_named_node_map(&_0));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, namedItem)
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
	RETURN_MM_LONG(phpqt_qdomnamednodemap_named_item(&_0, &name));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, setNamedItem)
{
	zval *handle_param = NULL, *newNode_param = NULL, _0, _1;
	zend_long handle, newNode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newNode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newNode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newNode);
	RETURN_LONG(phpqt_qdomnamednodemap_set_named_item(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, removeNamedItem)
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
	RETURN_MM_LONG(phpqt_qdomnamednodemap_remove_named_item(&_0, &name));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, item)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qdomnamednodemap_item(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, namedItemNS)
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
	RETURN_MM_LONG(phpqt_qdomnamednodemap_named_item_n_s(&_0, &nsURI, &localName));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, setNamedItemNS)
{
	zval *handle_param = NULL, *newNode_param = NULL, _0, _1;
	zend_long handle, newNode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(newNode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &newNode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, newNode);
	RETURN_LONG(phpqt_qdomnamednodemap_set_named_item_n_s(&_0, &_1));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, removeNamedItemNS)
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
	RETURN_MM_LONG(phpqt_qdomnamednodemap_remove_named_item_n_s(&_0, &nsURI, &localName));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnamednodemap_length(&_0));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, count)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnamednodemap_count(&_0));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, size)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomnamednodemap_size(&_0));
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qdomnamednodemap_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Xml_QDomNamedNodeMap_QDomNamedNodeMap, contains)
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
	r = phpqt_qdomnamednodemap_contains(&_0, &name);
	RETURN_MM_BOOL(r == 1);
}

