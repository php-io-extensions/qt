
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
#include "src/gui-qvector3d.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QVector3D_QVector3D)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QVector3D, QVector3D, qt, gui_qvector3d_qvector3d, qt_gui_qvector3d_qvector3d_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, new_)
{

	RETURN_LONG(phpqt_qvector3d_new());
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQtInitialization)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qvector3d_new_qt_initialization(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newFloatFloatFloat)
{
	zval *xpos_param = NULL, *ypos_param = NULL, *zpos_param = NULL, _0, _1, _2;
	double xpos, ypos, zpos;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(xpos)
		Z_PARAM_ZVAL(ypos)
		Z_PARAM_ZVAL(zpos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &xpos_param, &ypos_param, &zpos_param);
	xpos = zephir_get_doubleval(xpos_param);
	ypos = zephir_get_doubleval(ypos_param);
	zpos = zephir_get_doubleval(zpos_param);
	ZVAL_DOUBLE(&_0, xpos);
	ZVAL_DOUBLE(&_1, ypos);
	ZVAL_DOUBLE(&_2, zpos);
	RETURN_LONG(phpqt_qvector3d_new_float_float_float(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQPoint)
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
	RETURN_LONG(phpqt_qvector3d_new_q_point(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQPointF)
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
	RETURN_LONG(phpqt_qvector3d_new_q_point_f(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQVector2D)
{
	zval *vector_param = NULL, _0;
	zend_long vector;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &vector_param);
	ZVAL_LONG(&_0, vector);
	RETURN_LONG(phpqt_qvector3d_new_q_vector2_d(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQVector2DFloat)
{
	double zpos;
	zval *vector_param = NULL, *zpos_param = NULL, _0, _1;
	zend_long vector;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(vector)
		Z_PARAM_ZVAL(zpos)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &vector_param, &zpos_param);
	zpos = zephir_get_doubleval(zpos_param);
	ZVAL_LONG(&_0, vector);
	ZVAL_DOUBLE(&_1, zpos);
	RETURN_LONG(phpqt_qvector3d_new_q_vector2_d_float(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, newQVector4D)
{
	zval *vector_param = NULL, _0;
	zend_long vector;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(vector)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &vector_param);
	ZVAL_LONG(&_0, vector);
	RETURN_LONG(phpqt_qvector3d_new_q_vector4_d(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, isNull)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qvector3d_is_null(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, x)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector3d_x(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, y)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector3d_y(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, z)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector3d_z(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, setX)
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
	phpqt_qvector3d_set_x(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, setY)
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
	phpqt_qvector3d_set_y(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, setZ)
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
	phpqt_qvector3d_set_z(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, length)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector3d_length(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, lengthSquared)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qvector3d_length_squared(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, normalized)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvector3d_normalized(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, normalize)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qvector3d_normalize(&_0);
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, dotProduct)
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
	RETURN_DOUBLE(phpqt_qvector3d_dot_product(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, crossProduct)
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
	RETURN_LONG(phpqt_qvector3d_cross_product(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, normal)
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
	RETURN_LONG(phpqt_qvector3d_normal(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, normalQVector3DQVector3DQVector3D)
{
	zval *v1_param = NULL, *v2_param = NULL, *v3_param = NULL, _0, _1, _2;
	zend_long v1, v2, v3;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(v1)
		Z_PARAM_LONG(v2)
		Z_PARAM_LONG(v3)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &v1_param, &v2_param, &v3_param);
	ZVAL_LONG(&_0, v1);
	ZVAL_LONG(&_1, v2);
	ZVAL_LONG(&_2, v3);
	RETURN_LONG(phpqt_qvector3d_normal_q_vector3_d_q_vector3_d_q_vector3_d(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, project)
{
	zval *handle_param = NULL, *modelView_param = NULL, *projection_param = NULL, *viewportX_param = NULL, *viewportY_param = NULL, *viewportWidth_param = NULL, *viewportHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, modelView, projection, viewportX, viewportY, viewportWidth, viewportHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(modelView)
		Z_PARAM_LONG(projection)
		Z_PARAM_LONG(viewportX)
		Z_PARAM_LONG(viewportY)
		Z_PARAM_LONG(viewportWidth)
		Z_PARAM_LONG(viewportHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &modelView_param, &projection_param, &viewportX_param, &viewportY_param, &viewportWidth_param, &viewportHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, modelView);
	ZVAL_LONG(&_2, projection);
	ZVAL_LONG(&_3, viewportX);
	ZVAL_LONG(&_4, viewportY);
	ZVAL_LONG(&_5, viewportWidth);
	ZVAL_LONG(&_6, viewportHeight);
	RETURN_LONG(phpqt_qvector3d_project(&_0, &_1, &_2, &_3, &_4, &_5, &_6));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, unproject)
{
	zval *handle_param = NULL, *modelView_param = NULL, *projection_param = NULL, *viewportX_param = NULL, *viewportY_param = NULL, *viewportWidth_param = NULL, *viewportHeight_param = NULL, _0, _1, _2, _3, _4, _5, _6;
	zend_long handle, modelView, projection, viewportX, viewportY, viewportWidth, viewportHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(modelView)
		Z_PARAM_LONG(projection)
		Z_PARAM_LONG(viewportX)
		Z_PARAM_LONG(viewportY)
		Z_PARAM_LONG(viewportWidth)
		Z_PARAM_LONG(viewportHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &modelView_param, &projection_param, &viewportX_param, &viewportY_param, &viewportWidth_param, &viewportHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, modelView);
	ZVAL_LONG(&_2, projection);
	ZVAL_LONG(&_3, viewportX);
	ZVAL_LONG(&_4, viewportY);
	ZVAL_LONG(&_5, viewportWidth);
	ZVAL_LONG(&_6, viewportHeight);
	RETURN_LONG(phpqt_qvector3d_unproject(&_0, &_1, &_2, &_3, &_4, &_5, &_6));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, distanceToPoint)
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
	RETURN_DOUBLE(phpqt_qvector3d_distance_to_point(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, distanceToPlane)
{
	zval *handle_param = NULL, *plane_param = NULL, *normal_param = NULL, _0, _1, _2;
	zend_long handle, plane, normal;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(plane)
		Z_PARAM_LONG(normal)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &plane_param, &normal_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, plane);
	ZVAL_LONG(&_2, normal);
	RETURN_DOUBLE(phpqt_qvector3d_distance_to_plane(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, distanceToPlaneQVector3DQVector3DQVector3D)
{
	zval *handle_param = NULL, *plane1_param = NULL, *plane2_param = NULL, *plane3_param = NULL, _0, _1, _2, _3;
	zend_long handle, plane1, plane2, plane3;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(plane1)
		Z_PARAM_LONG(plane2)
		Z_PARAM_LONG(plane3)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &plane1_param, &plane2_param, &plane3_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, plane1);
	ZVAL_LONG(&_2, plane2);
	ZVAL_LONG(&_3, plane3);
	RETURN_DOUBLE(phpqt_qvector3d_distance_to_plane_q_vector3_d_q_vector3_d_q_vector3_d(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, distanceToLine)
{
	zval *handle_param = NULL, *point_param = NULL, *direction_param = NULL, _0, _1, _2;
	zend_long handle, point, direction;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(point)
		Z_PARAM_LONG(direction)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &point_param, &direction_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, point);
	ZVAL_LONG(&_2, direction);
	RETURN_DOUBLE(phpqt_qvector3d_distance_to_line(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, toVector2D)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvector3d_to_vector2_d(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, toVector4D)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qvector3d_to_vector4_d(&_0));
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, toPoint)
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
	phpqt_qvector3d_to_point(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QVector3D_QVector3D, toPointF)
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
	phpqt_qvector3d_to_point_f(&result, &_0);
	RETURN_CCTOR(&result);
}

