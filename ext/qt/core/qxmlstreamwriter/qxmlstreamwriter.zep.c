
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
#include "src/core-qxmlstreamwriter.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QXmlStreamWriter_QXmlStreamWriter)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QXmlStreamWriter, QXmlStreamWriter, qt, core_qxmlstreamwriter_qxmlstreamwriter, qt_core_qxmlstreamwriter_qxmlstreamwriter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, new_)
{

	RETURN_LONG(phpqt_qxmlstreamwriter_new());
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, newQIODevice)
{
	zval *device_param = NULL, _0;
	zend_long device;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &device_param);
	ZVAL_LONG(&_0, device);
	RETURN_LONG(phpqt_qxmlstreamwriter_new_q_i_o_device(&_0));
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, newQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *array_ = NULL, array__sub, result;

	ZVAL_UNDEF(&array__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(array_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &array_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qxmlstreamwriter_new_q_byte_array(&result, array_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string_ = NULL, string__sub, result;

	ZVAL_UNDEF(&string__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(string_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &string_);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qxmlstreamwriter_new_q_string(&result, string_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, setDevice)
{
	zval *handle_param = NULL, *device_param = NULL, _0, _1;
	zend_long handle, device;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &device_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, device);
	phpqt_qxmlstreamwriter_set_device(&_0, &_1);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, device)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qxmlstreamwriter_device(&_0));
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, setAutoFormatting)
{
	zend_bool arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (arg0 ? 1 : 0));
	phpqt_qxmlstreamwriter_set_auto_formatting(&_0, &_1);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, autoFormatting)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qxmlstreamwriter_auto_formatting(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, setAutoFormattingIndent)
{
	zval *handle_param = NULL, *spacesOrTabs_param = NULL, _0, _1;
	zend_long handle, spacesOrTabs;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(spacesOrTabs)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &spacesOrTabs_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, spacesOrTabs);
	phpqt_qxmlstreamwriter_set_auto_formatting_indent(&_0, &_1);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, autoFormattingIndent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qxmlstreamwriter_auto_formatting_indent(&_0));
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttribute)
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
	phpqt_qxmlstreamwriter_write_attribute(&_0, &qualifiedName, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttributeQAnyStringViewQAnyStringViewQAnyStringView)
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
	phpqt_qxmlstreamwriter_write_attribute_q_any_string_view_q_any_string_view_q_any_string_view(&_0, &namespaceUri, &name, &value);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttributeQXmlStreamAttribute)
{
	zval *handle_param = NULL, *attribute_param = NULL, _0, _1;
	zend_long handle, attribute;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attribute)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &attribute_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attribute);
	phpqt_qxmlstreamwriter_write_attribute_q_xml_stream_attribute(&_0, &_1);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeAttributes)
{
	zval *handle_param = NULL, *attributes_param = NULL, _0, _1;
	zend_long handle, attributes;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(attributes)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &attributes_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, attributes);
	phpqt_qxmlstreamwriter_write_attributes(&_0, &_1);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeCDATA)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_c_d_a_t_a(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeCharacters)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_characters(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeComment)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *text_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_comment(&_0, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeDTD)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval dtd;
	zval *handle_param = NULL, *dtd_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&dtd);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(dtd)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &dtd_param);
	zephir_get_strval(&dtd, dtd_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_d_t_d(&_0, &dtd);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEmptyElement)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval qualifiedName;
	zval *handle_param = NULL, *qualifiedName_param = NULL, _0;
	zend_long handle;

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
	phpqt_qxmlstreamwriter_write_empty_element(&_0, &qualifiedName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEmptyElementQAnyStringViewQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval namespaceUri, name;
	zval *handle_param = NULL, *namespaceUri_param = NULL, *name_param = NULL, _0;
	zend_long handle;

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
	phpqt_qxmlstreamwriter_write_empty_element_q_any_string_view_q_any_string_view(&_0, &namespaceUri, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeTextElement)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval qualifiedName, text;
	zval *handle_param = NULL, *qualifiedName_param = NULL, *text_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&qualifiedName);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(qualifiedName)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &qualifiedName_param, &text_param);
	zephir_get_strval(&qualifiedName, qualifiedName_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_text_element(&_0, &qualifiedName, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeTextElementQAnyStringViewQAnyStringViewQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval namespaceUri, name, text;
	zval *handle_param = NULL, *namespaceUri_param = NULL, *name_param = NULL, *text_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&namespaceUri);
	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(namespaceUri)
		Z_PARAM_STR(name)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &namespaceUri_param, &name_param, &text_param);
	zephir_get_strval(&namespaceUri, namespaceUri_param);
	zephir_get_strval(&name, name_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_text_element_q_any_string_view_q_any_string_view_q_any_string_view(&_0, &namespaceUri, &name, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEndDocument)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_end_document(&_0);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEndElement)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_end_element(&_0);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeEntityReference)
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
	phpqt_qxmlstreamwriter_write_entity_reference(&_0, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeNamespace)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval namespaceUri, prefix;
	zval *handle_param = NULL, *namespaceUri_param = NULL, *prefix_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&namespaceUri);
	ZVAL_UNDEF(&prefix);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(namespaceUri)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(prefix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &namespaceUri_param, &prefix_param);
	zephir_get_strval(&namespaceUri, namespaceUri_param);
	if (!prefix_param) {
		ZEPHIR_INIT_VAR(&prefix);
		ZVAL_STRING(&prefix, "");
	} else {
		zephir_get_strval(&prefix, prefix_param);
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_namespace(&_0, &namespaceUri, &prefix);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeDefaultNamespace)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval namespaceUri;
	zval *handle_param = NULL, *namespaceUri_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&namespaceUri);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(namespaceUri)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &namespaceUri_param);
	zephir_get_strval(&namespaceUri, namespaceUri_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_default_namespace(&_0, &namespaceUri);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeProcessingInstruction)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval target, data;
	zval *handle_param = NULL, *target_param = NULL, *data_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&target);
	ZVAL_UNDEF(&data);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(target)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &target_param, &data_param);
	zephir_get_strval(&target, target_param);
	if (!data_param) {
		ZEPHIR_INIT_VAR(&data);
		ZVAL_STRING(&data, "");
	} else {
		zephir_get_strval(&data, data_param);
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_processing_instruction(&_0, &target, &data);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartDocument)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_start_document(&_0);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartDocumentQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval version;
	zval *handle_param = NULL, *version_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&version);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(version)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &version_param);
	zephir_get_strval(&version, version_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qxmlstreamwriter_write_start_document_q_any_string_view(&_0, &version);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartDocumentQAnyStringViewBool)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool standalone;
	zval version;
	zval *handle_param = NULL, *version_param = NULL, *standalone_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&version);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(version)
		Z_PARAM_BOOL(standalone)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &version_param, &standalone_param);
	zephir_get_strval(&version, version_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (standalone ? 1 : 0));
	phpqt_qxmlstreamwriter_write_start_document_q_any_string_view_bool(&_0, &version, &_1);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartElement)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval qualifiedName;
	zval *handle_param = NULL, *qualifiedName_param = NULL, _0;
	zend_long handle;

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
	phpqt_qxmlstreamwriter_write_start_element(&_0, &qualifiedName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeStartElementQAnyStringViewQAnyStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval namespaceUri, name;
	zval *handle_param = NULL, *namespaceUri_param = NULL, *name_param = NULL, _0;
	zend_long handle;

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
	phpqt_qxmlstreamwriter_write_start_element_q_any_string_view_q_any_string_view(&_0, &namespaceUri, &name);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, writeCurrentToken)
{
	zval *handle_param = NULL, *reader_param = NULL, _0, _1;
	zend_long handle, reader;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(reader)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &reader_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, reader);
	phpqt_qxmlstreamwriter_write_current_token(&_0, &_1);
}

PHP_METHOD(Qt_Core_QXmlStreamWriter_QXmlStreamWriter, hasError)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qxmlstreamwriter_has_error(&_0);
	RETURN_BOOL(r == 1);
}

