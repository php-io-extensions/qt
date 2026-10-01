
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
#include "src/gui-qtextdocumentwriter.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTextDocumentWriter, QTextDocumentWriter, qt, gui_qtextdocumentwriter_qtextdocumentwriter, qt_gui_qtextdocumentwriter_qtextdocumentwriter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, new_)
{

	RETURN_LONG(phpqt_qtextdocumentwriter_new());
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, newQIODeviceQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *device_param = NULL, *format_param = NULL, _0;
	zend_long device;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(device)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &device_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZVAL_LONG(&_0, device);
	RETURN_MM_LONG(phpqt_qtextdocumentwriter_new_q_i_o_device_q_byte_array(&_0, &format));
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, newQStringQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *fileName_param = NULL, *format_param = NULL;
	zval fileName, format;

	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(fileName)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &fileName_param, &format_param);
	zephir_get_strval(&fileName, fileName_param);
	if (!format_param) {
		ZEPHIR_INIT_VAR(&format);
		ZVAL_STRING(&format, "");
	} else {
		zephir_get_strval(&format, format_param);
	}
	RETURN_MM_LONG(phpqt_qtextdocumentwriter_new_q_string_q_byte_array(&fileName, &format));
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, setFormat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval format;
	zval *handle_param = NULL, *format_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&format);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &format_param);
	zephir_get_strval(&format, format_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocumentwriter_set_format(&_0, &format);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, format)
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
	phpqt_qtextdocumentwriter_format(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, setDevice)
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
	phpqt_qtextdocumentwriter_set_device(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, device)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextdocumentwriter_device(&_0));
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, setFileName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName;
	zval *handle_param = NULL, *fileName_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &fileName_param);
	zephir_get_strval(&fileName, fileName_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextdocumentwriter_set_file_name(&_0, &fileName);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, fileName)
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
	phpqt_qtextdocumentwriter_file_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, write)
{
	zval *handle_param = NULL, *document_param = NULL, _0, _1;
	zend_long handle, document, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(document)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &document_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, document);
	r = phpqt_qtextdocumentwriter_write(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, writeQTextDocumentFragment)
{
	zval *handle_param = NULL, *fragment_param = NULL, _0, _1;
	zend_long handle, fragment, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(fragment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &fragment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, fragment);
	r = phpqt_qtextdocumentwriter_write_q_text_document_fragment(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTextDocumentWriter_QTextDocumentWriter, supportedDocumentFormats)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qtextdocumentwriter_supported_document_formats(&result);
	RETURN_CCTOR(&result);
}

