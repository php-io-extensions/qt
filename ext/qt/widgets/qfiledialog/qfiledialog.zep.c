
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
#include "src/widgets-qfiledialog.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QFileDialog_QFileDialog)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QFileDialog, QFileDialog, qt, widgets_qfiledialog_qfiledialog, qt_widgets_qfiledialog_qfiledialog_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, open)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_open(&_0);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, staticMetaObject)
{

	RETURN_LONG(phpqt_qfiledialog_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, tr)
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
	phpqt_qfiledialog_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, new_)
{
	zval *parent__param = NULL, *f_param = NULL, _0, _1;
	zend_long parent_, f;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(parent_)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &parent__param, &f_param);
	ZVAL_LONG(&_0, parent_);
	ZVAL_LONG(&_1, f);
	RETURN_LONG(phpqt_qfiledialog_new(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, newQWidgetQStringQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval caption, directory, filter;
	zval *parent__param = NULL, *caption_param = NULL, *directory_param = NULL, *filter_param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&caption);
	ZVAL_UNDEF(&directory);
	ZVAL_UNDEF(&filter);
	ZEND_PARSE_PARAMETERS_START(0, 4)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(caption)
		Z_PARAM_STR(directory)
		Z_PARAM_STR(filter)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 4, &parent__param, &caption_param, &directory_param, &filter_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!caption_param) {
		ZEPHIR_INIT_VAR(&caption);
		ZVAL_STRING(&caption, "");
	} else {
		zephir_get_strval(&caption, caption_param);
	}
	if (!directory_param) {
		ZEPHIR_INIT_VAR(&directory);
		ZVAL_STRING(&directory, "");
	} else {
		zephir_get_strval(&directory, directory_param);
	}
	if (!filter_param) {
		ZEPHIR_INIT_VAR(&filter);
		ZVAL_STRING(&filter, "");
	} else {
		zephir_get_strval(&filter, filter_param);
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qfiledialog_new_q_widget_q_string_q_string_q_string(&_0, &caption, &directory, &filter));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setDirectory)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval directory;
	zval *handle_param = NULL, *directory_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&directory);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(directory)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &directory_param);
	zephir_get_strval(&directory, directory_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_set_directory(&_0, &directory);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setDirectoryQDir)
{
	zval *handle_param = NULL, *directory_param = NULL, _0, _1;
	zend_long handle, directory;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(directory)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &directory_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, directory);
	phpqt_qfiledialog_set_directory_q_dir(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, directory)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_directory(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setDirectoryUrl)
{
	zval *handle_param = NULL, *directory_param = NULL, _0, _1;
	zend_long handle, directory;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(directory)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &directory_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, directory);
	phpqt_qfiledialog_set_directory_url(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, directoryUrl)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_directory_url(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectFile)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filename;
	zval *handle_param = NULL, *filename_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&filename);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(filename)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &filename_param);
	zephir_get_strval(&filename, filename_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_select_file(&_0, &filename);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectedFiles)
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
	phpqt_qfiledialog_selected_files(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectUrl)
{
	zval *handle_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	phpqt_qfiledialog_select_url(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectedUrls)
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
	phpqt_qfiledialog_selected_urls(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setNameFilter)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filter;
	zval *handle_param = NULL, *filter_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&filter);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(filter)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &filter_param);
	zephir_get_strval(&filter, filter_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_set_name_filter(&_0, &filter);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setNameFilters)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filters;
	zval *handle_param = NULL, *filters_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&filters);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(filters)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &filters_param);
	zephir_get_arrval(&filters, filters_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_set_name_filters(&_0, &filters);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, nameFilters)
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
	phpqt_qfiledialog_name_filters(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectNameFilter)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filter;
	zval *handle_param = NULL, *filter_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&filter);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(filter)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &filter_param);
	zephir_get_strval(&filter, filter_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_select_name_filter(&_0, &filter);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectedMimeTypeFilter)
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
	phpqt_qfiledialog_selected_mime_type_filter(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectedNameFilter)
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
	phpqt_qfiledialog_selected_name_filter(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setMimeTypeFilters)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filters;
	zval *handle_param = NULL, *filters_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&filters);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(filters)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &filters_param);
	zephir_get_arrval(&filters, filters_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_set_mime_type_filters(&_0, &filters);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, mimeTypeFilters)
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
	phpqt_qfiledialog_mime_type_filters(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, selectMimeTypeFilter)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filter;
	zval *handle_param = NULL, *filter_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&filter);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(filter)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &filter_param);
	zephir_get_strval(&filter, filter_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_select_mime_type_filter(&_0, &filter);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, filter)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_filter(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setFilter)
{
	zval *handle_param = NULL, *filters_param = NULL, _0, _1;
	zend_long handle, filters;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(filters)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &filters_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, filters);
	phpqt_qfiledialog_set_filter(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setViewMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qfiledialog_set_view_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, viewMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_view_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setFileMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qfiledialog_set_file_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, fileMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_file_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setAcceptMode)
{
	zval *handle_param = NULL, *mode_param = NULL, _0, _1;
	zend_long handle, mode;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(mode)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &mode_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, mode);
	phpqt_qfiledialog_set_accept_mode(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, acceptMode)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_accept_mode(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setSidebarUrls)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval urls;
	zval *handle_param = NULL, *urls_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&urls);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(urls)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &urls_param);
	zephir_get_arrval(&urls, urls_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_set_sidebar_urls(&_0, &urls);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, sidebarUrls)
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
	phpqt_qfiledialog_sidebar_urls(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, saveState)
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
	phpqt_qfiledialog_save_state(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, restoreState)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval state;
	zval *handle_param = NULL, *state_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&state);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(state)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &state_param);
	zephir_get_strval(&state, state_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qfiledialog_restore_state(&_0, &state);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setDefaultSuffix)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval suffix;
	zval *handle_param = NULL, *suffix_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&suffix);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(suffix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &suffix_param);
	zephir_get_strval(&suffix, suffix_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_set_default_suffix(&_0, &suffix);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, defaultSuffix)
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
	phpqt_qfiledialog_default_suffix(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setHistory)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval paths;
	zval *handle_param = NULL, *paths_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&paths);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(paths)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &paths_param);
	zephir_get_arrval(&paths, paths_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_set_history(&_0, &paths);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, history)
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
	phpqt_qfiledialog_history(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setItemDelegate)
{
	zval *handle_param = NULL, *delegate_param = NULL, _0, _1;
	zend_long handle, delegate;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delegate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delegate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delegate);
	phpqt_qfiledialog_set_item_delegate(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, itemDelegate)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_item_delegate(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setIconProvider)
{
	zval *handle_param = NULL, *provider_param = NULL, _0, _1;
	zend_long handle, provider;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(provider)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &provider_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, provider);
	phpqt_qfiledialog_set_icon_provider(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, iconProvider)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_icon_provider(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setLabelText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval text;
	zval *handle_param = NULL, *label_param = NULL, *text_param = NULL, _0, _1;
	zend_long handle, label;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&text);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(label)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &label_param, &text_param);
	zephir_get_strval(&text, text_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, label);
	phpqt_qfiledialog_set_label_text(&_0, &_1, &text);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, labelText)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *label_param = NULL, result, _0, _1;
	zend_long handle, label;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(label)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &label_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, label);
	phpqt_qfiledialog_label_text(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setSupportedSchemes)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval schemes;
	zval *handle_param = NULL, *schemes_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&schemes);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(schemes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &schemes_param);
	zephir_get_arrval(&schemes, schemes_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_set_supported_schemes(&_0, &schemes);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, supportedSchemes)
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
	phpqt_qfiledialog_supported_schemes(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setProxyModel)
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
	phpqt_qfiledialog_set_proxy_model(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, proxyModel)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_proxy_model(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setOption)
{
	zend_bool on;
	zval *handle_param = NULL, *option_param = NULL, *on_param = NULL, _0, _1, _2;
	zend_long handle, option;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &option_param, &on_param);
	if (!on_param) {
		on = 1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	ZVAL_BOOL(&_2, (on ? 1 : 0));
	phpqt_qfiledialog_set_option(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, testOption)
{
	zval *handle_param = NULL, *option_param = NULL, _0, _1;
	zend_long handle, option, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(option)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &option_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, option);
	r = phpqt_qfiledialog_test_option(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setOptions)
{
	zval *handle_param = NULL, *options_param = NULL, _0, _1;
	zend_long handle, options;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(options)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &options_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, options);
	phpqt_qfiledialog_set_options(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, options)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qfiledialog_options(&_0));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, openQObjectChar)
{
	zval *handle_param = NULL, *receiver_param = NULL, *member = NULL, member_sub, _0, _1;
	zend_long handle, receiver;

	ZVAL_UNDEF(&member_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(receiver)
		Z_PARAM_ZVAL(member)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &receiver_param, &member);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, receiver);
	phpqt_qfiledialog_open_q_object_char(&_0, &_1, member);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, setVisible)
{
	zend_bool visible;
	zval *handle_param = NULL, *visible_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &visible_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (visible ? 1 : 0));
	phpqt_qfiledialog_set_visible(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, fileSelected)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval file;
	zval *handle_param = NULL, *file_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&file);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(file)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &file_param);
	zephir_get_strval(&file, file_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_file_selected(&_0, &file);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, filesSelected)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval files;
	zval *handle_param = NULL, *files_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&files);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(files)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &files_param);
	zephir_get_arrval(&files, files_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_files_selected(&_0, &files);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, currentChanged)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval path;
	zval *handle_param = NULL, *path_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&path);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(path)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &path_param);
	zephir_get_strval(&path, path_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_current_changed(&_0, &path);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, directoryEntered)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval directory;
	zval *handle_param = NULL, *directory_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&directory);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(directory)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &directory_param);
	zephir_get_strval(&directory, directory_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_directory_entered(&_0, &directory);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, urlSelected)
{
	zval *handle_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	phpqt_qfiledialog_url_selected(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, urlsSelected)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval urls;
	zval *handle_param = NULL, *urls_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&urls);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(urls)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &urls_param);
	zephir_get_arrval(&urls, urls_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_urls_selected(&_0, &urls);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, currentUrlChanged)
{
	zval *handle_param = NULL, *url_param = NULL, _0, _1;
	zend_long handle, url;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &url_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, url);
	phpqt_qfiledialog_current_url_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, directoryUrlEntered)
{
	zval *handle_param = NULL, *directory_param = NULL, _0, _1;
	zend_long handle, directory;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(directory)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &directory_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, directory);
	phpqt_qfiledialog_directory_url_entered(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, filterSelected)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filter;
	zval *handle_param = NULL, *filter_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&filter);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(filter)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &filter_param);
	zephir_get_strval(&filter, filter_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_filter_selected(&_0, &filter);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval caption, dir, filter;
	zval *parent__param = NULL, *caption_param = NULL, *dir_param = NULL, *filter_param = NULL, *selectedFilter = NULL, selectedFilter_sub, *options = NULL, options_sub, __$null, result, _0;
	zend_long parent_;

	ZVAL_UNDEF(&selectedFilter_sub);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&caption);
	ZVAL_UNDEF(&dir);
	ZVAL_UNDEF(&filter);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 6)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(caption)
		Z_PARAM_STR(dir)
		Z_PARAM_STR(filter)
		Z_PARAM_ZVAL_OR_NULL(selectedFilter)
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 6, &parent__param, &caption_param, &dir_param, &filter_param, &selectedFilter, &options);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!caption_param) {
		ZEPHIR_INIT_VAR(&caption);
		ZVAL_STRING(&caption, "");
	} else {
		zephir_get_strval(&caption, caption_param);
	}
	if (!dir_param) {
		ZEPHIR_INIT_VAR(&dir);
		ZVAL_STRING(&dir, "");
	} else {
		zephir_get_strval(&dir, dir_param);
	}
	if (!filter_param) {
		ZEPHIR_INIT_VAR(&filter);
		ZVAL_STRING(&filter, "");
	} else {
		zephir_get_strval(&filter, filter_param);
	}
	if (!selectedFilter) {
		selectedFilter = &selectedFilter_sub;
		selectedFilter = &__$null;
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	phpqt_qfiledialog_get_open_file_name(&result, &_0, &caption, &dir, &filter, selectedFilter, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileUrl)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval caption, filter;
	zval *parent__param = NULL, *caption_param = NULL, *dir = NULL, dir_sub, *filter_param = NULL, *selectedFilter = NULL, selectedFilter_sub, *options = NULL, options_sub, *supportedSchemes = NULL, supportedSchemes_sub, __$null, result, _0;
	zend_long parent_;

	ZVAL_UNDEF(&dir_sub);
	ZVAL_UNDEF(&selectedFilter_sub);
	ZVAL_UNDEF(&options_sub);
	ZVAL_UNDEF(&supportedSchemes_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&caption);
	ZVAL_UNDEF(&filter);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 7)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(caption)
		Z_PARAM_ZVAL_OR_NULL(dir)
		Z_PARAM_STR(filter)
		Z_PARAM_ZVAL_OR_NULL(selectedFilter)
		Z_PARAM_ZVAL_OR_NULL(options)
		Z_PARAM_ZVAL_OR_NULL(supportedSchemes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 7, &parent__param, &caption_param, &dir, &filter_param, &selectedFilter, &options, &supportedSchemes);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!caption_param) {
		ZEPHIR_INIT_VAR(&caption);
		ZVAL_STRING(&caption, "");
	} else {
		zephir_get_strval(&caption, caption_param);
	}
	if (!dir) {
		dir = &dir_sub;
		dir = &__$null;
	}
	if (!filter_param) {
		ZEPHIR_INIT_VAR(&filter);
		ZVAL_STRING(&filter, "");
	} else {
		zephir_get_strval(&filter, filter_param);
	}
	if (!selectedFilter) {
		selectedFilter = &selectedFilter_sub;
		selectedFilter = &__$null;
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	if (!supportedSchemes) {
		supportedSchemes = &supportedSchemes_sub;
		supportedSchemes = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	phpqt_qfiledialog_get_open_file_url(&result, &_0, &caption, dir, &filter, selectedFilter, options, supportedSchemes);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getSaveFileName)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval caption, dir, filter;
	zval *parent__param = NULL, *caption_param = NULL, *dir_param = NULL, *filter_param = NULL, *selectedFilter = NULL, selectedFilter_sub, *options = NULL, options_sub, __$null, result, _0;
	zend_long parent_;

	ZVAL_UNDEF(&selectedFilter_sub);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&caption);
	ZVAL_UNDEF(&dir);
	ZVAL_UNDEF(&filter);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 6)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(caption)
		Z_PARAM_STR(dir)
		Z_PARAM_STR(filter)
		Z_PARAM_ZVAL_OR_NULL(selectedFilter)
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 6, &parent__param, &caption_param, &dir_param, &filter_param, &selectedFilter, &options);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!caption_param) {
		ZEPHIR_INIT_VAR(&caption);
		ZVAL_STRING(&caption, "");
	} else {
		zephir_get_strval(&caption, caption_param);
	}
	if (!dir_param) {
		ZEPHIR_INIT_VAR(&dir);
		ZVAL_STRING(&dir, "");
	} else {
		zephir_get_strval(&dir, dir_param);
	}
	if (!filter_param) {
		ZEPHIR_INIT_VAR(&filter);
		ZVAL_STRING(&filter, "");
	} else {
		zephir_get_strval(&filter, filter_param);
	}
	if (!selectedFilter) {
		selectedFilter = &selectedFilter_sub;
		selectedFilter = &__$null;
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	phpqt_qfiledialog_get_save_file_name(&result, &_0, &caption, &dir, &filter, selectedFilter, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getSaveFileUrl)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval caption, filter;
	zval *parent__param = NULL, *caption_param = NULL, *dir = NULL, dir_sub, *filter_param = NULL, *selectedFilter = NULL, selectedFilter_sub, *options = NULL, options_sub, *supportedSchemes = NULL, supportedSchemes_sub, __$null, result, _0;
	zend_long parent_;

	ZVAL_UNDEF(&dir_sub);
	ZVAL_UNDEF(&selectedFilter_sub);
	ZVAL_UNDEF(&options_sub);
	ZVAL_UNDEF(&supportedSchemes_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&caption);
	ZVAL_UNDEF(&filter);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 7)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(caption)
		Z_PARAM_ZVAL_OR_NULL(dir)
		Z_PARAM_STR(filter)
		Z_PARAM_ZVAL_OR_NULL(selectedFilter)
		Z_PARAM_ZVAL_OR_NULL(options)
		Z_PARAM_ZVAL_OR_NULL(supportedSchemes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 7, &parent__param, &caption_param, &dir, &filter_param, &selectedFilter, &options, &supportedSchemes);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!caption_param) {
		ZEPHIR_INIT_VAR(&caption);
		ZVAL_STRING(&caption, "");
	} else {
		zephir_get_strval(&caption, caption_param);
	}
	if (!dir) {
		dir = &dir_sub;
		dir = &__$null;
	}
	if (!filter_param) {
		ZEPHIR_INIT_VAR(&filter);
		ZVAL_STRING(&filter, "");
	} else {
		zephir_get_strval(&filter, filter_param);
	}
	if (!selectedFilter) {
		selectedFilter = &selectedFilter_sub;
		selectedFilter = &__$null;
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	if (!supportedSchemes) {
		supportedSchemes = &supportedSchemes_sub;
		supportedSchemes = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	phpqt_qfiledialog_get_save_file_url(&result, &_0, &caption, dir, &filter, selectedFilter, options, supportedSchemes);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getExistingDirectory)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval caption, dir;
	zval *parent__param = NULL, *caption_param = NULL, *dir_param = NULL, *options = NULL, options_sub, __$null, result, _0;
	zend_long parent_;

	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&caption);
	ZVAL_UNDEF(&dir);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 4)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(caption)
		Z_PARAM_STR(dir)
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 4, &parent__param, &caption_param, &dir_param, &options);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!caption_param) {
		ZEPHIR_INIT_VAR(&caption);
		ZVAL_STRING(&caption, "");
	} else {
		zephir_get_strval(&caption, caption_param);
	}
	if (!dir_param) {
		ZEPHIR_INIT_VAR(&dir);
		ZVAL_STRING(&dir, "");
	} else {
		zephir_get_strval(&dir, dir_param);
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	phpqt_qfiledialog_get_existing_directory(&result, &_0, &caption, &dir, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getExistingDirectoryUrl)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval caption;
	zval *parent__param = NULL, *caption_param = NULL, *dir = NULL, dir_sub, *options = NULL, options_sub, *supportedSchemes = NULL, supportedSchemes_sub, __$null, _0;
	zend_long parent_;

	ZVAL_UNDEF(&dir_sub);
	ZVAL_UNDEF(&options_sub);
	ZVAL_UNDEF(&supportedSchemes_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&caption);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 5)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(caption)
		Z_PARAM_ZVAL_OR_NULL(dir)
		Z_PARAM_ZVAL_OR_NULL(options)
		Z_PARAM_ZVAL_OR_NULL(supportedSchemes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 5, &parent__param, &caption_param, &dir, &options, &supportedSchemes);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!caption_param) {
		ZEPHIR_INIT_VAR(&caption);
		ZVAL_STRING(&caption, "");
	} else {
		zephir_get_strval(&caption, caption_param);
	}
	if (!dir) {
		dir = &dir_sub;
		dir = &__$null;
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	if (!supportedSchemes) {
		supportedSchemes = &supportedSchemes_sub;
		supportedSchemes = &__$null;
	}
	ZVAL_LONG(&_0, parent_);
	RETURN_MM_LONG(phpqt_qfiledialog_get_existing_directory_url(&_0, &caption, dir, options, supportedSchemes));
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileNames)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval caption, dir, filter;
	zval *parent__param = NULL, *caption_param = NULL, *dir_param = NULL, *filter_param = NULL, *selectedFilter = NULL, selectedFilter_sub, *options = NULL, options_sub, __$null, result, _0;
	zend_long parent_;

	ZVAL_UNDEF(&selectedFilter_sub);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&caption);
	ZVAL_UNDEF(&dir);
	ZVAL_UNDEF(&filter);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 6)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(caption)
		Z_PARAM_STR(dir)
		Z_PARAM_STR(filter)
		Z_PARAM_ZVAL_OR_NULL(selectedFilter)
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 6, &parent__param, &caption_param, &dir_param, &filter_param, &selectedFilter, &options);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!caption_param) {
		ZEPHIR_INIT_VAR(&caption);
		ZVAL_STRING(&caption, "");
	} else {
		zephir_get_strval(&caption, caption_param);
	}
	if (!dir_param) {
		ZEPHIR_INIT_VAR(&dir);
		ZVAL_STRING(&dir, "");
	} else {
		zephir_get_strval(&dir, dir_param);
	}
	if (!filter_param) {
		ZEPHIR_INIT_VAR(&filter);
		ZVAL_STRING(&filter, "");
	} else {
		zephir_get_strval(&filter, filter_param);
	}
	if (!selectedFilter) {
		selectedFilter = &selectedFilter_sub;
		selectedFilter = &__$null;
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	phpqt_qfiledialog_get_open_file_names(&result, &_0, &caption, &dir, &filter, selectedFilter, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, getOpenFileUrls)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval caption, filter;
	zval *parent__param = NULL, *caption_param = NULL, *dir = NULL, dir_sub, *filter_param = NULL, *selectedFilter = NULL, selectedFilter_sub, *options = NULL, options_sub, *supportedSchemes = NULL, supportedSchemes_sub, __$null, result, _0;
	zend_long parent_;

	ZVAL_UNDEF(&dir_sub);
	ZVAL_UNDEF(&selectedFilter_sub);
	ZVAL_UNDEF(&options_sub);
	ZVAL_UNDEF(&supportedSchemes_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&caption);
	ZVAL_UNDEF(&filter);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 7)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
		Z_PARAM_STR(caption)
		Z_PARAM_ZVAL_OR_NULL(dir)
		Z_PARAM_STR(filter)
		Z_PARAM_ZVAL_OR_NULL(selectedFilter)
		Z_PARAM_ZVAL_OR_NULL(options)
		Z_PARAM_ZVAL_OR_NULL(supportedSchemes)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 7, &parent__param, &caption_param, &dir, &filter_param, &selectedFilter, &options, &supportedSchemes);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	if (!caption_param) {
		ZEPHIR_INIT_VAR(&caption);
		ZVAL_STRING(&caption, "");
	} else {
		zephir_get_strval(&caption, caption_param);
	}
	if (!dir) {
		dir = &dir_sub;
		dir = &__$null;
	}
	if (!filter_param) {
		ZEPHIR_INIT_VAR(&filter);
		ZVAL_STRING(&filter, "");
	} else {
		zephir_get_strval(&filter, filter_param);
	}
	if (!selectedFilter) {
		selectedFilter = &selectedFilter_sub;
		selectedFilter = &__$null;
	}
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	if (!supportedSchemes) {
		supportedSchemes = &supportedSchemes_sub;
		supportedSchemes = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, parent_);
	phpqt_qfiledialog_get_open_file_urls(&result, &_0, &caption, dir, &filter, selectedFilter, options, supportedSchemes);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, saveFileContent)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long parent_;
	zval *fileContent_param = NULL, *fileNameHint_param = NULL, *parent__param = NULL, _0;
	zval fileContent, fileNameHint;

	ZVAL_UNDEF(&fileContent);
	ZVAL_UNDEF(&fileNameHint);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(fileContent)
		Z_PARAM_STR(fileNameHint)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &fileContent_param, &fileNameHint_param, &parent__param);
	zephir_get_strval(&fileContent, fileContent_param);
	zephir_get_strval(&fileNameHint, fileNameHint_param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	phpqt_qfiledialog_save_file_content(&fileContent, &fileNameHint, &_0);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, done)
{
	zval *handle_param = NULL, *result_param = NULL, _0, _1;
	zend_long handle, result;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(result)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &result_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, result);
	phpqt_qfiledialog_done(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, accept)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qfiledialog_accept(&_0);
}

PHP_METHOD(Qt_Widgets_QFileDialog_QFileDialog, changeEvent)
{
	zval *handle_param = NULL, *e_param = NULL, _0, _1;
	zend_long handle, e;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(e)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &e_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, e);
	phpqt_qfiledialog_change_event(&_0, &_1);
}

