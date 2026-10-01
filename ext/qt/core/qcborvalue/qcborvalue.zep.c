
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
#include "src/core-qcborvalue.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/string.h"


ZEPHIR_INIT_CLASS(Qt_Core_QCborValue_QCborValue)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QCborValue, QCborValue, qt, core_qcborvalue_qcborvalue, qt_core_qcborvalue_qcborvalue_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, staticMetaObject)
{

	RETURN_LONG(phpqt_qcborvalue_static_meta_object());
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborvalue_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, new_)
{

	RETURN_LONG(phpqt_qcborvalue_new());
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborValueType)
{
	zval *t__param = NULL, _0;
	zend_long t_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(t_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &t__param);
	ZVAL_LONG(&_0, t_);
	RETURN_LONG(phpqt_qcborvalue_new_q_cbor_value_type(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newBool)
{
	zval *b__param = NULL, _0;
	zend_bool b_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(b_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &b__param);
	ZVAL_BOOL(&_0, (b_ ? 1 : 0));
	RETURN_LONG(phpqt_qcborvalue_new_bool(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newInt)
{
	zval *i_param = NULL, _0;
	zend_long i;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &i_param);
	ZVAL_LONG(&_0, i);
	RETURN_LONG(phpqt_qcborvalue_new_int(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newUnsignedInt)
{
	zval *u_param = NULL, _0;
	zend_long u;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(u)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &u_param);
	ZVAL_LONG(&_0, u);
	RETURN_LONG(phpqt_qcborvalue_new_unsigned_int(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQint64)
{
	zval *i_param = NULL, _0;
	zend_long i;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &i_param);
	ZVAL_LONG(&_0, i);
	RETURN_LONG(phpqt_qcborvalue_new_qint64(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newDouble)
{
	zval *v_param = NULL, _0;
	double v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	v = zephir_get_doubleval(v_param);
	ZVAL_DOUBLE(&_0, v);
	RETURN_LONG(phpqt_qcborvalue_new_double(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborSimpleType)
{
	zval *st_param = NULL, _0;
	zend_long st;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(st)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &st_param);
	ZVAL_LONG(&_0, st);
	RETURN_LONG(phpqt_qcborvalue_new_q_cbor_simple_type(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ba_param = NULL;
	zval ba;

	ZVAL_UNDEF(&ba);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(ba)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ba_param);
	zephir_get_strval(&ba, ba_param);
	RETURN_MM_LONG(phpqt_qcborvalue_new_q_byte_array(&ba));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s_param = NULL;
	zval s;

	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &s_param);
	zephir_get_strval(&s, s_param);
	RETURN_MM_LONG(phpqt_qcborvalue_new_q_string(&s));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s_param = NULL;
	zval s;

	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &s_param);
	zephir_get_strval(&s, s_param);
	RETURN_MM_LONG(phpqt_qcborvalue_new_q_string_view(&s));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s_param = NULL;
	zval s;

	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &s_param);
	zephir_get_strval(&s, s_param);
	RETURN_MM_LONG(phpqt_qcborvalue_new_q_latin1_string_view(&s));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newChar)
{
	zval *s = NULL, s_sub;

	ZVAL_UNDEF(&s_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(s)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &s);
	RETURN_LONG(phpqt_qcborvalue_new_char(s));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborArray)
{
	zval *a_param = NULL, _0;
	zend_long a;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(a)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &a_param);
	ZVAL_LONG(&_0, a);
	RETURN_LONG(phpqt_qcborvalue_new_q_cbor_array(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborMap)
{
	zval *m_param = NULL, _0;
	zend_long m;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(m)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &m_param);
	ZVAL_LONG(&_0, m);
	RETURN_LONG(phpqt_qcborvalue_new_q_cbor_map(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborTagQCborValue)
{
	zval *tag_param = NULL, *taggedValue = NULL, taggedValue_sub, __$null, _0;
	zend_long tag;

	ZVAL_UNDEF(&taggedValue_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(tag)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(taggedValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &tag_param, &taggedValue);
	if (!taggedValue) {
		taggedValue = &taggedValue_sub;
		taggedValue = &__$null;
	}
	ZVAL_LONG(&_0, tag);
	RETURN_LONG(phpqt_qcborvalue_new_q_cbor_tag_q_cbor_value(&_0, taggedValue));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborKnownTagsQCborValue)
{
	zval *t__param = NULL, *tv = NULL, tv_sub, __$null, _0;
	zend_long t_;

	ZVAL_UNDEF(&tv_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(t_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(tv)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 1, &t__param, &tv);
	if (!tv) {
		tv = &tv_sub;
		tv = &__$null;
	}
	ZVAL_LONG(&_0, t_);
	RETURN_LONG(phpqt_qcborvalue_new_q_cbor_known_tags_q_cbor_value(&_0, tv));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQDateTime)
{
	zval *dt_param = NULL, _0;
	zend_long dt;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(dt)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &dt_param);
	ZVAL_LONG(&_0, dt);
	RETURN_LONG(phpqt_qcborvalue_new_q_date_time(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQUrl)
{
	zval *url_param = NULL, _0;
	zend_long url;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(url)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &url_param);
	ZVAL_LONG(&_0, url);
	RETURN_LONG(phpqt_qcborvalue_new_q_url(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQRegularExpression)
{
	zval *rx_param = NULL, _0;
	zend_long rx;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(rx)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &rx_param);
	ZVAL_LONG(&_0, rx);
	RETURN_LONG(phpqt_qcborvalue_new_q_regular_expression(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQUuid)
{
	zval *uuid_param = NULL, _0;
	zend_long uuid;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(uuid)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &uuid_param);
	ZVAL_LONG(&_0, uuid);
	RETURN_LONG(phpqt_qcborvalue_new_q_uuid(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, newQCborValue)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qcborvalue_new_q_cbor_value(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, swap)
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
	phpqt_qcborvalue_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalue_type(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isInteger)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_integer(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isByteArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_byte_array(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isString)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_string(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_array(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isMap)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_map(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isTag)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_tag(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isFalse)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_false(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isTrue)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_true(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isBool)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_bool(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isUndefined)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_undefined(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isDouble)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_double(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isDateTime)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_date_time(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isUrl)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_url(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isRegularExpression)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_regular_expression(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isUuid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_uuid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isInvalid)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_invalid(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isContainer)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_container(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isSimpleType)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qcborvalue_is_simple_type(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, isSimpleTypeQCborSimpleType)
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
	r = phpqt_qcborvalue_is_simple_type_q_cbor_simple_type(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toSimpleType)
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
	RETURN_LONG(phpqt_qcborvalue_to_simple_type(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toInteger)
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
	RETURN_LONG(phpqt_qcborvalue_to_integer(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toBool)
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
	r = phpqt_qcborvalue_to_bool(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toDouble)
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
	RETURN_DOUBLE(phpqt_qcborvalue_to_double(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, tag)
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
	RETURN_LONG(phpqt_qcborvalue_tag(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, taggedValue)
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
	RETURN_LONG(phpqt_qcborvalue_tagged_value(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toByteArray)
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
	phpqt_qcborvalue_to_byte_array(&result, &_0, &defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toString)
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
	phpqt_qcborvalue_to_string(&result, &_0, &defaultValue);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toDateTime)
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
	RETURN_LONG(phpqt_qcborvalue_to_date_time(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toUrl)
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
	RETURN_LONG(phpqt_qcborvalue_to_url(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toRegularExpression)
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
	RETURN_LONG(phpqt_qcborvalue_to_regular_expression(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toUuid)
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
	RETURN_LONG(phpqt_qcborvalue_to_uuid(&_0, defaultValue));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toArray)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalue_to_array(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toArrayQCborArray)
{
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle, defaultValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &defaultValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultValue);
	RETURN_LONG(phpqt_qcborvalue_to_array_q_cbor_array(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toMap)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalue_to_map(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toMapQCborMap)
{
	zval *handle_param = NULL, *defaultValue_param = NULL, _0, _1;
	zend_long handle, defaultValue;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(defaultValue)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &defaultValue_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, defaultValue);
	RETURN_LONG(phpqt_qcborvalue_to_map_q_cbor_map(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, compare)
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
	RETURN_LONG(phpqt_qcborvalue_compare(&_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromVariant)
{
	zval *variant = NULL, variant_sub;

	ZVAL_UNDEF(&variant_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(variant)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &variant);
	RETURN_LONG(phpqt_qcborvalue_from_variant(variant));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toVariant)
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
	phpqt_qcborvalue_to_variant(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromJsonValue)
{
	zval *v_param = NULL, _0;
	zend_long v;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(v)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &v_param);
	ZVAL_LONG(&_0, v);
	RETURN_LONG(phpqt_qcborvalue_from_json_value(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toJsonValue)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qcborvalue_to_json_value(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromCbor)
{
	zval *reader_param = NULL, _0;
	zend_long reader;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(reader)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &reader_param);
	ZVAL_LONG(&_0, reader);
	RETURN_LONG(phpqt_qcborvalue_from_cbor(&_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromCborQByteArrayQCborParserError)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long error;
	zval *ba_param = NULL, *error_param = NULL, _0;
	zval ba;

	ZVAL_UNDEF(&ba);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(ba)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &ba_param, &error_param);
	zephir_get_strval(&ba, ba_param);
	if (!error_param) {
		error = 0;
	} else {
		}
	ZVAL_LONG(&_0, error);
	RETURN_MM_LONG(phpqt_qcborvalue_from_cbor_q_byte_array_q_cbor_parser_error(&ba, &_0));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromCborCharQsizetypeQCborParserError)
{
	zend_long len, error;
	zval *data = NULL, data_sub, *len_param = NULL, *error_param = NULL, _0, _1;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(len)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &data, &len_param, &error_param);
	if (!error_param) {
		error = 0;
	} else {
		}
	ZVAL_LONG(&_0, len);
	ZVAL_LONG(&_1, error);
	RETURN_LONG(phpqt_qcborvalue_from_cbor_char_qsizetype_q_cbor_parser_error(data, &_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, fromCborQuint8QsizetypeQCborParserError)
{
	zend_long len, error;
	zval *data = NULL, data_sub, *len_param = NULL, *error_param = NULL, _0, _1;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(len)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(error)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &data, &len_param, &error_param);
	if (!error_param) {
		error = 0;
	} else {
		}
	ZVAL_LONG(&_0, len);
	ZVAL_LONG(&_1, error);
	RETURN_LONG(phpqt_qcborvalue_from_cbor_quint8_qsizetype_q_cbor_parser_error(data, &_0, &_1));
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toCbor)
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
	phpqt_qcborvalue_to_cbor(&result, &_0, opt);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toCborQCborStreamWriterQCborValueEncodingOptions)
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
	phpqt_qcborvalue_to_cbor_q_cbor_stream_writer_q_cbor_value_encoding_options(&_0, &_1, opt);
}

PHP_METHOD(Qt_Core_QCborValue_QCborValue, toDiagnosticNotation)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *opts = NULL, opts_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&opts_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(opts)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &opts);
	if (!opts) {
		opts = &opts_sub;
		opts = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qcborvalue_to_diagnostic_notation(&result, &_0, opts);
	RETURN_CCTOR(&result);
}

