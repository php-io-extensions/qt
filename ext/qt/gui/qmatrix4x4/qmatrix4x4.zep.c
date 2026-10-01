
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
#include "src/gui-qmatrix4x4.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QMatrix4x4_QMatrix4x4)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QMatrix4x4, QMatrix4x4, qt, gui_qmatrix4x4_qmatrix4x4, qt_gui_qmatrix4x4_qmatrix4x4_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, new_)
{

	RETURN_LONG(phpqt_qmatrix4x4_new());
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newQtInitialization)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qmatrix4x4_new_qt_initialization(&_0));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newFloat)
{
	zval *values = NULL, values_sub;

	ZVAL_UNDEF(&values_sub);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(values)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &values);
	RETURN_LONG(phpqt_qmatrix4x4_new_float(values));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloatFloat)
{
	zval *m11_param = NULL, *m12_param = NULL, *m13_param = NULL, *m14_param = NULL, *m21_param = NULL, *m22_param = NULL, *m23_param = NULL, *m24_param = NULL, *m31_param = NULL, *m32_param = NULL, *m33_param = NULL, *m34_param = NULL, *m41_param = NULL, *m42_param = NULL, *m43_param = NULL, *m44_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15;
	double m11, m12, m13, m14, m21, m22, m23, m24, m31, m32, m33, m34, m41, m42, m43, m44;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_15);
	ZEND_PARSE_PARAMETERS_START(16, 16)
		Z_PARAM_ZVAL(m11)
		Z_PARAM_ZVAL(m12)
		Z_PARAM_ZVAL(m13)
		Z_PARAM_ZVAL(m14)
		Z_PARAM_ZVAL(m21)
		Z_PARAM_ZVAL(m22)
		Z_PARAM_ZVAL(m23)
		Z_PARAM_ZVAL(m24)
		Z_PARAM_ZVAL(m31)
		Z_PARAM_ZVAL(m32)
		Z_PARAM_ZVAL(m33)
		Z_PARAM_ZVAL(m34)
		Z_PARAM_ZVAL(m41)
		Z_PARAM_ZVAL(m42)
		Z_PARAM_ZVAL(m43)
		Z_PARAM_ZVAL(m44)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(16, 0, &m11_param, &m12_param, &m13_param, &m14_param, &m21_param, &m22_param, &m23_param, &m24_param, &m31_param, &m32_param, &m33_param, &m34_param, &m41_param, &m42_param, &m43_param, &m44_param);
	m11 = zephir_get_doubleval(m11_param);
	m12 = zephir_get_doubleval(m12_param);
	m13 = zephir_get_doubleval(m13_param);
	m14 = zephir_get_doubleval(m14_param);
	m21 = zephir_get_doubleval(m21_param);
	m22 = zephir_get_doubleval(m22_param);
	m23 = zephir_get_doubleval(m23_param);
	m24 = zephir_get_doubleval(m24_param);
	m31 = zephir_get_doubleval(m31_param);
	m32 = zephir_get_doubleval(m32_param);
	m33 = zephir_get_doubleval(m33_param);
	m34 = zephir_get_doubleval(m34_param);
	m41 = zephir_get_doubleval(m41_param);
	m42 = zephir_get_doubleval(m42_param);
	m43 = zephir_get_doubleval(m43_param);
	m44 = zephir_get_doubleval(m44_param);
	ZVAL_DOUBLE(&_0, m11);
	ZVAL_DOUBLE(&_1, m12);
	ZVAL_DOUBLE(&_2, m13);
	ZVAL_DOUBLE(&_3, m14);
	ZVAL_DOUBLE(&_4, m21);
	ZVAL_DOUBLE(&_5, m22);
	ZVAL_DOUBLE(&_6, m23);
	ZVAL_DOUBLE(&_7, m24);
	ZVAL_DOUBLE(&_8, m31);
	ZVAL_DOUBLE(&_9, m32);
	ZVAL_DOUBLE(&_10, m33);
	ZVAL_DOUBLE(&_11, m34);
	ZVAL_DOUBLE(&_12, m41);
	ZVAL_DOUBLE(&_13, m42);
	ZVAL_DOUBLE(&_14, m43);
	ZVAL_DOUBLE(&_15, m44);
	RETURN_LONG(phpqt_qmatrix4x4_new_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float_float(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9, &_10, &_11, &_12, &_13, &_14, &_15));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newFloatIntInt)
{
	zend_long cols, rows;
	zval *values = NULL, values_sub, *cols_param = NULL, *rows_param = NULL, _0, _1;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(values)
		Z_PARAM_LONG(cols)
		Z_PARAM_LONG(rows)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &values, &cols_param, &rows_param);
	ZVAL_LONG(&_0, cols);
	ZVAL_LONG(&_1, rows);
	RETURN_LONG(phpqt_qmatrix4x4_new_float_int_int(values, &_0, &_1));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, newQTransform)
{
	zval *transform_param = NULL, _0;
	zend_long transform;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(transform)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &transform_param);
	ZVAL_LONG(&_0, transform);
	RETURN_LONG(phpqt_qmatrix4x4_new_q_transform(&_0));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, column)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qmatrix4x4_column(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, setColumn)
{
	zval *handle_param = NULL, *index_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, index, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, value);
	phpqt_qmatrix4x4_set_column(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, row)
{
	zval *handle_param = NULL, *index_param = NULL, _0, _1;
	zend_long handle, index;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &index_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	RETURN_LONG(phpqt_qmatrix4x4_row(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, setRow)
{
	zval *handle_param = NULL, *index_param = NULL, *value_param = NULL, _0, _1, _2;
	zend_long handle, index, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &index_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, index);
	ZVAL_LONG(&_2, value);
	phpqt_qmatrix4x4_set_row(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, isAffine)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmatrix4x4_is_affine(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, isIdentity)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qmatrix4x4_is_identity(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, setToIdentity)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmatrix4x4_set_to_identity(&_0);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, fill)
{
	double value;
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	value = zephir_get_doubleval(value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, value);
	phpqt_qmatrix4x4_fill(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, determinant)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qmatrix4x4_determinant(&_0));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, inverted)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *invertible = NULL, invertible_sub, __$null, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&invertible_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(invertible)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 1, &handle_param, &invertible);
	if (!invertible) {
		invertible = &invertible_sub;
		invertible = &__$null;
	}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qmatrix4x4_inverted(&result, &_0, invertible);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, transposed)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmatrix4x4_transposed(&_0));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, scale)
{
	zval *handle_param = NULL, *vector_param = NULL, _0, _1;
	zend_long handle, vector;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &vector_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, vector);
	phpqt_qmatrix4x4_scale(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, translate)
{
	zval *handle_param = NULL, *vector_param = NULL, _0, _1;
	zend_long handle, vector;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &vector_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, vector);
	phpqt_qmatrix4x4_translate(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, rotate)
{
	double angle;
	zval *handle_param = NULL, *angle_param = NULL, *vector_param = NULL, _0, _1, _2;
	zend_long handle, vector;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(angle)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &angle_param, &vector_param);
	angle = zephir_get_doubleval(angle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, angle);
	ZVAL_LONG(&_2, vector);
	phpqt_qmatrix4x4_rotate(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, scaleFloatFloat)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qmatrix4x4_scale_float_float(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, scaleFloatFloatFloat)
{
	double x, y, z;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &z_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, z);
	phpqt_qmatrix4x4_scale_float_float_float(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, scaleFloat)
{
	double factor;
	zval *handle_param = NULL, *factor_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(factor)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &factor_param);
	factor = zephir_get_doubleval(factor_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, factor);
	phpqt_qmatrix4x4_scale_float(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, translateFloatFloat)
{
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &x_param, &y_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qmatrix4x4_translate_float_float(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, translateFloatFloatFloat)
{
	double x, y, z;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &x_param, &y_param, &z_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	ZVAL_DOUBLE(&_3, z);
	phpqt_qmatrix4x4_translate_float_float_float(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, rotateFloatFloatFloatFloat)
{
	double angle, x, y, z;
	zval *handle_param = NULL, *angle_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(4, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(angle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 1, &handle_param, &angle_param, &x_param, &y_param, &z_param);
	angle = zephir_get_doubleval(angle_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	if (!z_param) {
		z = 0.0;
	} else {
		z = zephir_get_doubleval(z_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, angle);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	phpqt_qmatrix4x4_rotate_float_float_float_float(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, rotateQQuaternion)
{
	zval *handle_param = NULL, *quaternion_param = NULL, _0, _1;
	zend_long handle, quaternion;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(quaternion)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &quaternion_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, quaternion);
	phpqt_qmatrix4x4_rotate_q_quaternion(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, ortho)
{
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	phpqt_qmatrix4x4_ortho(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, orthoQRectF)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qmatrix4x4_ortho_q_rect_f(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, orthoFloatFloatFloatFloatFloatFloat)
{
	double left, right, bottom, top, nearPlane, farPlane;
	zval *handle_param = NULL, *left_param = NULL, *right_param = NULL, *bottom_param = NULL, *top_param = NULL, *nearPlane_param = NULL, *farPlane_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(right)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(nearPlane)
		Z_PARAM_ZVAL(farPlane)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &left_param, &right_param, &bottom_param, &top_param, &nearPlane_param, &farPlane_param);
	left = zephir_get_doubleval(left_param);
	right = zephir_get_doubleval(right_param);
	bottom = zephir_get_doubleval(bottom_param);
	top = zephir_get_doubleval(top_param);
	nearPlane = zephir_get_doubleval(nearPlane_param);
	farPlane = zephir_get_doubleval(farPlane_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, left);
	ZVAL_DOUBLE(&_2, right);
	ZVAL_DOUBLE(&_3, bottom);
	ZVAL_DOUBLE(&_4, top);
	ZVAL_DOUBLE(&_5, nearPlane);
	ZVAL_DOUBLE(&_6, farPlane);
	phpqt_qmatrix4x4_ortho_float_float_float_float_float_float(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, frustum)
{
	double left, right, bottom, top, nearPlane, farPlane;
	zval *handle_param = NULL, *left_param = NULL, *right_param = NULL, *bottom_param = NULL, *top_param = NULL, *nearPlane_param = NULL, *farPlane_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(right)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(top)
		Z_PARAM_ZVAL(nearPlane)
		Z_PARAM_ZVAL(farPlane)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &left_param, &right_param, &bottom_param, &top_param, &nearPlane_param, &farPlane_param);
	left = zephir_get_doubleval(left_param);
	right = zephir_get_doubleval(right_param);
	bottom = zephir_get_doubleval(bottom_param);
	top = zephir_get_doubleval(top_param);
	nearPlane = zephir_get_doubleval(nearPlane_param);
	farPlane = zephir_get_doubleval(farPlane_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, left);
	ZVAL_DOUBLE(&_2, right);
	ZVAL_DOUBLE(&_3, bottom);
	ZVAL_DOUBLE(&_4, top);
	ZVAL_DOUBLE(&_5, nearPlane);
	ZVAL_DOUBLE(&_6, farPlane);
	phpqt_qmatrix4x4_frustum(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, perspective)
{
	double verticalAngle, aspectRatio, nearPlane, farPlane;
	zval *handle_param = NULL, *verticalAngle_param = NULL, *aspectRatio_param = NULL, *nearPlane_param = NULL, *farPlane_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(verticalAngle)
		Z_PARAM_ZVAL(aspectRatio)
		Z_PARAM_ZVAL(nearPlane)
		Z_PARAM_ZVAL(farPlane)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &verticalAngle_param, &aspectRatio_param, &nearPlane_param, &farPlane_param);
	verticalAngle = zephir_get_doubleval(verticalAngle_param);
	aspectRatio = zephir_get_doubleval(aspectRatio_param);
	nearPlane = zephir_get_doubleval(nearPlane_param);
	farPlane = zephir_get_doubleval(farPlane_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, verticalAngle);
	ZVAL_DOUBLE(&_2, aspectRatio);
	ZVAL_DOUBLE(&_3, nearPlane);
	ZVAL_DOUBLE(&_4, farPlane);
	phpqt_qmatrix4x4_perspective(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, lookAt)
{
	zval *handle_param = NULL, *eye_param = NULL, *center_param = NULL, *up_param = NULL, _0, _1, _2, _3;
	zend_long handle, eye, center, up;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(eye)
		Z_PARAM_LONG(center)
		Z_PARAM_LONG(up)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &eye_param, &center_param, &up_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, eye);
	ZVAL_LONG(&_2, center);
	ZVAL_LONG(&_3, up);
	phpqt_qmatrix4x4_look_at(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, viewport)
{
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qmatrix4x4_viewport(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, viewportFloatFloatFloatFloatFloatFloat)
{
	double left, bottom, width, height, nearPlane, farPlane;
	zval *handle_param = NULL, *left_param = NULL, *bottom_param = NULL, *width_param = NULL, *height_param = NULL, *nearPlane_param = NULL, *farPlane_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(left)
		Z_PARAM_ZVAL(bottom)
		Z_PARAM_ZVAL(width)
		Z_PARAM_ZVAL(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(nearPlane)
		Z_PARAM_ZVAL(farPlane)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 2, &handle_param, &left_param, &bottom_param, &width_param, &height_param, &nearPlane_param, &farPlane_param);
	left = zephir_get_doubleval(left_param);
	bottom = zephir_get_doubleval(bottom_param);
	width = zephir_get_doubleval(width_param);
	height = zephir_get_doubleval(height_param);
	if (!nearPlane_param) {
		nearPlane = 0.0;
	} else {
		nearPlane = zephir_get_doubleval(nearPlane_param);
	}
	if (!farPlane_param) {
		farPlane = 1.0;
	} else {
		farPlane = zephir_get_doubleval(farPlane_param);
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, left);
	ZVAL_DOUBLE(&_2, bottom);
	ZVAL_DOUBLE(&_3, width);
	ZVAL_DOUBLE(&_4, height);
	ZVAL_DOUBLE(&_5, nearPlane);
	ZVAL_DOUBLE(&_6, farPlane);
	phpqt_qmatrix4x4_viewport_float_float_float_float_float_float(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, flipCoordinates)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmatrix4x4_flip_coordinates(&_0);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, copyDataTo)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *values = NULL, values_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&values_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(values)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &values);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qmatrix4x4_copy_data_to(&result, &_0, values);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, toTransform)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmatrix4x4_to_transform(&_0));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, toTransformFloat)
{
	double distanceToPlane;
	zval *handle_param = NULL, *distanceToPlane_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(distanceToPlane)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &distanceToPlane_param);
	distanceToPlane = zephir_get_doubleval(distanceToPlane_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, distanceToPlane);
	RETURN_LONG(phpqt_qmatrix4x4_to_transform_float(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, map)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pointX_param = NULL, *pointY_param = NULL, result, _0, _1, _2;
	zend_long handle, pointX, pointY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pointX)
		Z_PARAM_LONG(pointY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pointX_param, &pointY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pointX);
	ZVAL_LONG(&_2, pointY);
	phpqt_qmatrix4x4_map(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapQPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double pointX, pointY;
	zval *handle_param = NULL, *pointX_param = NULL, *pointY_param = NULL, result, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pointX)
		Z_PARAM_ZVAL(pointY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pointX_param, &pointY_param);
	pointX = zephir_get_doubleval(pointX_param);
	pointY = zephir_get_doubleval(pointY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pointX);
	ZVAL_DOUBLE(&_2, pointY);
	phpqt_qmatrix4x4_map_q_point_f(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapQVector3D)
{
	zval *handle_param = NULL, *point_param = NULL, _0, _1;
	zend_long handle, point;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(point)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &point_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, point);
	RETURN_LONG(phpqt_qmatrix4x4_map_q_vector3_d(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapVector)
{
	zval *handle_param = NULL, *vector_param = NULL, _0, _1;
	zend_long handle, vector;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &vector_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, vector);
	RETURN_LONG(phpqt_qmatrix4x4_map_vector(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapQVector4D)
{
	zval *handle_param = NULL, *point_param = NULL, _0, _1;
	zend_long handle, point;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(point)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &point_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, point);
	RETURN_LONG(phpqt_qmatrix4x4_map_q_vector4_d(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle, rectX, rectY, rectWidth, rectHeight;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rectX)
		Z_PARAM_LONG(rectY)
		Z_PARAM_LONG(rectWidth)
		Z_PARAM_LONG(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rectX);
	ZVAL_LONG(&_2, rectY);
	ZVAL_LONG(&_3, rectWidth);
	ZVAL_LONG(&_4, rectHeight);
	phpqt_qmatrix4x4_map_rect(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, mapRectQRectF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double rectX, rectY, rectWidth, rectHeight;
	zval *handle_param = NULL, *rectX_param = NULL, *rectY_param = NULL, *rectWidth_param = NULL, *rectHeight_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(rectX)
		Z_PARAM_ZVAL(rectY)
		Z_PARAM_ZVAL(rectWidth)
		Z_PARAM_ZVAL(rectHeight)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &rectX_param, &rectY_param, &rectWidth_param, &rectHeight_param);
	rectX = zephir_get_doubleval(rectX_param);
	rectY = zephir_get_doubleval(rectY_param);
	rectWidth = zephir_get_doubleval(rectWidth_param);
	rectHeight = zephir_get_doubleval(rectHeight_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, rectX);
	ZVAL_DOUBLE(&_2, rectY);
	ZVAL_DOUBLE(&_3, rectWidth);
	ZVAL_DOUBLE(&_4, rectHeight);
	phpqt_qmatrix4x4_map_rect_q_rect_f(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, optimize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qmatrix4x4_optimize(&_0);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, projectedRotate)
{
	double angle, x, y, z, distanceToPlane;
	zval *handle_param = NULL, *angle_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, *distanceToPlane_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(angle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
		Z_PARAM_ZVAL(distanceToPlane)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &angle_param, &x_param, &y_param, &z_param, &distanceToPlane_param);
	angle = zephir_get_doubleval(angle_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	distanceToPlane = zephir_get_doubleval(distanceToPlane_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, angle);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	ZVAL_DOUBLE(&_5, distanceToPlane);
	phpqt_qmatrix4x4_projected_rotate(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, projectedRotateFloatFloatFloatFloat)
{
	double angle, x, y, z;
	zval *handle_param = NULL, *angle_param = NULL, *x_param = NULL, *y_param = NULL, *z_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(angle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &angle_param, &x_param, &y_param, &z_param);
	angle = zephir_get_doubleval(angle_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, angle);
	ZVAL_DOUBLE(&_2, x);
	ZVAL_DOUBLE(&_3, y);
	ZVAL_DOUBLE(&_4, z);
	phpqt_qmatrix4x4_projected_rotate_float_float_float_float(&_0, &_1, &_2, &_3, &_4);
}

PHP_METHOD(Qt_Gui_QMatrix4x4_QMatrix4x4, flags)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qmatrix4x4_flags(&_0));
}

