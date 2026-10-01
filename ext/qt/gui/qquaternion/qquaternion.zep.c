
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
#include "src/gui-qquaternion.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QQuaternion_QQuaternion)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QQuaternion, QQuaternion, qt, gui_qquaternion_qquaternion, qt_gui_qquaternion_qquaternion_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, new_)
{

	RETURN_LONG(phpqt_qquaternion_new());
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, newQtInitialization)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qquaternion_new_qt_initialization(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, newFloatFloatFloatFloat)
{
	zval *scalar_param = NULL, *xpos_param = NULL, *ypos_param = NULL, *zpos_param = NULL, _0, _1, _2, _3;
	double scalar, xpos, ypos, zpos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(scalar)
		Z_PARAM_ZVAL(xpos)
		Z_PARAM_ZVAL(ypos)
		Z_PARAM_ZVAL(zpos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &scalar_param, &xpos_param, &ypos_param, &zpos_param);
	scalar = zephir_get_doubleval(scalar_param);
	xpos = zephir_get_doubleval(xpos_param);
	ypos = zephir_get_doubleval(ypos_param);
	zpos = zephir_get_doubleval(zpos_param);
	ZVAL_DOUBLE(&_0, scalar);
	ZVAL_DOUBLE(&_1, xpos);
	ZVAL_DOUBLE(&_2, ypos);
	ZVAL_DOUBLE(&_3, zpos);
	RETURN_LONG(phpqt_qquaternion_new_float_float_float_float(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, newFloatQVector3D)
{
	zend_long vector;
	zval *scalar_param = NULL, *vector_param = NULL, _0, _1;
	double scalar;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_ZVAL(scalar)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &scalar_param, &vector_param);
	scalar = zephir_get_doubleval(scalar_param);
	ZVAL_DOUBLE(&_0, scalar);
	ZVAL_LONG(&_1, vector);
	RETURN_LONG(phpqt_qquaternion_new_float_q_vector3_d(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, newQVector4D)
{
	zval *vector_param = NULL, _0;
	zend_long vector;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &vector_param);
	ZVAL_LONG(&_0, vector);
	RETURN_LONG(phpqt_qquaternion_new_q_vector4_d(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qquaternion_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, isIdentity)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qquaternion_is_identity(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, vector)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qquaternion_vector(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setVector)
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
	phpqt_qquaternion_set_vector(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setVectorFloatFloatFloat)
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
	phpqt_qquaternion_set_vector_float_float_float(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, x)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qquaternion_x(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, y)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qquaternion_y(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, z)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qquaternion_z(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, scalar)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qquaternion_scalar(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setX)
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
	phpqt_qquaternion_set_x(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setY)
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
	phpqt_qquaternion_set_y(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setZ)
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
	phpqt_qquaternion_set_z(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, setScalar)
{
	double scalar;
	zval *handle_param = NULL, *scalar_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(scalar)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scalar_param);
	scalar = zephir_get_doubleval(scalar_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, scalar);
	phpqt_qquaternion_set_scalar(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, dotProduct)
{
	zval *q1_param = NULL, *q2_param = NULL, _0, _1;
	zend_long q1, q2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(q1)
		Z_PARAM_LONG(q2)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &q1_param, &q2_param);
	ZVAL_LONG(&_0, q1);
	ZVAL_LONG(&_1, q2);
	RETURN_DOUBLE(phpqt_qquaternion_dot_product(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qquaternion_length(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, lengthSquared)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qquaternion_length_squared(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, normalized)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qquaternion_normalized(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, normalize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qquaternion_normalize(&_0);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, inverted)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qquaternion_inverted(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, conjugated)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qquaternion_conjugated(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, rotatedVector)
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
	RETURN_LONG(phpqt_qquaternion_rotated_vector(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, toVector4D)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qquaternion_to_vector4_d(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, getAxisAndAngle)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *axis_param = NULL, *angle = NULL, angle_sub, result, _0, _1;
	zend_long handle, axis;

	ZVAL_UNDEF(&angle_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(axis)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 0, &handle_param, &axis_param, &angle);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, axis);
	phpqt_qquaternion_get_axis_and_angle(&result, &_0, &_1, angle);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromAxisAndAngle)
{
	double angle;
	zval *axis_param = NULL, *angle_param = NULL, _0, _1;
	zend_long axis;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(axis)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &axis_param, &angle_param);
	angle = zephir_get_doubleval(angle_param);
	ZVAL_LONG(&_0, axis);
	ZVAL_DOUBLE(&_1, angle);
	RETURN_LONG(phpqt_qquaternion_from_axis_and_angle(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, getAxisAndAngleFloatFloatFloatFloat)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *x = NULL, x_sub, *y = NULL, y_sub, *z = NULL, z_sub, *angle = NULL, angle_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&x_sub);
	ZVAL_UNDEF(&y_sub);
	ZVAL_UNDEF(&z_sub);
	ZVAL_UNDEF(&angle_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 5, 0, &handle_param, &x, &y, &z, &angle);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qquaternion_get_axis_and_angle_float_float_float_float(&result, &_0, x, y, z, angle);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromAxisAndAngleFloatFloatFloatFloat)
{
	zval *x_param = NULL, *y_param = NULL, *z_param = NULL, *angle_param = NULL, _0, _1, _2, _3;
	double x, y, z, angle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(x)
		Z_PARAM_ZVAL(y)
		Z_PARAM_ZVAL(z)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &x_param, &y_param, &z_param, &angle_param);
	x = zephir_get_doubleval(x_param);
	y = zephir_get_doubleval(y_param);
	z = zephir_get_doubleval(z_param);
	angle = zephir_get_doubleval(angle_param);
	ZVAL_DOUBLE(&_0, x);
	ZVAL_DOUBLE(&_1, y);
	ZVAL_DOUBLE(&_2, z);
	ZVAL_DOUBLE(&_3, angle);
	RETURN_LONG(phpqt_qquaternion_from_axis_and_angle_float_float_float_float(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, toEulerAngles)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qquaternion_to_euler_angles(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromEulerAngles)
{
	zval *eulerAngles_param = NULL, _0;
	zend_long eulerAngles;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(eulerAngles)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &eulerAngles_param);
	ZVAL_LONG(&_0, eulerAngles);
	RETURN_LONG(phpqt_qquaternion_from_euler_angles(&_0));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, getEulerAngles)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *handle_param = NULL, *pitch = NULL, pitch_sub, *yaw = NULL, yaw_sub, *roll = NULL, roll_sub, result, _0;
	zend_long handle;

	ZVAL_UNDEF(&pitch_sub);
	ZVAL_UNDEF(&yaw_sub);
	ZVAL_UNDEF(&roll_sub);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(pitch)
		Z_PARAM_ZVAL(yaw)
		Z_PARAM_ZVAL(roll)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 4, 0, &handle_param, &pitch, &yaw, &roll);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	phpqt_qquaternion_get_euler_angles(&result, &_0, pitch, yaw, roll);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromEulerAnglesFloatFloatFloat)
{
	zval *pitch_param = NULL, *yaw_param = NULL, *roll_param = NULL, _0, _1, _2;
	double pitch, yaw, roll;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(pitch)
		Z_PARAM_ZVAL(yaw)
		Z_PARAM_ZVAL(roll)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &pitch_param, &yaw_param, &roll_param);
	pitch = zephir_get_doubleval(pitch_param);
	yaw = zephir_get_doubleval(yaw_param);
	roll = zephir_get_doubleval(roll_param);
	ZVAL_DOUBLE(&_0, pitch);
	ZVAL_DOUBLE(&_1, yaw);
	ZVAL_DOUBLE(&_2, roll);
	RETURN_LONG(phpqt_qquaternion_from_euler_angles_float_float_float(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, getAxes)
{
	zval *handle_param = NULL, *xAxis_param = NULL, *yAxis_param = NULL, *zAxis_param = NULL, _0, _1, _2, _3;
	zend_long handle, xAxis, yAxis, zAxis;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(xAxis)
		Z_PARAM_LONG(yAxis)
		Z_PARAM_LONG(zAxis)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &xAxis_param, &yAxis_param, &zAxis_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, xAxis);
	ZVAL_LONG(&_2, yAxis);
	ZVAL_LONG(&_3, zAxis);
	phpqt_qquaternion_get_axes(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromAxes)
{
	zval *xAxis_param = NULL, *yAxis_param = NULL, *zAxis_param = NULL, _0, _1, _2;
	zend_long xAxis, yAxis, zAxis;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(xAxis)
		Z_PARAM_LONG(yAxis)
		Z_PARAM_LONG(zAxis)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &xAxis_param, &yAxis_param, &zAxis_param);
	ZVAL_LONG(&_0, xAxis);
	ZVAL_LONG(&_1, yAxis);
	ZVAL_LONG(&_2, zAxis);
	RETURN_LONG(phpqt_qquaternion_from_axes(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, fromDirection)
{
	zval *direction_param = NULL, *up_param = NULL, _0, _1;
	zend_long direction, up;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(direction)
		Z_PARAM_LONG(up)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &direction_param, &up_param);
	ZVAL_LONG(&_0, direction);
	ZVAL_LONG(&_1, up);
	RETURN_LONG(phpqt_qquaternion_from_direction(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, rotationTo)
{
	zval *from_param = NULL, *to_param = NULL, _0, _1;
	zend_long from, to;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(from)
		Z_PARAM_LONG(to)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &from_param, &to_param);
	ZVAL_LONG(&_0, from);
	ZVAL_LONG(&_1, to);
	RETURN_LONG(phpqt_qquaternion_rotation_to(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, slerp)
{
	double t;
	zval *q1_param = NULL, *q2_param = NULL, *t_param = NULL, _0, _1, _2;
	zend_long q1, q2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(q1)
		Z_PARAM_LONG(q2)
		Z_PARAM_ZVAL(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &q1_param, &q2_param, &t_param);
	t = zephir_get_doubleval(t_param);
	ZVAL_LONG(&_0, q1);
	ZVAL_LONG(&_1, q2);
	ZVAL_DOUBLE(&_2, t);
	RETURN_LONG(phpqt_qquaternion_slerp(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QQuaternion_QQuaternion, nlerp)
{
	double t;
	zval *q1_param = NULL, *q2_param = NULL, *t_param = NULL, _0, _1, _2;
	zend_long q1, q2;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(q1)
		Z_PARAM_LONG(q2)
		Z_PARAM_ZVAL(t)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &q1_param, &q2_param, &t_param);
	t = zephir_get_doubleval(t_param);
	ZVAL_LONG(&_0, q1);
	ZVAL_LONG(&_1, q2);
	ZVAL_DOUBLE(&_2, t);
	RETURN_LONG(phpqt_qquaternion_nlerp(&_0, &_1, &_2));
}

