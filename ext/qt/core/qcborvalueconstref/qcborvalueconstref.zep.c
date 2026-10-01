
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
#include "src/core-qcborvalueconstref.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCborValueConstRef_QCborValueConstRef)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCborValueConstRef, QCborValueConstRef, qt, core_qcborvalueconstref_qcborvalueconstref, qt_core_qcborvalueconstref_qcborvalueconstref_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toCbor)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *opt = NULL, opt_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&opt_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(opt)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &opt);
	if (!opt) {
		opt = &opt_sub;
		opt = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborvalueconstref_to_cbor(&result, &_0, opt);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toCborQCborStreamWriterQCborValueEncodingOptions)
{
	zval *handle_param = NULL, *writer_param = NULL, *opt = NULL, opt_sub, __$null, _0, _1;
	zend_long handle, writer;

	ZVAL_UNDEF(&opt_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(writer)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(opt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &writer_param, &opt);
	if (!opt) {
		opt = &opt_sub;
		opt = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, writer);
	phpqt_qcborvalueconstref_to_cbor_q_cbor_stream_writer_q_cbor_value_encoding_options(&_0, &_1, opt);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toDiagnosticNotation)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *opt = NULL, opt_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&opt_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(opt)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &opt);
	if (!opt) {
		opt = &opt_sub;
		opt = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborvalueconstref_to_diagnostic_notation(&result, &_0, opt);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qcborvalueconstref_new(&_0));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_type(&_0));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isInteger)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_integer(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isByteArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_byte_array(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isString)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_string(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_array(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isMap)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_map(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isTag)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_tag(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isFalse)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_false(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isTrue)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_true(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isBool)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_bool(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isUndefined)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_undefined(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isDouble)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_double(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isDateTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_date_time(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isUrl)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_url(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isRegularExpression)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_regular_expression(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isUuid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_uuid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isInvalid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_invalid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isContainer)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_container(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isSimpleType)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalueconstref_is_simple_type(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, isSimpleTypeQCborSimpleType)
{
	zval *handle_param = NULL, *st_param = NULL, _0, _1;
	zend_long handle, st, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(st)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &st_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, st);
	r = phpqt_qcborvalueconstref_is_simple_type_q_cbor_simple_type(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toSimpleType)
{
	zval *handle_param = NULL, *defaultValue = NULL, defaultValue_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&defaultValue_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue);
	if (!defaultValue) {
		defaultValue = &defaultValue_sub;
		defaultValue = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_to_simple_type(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, tag)
{
	zval *handle_param = NULL, *defaultValue = NULL, defaultValue_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&defaultValue_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue);
	if (!defaultValue) {
		defaultValue = &defaultValue_sub;
		defaultValue = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_tag(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, taggedValue)
{
	zval *handle_param = NULL, *defaultValue = NULL, defaultValue_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&defaultValue_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue);
	if (!defaultValue) {
		defaultValue = &defaultValue_sub;
		defaultValue = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_tagged_value(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toInteger)
{
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle, defaultValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		defaultValue = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultValue);
	RETURN_LONG(phpqt_qcborvalueconstref_to_integer(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toBool)
{
	zend_bool defaultValue;
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		defaultValue = 0;
	} else {
		}
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (defaultValue ? 1 : 0));
	r = phpqt_qcborvalueconstref_to_bool(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toDouble)
{
	double defaultValue;
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		defaultValue = 0.0;
	} else {
		defaultValue = zephir_get_doubleval(defaultValue_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, defaultValue);
	RETURN_DOUBLE(phpqt_qcborvalueconstref_to_double(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval defaultValue;
	zval *handle_param = NULL, *defaultValue_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		ZEPHIR_INIT_VAR(&defaultValue);
		ZVAL_STRING(&defaultValue, "");
	} else {
		zephir_get_strval(&defaultValue, defaultValue_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborvalueconstref_to_byte_array(&result, &_0, &defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval defaultValue;
	zval *handle_param = NULL, *defaultValue_param = NULL, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&defaultValue);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &defaultValue_param);
	if (!defaultValue_param) {
		ZEPHIR_INIT_VAR(&defaultValue);
		ZVAL_STRING(&defaultValue, "");
	} else {
		zephir_get_strval(&defaultValue, defaultValue_param);
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborvalueconstref_to_string(&result, &_0, &defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toDateTime)
{
	zval *handle_param = NULL, *defaultValue = NULL, defaultValue_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&defaultValue_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue);
	if (!defaultValue) {
		defaultValue = &defaultValue_sub;
		defaultValue = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_to_date_time(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toUrl)
{
	zval *handle_param = NULL, *defaultValue = NULL, defaultValue_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&defaultValue_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue);
	if (!defaultValue) {
		defaultValue = &defaultValue_sub;
		defaultValue = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_to_url(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toRegularExpression)
{
	zval *handle_param = NULL, *defaultValue = NULL, defaultValue_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&defaultValue_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue);
	if (!defaultValue) {
		defaultValue = &defaultValue_sub;
		defaultValue = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_to_regular_expression(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toUuid)
{
	zval *handle_param = NULL, *defaultValue = NULL, defaultValue_sub, __$null, _0;
	zend_long handle;

	ZVAL_UNDEF(&defaultValue_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &handle_param, &defaultValue);
	if (!defaultValue) {
		defaultValue = &defaultValue_sub;
		defaultValue = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_to_uuid(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_to_array(&_0));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toArrayQCborArray)
{
	zval *handle_param = NULL, *a_param = NULL, _0, _1;
	zend_long handle, a;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &a_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, a);
	RETURN_LONG(phpqt_qcborvalueconstref_to_array_q_cbor_array(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toMap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_to_map(&_0));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toMapQCborMap)
{
	zval *handle_param = NULL, *m_param = NULL, _0, _1;
	zend_long handle, m;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(m)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &m_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, m);
	RETURN_LONG(phpqt_qcborvalueconstref_to_map_q_cbor_map(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, compare)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	RETURN_LONG(phpqt_qcborvalueconstref_compare(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toVariant)
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
	phpqt_qcborvalueconstref_to_variant(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborValueConstRef_QCborValueConstRef, toJsonValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalueconstref_to_json_value(&_0));
}

