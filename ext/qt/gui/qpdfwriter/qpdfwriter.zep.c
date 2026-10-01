
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
#include "src/gui-qpdfwriter.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPdfWriter_QPdfWriter)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPdfWriter, QPdfWriter, qt, gui_qpdfwriter_qpdfwriter, qt_gui_qpdfwriter_qpdfwriter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, staticMetaObject)
{

	RETURN_LONG(phpqt_qpdfwriter_static_meta_object());
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qpdfwriter_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, new_)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *filename_param = NULL;
	zval filename;

	ZVAL_UNDEF(&filename);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(filename)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &filename_param);
	zephir_get_strval(&filename, filename_param);
	RETURN_MM_LONG(phpqt_qpdfwriter_new(&filename));
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, newQIODevice)
{
	zval *device_param = NULL, _0;
	zend_long device;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &device_param);
	ZVAL_LONG(&_0, device);
	RETURN_LONG(phpqt_qpdfwriter_new_q_i_o_device(&_0));
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setPdfVersion)
{
	zval *handle_param = NULL, *version_param = NULL, _0, _1;
	zend_long handle, version;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(version)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &version_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, version);
	phpqt_qpdfwriter_set_pdf_version(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, pdfVersion)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpdfwriter_pdf_version(&_0));
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, title)
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
	phpqt_qpdfwriter_title(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setTitle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval title;
	zval *handle_param = NULL, *title_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&title);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &title_param);
	zephir_get_strval(&title, title_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpdfwriter_set_title(&_0, &title);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, creator)
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
	phpqt_qpdfwriter_creator(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setCreator)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval creator;
	zval *handle_param = NULL, *creator_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&creator);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(creator)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &creator_param);
	zephir_get_strval(&creator, creator_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpdfwriter_set_creator(&_0, &creator);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, documentId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpdfwriter_document_id(&_0));
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setDocumentId)
{
	zval *handle_param = NULL, *documentId_param = NULL, _0, _1;
	zend_long handle, documentId;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(documentId)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &documentId_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, documentId);
	phpqt_qpdfwriter_set_document_id(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, newPage)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpdfwriter_new_page(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setResolution)
{
	zval *handle_param = NULL, *resolution_param = NULL, _0, _1;
	zend_long handle, resolution;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(resolution)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &resolution_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, resolution);
	phpqt_qpdfwriter_set_resolution(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, resolution)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpdfwriter_resolution(&_0));
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setDocumentXmpMetadata)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval xmpMetadata;
	zval *handle_param = NULL, *xmpMetadata_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&xmpMetadata);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(xmpMetadata)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &xmpMetadata_param);
	zephir_get_strval(&xmpMetadata, xmpMetadata_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpdfwriter_set_document_xmp_metadata(&_0, &xmpMetadata);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, documentXmpMetadata)
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
	phpqt_qpdfwriter_document_xmp_metadata(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, addFileAttachment)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval fileName, data, mimeType;
	zval *handle_param = NULL, *fileName_param = NULL, *data_param = NULL, *mimeType_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&fileName);
	ZVAL_UNDEF(&data);
	ZVAL_UNDEF(&mimeType);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(fileName)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(mimeType)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &fileName_param, &data_param, &mimeType_param);
	zephir_get_strval(&fileName, fileName_param);
	zephir_get_strval(&data, data_param);
	if (!mimeType_param) {
		ZEPHIR_INIT_VAR(&mimeType);
		ZVAL_STRING(&mimeType, "");
	} else {
		zephir_get_strval(&mimeType, mimeType_param);
	}
	ZVAL_LONG(&_0, handle);
	phpqt_qpdfwriter_add_file_attachment(&_0, &fileName, &data, &mimeType);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, colorModel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpdfwriter_color_model(&_0));
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setColorModel)
{
	zval *handle_param = NULL, *model_param = NULL, _0, _1;
	zend_long handle, model;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(model)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &model_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, model);
	phpqt_qpdfwriter_set_color_model(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, outputIntent)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpdfwriter_output_intent(&_0));
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, setOutputIntent)
{
	zval *handle_param = NULL, *intent_param = NULL, _0, _1;
	zend_long handle, intent;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(intent)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &intent_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, intent);
	phpqt_qpdfwriter_set_output_intent(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, paintEngine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpdfwriter_paint_engine(&_0));
}

PHP_METHOD(Qt_Gui_QPdfWriter_QPdfWriter, metric)
{
	zval *handle_param = NULL, *id_param = NULL, _0, _1;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	RETURN_LONG(phpqt_qpdfwriter_metric(&_0, &_1));
}

