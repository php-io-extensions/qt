
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
#include "src/widgets-qgesturerecognizer.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Widgets_QGestureRecognizer_QGestureRecognizer)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Widgets\\QGestureRecognizer, QGestureRecognizer, qt, widgets_qgesturerecognizer_qgesturerecognizer, qt_widgets_qgesturerecognizer_qgesturerecognizer_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, new_)
{

	RETURN_LONG(phpqt_qgesturerecognizer_new());
}

PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, create)
{
	zval *handle_param = NULL, *target_param = NULL, _0, _1;
	zend_long handle, target;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(target)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &target_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, target);
	RETURN_LONG(phpqt_qgesturerecognizer_create(&_0, &_1));
}

PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, recognize)
{
	zval *handle_param = NULL, *state_param = NULL, *watched_param = NULL, *event_param = NULL, _0, _1, _2, _3;
	zend_long handle, state, watched, event;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(state)
		Z_PARAM_LONG(watched)
		Z_PARAM_LONG(event)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &handle_param, &state_param, &watched_param, &event_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, state);
	ZVAL_LONG(&_2, watched);
	ZVAL_LONG(&_3, event);
	RETURN_LONG(phpqt_qgesturerecognizer_recognize(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, reset)
{
	zval *handle_param = NULL, *state_param = NULL, _0, _1;
	zend_long handle, state;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(state)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &state_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, state);
	phpqt_qgesturerecognizer_reset(&_0, &_1);
}

PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, registerRecognizer)
{
	zval *recognizer_param = NULL, _0;
	zend_long recognizer;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(recognizer)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &recognizer_param);
	ZVAL_LONG(&_0, recognizer);
	RETURN_LONG(phpqt_qgesturerecognizer_register_recognizer(&_0));
}

PHP_METHOD(Qt_Widgets_QGestureRecognizer_QGestureRecognizer, unregisterRecognizer)
{
	zval *type_param = NULL, _0;
	zend_long type;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &type_param);
	ZVAL_LONG(&_0, type);
	phpqt_qgesturerecognizer_unregister_recognizer(&_0);
}

