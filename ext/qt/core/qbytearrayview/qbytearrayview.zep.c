
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
#include "src/core-qbytearrayview.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QByteArrayView_QByteArrayView)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QByteArrayView, QByteArrayView, qt, core_qbytearrayview_qbytearrayview, qt_core_qbytearrayview_qbytearrayview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long len;
	zval *data = NULL, data_sub, *len_param = NULL, result, _0;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &data, &len_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, len);
	phpqt_qbytearrayview_new_char_qsizetype(&result, data, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newUnsignedCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long len;
	zval *data = NULL, data_sub, *len_param = NULL, result, _0;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &data, &len_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, len);
	phpqt_qbytearrayview_new_unsigned_char_qsizetype(&result, data, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newChar)
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
	phpqt_qbytearrayview_new_char(&result, data);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ba_param = NULL, result;
	zval ba;

	ZVAL_UNDEF(&ba);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(ba)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ba_param);
	zephir_get_strval(&ba, ba_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_new_q_byte_array(&result, &ba);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, newQLatin1String)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *c_param = NULL, result;
	zval c;

	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &c_param);
	zephir_get_strval(&c, c_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_new_q_latin1_string(&result, &c);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_to_byte_array(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qbytearrayview_size(&self_));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, data)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_data(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, constData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_const_data(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, at)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZVAL_LONG(&_0, n);
	RETURN_MM_LONG(phpqt_qbytearrayview_at(&self_, &_0));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, first)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qbytearrayview_first(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, last)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qbytearrayview_last(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, sliced)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long pos;
	zval *self__param = NULL, *pos_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(pos)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &pos_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pos);
	phpqt_qbytearrayview_sliced(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, slicedQsizetypeQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long pos, n;
	zval *self__param = NULL, *pos_param = NULL, *n_param = NULL, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(pos)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &pos_param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pos);
	ZVAL_LONG(&_1, n);
	phpqt_qbytearrayview_sliced_qsizetype_qsizetype(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, chopped)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long len;
	zval *self__param = NULL, *len_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &len_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, len);
	phpqt_qbytearrayview_chopped(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, left)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qbytearrayview_left(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, right)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qbytearrayview_right(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, mid)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long pos, n;
	zval *self__param = NULL, *pos_param = NULL, *n_param = NULL, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(pos)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &pos_param, &n_param);
	zephir_get_strval(&self_, self__param);
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, pos);
	ZVAL_LONG(&_1, n);
	phpqt_qbytearrayview_mid(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, truncate)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qbytearrayview_truncate(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, chop)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *self__param = NULL, *n_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &n_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qbytearrayview_chop(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, trimmed)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_trimmed(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toShort)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qbytearrayview_to_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toUShort)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qbytearrayview_to_u_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qbytearrayview_to_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toUInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qbytearrayview_to_u_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qbytearrayview_to_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toULong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qbytearrayview_to_u_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toLongLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qbytearrayview_to_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toULongLong)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long base;
	zval *self__param = NULL, *ok = NULL, ok_sub, *base_param = NULL, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &self__param, &ok, &base_param);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, base);
	phpqt_qbytearrayview_to_u_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toFloat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *ok = NULL, ok_sub, __$null, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self__param, &ok);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_to_float(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, toDouble)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *ok = NULL, ok_sub, __$null, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ok_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(ok)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self__param, &ok);
	zephir_get_strval(&self_, self__param);
	if (!ok) {
		ok = &ok_sub;
		ok = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_to_double(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, startsWith)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *other_param = NULL;
	zval self_, other;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&other);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(other)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &other_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&other, other_param);
	r = phpqt_qbytearrayview_starts_with(&self_, &other);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, startsWithChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long c, r = 0;
	zval *self__param = NULL, *c_param = NULL, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	ZVAL_LONG(&_0, c);
	r = phpqt_qbytearrayview_starts_with_char(&self_, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, endsWith)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *other_param = NULL;
	zval self_, other;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&other);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(other)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &other_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&other, other_param);
	r = phpqt_qbytearrayview_ends_with(&self_, &other);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, endsWithChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long c, r = 0;
	zval *self__param = NULL, *c_param = NULL, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	ZVAL_LONG(&_0, c);
	r = phpqt_qbytearrayview_ends_with_char(&self_, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, indexOf)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *a_param = NULL, *from_param = NULL, _0;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &a_param, &from_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qbytearrayview_index_of(&self_, &a, &_0));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, indexOfCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ch, from;
	zval *self__param = NULL, *ch_param = NULL, *from_param = NULL, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(ch)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &ch_param, &from_param);
	zephir_get_strval(&self_, self__param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, ch);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qbytearrayview_index_of_char_qsizetype(&self_, &_0, &_1));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, contains)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *a_param = NULL;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &a_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	r = phpqt_qbytearrayview_contains(&self_, &a);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, containsChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long c, r = 0;
	zval *self__param = NULL, *c_param = NULL, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	ZVAL_LONG(&_0, c);
	r = phpqt_qbytearrayview_contains_char(&self_, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, lastIndexOf)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *a_param = NULL;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &a_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	RETURN_MM_LONG(phpqt_qbytearrayview_last_index_of(&self_, &a));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, lastIndexOfQByteArrayViewQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *a_param = NULL, *from_param = NULL, _0;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &a_param, &from_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qbytearrayview_last_index_of_q_byte_array_view_qsizetype(&self_, &a, &_0));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, lastIndexOfCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ch, from;
	zval *self__param = NULL, *ch_param = NULL, *from_param = NULL, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(ch)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &ch_param, &from_param);
	zephir_get_strval(&self_, self__param);
	if (!from_param) {
		from = -1;
	} else {
		}
	ZVAL_LONG(&_0, ch);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qbytearrayview_last_index_of_char_qsizetype(&self_, &_0, &_1));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, count)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *a_param = NULL;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &a_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	RETURN_MM_LONG(phpqt_qbytearrayview_count(&self_, &a));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, countChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ch;
	zval *self__param = NULL, *ch_param = NULL, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(ch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &ch_param);
	zephir_get_strval(&self_, self__param);
	ZVAL_LONG(&_0, ch);
	RETURN_MM_LONG(phpqt_qbytearrayview_count_char(&self_, &_0));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, compare)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *a_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &a_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qbytearrayview_compare(&self_, &a, cs));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, isValidUtf8)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qbytearrayview_is_valid_utf8(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, begin)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_begin(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, end)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_end(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, cbegin)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_cbegin(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, cend)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearrayview_cend(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, empty_)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qbytearrayview_empty(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, front)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qbytearrayview_front(&self_));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, back)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qbytearrayview_back(&self_));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, max_size)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qbytearrayview_max_size(&self_));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, isNull)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qbytearrayview_is_null(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, isEmpty)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	r = phpqt_qbytearrayview_is_empty(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, length)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qbytearrayview_length(&self_));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, first2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qbytearrayview_first2(&self_));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, last2)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(self_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &self__param);
	zephir_get_strval(&self_, self__param);
	RETURN_MM_LONG(phpqt_qbytearrayview_last2(&self_));
}

PHP_METHOD(Qt_Core_QByteArrayView_QByteArrayView, maxSize)
{

	RETURN_LONG(phpqt_qbytearrayview_max_size_2());
}

