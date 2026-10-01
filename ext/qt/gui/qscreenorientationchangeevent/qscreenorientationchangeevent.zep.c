
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
#include "src/gui-qscreenorientationchangeevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QScreenOrientationChangeEvent_QScreenOrientationChangeEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QScreenOrientationChangeEvent, QScreenOrientationChangeEvent, qt, gui_qscreenorientationchangeevent_qscreenorientationchangeevent, qt_gui_qscreenorientationchangeevent_qscreenorientationchangeevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QScreenOrientationChangeEvent_QScreenOrientationChangeEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qscreenorientationchangeevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QScreenOrientationChangeEvent_QScreenOrientationChangeEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscreenorientationchangeevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QScreenOrientationChangeEvent_QScreenOrientationChangeEvent, newQScreenQtScreenOrientation)
{
	zval *screen_param = NULL, *orientation_param = NULL, _0, _1;
	zend_long screen, orientation;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(screen)
		Z_PARAM_LONG(orientation)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &screen_param, &orientation_param);
	ZVAL_LONG(&_0, screen);
	ZVAL_LONG(&_1, orientation);
	RETURN_LONG(phpqt_qscreenorientationchangeevent_new_q_screen_qt_screen_orientation(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QScreenOrientationChangeEvent_QScreenOrientationChangeEvent, screen)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscreenorientationchangeevent_screen(&_0));
}

PHP_METHOD(Qt_Gui_QScreenOrientationChangeEvent_QScreenOrientationChangeEvent, orientation)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qscreenorientationchangeevent_orientation(&_0));
}

