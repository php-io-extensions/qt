
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
#include "src/core-qstring.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QString_QString)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QString, QString, qt, core_qstring_qstring, qt_core_qstring_qstring_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QString_QString, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, newQCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *unicode = NULL, unicode_sub, *size_param = NULL, result, _0;

	ZVAL_UNDEF(&unicode_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(unicode)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &unicode, &size_param);
	if (!size_param) {
		size = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_new_q_char_qsizetype(&result, unicode, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, newQChar)
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
	phpqt_qstring_new_q_char(&result, &c);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, newQsizetypeQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval c;
	zval *size_param = NULL, *c_param = NULL, result, _0;
	zend_long size;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&c);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(size)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &size_param, &c_param);
	zephir_get_strval(&c, c_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_new_qsizetype_q_char(&result, &_0, &c);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, newQLatin1StringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *latin1_param = NULL, result;
	zval latin1;

	ZVAL_UNDEF(&latin1);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(latin1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &latin1_param);
	zephir_get_strval(&latin1, latin1_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_new_q_latin1_string_view(&result, &latin1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, newQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *sv_param = NULL, result;
	zval sv;

	ZVAL_UNDEF(&sv);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(sv)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &sv_param);
	zephir_get_strval(&sv, sv_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_new_q_string_view(&result, &sv);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, newQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, result;
	zval arg0;

	ZVAL_UNDEF(&arg0);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(arg0)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &arg0_param);
	zephir_get_strval(&arg0, arg0_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_new_q_string(&result, &arg0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, swap)
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
	phpqt_qstring_swap(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, maxSize)
{

	RETURN_LONG(phpqt_qstring_max_size());
}

PHP_METHOD(Qt_Core_QString_QString, size)
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
	RETURN_MM_LONG(phpqt_qstring_size(&self_));
}

PHP_METHOD(Qt_Core_QString_QString, length)
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
	RETURN_MM_LONG(phpqt_qstring_length(&self_));
}

PHP_METHOD(Qt_Core_QString_QString, isEmpty)
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
	r = phpqt_qstring_is_empty(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, resize)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *self__param = NULL, *size_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &size_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_resize(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, resizeQsizetypeQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *self__param = NULL, *size_param = NULL, *fillChar_param = NULL, result, _0;
	zval self_, fillChar;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(size)
		Z_PARAM_STR(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &size_param, &fillChar_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&fillChar, fillChar_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_resize_qsizetype_q_char(&result, &self_, &_0, &fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, resizeForOverwrite)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *self__param = NULL, *size_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &size_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_resize_for_overwrite(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, truncate)
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
	phpqt_qstring_truncate(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, chop)
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
	phpqt_qstring_chop(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, capacity)
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
	RETURN_MM_LONG(phpqt_qstring_capacity(&self_));
}

PHP_METHOD(Qt_Core_QString_QString, reserve)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *self__param = NULL, *size_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &size_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_reserve(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, squeeze)
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
	phpqt_qstring_squeeze(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, detach)
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
	phpqt_qstring_detach(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, isDetached)
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
	r = phpqt_qstring_is_detached(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, isSharedWith)
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
	r = phpqt_qstring_is_shared_with(&self_, &other);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, clear)
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
	phpqt_qstring_clear(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, at)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long i;
	zval *self__param = NULL, *i_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &i_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, i);
	phpqt_qstring_at(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, front)
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
	phpqt_qstring_front(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, back)
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
	phpqt_qstring_back(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, arg)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long a, fieldwidth, base;
	zval *self__param = NULL, *a_param = NULL, *fieldwidth_param = NULL, *base_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldwidth)
		Z_PARAM_LONG(base)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &self__param, &a_param, &fieldwidth_param, &base_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	if (!fieldwidth_param) {
		fieldwidth = 0;
	} else {
		}
	if (!base_param) {
		base = 10;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, fieldwidth);
	ZVAL_LONG(&_2, base);
	phpqt_qstring_arg(&result, &self_, &_0, &_1, &_2, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argQulonglongIntIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long a, fieldwidth, base;
	zval *self__param = NULL, *a_param = NULL, *fieldwidth_param = NULL, *base_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldwidth)
		Z_PARAM_LONG(base)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &self__param, &a_param, &fieldwidth_param, &base_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	if (!fieldwidth_param) {
		fieldwidth = 0;
	} else {
		}
	if (!base_param) {
		base = 10;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, fieldwidth);
	ZVAL_LONG(&_2, base);
	phpqt_qstring_arg_qulonglong_int_int_q_char(&result, &self_, &_0, &_1, &_2, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argLongIntIntIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long a, fieldwidth, base;
	zval *self__param = NULL, *a_param = NULL, *fieldwidth_param = NULL, *base_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldwidth)
		Z_PARAM_LONG(base)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &self__param, &a_param, &fieldwidth_param, &base_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	if (!fieldwidth_param) {
		fieldwidth = 0;
	} else {
		}
	if (!base_param) {
		base = 10;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, fieldwidth);
	ZVAL_LONG(&_2, base);
	phpqt_qstring_arg_long_int_int_int_q_char(&result, &self_, &_0, &_1, &_2, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argUlongIntIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long a, fieldwidth, base;
	zval *self__param = NULL, *a_param = NULL, *fieldwidth_param = NULL, *base_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldwidth)
		Z_PARAM_LONG(base)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &self__param, &a_param, &fieldwidth_param, &base_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	if (!fieldwidth_param) {
		fieldwidth = 0;
	} else {
		}
	if (!base_param) {
		base = 10;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, fieldwidth);
	ZVAL_LONG(&_2, base);
	phpqt_qstring_arg_ulong_int_int_q_char(&result, &self_, &_0, &_1, &_2, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argIntIntIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long a, fieldWidth, base;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *base_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_LONG(base)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &self__param, &a_param, &fieldWidth_param, &base_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!base_param) {
		base = 10;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, fieldWidth);
	ZVAL_LONG(&_2, base);
	phpqt_qstring_arg_int_int_int_q_char(&result, &self_, &_0, &_1, &_2, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argUintIntIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long a, fieldWidth, base;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *base_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_LONG(base)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &self__param, &a_param, &fieldWidth_param, &base_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!base_param) {
		base = 10;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, fieldWidth);
	ZVAL_LONG(&_2, base);
	phpqt_qstring_arg_uint_int_int_q_char(&result, &self_, &_0, &_1, &_2, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argShortIntIntIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long a, fieldWidth, base;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *base_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_LONG(base)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &self__param, &a_param, &fieldWidth_param, &base_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!base_param) {
		base = 10;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, fieldWidth);
	ZVAL_LONG(&_2, base);
	phpqt_qstring_arg_short_int_int_int_q_char(&result, &self_, &_0, &_1, &_2, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argUshortIntIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long a, fieldWidth, base;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *base_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_LONG(base)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 3, &self__param, &a_param, &fieldWidth_param, &base_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!base_param) {
		base = 10;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, fieldWidth);
	ZVAL_LONG(&_2, base);
	phpqt_qstring_arg_ushort_int_int_q_char(&result, &self_, &_0, &_1, &_2, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argDoubleIntCharIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long fieldWidth, precision;
	double a;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *format = NULL, format_sub, *precision_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 6)
		Z_PARAM_STR(self_)
		Z_PARAM_ZVAL(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_LONG(precision)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 4, &self__param, &a_param, &fieldWidth_param, &format, &precision_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	a = zephir_get_doubleval(a_param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!precision_param) {
		precision = -1;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, a);
	ZVAL_LONG(&_1, fieldWidth);
	ZVAL_LONG(&_2, precision);
	phpqt_qstring_arg_double_int_char_int_q_char(&result, &self_, &_0, &_1, format, &_2, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argCharIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long a, fieldWidth;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &a_param, &fieldWidth_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, a);
	ZVAL_LONG(&_1, fieldWidth);
	phpqt_qstring_arg_char_int_q_char(&result, &self_, &_0, &_1, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argQCharIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long fieldWidth;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &a_param, &fieldWidth_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, fieldWidth);
	phpqt_qstring_arg_q_char_int_q_char(&result, &self_, &a, &_0, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argQStringIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long fieldWidth;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &a_param, &fieldWidth_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, fieldWidth);
	phpqt_qstring_arg_q_string_int_q_char(&result, &self_, &a, &_0, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argQStringViewIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long fieldWidth;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &a_param, &fieldWidth_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, fieldWidth);
	phpqt_qstring_arg_q_string_view_int_q_char(&result, &self_, &a, &_0, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, argQLatin1StringViewIntQChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long fieldWidth;
	zval *self__param = NULL, *a_param = NULL, *fieldWidth_param = NULL, *fillChar = NULL, fillChar_sub, __$null, result, _0;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&fillChar_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(fieldWidth)
		Z_PARAM_ZVAL_OR_NULL(fillChar)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &a_param, &fieldWidth_param, &fillChar);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	if (!fieldWidth_param) {
		fieldWidth = 0;
	} else {
		}
	if (!fillChar) {
		fillChar = &fillChar_sub;
		fillChar = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, fieldWidth);
	phpqt_qstring_arg_q_latin1_string_view_int_q_char(&result, &self_, &a, &_0, fillChar);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, asprintf)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *format = NULL, format_sub, result;

	ZVAL_UNDEF(&format_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(format)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &format);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_asprintf(&result, format);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, indexOf)
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
	RETURN_MM_LONG(phpqt_qstring_index_of(&self_, &c, &_0, cs));
}

PHP_METHOD(Qt_Core_QString_QString, indexOfQLatin1StringViewQsizetypeQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_index_of_q_latin1_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QString_QString, indexOfQStringQsizetypeQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_index_of_q_string_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QString_QString, indexOfQStringViewQsizetypeQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_index_of_q_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QString_QString, lastIndexOf)
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
	RETURN_MM_LONG(phpqt_qstring_last_index_of(&self_, &c, cs));
}

PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQCharQsizetypeQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_last_index_of_q_char_qsizetype_qt_case_sensitivity(&self_, &c, &_0, cs));
}

PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQLatin1StringViewQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_last_index_of_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQLatin1StringViewQsizetypeQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_last_index_of_q_latin1_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQStringQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_last_index_of_q_string_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQStringQsizetypeQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_last_index_of_q_string_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQStringViewQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_last_index_of_q_string_view_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQStringViewQsizetypeQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_last_index_of_q_string_view_qsizetype_qt_case_sensitivity(&self_, &s, &_0, cs));
}

PHP_METHOD(Qt_Core_QString_QString, contains)
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
	r = phpqt_qstring_contains(&self_, &c, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, containsQStringQtCaseSensitivity)
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
	r = phpqt_qstring_contains_q_string_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, containsQLatin1StringViewQtCaseSensitivity)
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
	r = phpqt_qstring_contains_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, containsQStringViewQtCaseSensitivity)
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
	r = phpqt_qstring_contains_q_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, count)
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
	RETURN_MM_LONG(phpqt_qstring_count(&self_, &c, cs));
}

PHP_METHOD(Qt_Core_QString_QString, countQStringQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_count_q_string_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QString_QString, countQStringViewQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_count_q_string_view_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QString_QString, indexOfQRegularExpressionQsizetypeQRegularExpressionMatch)
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
	RETURN_MM_LONG(phpqt_qstring_index_of_q_regular_expression_qsizetype_q_regular_expression_match(&self_, &_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QString_QString, lastIndexOfQRegularExpressionQsizetypeQRegularExpressionMatch)
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
	RETURN_MM_LONG(phpqt_qstring_last_index_of_q_regular_expression_qsizetype_q_regular_expression_match(&self_, &_0, &_1, &_2));
}

PHP_METHOD(Qt_Core_QString_QString, containsQRegularExpressionQRegularExpressionMatch)
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
	r = phpqt_qstring_contains_q_regular_expression_q_regular_expression_match(&self_, &_0, &_1);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, countQRegularExpression)
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
	RETURN_MM_LONG(phpqt_qstring_count_q_regular_expression(&self_, &_0));
}

PHP_METHOD(Qt_Core_QString_QString, section)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long start, end;
	zval *self__param = NULL, *sep_param = NULL, *start_param = NULL, *end_param = NULL, *flags = NULL, flags_sub, __$null, result, _0, _1;
	zval self_, sep;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&sep);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(sep)
		Z_PARAM_LONG(start)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(end)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &self__param, &sep_param, &start_param, &end_param, &flags);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&sep, sep_param);
	if (!end_param) {
		end = -1;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, start);
	ZVAL_LONG(&_1, end);
	phpqt_qstring_section(&result, &self_, &sep, &_0, &_1, flags);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, sectionQStringQsizetypeQsizetypeQStringSectionFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long start, end;
	zval *self__param = NULL, *in_sep_param = NULL, *start_param = NULL, *end_param = NULL, *flags = NULL, flags_sub, __$null, result, _0, _1;
	zval self_, in_sep;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&in_sep);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(in_sep)
		Z_PARAM_LONG(start)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(end)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &self__param, &in_sep_param, &start_param, &end_param, &flags);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&in_sep, in_sep_param);
	if (!end_param) {
		end = -1;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, start);
	ZVAL_LONG(&_1, end);
	phpqt_qstring_section_q_string_qsizetype_qsizetype_q_string_section_flags(&result, &self_, &in_sep, &_0, &_1, flags);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, sectionQRegularExpressionQsizetypeQsizetypeQStringSectionFlags)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long re, start, end;
	zval *self__param = NULL, *re_param = NULL, *start_param = NULL, *end_param = NULL, *flags = NULL, flags_sub, __$null, result, _0, _1, _2;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&flags_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(re)
		Z_PARAM_LONG(start)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(end)
		Z_PARAM_ZVAL_OR_NULL(flags)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &self__param, &re_param, &start_param, &end_param, &flags);
	zephir_get_strval(&self_, self__param);
	if (!end_param) {
		end = -1;
	} else {
		}
	if (!flags) {
		flags = &flags_sub;
		flags = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, re);
	ZVAL_LONG(&_1, start);
	ZVAL_LONG(&_2, end);
	phpqt_qstring_section_q_regular_expression_qsizetype_qsizetype_q_string_section_flags(&result, &self_, &_0, &_1, &_2, flags);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, left)
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
	phpqt_qstring_left(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, right)
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
	phpqt_qstring_right(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, mid)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long position, n;
	zval *self__param = NULL, *position_param = NULL, *n_param = NULL, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(position)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &position_param, &n_param);
	zephir_get_strval(&self_, self__param);
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, position);
	ZVAL_LONG(&_1, n);
	phpqt_qstring_mid(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, first)
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
	phpqt_qstring_first(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, last)
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
	phpqt_qstring_last(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, sliced)
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
	phpqt_qstring_sliced(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, slicedQsizetypeQsizetype)
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
	phpqt_qstring_sliced_qsizetype_qsizetype(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, chopped)
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
	phpqt_qstring_chopped(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, startsWith)
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
	r = phpqt_qstring_starts_with(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, startsWithQStringViewQtCaseSensitivity)
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
	r = phpqt_qstring_starts_with_q_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, startsWithQLatin1StringViewQtCaseSensitivity)
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
	r = phpqt_qstring_starts_with_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, startsWithQCharQtCaseSensitivity)
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
	r = phpqt_qstring_starts_with_q_char_qt_case_sensitivity(&self_, &c, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, endsWith)
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
	r = phpqt_qstring_ends_with(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, endsWithQStringViewQtCaseSensitivity)
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
	r = phpqt_qstring_ends_with_q_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, endsWithQLatin1StringViewQtCaseSensitivity)
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
	r = phpqt_qstring_ends_with_q_latin1_string_view_qt_case_sensitivity(&self_, &s, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, endsWithQCharQtCaseSensitivity)
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
	r = phpqt_qstring_ends_with_q_char_qt_case_sensitivity(&self_, &c, cs);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, isUpper)
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
	r = phpqt_qstring_is_upper(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, isLower)
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
	r = phpqt_qstring_is_lower(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, leftJustified)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool trunc;
	zend_long width;
	zval *self__param = NULL, *width_param = NULL, *fill = NULL, fill_sub, *trunc_param = NULL, __$null, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fill_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(width)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(fill)
		Z_PARAM_BOOL(trunc)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &width_param, &fill, &trunc_param);
	zephir_get_strval(&self_, self__param);
	if (!fill) {
		fill = &fill_sub;
		fill = &__$null;
	}
	if (!trunc_param) {
		trunc = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, width);
	ZVAL_BOOL(&_1, (trunc ? 1 : 0));
	phpqt_qstring_left_justified(&result, &self_, &_0, fill, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, rightJustified)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool trunc;
	zend_long width;
	zval *self__param = NULL, *width_param = NULL, *fill = NULL, fill_sub, *trunc_param = NULL, __$null, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&fill_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(width)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(fill)
		Z_PARAM_BOOL(trunc)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &width_param, &fill, &trunc_param);
	zephir_get_strval(&self_, self__param);
	if (!fill) {
		fill = &fill_sub;
		fill = &__$null;
	}
	if (!trunc_param) {
		trunc = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, width);
	ZVAL_BOOL(&_1, (trunc ? 1 : 0));
	phpqt_qstring_right_justified(&result, &self_, &_0, fill, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toLower)
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
	phpqt_qstring_to_lower(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toUpper)
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
	phpqt_qstring_to_upper(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toCaseFolded)
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
	phpqt_qstring_to_case_folded(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, trimmed)
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
	phpqt_qstring_trimmed(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, simplified)
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
	phpqt_qstring_simplified(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toHtmlEscaped)
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
	phpqt_qstring_to_html_escaped(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, split)
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
	phpqt_qstring_split(&result, &self_, &sep, behavior, cs);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, splitQCharQtSplitBehaviorQtCaseSensitivity)
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
	phpqt_qstring_split_q_char_qt_split_behavior_qt_case_sensitivity(&result, &self_, &sep, behavior, cs);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, splitQRegularExpressionQtSplitBehavior)
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
	phpqt_qstring_split_q_regular_expression_qt_split_behavior(&result, &self_, &_0, behavior);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, normalized)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long mode;
	zval *self__param = NULL, *mode_param = NULL, *version = NULL, version_sub, __$null, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&version_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(mode)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(version)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &mode_param, &version);
	zephir_get_strval(&self_, self__param);
	if (!version) {
		version = &version_sub;
		version = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, mode);
	phpqt_qstring_normalized(&result, &self_, &_0, version);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, repeated)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long times;
	zval *self__param = NULL, *times_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(times)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &times_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, times);
	phpqt_qstring_repeated(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toLatin1)
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
	phpqt_qstring_to_latin1(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toUtf8)
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
	phpqt_qstring_to_utf8(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toLocal8Bit)
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
	phpqt_qstring_to_local8_bit(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toUcs4)
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
	phpqt_qstring_to_ucs4(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromLatin1)
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
	phpqt_qstring_from_latin1(&result, &ba);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromLatin1CharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *str = NULL, str_sub, *size_param = NULL, result, _0;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(str)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &str, &size_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_from_latin1_char_qsizetype(&result, str, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromUtf8)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *utf8_param = NULL, result;
	zval utf8;

	ZVAL_UNDEF(&utf8);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(utf8)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &utf8_param);
	zephir_get_strval(&utf8, utf8_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_from_utf8(&result, &utf8);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromUtf8CharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *utf8 = NULL, utf8_sub, *size_param = NULL, result, _0;

	ZVAL_UNDEF(&utf8_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(utf8)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &utf8, &size_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_from_utf8_char_qsizetype(&result, utf8, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromLocal8Bit)
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
	phpqt_qstring_from_local8_bit(&result, &ba);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromLocal8BitCharQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *str = NULL, str_sub, *size_param = NULL, result, _0;

	ZVAL_UNDEF(&str_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(str)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &str, &size_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_from_local8_bit_char_qsizetype(&result, str, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromUtf16)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *arg0 = NULL, arg0_sub, *size_param = NULL, result, _0;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &arg0, &size_param);
	if (!size_param) {
		size = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_from_utf16(&result, arg0, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromUcs4)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *arg0 = NULL, arg0_sub, *size_param = NULL, result, _0;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &arg0, &size_param);
	if (!size_param) {
		size = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_from_ucs4(&result, arg0, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromRawData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *arg0 = NULL, arg0_sub, *size_param = NULL, result, _0;

	ZVAL_UNDEF(&arg0_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &arg0, &size_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_from_raw_data(&result, arg0, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toWCharArray)
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
	phpqt_qstring_to_w_char_array(&result, &self_, array_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, fromWCharArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *string_ = NULL, string__sub, *size_param = NULL, result, _0;

	ZVAL_UNDEF(&string__sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(string_)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &string_, &size_param);
	if (!size_param) {
		size = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qstring_from_w_char_array(&result, string_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, compare)
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
	RETURN_MM_LONG(phpqt_qstring_compare(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QString_QString, compareQLatin1StringViewQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_compare_q_latin1_string_view_qt_case_sensitivity(&self_, &other, cs));
}

PHP_METHOD(Qt_Core_QString_QString, compareQStringViewQtCaseSensitivity)
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
	RETURN_MM_LONG(phpqt_qstring_compare_q_string_view_qt_case_sensitivity(&self_, &s, cs));
}

PHP_METHOD(Qt_Core_QString_QString, compareQCharQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *ch_param = NULL, *cs = NULL, cs_sub, __$null;
	zval self_, ch;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&ch);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(ch)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &ch_param, &cs);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&ch, ch_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstring_compare_q_char_qt_case_sensitivity(&self_, &ch, cs));
}

PHP_METHOD(Qt_Core_QString_QString, compareQStringQStringQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL, *cs = NULL, cs_sub, __$null;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &s1_param, &s2_param, &cs);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstring_compare_q_string_q_string_qt_case_sensitivity(&s1, &s2, cs));
}

PHP_METHOD(Qt_Core_QString_QString, compareQStringQLatin1StringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL, *cs = NULL, cs_sub, __$null;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &s1_param, &s2_param, &cs);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstring_compare_q_string_q_latin1_string_view_qt_case_sensitivity(&s1, &s2, cs));
}

PHP_METHOD(Qt_Core_QString_QString, compareQLatin1StringViewQStringQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL, *cs = NULL, cs_sub, __$null;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &s1_param, &s2_param, &cs);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstring_compare_q_latin1_string_view_q_string_qt_case_sensitivity(&s1, &s2, cs));
}

PHP_METHOD(Qt_Core_QString_QString, compareQStringQStringViewQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL, *cs = NULL, cs_sub, __$null;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &s1_param, &s2_param, &cs);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstring_compare_q_string_q_string_view_qt_case_sensitivity(&s1, &s2, cs));
}

PHP_METHOD(Qt_Core_QString_QString, compareQStringViewQStringQtCaseSensitivity)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL, *cs = NULL, cs_sub, __$null;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZVAL_UNDEF(&cs_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cs)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &s1_param, &s2_param, &cs);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	if (!cs) {
		cs = &cs_sub;
		cs = &__$null;
	}
	RETURN_MM_LONG(phpqt_qstring_compare_q_string_view_q_string_qt_case_sensitivity(&s1, &s2, cs));
}

PHP_METHOD(Qt_Core_QString_QString, localeAwareCompare)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &s_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	RETURN_MM_LONG(phpqt_qstring_locale_aware_compare(&self_, &s));
}

PHP_METHOD(Qt_Core_QString_QString, localeAwareCompareQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &s_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	RETURN_MM_LONG(phpqt_qstring_locale_aware_compare_q_string_view(&self_, &s));
}

PHP_METHOD(Qt_Core_QString_QString, localeAwareCompareQStringQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s1_param, &s2_param);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	RETURN_MM_LONG(phpqt_qstring_locale_aware_compare_q_string_q_string(&s1, &s2));
}

PHP_METHOD(Qt_Core_QString_QString, localeAwareCompareQStringViewQStringView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *s1_param = NULL, *s2_param = NULL;
	zval s1, s2;

	ZVAL_UNDEF(&s1);
	ZVAL_UNDEF(&s2);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(s1)
		Z_PARAM_STR(s2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &s1_param, &s2_param);
	zephir_get_strval(&s1, s1_param);
	zephir_get_strval(&s2, s2_param);
	RETURN_MM_LONG(phpqt_qstring_locale_aware_compare_q_string_view_q_string_view(&s1, &s2));
}

PHP_METHOD(Qt_Core_QString_QString, toShort)
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
	phpqt_qstring_to_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toUShort)
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
	phpqt_qstring_to_u_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toInt)
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
	phpqt_qstring_to_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toUInt)
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
	phpqt_qstring_to_u_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toLong)
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
	phpqt_qstring_to_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toULong)
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
	phpqt_qstring_to_u_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toLongLong)
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
	phpqt_qstring_to_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toULongLong)
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
	phpqt_qstring_to_u_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toFloat)
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
	phpqt_qstring_to_float(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, toDouble)
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
	phpqt_qstring_to_double(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, number)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, *base_param = NULL, result, _0, _1;
	zend_long arg0, base;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &arg0_param, &base_param);
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, base);
	phpqt_qstring_number(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, numberUintInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, *base_param = NULL, result, _0, _1;
	zend_long arg0, base;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &arg0_param, &base_param);
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, base);
	phpqt_qstring_number_uint_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, numberLongIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, *base_param = NULL, result, _0, _1;
	zend_long arg0, base;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &arg0_param, &base_param);
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, base);
	phpqt_qstring_number_long_int_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, numberUlongInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, *base_param = NULL, result, _0, _1;
	zend_long arg0, base;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &arg0_param, &base_param);
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, base);
	phpqt_qstring_number_ulong_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, numberQlonglongInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, *base_param = NULL, result, _0, _1;
	zend_long arg0, base;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &arg0_param, &base_param);
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, base);
	phpqt_qstring_number_qlonglong_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, numberQulonglongInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *arg0_param = NULL, *base_param = NULL, result, _0, _1;
	zend_long arg0, base;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(base)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &arg0_param, &base_param);
	if (!base_param) {
		base = 10;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, arg0);
	ZVAL_LONG(&_1, base);
	phpqt_qstring_number_qulonglong_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, numberDoubleCharInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long precision;
	zval *arg0_param = NULL, *format = NULL, format_sub, *precision_param = NULL, __$null, result, _0, _1;
	double arg0;

	ZVAL_UNDEF(&format_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(arg0)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(format)
		Z_PARAM_LONG(precision)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &arg0_param, &format, &precision_param);
	arg0 = zephir_get_doubleval(arg0_param);
	if (!format) {
		format = &format_sub;
		format = &__$null;
	}
	if (!precision_param) {
		precision = 6;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_DOUBLE(&_0, arg0);
	ZVAL_LONG(&_1, precision);
	phpqt_qstring_number_double_char_int(&result, &_0, format, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, newChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *ch = NULL, ch_sub, result;

	ZVAL_UNDEF(&ch_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(ch)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &ch);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_new_char(&result, ch);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, newQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *a_param = NULL, result;
	zval a;

	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &a_param);
	zephir_get_strval(&a, a_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_new_q_byte_array(&result, &a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, push_back)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL, result;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_push_back(&result, &self_, &c);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, push_backQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, result;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &s_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_push_back_q_string(&result, &self_, &s);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, push_front)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c_param = NULL, result;
	zval self_, c;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&c, c_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_push_front(&result, &self_, &c);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, push_frontQString)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s_param = NULL, result;
	zval self_, s;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &s_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&s, s_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qstring_push_front_q_string(&result, &self_, &s);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, shrink_to_fit)
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
	phpqt_qstring_shrink_to_fit(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QString_QString, max_size)
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
	RETURN_MM_LONG(phpqt_qstring_max_size_2(&self_));
}

PHP_METHOD(Qt_Core_QString_QString, isNull)
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
	r = phpqt_qstring_is_null(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, isRightToLeft)
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
	r = phpqt_qstring_is_right_to_left(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, isValidUtf16)
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
	r = phpqt_qstring_is_valid_utf16(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QString_QString, newQsizetypeQtInitialization)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *size_param = NULL, *arg1_param = NULL, result, _0, _1;
	zend_long size, arg1;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(size)
		Z_PARAM_LONG(arg1)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &size_param, &arg1_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	ZVAL_LONG(&_1, arg1);
	phpqt_qstring_new_qsizetype_qt_initialization(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

