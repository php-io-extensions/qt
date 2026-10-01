
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
#include "src/gui-qlineargradient.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QLinearGradient_QLinearGradient)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QLinearGradient, QLinearGradient, qt, gui_qlineargradient_qlineargradient, qt_gui_qlineargradient_qlineargradient_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, new_)
{

	RETURN_LONG(phpqt_qlineargradient_new());
}

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, newQPointFQPointF)
{
	zval *startX_param = NULL, *startY_param = NULL, *finalStopX_param = NULL, *finalStopY_param = NULL, _0, _1, _2, _3;
	double startX, startY, finalStopX, finalStopY;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(startX)
		Z_PARAM_ZVAL(startY)
		Z_PARAM_ZVAL(finalStopX)
		Z_PARAM_ZVAL(finalStopY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &startX_param, &startY_param, &finalStopX_param, &finalStopY_param);
	startX = zephir_get_doubleval(startX_param);
	startY = zephir_get_doubleval(startY_param);
	finalStopX = zephir_get_doubleval(finalStopX_param);
	finalStopY = zephir_get_doubleval(finalStopY_param);
	ZVAL_DOUBLE(&_0, startX);
	ZVAL_DOUBLE(&_1, startY);
	ZVAL_DOUBLE(&_2, finalStopX);
	ZVAL_DOUBLE(&_3, finalStopY);
	RETURN_LONG(phpqt_qlineargradient_new_q_point_f_q_point_f(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, newQrealQrealQrealQreal)
{
	zval *xStart_param = NULL, *yStart_param = NULL, *xFinalStop_param = NULL, *yFinalStop_param = NULL, _0, _1, _2, _3;
	double xStart, yStart, xFinalStop, yFinalStop;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_ZVAL(xStart)
		Z_PARAM_ZVAL(yStart)
		Z_PARAM_ZVAL(xFinalStop)
		Z_PARAM_ZVAL(yFinalStop)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(4, 0, &xStart_param, &yStart_param, &xFinalStop_param, &yFinalStop_param);
	xStart = zephir_get_doubleval(xStart_param);
	yStart = zephir_get_doubleval(yStart_param);
	xFinalStop = zephir_get_doubleval(xFinalStop_param);
	yFinalStop = zephir_get_doubleval(yFinalStop_param);
	ZVAL_DOUBLE(&_0, xStart);
	ZVAL_DOUBLE(&_1, yStart);
	ZVAL_DOUBLE(&_2, xFinalStop);
	ZVAL_DOUBLE(&_3, yFinalStop);
	RETURN_LONG(phpqt_qlineargradient_new_qreal_qreal_qreal_qreal(&_0, &_1, &_2, &_3));
}

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, start)
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
	phpqt_qlineargradient_start(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, setStart)
{
	double startX, startY;
	zval *handle_param = NULL, *startX_param = NULL, *startY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(startX)
		Z_PARAM_ZVAL(startY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &startX_param, &startY_param);
	startX = zephir_get_doubleval(startX_param);
	startY = zephir_get_doubleval(startY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, startX);
	ZVAL_DOUBLE(&_2, startY);
	phpqt_qlineargradient_set_start(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, setStartQrealQreal)
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
	phpqt_qlineargradient_set_start_qreal_qreal(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, finalStop)
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
	phpqt_qlineargradient_final_stop(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, setFinalStop)
{
	double stopX, stopY;
	zval *handle_param = NULL, *stopX_param = NULL, *stopY_param = NULL, _0, _1, _2;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_ZVAL(stopX)
		Z_PARAM_ZVAL(stopY)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &stopX_param, &stopY_param);
	stopX = zephir_get_doubleval(stopX_param);
	stopY = zephir_get_doubleval(stopY_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_DOUBLE(&_1, stopX);
	ZVAL_DOUBLE(&_2, stopY);
	phpqt_qlineargradient_set_final_stop(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QLinearGradient_QLinearGradient, setFinalStopQrealQreal)
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
	phpqt_qlineargradient_set_final_stop_qreal_qreal(&_0, &_1, &_2);
}

