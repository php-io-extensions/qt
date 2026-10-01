
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
#include "src/core-qcborstreamwriter.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCborStreamWriter_QCborStreamWriter)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCborStreamWriter, QCborStreamWriter, qt, core_qcborstreamwriter_qcborstreamwriter, qt_core_qcborstreamwriter_qcborstreamwriter_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, new_)
{
	zval *device_param = NULL, _0;
	zend_long device;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &device_param);
	ZVAL_LONG(&_0, device);
	RETURN_LONG(phpqt_qcborstreamwriter_new(&_0));
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, newQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *data = NULL, data_sub, result;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(data)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &data);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qcborstreamwriter_new_q_byte_array(&result, data);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, setDevice)
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
	phpqt_qcborstreamwriter_set_device(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, device)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborstreamwriter_device(&_0));
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, append)
{
	zval *handle_param = NULL, *u_param = NULL, _0, _1;
	zend_long handle, u;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(u)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &u_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, u);
	phpqt_qcborstreamwriter_append(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQint64)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qcborstreamwriter_append_qint64(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborNegativeInteger)
{
	zval *handle_param = NULL, *n_param = NULL, _0, _1;
	zend_long handle, n;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &n_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, n);
	phpqt_qcborstreamwriter_append_q_cbor_negative_integer(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval ba;
	zval *handle_param = NULL, *ba_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&ba);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(ba)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &ba_param);
	zephir_get_strval(&ba, ba_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborstreamwriter_append_q_byte_array(&_0, &ba);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *handle_param = NULL, *str_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&str);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &str_param);
	zephir_get_strval(&str, str_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborstreamwriter_append_q_latin1_string_view(&_0, &str);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval str;
	zval *handle_param = NULL, *str_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&str);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &str_param);
	zephir_get_strval(&str, str_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborstreamwriter_append_q_string_view(&_0, &str);
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborTag)
{
	zval *handle_param = NULL, *tag_param = NULL, _0, _1;
	zend_long handle, tag;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tag);
	phpqt_qcborstreamwriter_append_q_cbor_tag(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborKnownTags)
{
	zval *handle_param = NULL, *tag_param = NULL, _0, _1;
	zend_long handle, tag;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(tag)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &tag_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, tag);
	phpqt_qcborstreamwriter_append_q_cbor_known_tags(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQCborSimpleType)
{
	zval *handle_param = NULL, *st_param = NULL, _0, _1;
	zend_long handle, st;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(st)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &st_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, st);
	phpqt_qcborstreamwriter_append_q_cbor_simple_type(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendQfloat16)
{
	zval *handle_param = NULL, *f_param = NULL, _0, _1;
	zend_long handle, f;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &f_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, f);
	phpqt_qcborstreamwriter_append_qfloat16(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendFloat)
{
	double f;
	zval *handle_param = NULL, *f_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(f)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &f_param);
	f = zephir_get_doubleval(f_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, f);
	phpqt_qcborstreamwriter_append_float(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendDouble)
{
	double d;
	zval *handle_param = NULL, *d_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(d)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &d_param);
	d = zephir_get_doubleval(d_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, d);
	phpqt_qcborstreamwriter_append_double(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendByteString)
{
	zval *handle_param = NULL, *data = NULL, data_sub, *len_param = NULL, _0, _1;
	zend_long handle, len;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &data, &len_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len);
	phpqt_qcborstreamwriter_append_byte_string(&_0, data, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendTextString)
{
	zval *handle_param = NULL, *utf8 = NULL, utf8_sub, *len_param = NULL, _0, _1;
	zend_long handle, len;

	ZVAL_UNDEF(&utf8_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(utf8)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &utf8, &len_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, len);
	phpqt_qcborstreamwriter_append_text_string(&_0, utf8, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendBool)
{
	zend_bool b;
	zval *handle_param = NULL, *b_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &b_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (b ? 1 : 0));
	phpqt_qcborstreamwriter_append_bool(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborstreamwriter_append_null(&_0);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendUndefined)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborstreamwriter_append_undefined(&_0);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendInt)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	phpqt_qcborstreamwriter_append_int(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendUint)
{
	zval *handle_param = NULL, *u_param = NULL, _0, _1;
	zend_long handle, u;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(u)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &u_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, u);
	phpqt_qcborstreamwriter_append_uint(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, appendCharQsizetype)
{
	zval *handle_param = NULL, *str = NULL, str_sub, *size_param = NULL, _0, _1;
	zend_long handle, size;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &str, &size_param);
	if (!size_param) {
		size = -1;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, size);
	phpqt_qcborstreamwriter_append_char_qsizetype(&_0, str, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, startArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborstreamwriter_start_array(&_0);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, startArrayQuint64)
{
	zval *handle_param = NULL, *count_param = NULL, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qcborstreamwriter_start_array_quint64(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, endArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborstreamwriter_end_array(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, startMap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborstreamwriter_start_map(&_0);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, startMapQuint64)
{
	zval *handle_param = NULL, *count_param = NULL, _0, _1;
	zend_long handle, count;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &count_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, count);
	phpqt_qcborstreamwriter_start_map_quint64(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborStreamWriter_QCborStreamWriter, endMap)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborstreamwriter_end_map(&_0);
	RETURN_BOOL(r == 1);
}

