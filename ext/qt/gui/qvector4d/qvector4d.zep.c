
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
#include "src/gui-qvector4d.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QVector4D_QVector4D)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QVector4D, QVector4D, qt, gui_qvector4d_qvector4d, qt_gui_qvector4d_qvector4d_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, new_)
{

	RETURN_LONG(phpqt_qvector4d_new());
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQtInitialization)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qvector4d_new_qt_initialization(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newFloatFloatFloatFloat)
{
	zval *xpos_param = NULL, *ypos_param = NULL, *zpos_param = NULL, *wpos_param = NULL, _0, _1, _2, _3;
	double xpos, ypos, zpos, wpos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(xpos)
		Z_PARAM_ZVAL(ypos)
		Z_PARAM_ZVAL(zpos)
		Z_PARAM_ZVAL(wpos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &xpos_param, &ypos_param, &zpos_param, &wpos_param);
	xpos = zephir_get_doubleval(xpos_param);
	ypos = zephir_get_doubleval(ypos_param);
	zpos = zephir_get_doubleval(zpos_param);
	wpos = zephir_get_doubleval(wpos_param);
	ZVAL_DOUBLE(&_0, xpos);
	ZVAL_DOUBLE(&_1, ypos);
	ZVAL_DOUBLE(&_2, zpos);
	ZVAL_DOUBLE(&_3, wpos);
	RETURN_LONG(phpqt_qvector4d_new_float_float_float_float(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQPoint)
{
	zval *pointX_param = NULL, *pointY_param = NULL, _0, _1;
	zend_long pointX, pointY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(pointX)
		Z_PARAM_LONG(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &pointX_param, &pointY_param);
	ZVAL_LONG(&_0, pointX);
	ZVAL_LONG(&_1, pointY);
	RETURN_LONG(phpqt_qvector4d_new_q_point(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQPointF)
{
	zval *pointX_param = NULL, *pointY_param = NULL, _0, _1;
	double pointX, pointY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(pointX)
		Z_PARAM_ZVAL(pointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &pointX_param, &pointY_param);
	pointX = zephir_get_doubleval(pointX_param);
	pointY = zephir_get_doubleval(pointY_param);
	ZVAL_DOUBLE(&_0, pointX);
	ZVAL_DOUBLE(&_1, pointY);
	RETURN_LONG(phpqt_qvector4d_new_q_point_f(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQVector2D)
{
	zval *vector_param = NULL, _0;
	zend_long vector;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &vector_param);
	ZVAL_LONG(&_0, vector);
	RETURN_LONG(phpqt_qvector4d_new_q_vector2_d(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQVector2DFloatFloat)
{
	double zpos, wpos;
	zval *vector_param = NULL, *zpos_param = NULL, *wpos_param = NULL, _0, _1, _2;
	zend_long vector;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(vector)
		Z_PARAM_ZVAL(zpos)
		Z_PARAM_ZVAL(wpos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &vector_param, &zpos_param, &wpos_param);
	zpos = zephir_get_doubleval(zpos_param);
	wpos = zephir_get_doubleval(wpos_param);
	ZVAL_LONG(&_0, vector);
	ZVAL_DOUBLE(&_1, zpos);
	ZVAL_DOUBLE(&_2, wpos);
	RETURN_LONG(phpqt_qvector4d_new_q_vector2_d_float_float(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQVector3D)
{
	zval *vector_param = NULL, _0;
	zend_long vector;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &vector_param);
	ZVAL_LONG(&_0, vector);
	RETURN_LONG(phpqt_qvector4d_new_q_vector3_d(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, newQVector3DFloat)
{
	double wpos;
	zval *vector_param = NULL, *wpos_param = NULL, _0, _1;
	zend_long vector;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(vector)
		Z_PARAM_ZVAL(wpos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &vector_param, &wpos_param);
	wpos = zephir_get_doubleval(wpos_param);
	ZVAL_LONG(&_0, vector);
	ZVAL_DOUBLE(&_1, wpos);
	RETURN_LONG(phpqt_qvector4d_new_q_vector3_d_float(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qvector4d_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, x)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector4d_x(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, y)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector4d_y(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, z)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector4d_z(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, w)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector4d_w(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, setX)
{
	double x;
	zval *handle_param = NULL, *x_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &x_param);
	x = zephir_get_doubleval(x_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, x);
	phpqt_qvector4d_set_x(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, setY)
{
	double y;
	zval *handle_param = NULL, *y_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(y)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &y_param);
	y = zephir_get_doubleval(y_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, y);
	phpqt_qvector4d_set_y(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, setZ)
{
	double z;
	zval *handle_param = NULL, *z_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(z)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &z_param);
	z = zephir_get_doubleval(z_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, z);
	phpqt_qvector4d_set_z(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, setW)
{
	double w;
	zval *handle_param = NULL, *w_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(w)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &w_param);
	w = zephir_get_doubleval(w_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, w);
	phpqt_qvector4d_set_w(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector4d_length(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, lengthSquared)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector4d_length_squared(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, normalized)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvector4d_normalized(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, normalize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qvector4d_normalize(&_0);
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, dotProduct)
{
	zval *v1_param = NULL, *v2_param = NULL, _0, _1;
	zend_long v1, v2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &v1_param, &v2_param);
	ZVAL_LONG(&_0, v1);
	ZVAL_LONG(&_1, v2);
	RETURN_DOUBLE(phpqt_qvector4d_dot_product(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toVector2D)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvector4d_to_vector2_d(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toVector2DAffine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvector4d_to_vector2_d_affine(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toVector3D)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvector4d_to_vector3_d(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toVector3DAffine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvector4d_to_vector3_d_affine(&_0));
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toPoint)
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
	phpqt_qvector4d_to_point(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QVector4D_QVector4D, toPointF)
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
	phpqt_qvector4d_to_point_f(&result, &_0);
	RETURN_CCTOR(&result);
}

