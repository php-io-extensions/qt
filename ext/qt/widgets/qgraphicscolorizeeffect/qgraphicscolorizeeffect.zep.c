
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
#include "src/widgets-qgraphicscolorizeeffect.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsColorizeEffect, QGraphicsColorizeEffect, qt, widgets_qgraphicscolorizeeffect_qgraphicscolorizeeffect, qt_widgets_qgraphicscolorizeeffect_qgraphicscolorizeeffect_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, staticMetaObject)
{

	RETURN_LONG(phpqt_qgraphicscolorizeeffect_static_meta_object());
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, tr)
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
	phpqt_qgraphicscolorizeeffect_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, new_)
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
	RETURN_LONG(phpqt_qgraphicscolorizeeffect_new(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, color)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicscolorizeeffect_color(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, strength)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_DOUBLE(phpqt_qgraphicscolorizeeffect_strength(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, setColor)
{
	zval *handle_param = NULL, *c_param = NULL, _0, _1;
	zend_long handle, c;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(c)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &c_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, c);
	phpqt_qgraphicscolorizeeffect_set_color(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, setStrength)
{
	double strength;
	zval *handle_param = NULL, *strength_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(strength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &strength_param);
	strength = zephir_get_doubleval(strength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, strength);
	phpqt_qgraphicscolorizeeffect_set_strength(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, colorChanged)
{
	zval *handle_param = NULL, *color_param = NULL, _0, _1;
	zend_long handle, color;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(color)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &color_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, color);
	phpqt_qgraphicscolorizeeffect_color_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, strengthChanged)
{
	double strength;
	zval *handle_param = NULL, *strength_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(strength)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &strength_param);
	strength = zephir_get_doubleval(strength_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, strength);
	phpqt_qgraphicscolorizeeffect_strength_changed(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsColorizeEffect_QGraphicsColorizeEffect, draw)
{
	zval *handle_param = NULL, *painter_param = NULL, _0, _1;
	zend_long handle, painter;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(painter)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &painter_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, painter);
	phpqt_qgraphicscolorizeeffect_draw(&_0, &_1);
}

