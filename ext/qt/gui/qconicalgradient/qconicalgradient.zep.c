
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
#include "src/gui-qconicalgradient.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QConicalGradient_QConicalGradient)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QConicalGradient, QConicalGradient, qt, gui_qconicalgradient_qconicalgradient, qt_gui_qconicalgradient_qconicalgradient_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, new_)
{

	RETURN_LONG(phpqt_qconicalgradient_new());
}

PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, newQPointFQreal)
{
	zval *centerX_param = NULL, *centerY_param = NULL, *startAngle_param = NULL, _0, _1, _2;
	double centerX, centerY, startAngle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(centerX)
		Z_PARAM_ZVAL(centerY)
		Z_PARAM_ZVAL(startAngle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &centerX_param, &centerY_param, &startAngle_param);
	centerX = zephir_get_doubleval(centerX_param);
	centerY = zephir_get_doubleval(centerY_param);
	startAngle = zephir_get_doubleval(startAngle_param);
	ZVAL_DOUBLE(&_0, centerX);
	ZVAL_DOUBLE(&_1, centerY);
	ZVAL_DOUBLE(&_2, startAngle);
	RETURN_LONG(phpqt_qconicalgradient_new_q_point_f_qreal(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, newQrealQrealQreal)
{
	zval *cx_param = NULL, *cy_param = NULL, *startAngle_param = NULL, _0, _1, _2;
	double cx, cy, startAngle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_ZVAL(cx)
		Z_PARAM_ZVAL(cy)
		Z_PARAM_ZVAL(startAngle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &cx_param, &cy_param, &startAngle_param);
	cx = zephir_get_doubleval(cx_param);
	cy = zephir_get_doubleval(cy_param);
	startAngle = zephir_get_doubleval(startAngle_param);
	ZVAL_DOUBLE(&_0, cx);
	ZVAL_DOUBLE(&_1, cy);
	ZVAL_DOUBLE(&_2, startAngle);
	RETURN_LONG(phpqt_qconicalgradient_new_qreal_qreal_qreal(&_0, &_1, &_2));
}

PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, center)
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
	phpqt_qconicalgradient_center(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, setCenter)
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
	phpqt_qconicalgradient_set_center(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, setCenterQrealQreal)
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
	phpqt_qconicalgradient_set_center_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, angle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qconicalgradient_angle(&_0));
}

PHP_METHOD(Qt_Gui_QConicalGradient_QConicalGradient, setAngle)
{
	double angle;
	zval *handle_param = NULL, *angle_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &angle_param);
	angle = zephir_get_doubleval(angle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, angle);
	phpqt_qconicalgradient_set_angle(&_0, &_1);
}

