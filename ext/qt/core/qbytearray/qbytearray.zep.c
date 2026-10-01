
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
#include "src/core-qbytearray.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Core_QByteArray_QByteArray)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QByteArray, QByteArray, qt, core_qbytearray_qbytearray, qt_core_qbytearray_qbytearray_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, new_)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_new(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, newCharQsizetype)
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
	phpqt_qbytearray_new_char_qsizetype(&result, arg0, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, newQsizetypeChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *size_param = NULL, *c_param = NULL, result, _0, _1;
	zend_long size, c;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(size)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &size_param, &c_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	ZVAL_LONG(&_1, c);
	phpqt_qbytearray_new_qsizetype_char(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, newQsizetypeQtInitialization)
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
	phpqt_qbytearray_new_qsizetype_qt_initialization(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, newQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *v_param = NULL, result;
	zval v;

	ZVAL_UNDEF(&v);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(v)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &v_param);
	zephir_get_strval(&v, v_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_new_q_byte_array_view(&result, &v);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, newQByteArray)
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
	phpqt_qbytearray_new_q_byte_array(&result, &arg0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, swap)
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
	phpqt_qbytearray_swap(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, isEmpty)
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
	r = phpqt_qbytearray_is_empty(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, resize)
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
	phpqt_qbytearray_resize(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, resizeQsizetypeChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size, c;
	zval *self__param = NULL, *size_param = NULL, *c_param = NULL, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(size)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &size_param, &c_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	ZVAL_LONG(&_1, c);
	phpqt_qbytearray_resize_qsizetype_char(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, resizeForOverwrite)
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
	phpqt_qbytearray_resize_for_overwrite(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, capacity)
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
	RETURN_MM_LONG(phpqt_qbytearray_capacity(&self_));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, reserve)
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
	phpqt_qbytearray_reserve(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, squeeze)
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
	phpqt_qbytearray_squeeze(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, data)
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
	phpqt_qbytearray_data(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, constData)
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
	phpqt_qbytearray_const_data(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, detach)
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
	phpqt_qbytearray_detach(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, isDetached)
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
	r = phpqt_qbytearray_is_detached(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, isSharedWith)
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
	r = phpqt_qbytearray_is_shared_with(&self_, &other);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, clear)
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
	phpqt_qbytearray_clear(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, at)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long i;
	zval *self__param = NULL, *i_param = NULL, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &i_param);
	zephir_get_strval(&self_, self__param);
	ZVAL_LONG(&_0, i);
	RETURN_MM_LONG(phpqt_qbytearray_at(&self_, &_0));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, front)
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
	RETURN_MM_LONG(phpqt_qbytearray_front(&self_));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, back)
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
	RETURN_MM_LONG(phpqt_qbytearray_back(&self_));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, indexOf)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long c, from;
	zval *self__param = NULL, *c_param = NULL, *from_param = NULL, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &c_param, &from_param);
	zephir_get_strval(&self_, self__param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, c);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qbytearray_index_of(&self_, &_0, &_1));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, indexOfQByteArrayViewQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *bv_param = NULL, *from_param = NULL, _0;
	zval self_, bv;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&bv);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(bv)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &bv_param, &from_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&bv, bv_param);
	if (!from_param) {
		from = 0;
	} else {
		}
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qbytearray_index_of_q_byte_array_view_qsizetype(&self_, &bv, &_0));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, lastIndexOf)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long c, from;
	zval *self__param = NULL, *c_param = NULL, *from_param = NULL, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(c)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &c_param, &from_param);
	zephir_get_strval(&self_, self__param);
	if (!from_param) {
		from = -1;
	} else {
		}
	ZVAL_LONG(&_0, c);
	ZVAL_LONG(&_1, from);
	RETURN_MM_LONG(phpqt_qbytearray_last_index_of(&self_, &_0, &_1));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, lastIndexOfQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *bv_param = NULL;
	zval self_, bv;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&bv);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(bv)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &bv_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&bv, bv_param);
	RETURN_MM_LONG(phpqt_qbytearray_last_index_of_q_byte_array_view(&self_, &bv));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, lastIndexOfQByteArrayViewQsizetype)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long from;
	zval *self__param = NULL, *bv_param = NULL, *from_param = NULL, _0;
	zval self_, bv;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&bv);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(bv)
		Z_PARAM_LONG(from)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &self__param, &bv_param, &from_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&bv, bv_param);
	ZVAL_LONG(&_0, from);
	RETURN_MM_LONG(phpqt_qbytearray_last_index_of_q_byte_array_view_qsizetype(&self_, &bv, &_0));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, contains)
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
	r = phpqt_qbytearray_contains(&self_, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, containsQByteArrayView)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *bv_param = NULL;
	zval self_, bv;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&bv);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(bv)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &bv_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&bv, bv_param);
	r = phpqt_qbytearray_contains_q_byte_array_view(&self_, &bv);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, count)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long c;
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
	RETURN_MM_LONG(phpqt_qbytearray_count(&self_, &_0));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, countQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *bv_param = NULL;
	zval self_, bv;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&bv);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(bv)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &bv_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&bv, bv_param);
	RETURN_MM_LONG(phpqt_qbytearray_count_q_byte_array_view(&self_, &bv));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, compare)
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
	RETURN_MM_LONG(phpqt_qbytearray_compare(&self_, &a, cs));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, left)
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
	phpqt_qbytearray_left(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, right)
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
	phpqt_qbytearray_right(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, mid)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long index, len;
	zval *self__param = NULL, *index_param = NULL, *len_param = NULL, result, _0, _1;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(index)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(len)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 1, &self__param, &index_param, &len_param);
	zephir_get_strval(&self_, self__param);
	if (!len_param) {
		len = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, index);
	ZVAL_LONG(&_1, len);
	phpqt_qbytearray_mid(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, first)
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
	phpqt_qbytearray_first(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, last)
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
	phpqt_qbytearray_last(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, sliced)
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
	phpqt_qbytearray_sliced(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, slicedQsizetypeQsizetype)
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
	phpqt_qbytearray_sliced_qsizetype_qsizetype(&result, &self_, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, chopped)
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
	phpqt_qbytearray_chopped(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, startsWith)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *bv_param = NULL;
	zval self_, bv;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&bv);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(bv)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &bv_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&bv, bv_param);
	r = phpqt_qbytearray_starts_with(&self_, &bv);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, startsWithChar)
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
	r = phpqt_qbytearray_starts_with_char(&self_, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, endsWith)
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
	r = phpqt_qbytearray_ends_with(&self_, &_0);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, endsWithQByteArrayView)
{
	zend_long r = 0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *bv_param = NULL;
	zval self_, bv;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&bv);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(bv)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &bv_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&bv, bv_param);
	r = phpqt_qbytearray_ends_with_q_byte_array_view(&self_, &bv);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, isUpper)
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
	r = phpqt_qbytearray_is_upper(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, isLower)
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
	r = phpqt_qbytearray_is_lower(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, isValidUtf8)
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
	r = phpqt_qbytearray_is_valid_utf8(&self_);
	RETURN_MM_BOOL(r == 1);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, truncate)
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
	phpqt_qbytearray_truncate(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, chop)
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
	phpqt_qbytearray_chop(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toLower)
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
	phpqt_qbytearray_to_lower(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toUpper)
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
	phpqt_qbytearray_to_upper(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, trimmed)
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
	phpqt_qbytearray_trimmed(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, simplified)
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
	phpqt_qbytearray_simplified(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, leftJustified)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool truncate;
	zend_long width;
	zval *self__param = NULL, *width_param = NULL, *fill = NULL, fill_sub, *truncate_param = NULL, __$null, result, _0, _1;
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
		Z_PARAM_BOOL(truncate)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &width_param, &fill, &truncate_param);
	zephir_get_strval(&self_, self__param);
	if (!fill) {
		fill = &fill_sub;
		fill = &__$null;
	}
	if (!truncate_param) {
		truncate = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, width);
	ZVAL_BOOL(&_1, (truncate ? 1 : 0));
	phpqt_qbytearray_left_justified(&result, &self_, &_0, fill, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, rightJustified)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_bool truncate;
	zend_long width;
	zval *self__param = NULL, *width_param = NULL, *fill = NULL, fill_sub, *truncate_param = NULL, __$null, result, _0, _1;
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
		Z_PARAM_BOOL(truncate)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 2, &self__param, &width_param, &fill, &truncate_param);
	zephir_get_strval(&self_, self__param);
	if (!fill) {
		fill = &fill_sub;
		fill = &__$null;
	}
	if (!truncate_param) {
		truncate = 0;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, width);
	ZVAL_BOOL(&_1, (truncate ? 1 : 0));
	phpqt_qbytearray_right_justified(&result, &self_, &_0, fill, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, split)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long sep;
	zval *self__param = NULL, *sep_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(sep)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &sep_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, sep);
	phpqt_qbytearray_split(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, repeated)
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
	phpqt_qbytearray_repeated(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toShort)
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
	phpqt_qbytearray_to_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toUShort)
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
	phpqt_qbytearray_to_u_short(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toInt)
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
	phpqt_qbytearray_to_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toUInt)
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
	phpqt_qbytearray_to_u_int(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toLong)
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
	phpqt_qbytearray_to_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toULong)
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
	phpqt_qbytearray_to_u_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toLongLong)
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
	phpqt_qbytearray_to_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toULongLong)
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
	phpqt_qbytearray_to_u_long_long(&result, &self_, ok, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toFloat)
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
	phpqt_qbytearray_to_float(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toDouble)
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
	phpqt_qbytearray_to_double(&result, &self_, ok);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toBase64)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *options = NULL, options_sub, __$null, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self__param, &options);
	zephir_get_strval(&self_, self__param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_to_base64(&result, &self_, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toHex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *separator = NULL, separator_sub, __$null, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&separator_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(separator)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self__param, &separator);
	zephir_get_strval(&self_, self__param);
	if (!separator) {
		separator = &separator_sub;
		separator = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_to_hex(&result, &self_, separator);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, toPercentEncoding)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *exclude_param = NULL, *include__param = NULL, *percent = NULL, percent_sub, __$null, result;
	zval self_, exclude, include_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&exclude);
	ZVAL_UNDEF(&include_);
	ZVAL_UNDEF(&percent_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(exclude)
		Z_PARAM_STR(include_)
		Z_PARAM_ZVAL_OR_NULL(percent)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 3, &self__param, &exclude_param, &include__param, &percent);
	zephir_get_strval(&self_, self__param);
	if (!exclude_param) {
		ZEPHIR_INIT_VAR(&exclude);
		ZVAL_STRING(&exclude, "");
	} else {
		zephir_get_strval(&exclude, exclude_param);
	}
	if (!include__param) {
		ZEPHIR_INIT_VAR(&include_);
		ZVAL_STRING(&include_, "");
	} else {
		zephir_get_strval(&include_, include__param);
	}
	if (!percent) {
		percent = &percent_sub;
		percent = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_to_percent_encoding(&result, &self_, &exclude, &include_, percent);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, percentDecoded)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *percent = NULL, percent_sub, __$null, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&percent_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(percent)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &self__param, &percent);
	zephir_get_strval(&self_, self__param);
	if (!percent) {
		percent = &percent_sub;
		percent = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_percent_decoded(&result, &self_, percent);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, number)
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
	phpqt_qbytearray_number(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberUintInt)
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
	phpqt_qbytearray_number_uint_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberLongIntInt)
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
	phpqt_qbytearray_number_long_int_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberUlongInt)
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
	phpqt_qbytearray_number_ulong_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberQlonglongInt)
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
	phpqt_qbytearray_number_qlonglong_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberQulonglongInt)
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
	phpqt_qbytearray_number_qulonglong_int(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, numberDoubleCharInt)
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
	phpqt_qbytearray_number_double_char_int(&result, &_0, format, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromRawData)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long size;
	zval *data = NULL, data_sub, *size_param = NULL, result, _0;

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(data)
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &data, &size_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, size);
	phpqt_qbytearray_from_raw_data(&result, data, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromBase64Encoding)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *base64_param = NULL, *options = NULL, options_sub, __$null;
	zval base64;

	ZVAL_UNDEF(&base64);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(base64)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &base64_param, &options);
	zephir_get_strval(&base64, base64_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	RETURN_MM_LONG(phpqt_qbytearray_from_base64_encoding(&base64, options));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromBase64)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *base64_param = NULL, *options = NULL, options_sub, __$null, result;
	zval base64;

	ZVAL_UNDEF(&base64);
	ZVAL_UNDEF(&options_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(base64)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(options)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &base64_param, &options);
	zephir_get_strval(&base64, base64_param);
	if (!options) {
		options = &options_sub;
		options = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_from_base64(&result, &base64, options);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromHex)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *hexEncoded_param = NULL, result;
	zval hexEncoded;

	ZVAL_UNDEF(&hexEncoded);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(hexEncoded)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 0, &hexEncoded_param);
	zephir_get_strval(&hexEncoded, hexEncoded_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_from_hex(&result, &hexEncoded);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, fromPercentEncoding)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *pctEncoded_param = NULL, *percent = NULL, percent_sub, __$null, result;
	zval pctEncoded;

	ZVAL_UNDEF(&pctEncoded);
	ZVAL_UNDEF(&percent_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(pctEncoded)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(percent)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &pctEncoded_param, &percent);
	zephir_get_strval(&pctEncoded, pctEncoded_param);
	if (!percent) {
		percent = &percent_sub;
		percent = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_from_percent_encoding(&result, &pctEncoded, percent);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, begin)
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
	phpqt_qbytearray_begin(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, cbegin)
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
	phpqt_qbytearray_cbegin(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, constBegin)
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
	phpqt_qbytearray_const_begin(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, end)
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
	phpqt_qbytearray_end(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, cend)
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
	phpqt_qbytearray_cend(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, constEnd)
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
	phpqt_qbytearray_const_end(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_back)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long c;
	zval *self__param = NULL, *c_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, c);
	phpqt_qbytearray_push_back(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_backChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *s = NULL, s_sub, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_ZVAL(s)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &s);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_push_back_char(&result, &self_, s);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_backQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *a_param = NULL, result;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &a_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_push_back_q_byte_array(&result, &self_, &a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_backQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *a_param = NULL, result;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &a_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_push_back_q_byte_array_view(&result, &self_, &a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_front)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long c;
	zval *self__param = NULL, *c_param = NULL, result, _0;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c_param);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, c);
	phpqt_qbytearray_push_front(&result, &self_, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_frontChar)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *c = NULL, c_sub, result;
	zval self_;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&c_sub);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_ZVAL(c)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &c);
	zephir_get_strval(&self_, self__param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_push_front_char(&result, &self_, c);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_frontQByteArray)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *a_param = NULL, result;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &a_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_push_front_q_byte_array(&result, &self_, &a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, push_frontQByteArrayView)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *self__param = NULL, *a_param = NULL, result;
	zval self_, a;

	ZVAL_UNDEF(&self_);
	ZVAL_UNDEF(&a);
	ZVAL_UNDEF(&result);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(self_)
		Z_PARAM_STR(a)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &self__param, &a_param);
	zephir_get_strval(&self_, self__param);
	zephir_get_strval(&a, a_param);
	ZEPHIR_INIT_VAR(&result);
	phpqt_qbytearray_push_front_q_byte_array_view(&result, &self_, &a);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, shrink_to_fit)
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
	phpqt_qbytearray_shrink_to_fit(&result, &self_);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, max_size)
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
	RETURN_MM_LONG(phpqt_qbytearray_max_size(&self_));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, maxSize)
{

	RETURN_LONG(phpqt_qbytearray_max_size_2());
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, size)
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
	RETURN_MM_LONG(phpqt_qbytearray_size(&self_));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, length)
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
	RETURN_MM_LONG(phpqt_qbytearray_length(&self_));
}

PHP_METHOD(Qt_Core_QByteArray_QByteArray, isNull)
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
	r = phpqt_qbytearray_is_null(&self_);
	RETURN_MM_BOOL(r == 1);
}

