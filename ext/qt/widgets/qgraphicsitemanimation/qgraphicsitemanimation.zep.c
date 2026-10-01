
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
#include "src/widgets-qgraphicsitemanimation.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsItemAnimation, QGraphicsItemAnimation, qt, widgets_qgraphicsitemanimation_qgraphicsitemanimation, qt_widgets_qgraphicsitemanimation_qgraphicsitemanimation_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, staticMetaObject)
{

	RETURN_LONG(phpqt_qgraphicsitemanimation_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, tr)
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
	phpqt_qgraphicsitemanimation_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, new_)
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
	RETURN_LONG(phpqt_qgraphicsitemanimation_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, item)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsitemanimation_item(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setItem)
{
	zval *handle_param = NULL, *item_param = NULL, _0, _1;
	zend_long handle, item;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(item)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &item_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, item);
	phpqt_qgraphicsitemanimation_set_item(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, timeLine)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsitemanimation_time_line(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setTimeLine)
{
	zval *handle_param = NULL, *timeLine_param = NULL, _0, _1;
	zend_long handle, timeLine;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timeLine)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timeLine_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timeLine);
	phpqt_qgraphicsitemanimation_set_time_line(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, posAt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	double step;
	zval *handle_param = NULL, *step_param = NULL, result, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&result);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZEPHIR_INIT_VAR(&result);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	phpqt_qgraphicsitemanimation_pos_at(&result, &_0, &_1);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, posList)
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
	phpqt_qgraphicsitemanimation_pos_list(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setPosAt)
{
	double step, posX, posY;
	zval *handle_param = NULL, *step_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2, _3;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &step_param, &posX_param, &posY_param);
	step = zephir_get_doubleval(step_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	ZVAL_DOUBLE(&_2, posX);
	ZVAL_DOUBLE(&_3, posY);
	phpqt_qgraphicsitemanimation_set_pos_at(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, transformAt)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	RETURN_LONG(phpqt_qgraphicsitemanimation_transform_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, rotationAt)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	RETURN_DOUBLE(phpqt_qgraphicsitemanimation_rotation_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, rotationList)
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
	phpqt_qgraphicsitemanimation_rotation_list(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setRotationAt)
{
	double step, angle;
	zval *handle_param = NULL, *step_param = NULL, *angle_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
		Z_PARAM_ZVAL(angle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &step_param, &angle_param);
	step = zephir_get_doubleval(step_param);
	angle = zephir_get_doubleval(angle_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	ZVAL_DOUBLE(&_2, angle);
	phpqt_qgraphicsitemanimation_set_rotation_at(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, xTranslationAt)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	RETURN_DOUBLE(phpqt_qgraphicsitemanimation_x_translation_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, yTranslationAt)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	RETURN_DOUBLE(phpqt_qgraphicsitemanimation_y_translation_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, translationList)
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
	phpqt_qgraphicsitemanimation_translation_list(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setTranslationAt)
{
	double step, dx, dy;
	zval *handle_param = NULL, *step_param = NULL, *dx_param = NULL, *dy_param = NULL, _0, _1, _2, _3;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
		Z_PARAM_ZVAL(dx)
		Z_PARAM_ZVAL(dy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &step_param, &dx_param, &dy_param);
	step = zephir_get_doubleval(step_param);
	dx = zephir_get_doubleval(dx_param);
	dy = zephir_get_doubleval(dy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	ZVAL_DOUBLE(&_2, dx);
	ZVAL_DOUBLE(&_3, dy);
	phpqt_qgraphicsitemanimation_set_translation_at(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, verticalScaleAt)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	RETURN_DOUBLE(phpqt_qgraphicsitemanimation_vertical_scale_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, horizontalScaleAt)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	RETURN_DOUBLE(phpqt_qgraphicsitemanimation_horizontal_scale_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, scaleList)
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
	phpqt_qgraphicsitemanimation_scale_list(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setScaleAt)
{
	double step, sx, sy;
	zval *handle_param = NULL, *step_param = NULL, *sx_param = NULL, *sy_param = NULL, _0, _1, _2, _3;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
		Z_PARAM_ZVAL(sx)
		Z_PARAM_ZVAL(sy)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &step_param, &sx_param, &sy_param);
	step = zephir_get_doubleval(step_param);
	sx = zephir_get_doubleval(sx_param);
	sy = zephir_get_doubleval(sy_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	ZVAL_DOUBLE(&_2, sx);
	ZVAL_DOUBLE(&_3, sy);
	phpqt_qgraphicsitemanimation_set_scale_at(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, verticalShearAt)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	RETURN_DOUBLE(phpqt_qgraphicsitemanimation_vertical_shear_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, horizontalShearAt)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	RETURN_DOUBLE(phpqt_qgraphicsitemanimation_horizontal_shear_at(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, shearList)
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
	phpqt_qgraphicsitemanimation_shear_list(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setShearAt)
{
	double step, sh, sv;
	zval *handle_param = NULL, *step_param = NULL, *sh_param = NULL, *sv_param = NULL, _0, _1, _2, _3;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
		Z_PARAM_ZVAL(sh)
		Z_PARAM_ZVAL(sv)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &step_param, &sh_param, &sv_param);
	step = zephir_get_doubleval(step_param);
	sh = zephir_get_doubleval(sh_param);
	sv = zephir_get_doubleval(sv_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	ZVAL_DOUBLE(&_2, sh);
	ZVAL_DOUBLE(&_3, sv);
	phpqt_qgraphicsitemanimation_set_shear_at(&_0, &_1, &_2, &_3);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, clear)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qgraphicsitemanimation_clear(&_0);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, setStep)
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
	phpqt_qgraphicsitemanimation_set_step(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, beforeAnimationStep)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	phpqt_qgraphicsitemanimation_before_animation_step(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsItemAnimation_QGraphicsItemAnimation, afterAnimationStep)
{
	double step;
	zval *handle_param = NULL, *step_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(step)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &step_param);
	step = zephir_get_doubleval(step_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, step);
	phpqt_qgraphicsitemanimation_after_animation_step(&_0, &_1);
}

