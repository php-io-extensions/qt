
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
#include "src/core-qtextstream.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QTextStream_QTextStream)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QTextStream, QTextStream, qt, core_qtextstream_qtextstream, qt_core_qtextstream_qtextstream_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, new_)
{

	RETURN_LONG(phpqt_qtextstream_new());
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, newQIODevice)
{
	zval *device_param = NULL, _0;
	zend_long device;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &device_param);
	ZVAL_LONG(&_0, device);
	RETURN_LONG(phpqt_qtextstream_new_q_i_o_device(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, newQStringQIODeviceBaseOpenMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *string_ = NULL, string__sub, *openMode = NULL, openMode_sub, __$null, result;

	ZVAL_UNDEF(&string__sub);
	ZVAL_UNDEF(&openMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(openMode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &string_, &openMode);
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qtextstream_new_q_string_q_i_o_device_base_open_mode(&result, string_, openMode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, newQByteArrayQIODeviceBaseOpenMode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *array_ = NULL, array__sub, *openMode = NULL, openMode_sub, __$null, result;

	ZVAL_UNDEF(&array__sub);
	ZVAL_UNDEF(&openMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(array_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(openMode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &array_, &openMode);
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qtextstream_new_q_byte_array_q_i_o_device_base_open_mode(&result, array_, openMode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, newQByteArrayQIODeviceBaseOpenMode2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *array__param = NULL, *openMode = NULL, openMode_sub, __$null;
	zval array_;

	ZVAL_UNDEF(&array_);
	ZVAL_UNDEF(&openMode_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(array_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(openMode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &array__param, &openMode);
	zephir_get_strval(&array_, array__param);
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	RETURN_MM_LONG(phpqt_qtextstream_new_q_byte_array_q_i_o_device_base_open_mode2(&array_, openMode));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setEncoding)
{
	zval *handle_param = NULL, *encoding_param = NULL, _0, _1;
	zend_long handle, encoding;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(encoding)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &encoding_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, encoding);
	phpqt_qtextstream_set_encoding(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, encoding)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_encoding(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setAutoDetectUnicode)
{
	zend_bool enabled;
	zval *handle_param = NULL, *enabled_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &enabled_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (enabled ? 1 : 0));
	phpqt_qtextstream_set_auto_detect_unicode(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, autoDetectUnicode)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextstream_auto_detect_unicode(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setGenerateByteOrderMark)
{
	zend_bool generate;
	zval *handle_param = NULL, *generate_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(generate)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &generate_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (generate ? 1 : 0));
	phpqt_qtextstream_set_generate_byte_order_mark(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, generateByteOrderMark)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextstream_generate_byte_order_mark(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setLocale)
{
	zval *handle_param = NULL, *locale_param = NULL, _0, _1;
	zend_long handle, locale;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(locale)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &locale_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, locale);
	phpqt_qtextstream_set_locale(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, locale)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_locale(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setDevice)
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
	phpqt_qtextstream_set_device(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, device)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_device(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *string_ = NULL, string__sub, *openMode = NULL, openMode_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&string__sub);
	ZVAL_UNDEF(&openMode_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(openMode)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &string_, &openMode);
	if (!openMode) {
		openMode = &openMode_sub;
		openMode = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextstream_set_string(&result, &_0, string_, openMode);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, status)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_status(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setStatus)
{
	zval *handle_param = NULL, *status_param = NULL, _0, _1;
	zend_long handle, status;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(status)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &status_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, status);
	phpqt_qtextstream_set_status(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, resetStatus)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextstream_reset_status(&_0);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, atEnd)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtextstream_at_end(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, reset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextstream_reset(&_0);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, flush)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextstream_flush(&_0);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, seek)
{
	zval *handle_param = NULL, *pos_param = NULL, _0, _1;
	zend_long handle, pos, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &pos_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pos);
	r = phpqt_qtextstream_seek(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, pos)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_pos(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, skipWhiteSpace)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextstream_skip_white_space(&_0);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, readLine)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *maxlen_param = NULL, result, _0, _1;
	zend_long handle, maxlen;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(maxlen)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &maxlen_param);
	if (!maxlen_param) {
		maxlen = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maxlen);
	phpqt_qtextstream_read_line(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, readLineInto)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *line = NULL, line_sub, *maxlen_param = NULL, result, _0, _1;
	zend_long handle, maxlen;

	ZVAL_UNDEF(&line_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(line)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(maxlen)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &handle_param, &line, &maxlen_param);
	if (!maxlen_param) {
		maxlen = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maxlen);
	phpqt_qtextstream_read_line_into(&result, &_0, line, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, readAll)
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
	phpqt_qtextstream_read_all(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, read)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *maxlen_param = NULL, result, _0, _1;
	zend_long handle, maxlen;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(maxlen)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &maxlen_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, maxlen);
	phpqt_qtextstream_read(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setFieldAlignment)
{
	zval *handle_param = NULL, *alignment_param = NULL, _0, _1;
	zend_long handle, alignment;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(alignment)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &alignment_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, alignment);
	phpqt_qtextstream_set_field_alignment(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, fieldAlignment)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_field_alignment(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setPadChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval ch;
	zval *handle_param = NULL, *ch_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&ch);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(ch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &ch_param);
	zephir_get_strval(&ch, ch_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtextstream_set_pad_char(&_0, &ch);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, padChar)
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
	phpqt_qtextstream_pad_char(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setFieldWidth)
{
	zval *handle_param = NULL, *width_param = NULL, _0, _1;
	zend_long handle, width;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(width)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &width_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, width);
	phpqt_qtextstream_set_field_width(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, fieldWidth)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_field_width(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setNumberFlags)
{
	zval *handle_param = NULL, *flags_param = NULL, _0, _1;
	zend_long handle, flags;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &flags_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, flags);
	phpqt_qtextstream_set_number_flags(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, numberFlags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_number_flags(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setIntegerBase)
{
	zval *handle_param = NULL, *base_param = NULL, _0, _1;
	zend_long handle, base;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &base_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, base);
	phpqt_qtextstream_set_integer_base(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, integerBase)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_integer_base(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setRealNumberNotation)
{
	zval *handle_param = NULL, *notation_param = NULL, _0, _1;
	zend_long handle, notation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(notation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &notation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, notation);
	phpqt_qtextstream_set_real_number_notation(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, realNumberNotation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_real_number_notation(&_0));
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, setRealNumberPrecision)
{
	zval *handle_param = NULL, *precision_param = NULL, _0, _1;
	zend_long handle, precision;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(precision)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &precision_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, precision);
	phpqt_qtextstream_set_real_number_precision(&_0, &_1);
}

PHP_METHOD(Qt_Core_QTextStream_QTextStream, realNumberPrecision)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtextstream_real_number_precision(&_0));
}

