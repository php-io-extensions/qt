
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
#include "src/core-qstringview.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QStringView_QStringView)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QStringView, QStringView, qt, core_qstringview_qstringview, qt_core_qstringview_qstringview_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QStringView_QStringView, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qstringview_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, newChar16TQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long len;
	zval *str = NULL, str_sub, *len_param = NULL, result, _0;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(str)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &str, &len_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, len);
	phpqt_qstringview_new_char16_t_qsizetype(&result, str, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, newQCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long len;
	zval *str = NULL, str_sub, *len_param = NULL, result, _0;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(str)
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &str, &len_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, len);
	phpqt_qstringview_new_q_char_qsizetype(&result, str, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, newChar16TChar16T)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *f = NULL, f_sub, *l = NULL, l_sub, result;

	ZVAL_UNDEF(&f_sub);
	ZVAL_UNDEF(&l_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(f)
		Z_PARAM_ZVAL(l)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &f, &l);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstringview_new_char16_t_char16_t(&result, f, l);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, newChar16T)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str = NULL, str_sub, result;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &str);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstringview_new_char16_t(&result, str);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *str_param = NULL, result;
	zval str;

	ZVAL_UNDEF(&str);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(str)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &str_param);
	zephir_get_strval(&str, str_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstringview_new_q_string(&result, &str);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toString)
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
	phpqt_qstringview_to_string(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, size)
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
	RETURN_MM_LONG(phpqt_qstringview_size(&self_));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toLatin1)
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
	phpqt_qstringview_to_latin1(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toUtf8)
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
	phpqt_qstringview_to_utf8(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toLocal8Bit)
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
	phpqt_qstringview_to_local8_bit(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toUcs4)
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
	phpqt_qstringview_to_ucs4(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, at)
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
	phpqt_qstringview_at(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, mid)
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
	phpqt_qstringview_mid(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, left)
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
	phpqt_qstringview_left(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, right)
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
	phpqt_qstringview_right(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, first)
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
	phpqt_qstringview_first(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, last)
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
	phpqt_qstringview_last(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, sliced)
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
	phpqt_qstringview_sliced(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, slicedQsizetypeQsizetype)
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
	phpqt_qstringview_sliced_qsizetype_qsizetype(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, chopped)
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
	phpqt_qstringview_chopped(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, truncate)
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
	phpqt_qstringview_truncate(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, chop)
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
	phpqt_qstringview_chop(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, trimmed)
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
	phpqt_qstringview_trimmed(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, compare)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *other_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, other;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&other);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &other_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&other, other_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstringview_compare(&self_, &other, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, compareQLatin1StringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *other_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, other;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&other);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(other)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &other_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&other, other_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstringview_compare_q_latin1_string_view_qt_case_sensitivity(&self_, &other, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, compareQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	RETURN_MM_LONG(phpqt_qstringview_compare_q_char(&self_, &c));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, compareQCharQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long cs;
	zval *self__param = NULL, *c_param = NULL, *cs_param = NULL, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_LONG(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &c_param, &cs_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	ZVAL_LONG(&_0, cs);
	RETURN_MM_LONG(phpqt_qstringview_compare_q_char_qt_case_sensitivity(&self_, &c, &_0));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, localeAwareCompare)
{
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
	RETURN_MM_LONG(phpqt_qstringview_locale_aware_compare(&self_, &other));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, startsWith)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qstringview_starts_with(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, startsWithQLatin1StringViewQtCaseSensitivity)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qstringview_starts_with_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, startsWithQChar)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	r = phpqt_qstringview_starts_with_q_char(&self_, &c);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, startsWithQCharQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long cs, r = 0;
	zval *self__param = NULL, *c_param = NULL, *cs_param = NULL, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_LONG(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &c_param, &cs_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	ZVAL_LONG(&_0, cs);
	r = phpqt_qstringview_starts_with_q_char_qt_case_sensitivity(&self_, &c, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, endsWith)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qstringview_ends_with(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, endsWithQLatin1StringViewQtCaseSensitivity)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qstringview_ends_with_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, endsWithQChar)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	r = phpqt_qstringview_ends_with_q_char(&self_, &c);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, endsWithQCharQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long cs, r = 0;
	zval *self__param = NULL, *c_param = NULL, *cs_param = NULL, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_LONG(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &c_param, &cs_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	ZVAL_LONG(&_0, cs);
	r = phpqt_qstringview_ends_with_q_char_qt_case_sensitivity(&self_, &c, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, indexOf)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *c_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &c_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qstringview_index_of(&self_, &c, &_0, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, indexOfQStringViewQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *s_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &s_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qstringview_index_of_q_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, indexOfQLatin1StringViewQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *s_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &s_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qstringview_index_of_q_latin1_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, contains)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &c_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qstringview_contains(&self_, &c, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, containsQStringViewQtCaseSensitivity)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qstringview_contains_q_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, containsQLatin1StringViewQtCaseSensitivity)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	r = phpqt_qstringview_contains_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, count)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &c_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstringview_count(&self_, &c, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, countQStringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstringview_count_q_string_view_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, countQLatin1StringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstringview_count_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOf)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &c_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstringview_last_index_of(&self_, &c, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQCharQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *c_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
		Z_PARAM_LONG(from)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &self__param, &c_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qstringview_last_index_of_q_char_qsizetype_qt_case_sensitivity(&self_, &c, &_0, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQStringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstringview_last_index_of_q_string_view_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQStringViewQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *s_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_LONG(from)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &self__param, &s_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qstringview_last_index_of_q_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQLatin1StringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &s_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstringview_last_index_of_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQLatin1StringViewQsizetypeQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *s_param = NULL, *from_param = NULL, *cs = NULL, cs_sub, __$null, _0;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
		Z_PARAM_LONG(from)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &self__param, &s_param, &from_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qstringview_last_index_of_q_latin1_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, indexOfQRegularExpressionQsizetypeQRegularExpressionMatch)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long re, from, rmatch;
	zval *self__param = NULL, *re_param = NULL, *from_param = NULL, *rmatch_param = NULL, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(re)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
		Z_PARAM_LONG(rmatch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &re_param, &from_param, &rmatch_param);
	zephir_get_strval(&self_, self__param);
	if (!from_param) {
		from = 0;
	} else {
		}
	if (!rmatch_param) {
		rmatch = 0;
	} else {
		}
	ZVAL_LONG(&_0, re);
	ZVAL_LONG(&_1, from);
	ZVAL_LONG(&_2, rmatch);
	RETURN_MM_LONG(phpqt_qstringview_index_of_q_regular_expression_qsizetype_q_regular_expression_match(&self_, &_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, lastIndexOfQRegularExpressionQsizetypeQRegularExpressionMatch)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long re, from, rmatch;
	zval *self__param = NULL, *re_param = NULL, *from_param = NULL, *rmatch_param = NULL, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(re)
		Z_PARAM_LONG(from)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(rmatch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 1, &self__param, &re_param, &from_param, &rmatch_param);
	zephir_get_strval(&self_, self__param);
	if (!rmatch_param) {
		rmatch = 0;
	} else {
		}
	ZVAL_LONG(&_0, re);
	ZVAL_LONG(&_1, from);
	ZVAL_LONG(&_2, rmatch);
	RETURN_MM_LONG(phpqt_qstringview_last_index_of_q_regular_expression_qsizetype_q_regular_expression_match(&self_, &_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, containsQRegularExpressionQRegularExpressionMatch)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long re, rmatch, r = 0;
	zval *self__param = NULL, *re_param = NULL, *rmatch_param = NULL, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(re)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(rmatch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &re_param, &rmatch_param);
	zephir_get_strval(&self_, self__param);
	if (!rmatch_param) {
		rmatch = 0;
	} else {
		}
	ZVAL_LONG(&_0, re);
	ZVAL_LONG(&_1, rmatch);
	r = phpqt_qstringview_contains_q_regular_expression_q_regular_expression_match(&self_, &_0, &_1);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, countQRegularExpression)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long re;
	zval *self__param = NULL, *re_param = NULL, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(re)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &re_param);
	zephir_get_strval(&self_, self__param);
	ZVAL_LONG(&_0, re);
	RETURN_MM_LONG(phpqt_qstringview_count_q_regular_expression(&self_, &_0));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, isRightToLeft)
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
	r = phpqt_qstringview_is_right_to_left(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, isValidUtf16)
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
	r = phpqt_qstringview_is_valid_utf16(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, isUpper)
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
	r = phpqt_qstringview_is_upper(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, isLower)
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
	r = phpqt_qstringview_is_lower(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toShort)
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
	phpqt_qstringview_to_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toUShort)
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
	phpqt_qstringview_to_u_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toInt)
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
	phpqt_qstringview_to_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toUInt)
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
	phpqt_qstringview_to_u_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toLong)
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
	phpqt_qstringview_to_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toULong)
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
	phpqt_qstringview_to_u_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toLongLong)
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
	phpqt_qstringview_to_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toULongLong)
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
	phpqt_qstringview_to_u_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toFloat)
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
	phpqt_qstringview_to_float(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toDouble)
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
	phpqt_qstringview_to_double(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, toWCharArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *array_ = NULL, array__sub, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&array__sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_ZVAL(array_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &array_);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstringview_to_w_char_array(&result, &self_, array_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, split)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *sep_param = NULL, *behavior = NULL, behavior_sub, *cs = NULL, cs_sub, __$null, result;
	zval self_, sep;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&sep);
	ZVAL_UNDEF(&behavior_sub);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(sep)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(behavior)
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &sep_param, &behavior, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&sep, sep_param);
	if (!behavior) {
		behavior = &behavior_sub;
		behavior = &__$null;
	}
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstringview_split(&result, &self_, &sep, behavior, cs);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, splitQCharQtSplitBehaviorQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *sep_param = NULL, *behavior = NULL, behavior_sub, *cs = NULL, cs_sub, __$null, result;
	zval self_, sep;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&sep);
	ZVAL_UNDEF(&behavior_sub);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(sep)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(behavior)
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &sep_param, &behavior, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&sep, sep_param);
	if (!behavior) {
		behavior = &behavior_sub;
		behavior = &__$null;
	}
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstringview_split_q_char_qt_split_behavior_qt_case_sensitivity(&result, &self_, &sep, behavior, cs);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, splitQRegularExpressionQtSplitBehavior)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long sep;
	zval *self__param = NULL, *sep_param = NULL, *behavior = NULL, behavior_sub, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&behavior_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(sep)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(behavior)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &sep_param, &behavior);
	zephir_get_strval(&self_, self__param);
	if (!behavior) {
		behavior = &behavior_sub;
		behavior = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, sep);
	phpqt_qstringview_split_q_regular_expression_qt_split_behavior(&result, &self_, &_0, behavior);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, empty_)
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
	r = phpqt_qstringview_empty(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, front)
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
	phpqt_qstringview_front(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, back)
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
	phpqt_qstringview_back(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, max_size)
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
	RETURN_MM_LONG(phpqt_qstringview_max_size(&self_));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, isNull)
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
	r = phpqt_qstringview_is_null(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, isEmpty)
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
	r = phpqt_qstringview_is_empty(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, length)
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
	RETURN_MM_LONG(phpqt_qstringview_length(&self_));
}

PHP_METHOD(Qt_Core_QStringView_QStringView, first2)
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
	phpqt_qstringview_first2(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, last2)
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
	phpqt_qstringview_last2(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QStringView_QStringView, maxSize)
{

	RETURN_LONG(phpqt_qstringview_max_size_2());
}

