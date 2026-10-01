
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
#include "src/xml-qdomcharacterdata.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Xml_QDomCharacterData_QDomCharacterData)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Xml\\QDomCharacterData, QDomCharacterData, qt, xml_qdomcharacterdata_qdomcharacterdata, qt_xml_qdomcharacterdata_qdomcharacterdata_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, new_)
{

	RETURN_LONG(phpqt_qdomcharacterdata_new());
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, newQDomCharacterData)
{
	zval *characterData_param = NULL, _0;
	zend_long characterData;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(characterData)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &characterData_param);
	ZVAL_LONG(&_0, characterData);
	RETURN_LONG(phpqt_qdomcharacterdata_new_q_dom_character_data(&_0));
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, substringData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *offset_param = NULL, *count_param = NULL, result, _0, _1, _2;
	zend_long handle, offset, count;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &offset_param, &count_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	ZVAL_LONG(&_2, count);
	phpqt_qdomcharacterdata_substring_data(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, appendData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg;
	zval *handle_param = NULL, *arg_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&arg);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(arg)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &arg_param);
	zephir_get_strval(&arg, arg_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qdomcharacterdata_append_data(&_0, &arg);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, insertData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg;
	zval *handle_param = NULL, *offset_param = NULL, *arg_param = NULL, _0, _1;
	zend_long handle, offset;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&arg);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
		Z_PARAM_STR(arg)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &offset_param, &arg_param);
	zephir_get_strval(&arg, arg_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	phpqt_qdomcharacterdata_insert_data(&_0, &_1, &arg);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, deleteData)
{
	zval *handle_param = NULL, *offset_param = NULL, *count_param = NULL, _0, _1, _2;
	zend_long handle, offset, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &offset_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	ZVAL_LONG(&_2, count);
	phpqt_qdomcharacterdata_delete_data(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, replaceData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval arg;
	zval *handle_param = NULL, *offset_param = NULL, *count_param = NULL, *arg_param = NULL, _0, _1, _2;
	zend_long handle, offset, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&arg);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(offset)
		Z_PARAM_LONG(count)
		Z_PARAM_STR(arg)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &offset_param, &count_param, &arg_param);
	zephir_get_strval(&arg, arg_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, offset);
	ZVAL_LONG(&_2, count);
	phpqt_qdomcharacterdata_replace_data(&_0, &_1, &_2, &arg);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomcharacterdata_length(&_0));
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, data)
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
	phpqt_qdomcharacterdata_data(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, setData)
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
	phpqt_qdomcharacterdata_set_data(&_0, &data);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Xml_QDomCharacterData_QDomCharacterData, nodeType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qdomcharacterdata_node_type(&_0));
}

