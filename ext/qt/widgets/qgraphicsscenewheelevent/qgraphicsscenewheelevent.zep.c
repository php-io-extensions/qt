
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
#include "src/widgets-qgraphicsscenewheelevent.h"
#include "kernel/memory.h"
#include "kernel/object.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGraphicsSceneWheelEvent, QGraphicsSceneWheelEvent, qt, widgets_qgraphicsscenewheelevent_qgraphicsscenewheelevent, qt_widgets_qgraphicsscenewheelevent_qgraphicsscenewheelevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, new_)
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
	RETURN_LONG(phpqt_qgraphicsscenewheelevent_new(type));
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, pos)
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
	phpqt_qgraphicsscenewheelevent_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setPos)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	phpqt_qgraphicsscenewheelevent_set_pos(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, scenePos)
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
	phpqt_qgraphicsscenewheelevent_scene_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setScenePos)
{
	double posX, posY;
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(posX)
		Z_PARAM_ZVAL(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	posX = zephir_get_doubleval(posX_param);
	posY = zephir_get_doubleval(posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, posX);
	ZVAL_DOUBLE(&_2, posY);
	phpqt_qgraphicsscenewheelevent_set_scene_pos(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, screenPos)
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
	phpqt_qgraphicsscenewheelevent_screen_pos(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setScreenPos)
{
	zval *handle_param = NULL, *posX_param = NULL, *posY_param = NULL, _0, _1, _2;
	zend_long handle, posX, posY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(posX)
		Z_PARAM_LONG(posY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &posX_param, &posY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, posX);
	ZVAL_LONG(&_2, posY);
	phpqt_qgraphicsscenewheelevent_set_screen_pos(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, buttons)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscenewheelevent_buttons(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setButtons)
{
	zval *handle_param = NULL, *buttons_param = NULL, _0, _1;
	zend_long handle, buttons;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(buttons)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &buttons_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, buttons);
	phpqt_qgraphicsscenewheelevent_set_buttons(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, modifiers)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscenewheelevent_modifiers(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setModifiers)
{
	zval *handle_param = NULL, *modifiers_param = NULL, _0, _1;
	zend_long handle, modifiers;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(modifiers)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &modifiers_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, modifiers);
	phpqt_qgraphicsscenewheelevent_set_modifiers(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, delta)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscenewheelevent_delta(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setDelta)
{
	zval *handle_param = NULL, *delta_param = NULL, _0, _1;
	zend_long handle, delta;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(delta)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &delta_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, delta);
	phpqt_qgraphicsscenewheelevent_set_delta(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, orientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscenewheelevent_orientation(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setOrientation)
{
	zval *handle_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long handle, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &orientation_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, orientation);
	phpqt_qgraphicsscenewheelevent_set_orientation(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, phase)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qgraphicsscenewheelevent_phase(&_0));
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setPhase)
{
	zval *handle_param = NULL, *scrollPhase_param = NULL, _0, _1;
	zend_long handle, scrollPhase;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(scrollPhase)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &scrollPhase_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, scrollPhase);
	phpqt_qgraphicsscenewheelevent_set_phase(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, pixelDelta)
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
	phpqt_qgraphicsscenewheelevent_pixel_delta(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setPixelDelta)
{
	zval *handle_param = NULL, *deltaX_param = NULL, *deltaY_param = NULL, _0, _1, _2;
	zend_long handle, deltaX, deltaY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(deltaX)
		Z_PARAM_LONG(deltaY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &deltaX_param, &deltaY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, deltaX);
	ZVAL_LONG(&_2, deltaY);
	phpqt_qgraphicsscenewheelevent_set_pixel_delta(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, isInverted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qgraphicsscenewheelevent_is_inverted(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Widgets_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent, setInverted)
{
	zend_bool inverted;
	zval *handle_param = NULL, *inverted_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(inverted)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &inverted_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (inverted ? 1 : 0));
	phpqt_qgraphicsscenewheelevent_set_inverted(&_0, &_1);
}

