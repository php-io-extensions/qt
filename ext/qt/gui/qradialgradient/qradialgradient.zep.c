
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
#include "src/gui-qradialgradient.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QRadialGradient_QRadialGradient)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QRadialGradient, QRadialGradient, qt, gui_qradialgradient_qradialgradient, qt_gui_qradialgradient_qradialgradient_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, new_)
{

	RETURN_LONG(phpqt_qradialgradient_new());
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQPointFQrealQPointF)
{
	zval *centerX_param = NULL, *centerY_param = NULL, *radius_param = NULL, *focalPointX_param = NULL, *focalPointY_param = NULL, _0, _1, _2, _3, _4;
	double centerX, centerY, radius, focalPointX, focalPointY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(centerX)
		Z_PARAM_ZVAL(centerY)
		Z_PARAM_ZVAL(radius)
		Z_PARAM_ZVAL(focalPointX)
		Z_PARAM_ZVAL(focalPointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &centerX_param, &centerY_param, &radius_param, &focalPointX_param, &focalPointY_param);
	centerX = zephir_get_doubleval(centerX_param);
	centerY = zephir_get_doubleval(centerY_param);
	radius = zephir_get_doubleval(radius_param);
	focalPointX = zephir_get_doubleval(focalPointX_param);
	focalPointY = zephir_get_doubleval(focalPointY_param);
	ZVAL_DOUBLE(&_0, centerX);
	ZVAL_DOUBLE(&_1, centerY);
	ZVAL_DOUBLE(&_2, radius);
	ZVAL_DOUBLE(&_3, focalPointX);
	ZVAL_DOUBLE(&_4, focalPointY);
	RETURN_LONG(phpqt_qradialgradient_new_q_point_f_qreal_q_point_f(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQrealQrealQrealQrealQreal)
{
	zval *cx_param = NULL, *cy_param = NULL, *radius_param = NULL, *fx_param = NULL, *fy_param = NULL, _0, _1, _2, _3, _4;
	double cx, cy, radius, fx, fy;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_ZVAL(cx)
		Z_PARAM_ZVAL(cy)
		Z_PARAM_ZVAL(radius)
		Z_PARAM_ZVAL(fx)
		Z_PARAM_ZVAL(fy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &cx_param, &cy_param, &radius_param, &fx_param, &fy_param);
	cx = zephir_get_doubleval(cx_param);
	cy = zephir_get_doubleval(cy_param);
	radius = zephir_get_doubleval(radius_param);
	fx = zephir_get_doubleval(fx_param);
	fy = zephir_get_doubleval(fy_param);
	ZVAL_DOUBLE(&_0, cx);
	ZVAL_DOUBLE(&_1, cy);
	ZVAL_DOUBLE(&_2, radius);
	ZVAL_DOUBLE(&_3, fx);
	ZVAL_DOUBLE(&_4, fy);
	RETURN_LONG(phpqt_qradialgradient_new_qreal_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4));
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQPointFQreal)
{
	zval *centerX_param = NULL, *centerY_param = NULL, *radius_param = NULL, _0, _1, _2;
	double centerX, centerY, radius;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(centerX)
		Z_PARAM_ZVAL(centerY)
		Z_PARAM_ZVAL(radius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &centerX_param, &centerY_param, &radius_param);
	centerX = zephir_get_doubleval(centerX_param);
	centerY = zephir_get_doubleval(centerY_param);
	radius = zephir_get_doubleval(radius_param);
	ZVAL_DOUBLE(&_0, centerX);
	ZVAL_DOUBLE(&_1, centerY);
	ZVAL_DOUBLE(&_2, radius);
	RETURN_LONG(phpqt_qradialgradient_new_q_point_f_qreal(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQrealQrealQreal)
{
	zval *cx_param = NULL, *cy_param = NULL, *radius_param = NULL, _0, _1, _2;
	double cx, cy, radius;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(cx)
		Z_PARAM_ZVAL(cy)
		Z_PARAM_ZVAL(radius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &cx_param, &cy_param, &radius_param);
	cx = zephir_get_doubleval(cx_param);
	cy = zephir_get_doubleval(cy_param);
	radius = zephir_get_doubleval(radius_param);
	ZVAL_DOUBLE(&_0, cx);
	ZVAL_DOUBLE(&_1, cy);
	ZVAL_DOUBLE(&_2, radius);
	RETURN_LONG(phpqt_qradialgradient_new_qreal_qreal_qreal(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQPointFQrealQPointFQreal)
{
	zval *centerX_param = NULL, *centerY_param = NULL, *centerRadius_param = NULL, *focalPointX_param = NULL, *focalPointY_param = NULL, *focalRadius_param = NULL, _0, _1, _2, _3, _4, _5;
	double centerX, centerY, centerRadius, focalPointX, focalPointY, focalRadius;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(centerX)
		Z_PARAM_ZVAL(centerY)
		Z_PARAM_ZVAL(centerRadius)
		Z_PARAM_ZVAL(focalPointX)
		Z_PARAM_ZVAL(focalPointY)
		Z_PARAM_ZVAL(focalRadius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &centerX_param, &centerY_param, &centerRadius_param, &focalPointX_param, &focalPointY_param, &focalRadius_param);
	centerX = zephir_get_doubleval(centerX_param);
	centerY = zephir_get_doubleval(centerY_param);
	centerRadius = zephir_get_doubleval(centerRadius_param);
	focalPointX = zephir_get_doubleval(focalPointX_param);
	focalPointY = zephir_get_doubleval(focalPointY_param);
	focalRadius = zephir_get_doubleval(focalRadius_param);
	ZVAL_DOUBLE(&_0, centerX);
	ZVAL_DOUBLE(&_1, centerY);
	ZVAL_DOUBLE(&_2, centerRadius);
	ZVAL_DOUBLE(&_3, focalPointX);
	ZVAL_DOUBLE(&_4, focalPointY);
	ZVAL_DOUBLE(&_5, focalRadius);
	RETURN_LONG(phpqt_qradialgradient_new_q_point_f_qreal_q_point_f_qreal(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, newQrealQrealQrealQrealQrealQreal)
{
	zval *cx_param = NULL, *cy_param = NULL, *centerRadius_param = NULL, *fx_param = NULL, *fy_param = NULL, *focalRadius_param = NULL, _0, _1, _2, _3, _4, _5;
	double cx, cy, centerRadius, fx, fy, focalRadius;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_ZVAL(cx)
		Z_PARAM_ZVAL(cy)
		Z_PARAM_ZVAL(centerRadius)
		Z_PARAM_ZVAL(fx)
		Z_PARAM_ZVAL(fy)
		Z_PARAM_ZVAL(focalRadius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &cx_param, &cy_param, &centerRadius_param, &fx_param, &fy_param, &focalRadius_param);
	cx = zephir_get_doubleval(cx_param);
	cy = zephir_get_doubleval(cy_param);
	centerRadius = zephir_get_doubleval(centerRadius_param);
	fx = zephir_get_doubleval(fx_param);
	fy = zephir_get_doubleval(fy_param);
	focalRadius = zephir_get_doubleval(focalRadius_param);
	ZVAL_DOUBLE(&_0, cx);
	ZVAL_DOUBLE(&_1, cy);
	ZVAL_DOUBLE(&_2, centerRadius);
	ZVAL_DOUBLE(&_3, fx);
	ZVAL_DOUBLE(&_4, fy);
	ZVAL_DOUBLE(&_5, focalRadius);
	RETURN_LONG(phpqt_qradialgradient_new_qreal_qreal_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3, &_4, &_5));
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, center)
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
	phpqt_qradialgradient_center(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setCenter)
{
	double centerX, centerY;
	zval *handle_param = NULL, *centerX_param = NULL, *centerY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(centerX)
		Z_PARAM_ZVAL(centerY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &centerX_param, &centerY_param);
	centerX = zephir_get_doubleval(centerX_param);
	centerY = zephir_get_doubleval(centerY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, centerX);
	ZVAL_DOUBLE(&_2, centerY);
	phpqt_qradialgradient_set_center(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setCenterQrealQreal)
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
	phpqt_qradialgradient_set_center_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, focalPoint)
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
	phpqt_qradialgradient_focal_point(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setFocalPoint)
{
	double focalPointX, focalPointY;
	zval *handle_param = NULL, *focalPointX_param = NULL, *focalPointY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(focalPointX)
		Z_PARAM_ZVAL(focalPointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &focalPointX_param, &focalPointY_param);
	focalPointX = zephir_get_doubleval(focalPointX_param);
	focalPointY = zephir_get_doubleval(focalPointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, focalPointX);
	ZVAL_DOUBLE(&_2, focalPointY);
	phpqt_qradialgradient_set_focal_point(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setFocalPointQrealQreal)
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
	phpqt_qradialgradient_set_focal_point_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, radius)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qradialgradient_radius(&_0));
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setRadius)
{
	double radius;
	zval *handle_param = NULL, *radius_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(radius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &radius_param);
	radius = zephir_get_doubleval(radius_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, radius);
	phpqt_qradialgradient_set_radius(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, centerRadius)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qradialgradient_center_radius(&_0));
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setCenterRadius)
{
	double radius;
	zval *handle_param = NULL, *radius_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(radius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &radius_param);
	radius = zephir_get_doubleval(radius_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, radius);
	phpqt_qradialgradient_set_center_radius(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, focalRadius)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qradialgradient_focal_radius(&_0));
}

PHP_METHOD(Qt_Gui_QRadialGradient_QRadialGradient, setFocalRadius)
{
	double radius;
	zval *handle_param = NULL, *radius_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(radius)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &radius_param);
	radius = zephir_get_doubleval(radius_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, radius);
	phpqt_qradialgradient_set_focal_radius(&_0, &_1);
}

