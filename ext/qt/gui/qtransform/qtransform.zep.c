
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
#include "src/gui-qtransform.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QTransform_QTransform)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QTransform, QTransform, qt, gui_qtransform_qtransform, qt_gui_qtransform_qtransform_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qtransform_new(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, new2)
{

	RETURN_LONG(phpqt_qtransform_new2());
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, newQrealQrealQrealQrealQrealQrealQrealQrealQreal)
{
	zval *h11_param = NULL, *h12_param = NULL, *h13_param = NULL, *h21_param = NULL, *h22_param = NULL, *h23_param = NULL, *h31_param = NULL, *h32_param = NULL, *h33_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8;
	double h11, h12, h13, h21, h22, h23, h31, h32, h33;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZVAL_UNDEF(&_7);
	ZVAL_UNDEF(&_8);
	ZEND_PARSE_PARAMETERS_START(9, 9)
		Z_PARAM_ZVAL(h11)
		Z_PARAM_ZVAL(h12)
		Z_PARAM_ZVAL(h13)
		Z_PARAM_ZVAL(h21)
		Z_PARAM_ZVAL(h22)
		Z_PARAM_ZVAL(h23)
		Z_PARAM_ZVAL(h31)
		Z_PARAM_ZVAL(h32)
		Z_PARAM_ZVAL(h33)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(9, 0, &h11_param, &h12_param, &h13_param, &h21_param, &h22_param, &h23_param, &h31_param, &h32_param, &h33_param);
	h11 = zephir_get_doubleval(h11_param);
	h12 = zephir_get_doubleval(h12_param);
	h13 = zephir_get_doubleval(h13_param);
	h21 = zephir_get_doubleval(h21_param);
	h22 = zephir_get_doubleval(h22_param);
	h23 = zephir_get_doubleval(h23_param);
	h31 = zephir_get_doubleval(h31_param);
	h32 = zephir_get_doubleval(h32_param);
	h33 = zephir_get_doubleval(h33_param);
	ZVAL_DOUBLE(&_0, h11);
	ZVAL_DOUBLE(&_1, h12);
	ZVAL_DOUBLE(&_2, h13);
	ZVAL_DOUBLE(&_3, h21);
	ZVAL_DOUBLE(&_4, h22);
	ZVAL_DOUBLE(&_5, h23);
	ZVAL_DOUBLE(&_6, h31);
	ZVAL_DOUBLE(&_7, h32);
	ZVAL_DOUBLE(&_8, h33);
	RETURN_LONG(phpqt_qtransform_new_qreal_qreal_qreal_qreal_qreal_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, newQrealQrealQrealQrealQrealQreal)
{
	zval *h11_param = NULL, *h12_param = NULL, *h21_param = NULL, *h22_param = NULL, *dx_param = NULL, *dy_param = NULL, _0, _1, _2, _3, _4, _5;
	double h11, h12, h21, h22, dx, dy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(h11)
		Z_PARAM_ZVAL(h12)
		Z_PARAM_ZVAL(h21)
		Z_PARAM_ZVAL(h22)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &h11_param, &h12_param, &h21_param, &h22_param, &dx_param, &dy_param);
	h11 = zephir_get_doubleval(h11_param);
	h12 = zephir_get_doubleval(h12_param);
	h21 = zephir_get_doubleval(h21_param);
	h22 = zephir_get_doubleval(h22_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZVAL_DOUBLE(&_0, h11);
	ZVAL_DOUBLE(&_1, h12);
	ZVAL_DOUBLE(&_2, h21);
	ZVAL_DOUBLE(&_3, h22);
	ZVAL_DOUBLE(&_4, dx);
	ZVAL_DOUBLE(&_5, dy);
	RETURN_LONG(phpqt_qtransform_new_qreal_qreal_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, newQTransform)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qtransform_new_q_transform(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, isAffine)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtransform_is_affine(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, isIdentity)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtransform_is_identity(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, isInvertible)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtransform_is_invertible(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, isScaling)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtransform_is_scaling(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, isRotating)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtransform_is_rotating(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, isTranslating)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qtransform_is_translating(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtransform_type(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, determinant)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_determinant(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, m11)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_m11(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, m12)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_m12(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, m13)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_m13(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, m21)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_m21(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, m22)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_m22(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, m23)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_m23(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, m31)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_m31(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, m32)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_m32(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, m33)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_m33(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, dx)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_dx(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, dy)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qtransform_dy(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, setMatrix)
{
	double m11, m12, m13, m21, m22, m23, m31, m32, m33;
	zval *handle_param = NULL, *m11_param = NULL, *m12_param = NULL, *m13_param = NULL, *m21_param = NULL, *m22_param = NULL, *m23_param = NULL, *m31_param = NULL, *m32_param = NULL, *m33_param = NULL, _0, _1, _2, _3, _4, _5, _6, _7, _8, _9;
	zend_long handle;

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
	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(m11)
		Z_PARAM_ZVAL(m12)
		Z_PARAM_ZVAL(m13)
		Z_PARAM_ZVAL(m21)
		Z_PARAM_ZVAL(m22)
		Z_PARAM_ZVAL(m23)
		Z_PARAM_ZVAL(m31)
		Z_PARAM_ZVAL(m32)
		Z_PARAM_ZVAL(m33)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(10, 0, &handle_param, &m11_param, &m12_param, &m13_param, &m21_param, &m22_param, &m23_param, &m31_param, &m32_param, &m33_param);
	m11 = zephir_get_doubleval(m11_param);
	m12 = zephir_get_doubleval(m12_param);
	m13 = zephir_get_doubleval(m13_param);
	m21 = zephir_get_doubleval(m21_param);
	m22 = zephir_get_doubleval(m22_param);
	m23 = zephir_get_doubleval(m23_param);
	m31 = zephir_get_doubleval(m31_param);
	m32 = zephir_get_doubleval(m32_param);
	m33 = zephir_get_doubleval(m33_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, m11);
	ZVAL_DOUBLE(&_2, m12);
	ZVAL_DOUBLE(&_3, m13);
	ZVAL_DOUBLE(&_4, m21);
	ZVAL_DOUBLE(&_5, m22);
	ZVAL_DOUBLE(&_6, m23);
	ZVAL_DOUBLE(&_7, m31);
	ZVAL_DOUBLE(&_8, m32);
	ZVAL_DOUBLE(&_9, m33);
	phpqt_qtransform_set_matrix(&_0, &_1, &_2, &_3, &_4, &_5, &_6, &_7, &_8, &_9);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, inverted)
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
	phpqt_qtransform_inverted(&result, &_0, invertible);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, adjoint)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtransform_adjoint(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, transposed)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qtransform_transposed(&_0));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, translate)
{
	double dx, dy;
	zval *handle_param = NULL, *dx_param = NULL, *dy_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &dx_param, &dy_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, dx);
	ZVAL_DOUBLE(&_2, dy);
	RETURN_LONG(phpqt_qtransform_translate(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, scale)
{
	double sx, sy;
	zval *handle_param = NULL, *sx_param = NULL, *sy_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sx)
		Z_PARAM_ZVAL(sy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sx_param, &sy_param);
	sx = zephir_get_doubleval(sx_param);
	sy = zephir_get_doubleval(sy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sx);
	ZVAL_DOUBLE(&_2, sy);
	RETURN_LONG(phpqt_qtransform_scale(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, shear)
{
	double sh, sv;
	zval *handle_param = NULL, *sh_param = NULL, *sv_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(sh)
		Z_PARAM_ZVAL(sv)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &sh_param, &sv_param);
	sh = zephir_get_doubleval(sh_param);
	sv = zephir_get_doubleval(sv_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, sh);
	ZVAL_DOUBLE(&_2, sv);
	RETURN_LONG(phpqt_qtransform_shear(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, rotate)
{
	double a, distanceToPlane;
	zval *handle_param = NULL, *a_param = NULL, *axis_param = NULL, *distanceToPlane_param = NULL, _0, _1, _2, _3;
	zend_long handle, axis;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(a)
		Z_PARAM_LONG(axis)
		Z_PARAM_ZVAL(distanceToPlane)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &a_param, &axis_param, &distanceToPlane_param);
	a = zephir_get_doubleval(a_param);
	distanceToPlane = zephir_get_doubleval(distanceToPlane_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, a);
	ZVAL_LONG(&_2, axis);
	ZVAL_DOUBLE(&_3, distanceToPlane);
	RETURN_LONG(phpqt_qtransform_rotate(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, rotateQrealQtAxis)
{
	double a;
	zval *handle_param = NULL, *a_param = NULL, *axis = NULL, axis_sub, __$null, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&axis_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(axis)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &a_param, &axis);
	a = zephir_get_doubleval(a_param);
	if (!axis) {
		axis = &axis_sub;
		axis = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, a);
	RETURN_LONG(phpqt_qtransform_rotate_qreal_qt_axis(&_0, &_1, axis));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, rotateRadians)
{
	double a, distanceToPlane;
	zval *handle_param = NULL, *a_param = NULL, *axis_param = NULL, *distanceToPlane_param = NULL, _0, _1, _2, _3;
	zend_long handle, axis;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(a)
		Z_PARAM_LONG(axis)
		Z_PARAM_ZVAL(distanceToPlane)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &a_param, &axis_param, &distanceToPlane_param);
	a = zephir_get_doubleval(a_param);
	distanceToPlane = zephir_get_doubleval(distanceToPlane_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, a);
	ZVAL_LONG(&_2, axis);
	ZVAL_DOUBLE(&_3, distanceToPlane);
	RETURN_LONG(phpqt_qtransform_rotate_radians(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, rotateRadiansQrealQtAxis)
{
	double a;
	zval *handle_param = NULL, *a_param = NULL, *axis = NULL, axis_sub, __$null, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&axis_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(a)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(axis)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 1, &handle_param, &a_param, &axis);
	a = zephir_get_doubleval(a_param);
	if (!axis) {
		axis = &axis_sub;
		axis = &__$null;
	}
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, a);
	RETURN_LONG(phpqt_qtransform_rotate_radians_qreal_qt_axis(&_0, &_1, axis));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, squareToQuad)
{
	zval *square_param = NULL, *result_param = NULL, _0, _1;
	zend_long square, result, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(square)
		Z_PARAM_LONG(result)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &square_param, &result_param);
	ZVAL_LONG(&_0, square);
	ZVAL_LONG(&_1, result);
	r = phpqt_qtransform_square_to_quad(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, quadToSquare)
{
	zval *quad_param = NULL, *result_param = NULL, _0, _1;
	zend_long quad, result, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(quad)
		Z_PARAM_LONG(result)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &quad_param, &result_param);
	ZVAL_LONG(&_0, quad);
	ZVAL_LONG(&_1, result);
	r = phpqt_qtransform_quad_to_square(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, quadToQuad)
{
	zval *one_param = NULL, *two_param = NULL, *result_param = NULL, _0, _1, _2;
	zend_long one, two, result, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(one)
		Z_PARAM_LONG(two)
		Z_PARAM_LONG(result)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &one_param, &two_param, &result_param);
	ZVAL_LONG(&_0, one);
	ZVAL_LONG(&_1, two);
	ZVAL_LONG(&_2, result);
	r = phpqt_qtransform_quad_to_quad(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, reset)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qtransform_reset(&_0);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, map)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2;
	zend_long handle, pX, pY;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(pX)
		Z_PARAM_LONG(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pX_param, &pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, pX);
	ZVAL_LONG(&_2, pY);
	phpqt_qtransform_map(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQPointF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double pX, pY;
	zval *handle_param = NULL, *pX_param = NULL, *pY_param = NULL, result, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pX)
		Z_PARAM_ZVAL(pY)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &pX_param, &pY_param);
	pX = zephir_get_doubleval(pX_param);
	pY = zephir_get_doubleval(pY_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, pX);
	ZVAL_DOUBLE(&_2, pY);
	phpqt_qtransform_map_q_point_f(&result, &_0, &_1, &_2);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQLine)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *lX1_param = NULL, *lY1_param = NULL, *lX2_param = NULL, *lY2_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle, lX1, lY1, lX2, lY2;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(lX1)
		Z_PARAM_LONG(lY1)
		Z_PARAM_LONG(lX2)
		Z_PARAM_LONG(lY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &lX1_param, &lY1_param, &lX2_param, &lY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, lX1);
	ZVAL_LONG(&_2, lY1);
	ZVAL_LONG(&_3, lX2);
	ZVAL_LONG(&_4, lY2);
	phpqt_qtransform_map_q_line(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQLineF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double lX1, lY1, lX2, lY2;
	zval *handle_param = NULL, *lX1_param = NULL, *lY1_param = NULL, *lX2_param = NULL, *lY2_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(lX1)
		Z_PARAM_ZVAL(lY1)
		Z_PARAM_ZVAL(lX2)
		Z_PARAM_ZVAL(lY2)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &lX1_param, &lY1_param, &lX2_param, &lY2_param);
	lX1 = zephir_get_doubleval(lX1_param);
	lY1 = zephir_get_doubleval(lY1_param);
	lX2 = zephir_get_doubleval(lX2_param);
	lY2 = zephir_get_doubleval(lY2_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, lX1);
	ZVAL_DOUBLE(&_2, lY1);
	ZVAL_DOUBLE(&_3, lX2);
	ZVAL_DOUBLE(&_4, lY2);
	phpqt_qtransform_map_q_line_f(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQPolygonF)
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
	RETURN_LONG(phpqt_qtransform_map_q_polygon_f(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQPolygon)
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
	RETURN_LONG(phpqt_qtransform_map_q_polygon(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQRegion)
{
	zval *handle_param = NULL, *r_param = NULL, _0, _1;
	zend_long handle, r;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(r)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &r_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, r);
	RETURN_LONG(phpqt_qtransform_map_q_region(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQPainterPath)
{
	zval *handle_param = NULL, *p_param = NULL, _0, _1;
	zend_long handle, p;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(p)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &p_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, p);
	RETURN_LONG(phpqt_qtransform_map_q_painter_path(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapToPolygon)
{
	zval *handle_param = NULL, *rX_param = NULL, *rY_param = NULL, *rWidth_param = NULL, *rHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, rX, rY, rWidth, rHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(rX)
		Z_PARAM_LONG(rY)
		Z_PARAM_LONG(rWidth)
		Z_PARAM_LONG(rHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &rX_param, &rY_param, &rWidth_param, &rHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, rX);
	ZVAL_LONG(&_2, rY);
	ZVAL_LONG(&_3, rWidth);
	ZVAL_LONG(&_4, rHeight);
	RETURN_LONG(phpqt_qtransform_map_to_polygon(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapRect)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle, arg0X, arg0Y, arg0Width, arg0Height;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(arg0X)
		Z_PARAM_LONG(arg0Y)
		Z_PARAM_LONG(arg0Width)
		Z_PARAM_LONG(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, arg0X);
	ZVAL_LONG(&_2, arg0Y);
	ZVAL_LONG(&_3, arg0Width);
	ZVAL_LONG(&_4, arg0Height);
	phpqt_qtransform_map_rect(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapRectQRectF)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double arg0X, arg0Y, arg0Width, arg0Height;
	zval *handle_param = NULL, *arg0X_param = NULL, *arg0Y_param = NULL, *arg0Width_param = NULL, *arg0Height_param = NULL, result, _0, _1, _2, _3, _4;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0X)
		Z_PARAM_ZVAL(arg0Y)
		Z_PARAM_ZVAL(arg0Width)
		Z_PARAM_ZVAL(arg0Height)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &arg0X_param, &arg0Y_param, &arg0Width_param, &arg0Height_param);
	arg0X = zephir_get_doubleval(arg0X_param);
	arg0Y = zephir_get_doubleval(arg0Y_param);
	arg0Width = zephir_get_doubleval(arg0Width_param);
	arg0Height = zephir_get_doubleval(arg0Height_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0X);
	ZVAL_DOUBLE(&_2, arg0Y);
	ZVAL_DOUBLE(&_3, arg0Width);
	ZVAL_DOUBLE(&_4, arg0Height);
	phpqt_qtransform_map_rect_q_rect_f(&result, &_0, &_1, &_2, &_3, &_4);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapIntIntIntInt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *tx = NULL, tx_sub, *ty = NULL, ty_sub, result, _0, _1, _2;
	zend_long handle, x, y;

	ZVAL_UNDEF(&tx_sub);
	ZVAL_UNDEF(&ty_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_ZVAL(tx)
		Z_PARAM_ZVAL(ty)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &x_param, &y_param, &tx, &ty);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, x);
	ZVAL_LONG(&_2, y);
	phpqt_qtransform_map_int_int_int_int(&result, &_0, &_1, &_2, tx, ty);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, mapQrealQrealQrealQreal)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double x, y;
	zval *handle_param = NULL, *x_param = NULL, *y_param = NULL, *tx = NULL, tx_sub, *ty = NULL, ty_sub, result, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&tx_sub);
	ZVAL_UNDEF(&ty_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(tx)
		Z_PARAM_ZVAL(ty)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &x_param, &y_param, &tx, &ty);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	ZVAL_DOUBLE(&_2, y);
	phpqt_qtransform_map_qreal_qreal_qreal_qreal(&result, &_0, &_1, &_2, tx, ty);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, fromTranslate)
{
	zval *dx_param = NULL, *dy_param = NULL, _0, _1;
	double dx, dy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &dx_param, &dy_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZVAL_DOUBLE(&_0, dx);
	ZVAL_DOUBLE(&_1, dy);
	RETURN_LONG(phpqt_qtransform_from_translate(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QTransform_QTransform, fromScale)
{
	zval *dx_param = NULL, *dy_param = NULL, _0, _1;
	double dx, dy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &dx_param, &dy_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZVAL_DOUBLE(&_0, dx);
	ZVAL_DOUBLE(&_1, dy);
	RETURN_LONG(phpqt_qtransform_from_scale(&_0, &_1));
}

