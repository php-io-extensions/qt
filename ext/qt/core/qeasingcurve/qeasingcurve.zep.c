
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
#include "src/core-qeasingcurve.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Core_QEasingCurve_QEasingCurve)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Core\\QEasingCurve, QEasingCurve, qt, core_qeasingcurve_qeasingcurve, qt_core_qeasingcurve_qeasingcurve_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, staticMetaObject)
{

	RETURN_LONG(phpqt_qeasingcurve_static_meta_object());
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qeasingcurve_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, new_)
{
	zval *type = NULL, type_sub, __$null;

	ZVAL_UNDEF(&type_sub);
	ZVAL_NULL(&__$null);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(0, 1, &type);
	if (!type) {
		type = &type_sub;
		type = &__$null;
	}
	RETURN_LONG(phpqt_qeasingcurve_new(type));
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, newQEasingCurve)
{
	zval *other_param = NULL, _0;
	zend_long other;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &other_param);
	ZVAL_LONG(&_0, other);
	RETURN_LONG(phpqt_qeasingcurve_new_q_easing_curve(&_0));
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, swap)
{
	zval *handle_param = NULL, *other_param = NULL, _0, _1;
	zend_long handle, other;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(other)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &other_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, other);
	phpqt_qeasingcurve_swap(&_0, &_1);
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, amplitude)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qeasingcurve_amplitude(&_0));
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, setAmplitude)
{
	double amplitude;
	zval *handle_param = NULL, *amplitude_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(amplitude)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &amplitude_param);
	amplitude = zephir_get_doubleval(amplitude_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, amplitude);
	phpqt_qeasingcurve_set_amplitude(&_0, &_1);
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, period)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qeasingcurve_period(&_0));
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, setPeriod)
{
	double period;
	zval *handle_param = NULL, *period_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(period)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &period_param);
	period = zephir_get_doubleval(period_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, period);
	phpqt_qeasingcurve_set_period(&_0, &_1);
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, overshoot)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qeasingcurve_overshoot(&_0));
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, setOvershoot)
{
	double overshoot;
	zval *handle_param = NULL, *overshoot_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(overshoot)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &overshoot_param);
	overshoot = zephir_get_doubleval(overshoot_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, overshoot);
	phpqt_qeasingcurve_set_overshoot(&_0, &_1);
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, addCubicBezierSegment)
{
	double c1X, c1Y, c2X, c2Y, endPointX, endPointY;
	zval *handle_param = NULL, *c1X_param = NULL, *c1Y_param = NULL, *c2X_param = NULL, *c2Y_param = NULL, *endPointX_param = NULL, *endPointY_param = NULL, _0, _1, _2, _3, _4, _5, _6;
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
		Z_PARAM_ZVAL(c1X)
		Z_PARAM_ZVAL(c1Y)
		Z_PARAM_ZVAL(c2X)
		Z_PARAM_ZVAL(c2Y)
		Z_PARAM_ZVAL(endPointX)
		Z_PARAM_ZVAL(endPointY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(7, 0, &handle_param, &c1X_param, &c1Y_param, &c2X_param, &c2Y_param, &endPointX_param, &endPointY_param);
	c1X = zephir_get_doubleval(c1X_param);
	c1Y = zephir_get_doubleval(c1Y_param);
	c2X = zephir_get_doubleval(c2X_param);
	c2Y = zephir_get_doubleval(c2Y_param);
	endPointX = zephir_get_doubleval(endPointX_param);
	endPointY = zephir_get_doubleval(endPointY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, c1X);
	ZVAL_DOUBLE(&_2, c1Y);
	ZVAL_DOUBLE(&_3, c2X);
	ZVAL_DOUBLE(&_4, c2Y);
	ZVAL_DOUBLE(&_5, endPointX);
	ZVAL_DOUBLE(&_6, endPointY);
	phpqt_qeasingcurve_add_cubic_bezier_segment(&_0, &_1, &_2, &_3, &_4, &_5, &_6);
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, addTCBSegment)
{
	double nextPointX, nextPointY, t, c, b;
	zval *handle_param = NULL, *nextPointX_param = NULL, *nextPointY_param = NULL, *t_param = NULL, *c_param = NULL, *b_param = NULL, _0, _1, _2, _3, _4, _5;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(nextPointX)
		Z_PARAM_ZVAL(nextPointY)
		Z_PARAM_ZVAL(t)
		Z_PARAM_ZVAL(c)
		Z_PARAM_ZVAL(b)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 0, &handle_param, &nextPointX_param, &nextPointY_param, &t_param, &c_param, &b_param);
	nextPointX = zephir_get_doubleval(nextPointX_param);
	nextPointY = zephir_get_doubleval(nextPointY_param);
	t = zephir_get_doubleval(t_param);
	c = zephir_get_doubleval(c_param);
	b = zephir_get_doubleval(b_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, nextPointX);
	ZVAL_DOUBLE(&_2, nextPointY);
	ZVAL_DOUBLE(&_3, t);
	ZVAL_DOUBLE(&_4, c);
	ZVAL_DOUBLE(&_5, b);
	phpqt_qeasingcurve_add_t_c_b_segment(&_0, &_1, &_2, &_3, &_4, &_5);
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, toCubicSpline)
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
	phpqt_qeasingcurve_to_cubic_spline(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qeasingcurve_type(&_0));
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, setType)
{
	zval *handle_param = NULL, *type_param = NULL, _0, _1;
	zend_long handle, type;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &type_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, type);
	phpqt_qeasingcurve_set_type(&_0, &_1);
}

PHP_METHOD(Qt_Core_QEasingCurve_QEasingCurve, valueForProgress)
{
	double progress;
	zval *handle_param = NULL, *progress_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(progress)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &progress_param);
	progress = zephir_get_doubleval(progress_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, progress);
	RETURN_DOUBLE(phpqt_qeasingcurve_value_for_progress(&_0, &_1));
}

