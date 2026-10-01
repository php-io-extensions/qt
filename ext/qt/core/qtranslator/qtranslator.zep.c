
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
#include "src/core-qtranslator.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTranslator_QTranslator)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTranslator, QTranslator, qt, core_qtranslator_qtranslator, qt_core_qtranslator_qtranslator_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, staticMetaObject)
{

	RETURN_LONG(phpqt_qtranslator_static_meta_object());
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, tr)
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
	phpqt_qtranslator_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qtranslator_new(&_0));
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, translate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *context = NULL, context_sub, *sourceText = NULL, sourceText_sub, *disambiguation = NULL, disambiguation_sub, *n_param = NULL, __$null, result, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&context_sub);
	ZVAL_UNDEF(&sourceText_sub);
	ZVAL_UNDEF(&disambiguation_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(context)
		Z_PARAM_ZVAL(sourceText)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(disambiguation)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &handle_param, &context, &sourceText, &disambiguation, &n_param);
	if (!disambiguation) {
		disambiguation = &disambiguation_sub;
		disambiguation = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qtranslator_translate(&result, &_0, context, sourceText, disambiguation, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, isEmpty)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtranslator_is_empty(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, language)
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
	phpqt_qtranslator_language(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, filePath)
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
	phpqt_qtranslator_file_path(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, load)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filename, directory, search_delimiters, suffix;
	zval *handle_param = NULL, *filename_param = NULL, *directory_param = NULL, *search_delimiters_param = NULL, *suffix_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&filename);
	ZVAL_UNDEF(&directory);
	ZVAL_UNDEF(&search_delimiters);
	ZVAL_UNDEF(&suffix);
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(filename)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(directory)
		Z_PARAM_STR(search_delimiters)
		Z_PARAM_STR(suffix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &handle_param, &filename_param, &directory_param, &search_delimiters_param, &suffix_param);
	zephir_get_strval(&filename, filename_param);
	if (!directory_param) {
		ZEPHIR_INIT_VAR(&directory);
		ZVAL_STRING(&directory, "");
	} else {
		zephir_get_strval(&directory, directory_param);
	}
	if (!search_delimiters_param) {
		ZEPHIR_INIT_VAR(&search_delimiters);
		ZVAL_STRING(&search_delimiters, "");
	} else {
		zephir_get_strval(&search_delimiters, search_delimiters_param);
	}
	if (!suffix_param) {
		ZEPHIR_INIT_VAR(&suffix);
		ZVAL_STRING(&suffix, "");
	} else {
		zephir_get_strval(&suffix, suffix_param);
	}
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtranslator_load(&_0, &filename, &directory, &search_delimiters, &suffix);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, loadQLocaleQStringQStringQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval filename, prefix, directory, suffix;
	zval *handle_param = NULL, *locale_param = NULL, *filename_param = NULL, *prefix_param = NULL, *directory_param = NULL, *suffix_param = NULL, _0, _1;
	zend_long handle, locale, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&filename);
	ZVAL_UNDEF(&prefix);
	ZVAL_UNDEF(&directory);
	ZVAL_UNDEF(&suffix);
	ZEND_PARSE_PARAMETERS_START(3, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
		Z_PARAM_STR(filename)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(prefix)
		Z_PARAM_STR(directory)
		Z_PARAM_STR(suffix)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 3, &handle_param, &locale_param, &filename_param, &prefix_param, &directory_param, &suffix_param);
	zephir_get_strval(&filename, filename_param);
	if (!prefix_param) {
		ZEPHIR_INIT_VAR(&prefix);
		ZVAL_STRING(&prefix, "");
	} else {
		zephir_get_strval(&prefix, prefix_param);
	}
	if (!directory_param) {
		ZEPHIR_INIT_VAR(&directory);
		ZVAL_STRING(&directory, "");
	} else {
		zephir_get_strval(&directory, directory_param);
	}
	if (!suffix_param) {
		ZEPHIR_INIT_VAR(&suffix);
		ZVAL_STRING(&suffix, "");
	} else {
		zephir_get_strval(&suffix, suffix_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	r = phpqt_qtranslator_load_q_locale_q_string_q_string_q_string_q_string(&_0, &_1, &filename, &prefix, &directory, &suffix);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTranslator_QTranslator, loadUcharIntQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval directory;
	zval *handle_param = NULL, *data = NULL, data_sub, *len_param = NULL, *directory_param = NULL, _0, _1;
	zend_long handle, len, r = 0;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&directory);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(len)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(directory)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &handle_param, &data, &len_param, &directory_param);
	if (!directory_param) {
		ZEPHIR_INIT_VAR(&directory);
		ZVAL_STRING(&directory, "");
	} else {
		zephir_get_strval(&directory, directory_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len);
	r = phpqt_qtranslator_load_uchar_int_q_string(&_0, data, &_1, &directory);
	RETURN_MM_BOOL(r == 1);
}

