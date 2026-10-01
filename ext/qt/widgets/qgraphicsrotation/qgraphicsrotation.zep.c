
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
#include "src/widgets-qgraphicsrotation.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsRotation_QGraphicsRotation)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsRotation, QGraphicsRotation, qt, widgets_qgraphicsrotation_qgraphicsrotation, qt_widgets_qgraphicsrotation_qgraphicsrotation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, staticMetaObject)
{

	RETURN_LONG(phpqt_qgraphicsrotation_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, tr)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long n;
	zval *s = NULL, s_sub, *c = NULL, c_sub, *n_param = NULL, __$null, result, _0;

	ZVAL_UNDEF(&s_sub);
	ZVAL_UNDEF(&c_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_ZVAL(s)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(c)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 1, 2, &s, &c, &n_param);
	if (!c) {
		c = &c_sub;
		c = &__$null;
	}
	if (!n_param) {
		n = -1;
	} else {
		}
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, n);
	phpqt_qgraphicsrotation_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, new_)
{
	zval *parent__param = NULL, _0;
	zend_long parent_;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &parent__param);
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, parent_);
	RETURN_LONG(phpqt_qgraphicsrotation_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, origin)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsrotation_origin(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setOrigin)
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
	phpqt_qgraphicsrotation_set_origin(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, angle)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicsrotation_angle(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setAngle)
{
	double arg0;
	zval *handle_param = NULL, *arg0_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &arg0_param);
	arg0 = zephir_get_doubleval(arg0_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, arg0);
	phpqt_qgraphicsrotation_set_angle(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, axis)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsrotation_axis(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setAxis)
{
	zval *handle_param = NULL, *axis_param = NULL, _0, _1;
	zend_long handle, axis;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(axis)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &axis_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, axis);
	phpqt_qgraphicsrotation_set_axis(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, setAxisQtAxis)
{
	zval *handle_param = NULL, *axis_param = NULL, _0, _1;
	zend_long handle, axis;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(axis)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &axis_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, axis);
	phpqt_qgraphicsrotation_set_axis_qt_axis(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, applyTo)
{
	zval *handle_param = NULL, *matrix_param = NULL, _0, _1;
	zend_long handle, matrix;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(matrix)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &matrix_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, matrix);
	phpqt_qgraphicsrotation_apply_to(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, originChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsrotation_origin_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, angleChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsrotation_angle_changed(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsRotation_QGraphicsRotation, axisChanged)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsrotation_axis_changed(&_0);
}

