
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
#include "src/core-qpluginmetadataelfnoteheader.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QPluginMetaDataElfNoteHeader, QPluginMetaDataElfNoteHeader, qt, core_qpluginmetadataelfnoteheader_qpluginmetadataelfnoteheader, qt_core_qpluginmetadataelfnoteheader_qpluginmetadataelfnoteheader_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, NoteType)
{

	RETURN_LONG(phpqt_qpluginmetadataelfnoteheader_note_type());
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, n_namesz)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpluginmetadataelfnoteheader_n_namesz(&_0));
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, setN_namesz)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpluginmetadataelfnoteheader_set_n_namesz(&_0, &_1);
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, n_descsz)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpluginmetadataelfnoteheader_n_descsz(&_0));
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, setN_descsz)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpluginmetadataelfnoteheader_set_n_descsz(&_0, &_1);
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, n_type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpluginmetadataelfnoteheader_n_type(&_0));
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, setN_type)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpluginmetadataelfnoteheader_set_n_type(&_0, &_1);
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, header)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpluginmetadataelfnoteheader_header(&_0));
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, setHeader)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qpluginmetadataelfnoteheader_set_header(&_0, &_1);
}

PHP_METHOD(Qt_Core_QPluginMetaDataElfNoteHeader_QPluginMetaDataElfNoteHeader, new_)
{
	zval *payloadSize_param = NULL, _0;
	zend_long payloadSize;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(payloadSize)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &payloadSize_param);
	ZVAL_LONG(&_0, payloadSize);
	RETURN_LONG(phpqt_qpluginmetadataelfnoteheader_new(&_0));
}

