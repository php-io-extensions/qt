
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
#include "src/gui-qenterevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QEnterEvent_QEnterEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QEnterEvent, QEnterEvent, qt, gui_qenterevent_qenterevent, qt_gui_qenterevent_qenterevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QEnterEvent_QEnterEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qenterevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QEnterEvent_QEnterEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qenterevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QEnterEvent_QEnterEvent, newQPointFQPointFQPointFQPointingDevice)
{
	zval *localPosX_param = NULL, *localPosY_param = NULL, *scenePosX_param = NULL, *scenePosY_param = NULL, *globalPosX_param = NULL, *globalPosY_param = NULL, *device = NULL, device_sub, __$null, _0, _1, _2, _3, _4, _5;
	double localPosX, localPosY, scenePosX, scenePosY, globalPosX, globalPosY;

	ZVAL_UNDEF(&device_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(6, 7)
		Z_PARAM_ZVAL(localPosX)
		Z_PARAM_ZVAL(localPosY)
		Z_PARAM_ZVAL(scenePosX)
		Z_PARAM_ZVAL(scenePosY)
		Z_PARAM_ZVAL(globalPosX)
		Z_PARAM_ZVAL(globalPosY)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(device)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(6, 1, &localPosX_param, &localPosY_param, &scenePosX_param, &scenePosY_param, &globalPosX_param, &globalPosY_param, &device);
	localPosX = zephir_get_doubleval(localPosX_param);
	localPosY = zephir_get_doubleval(localPosY_param);
	scenePosX = zephir_get_doubleval(scenePosX_param);
	scenePosY = zephir_get_doubleval(scenePosY_param);
	globalPosX = zephir_get_doubleval(globalPosX_param);
	globalPosY = zephir_get_doubleval(globalPosY_param);
	if (!device) {
		device = &device_sub;
		device = &__$null;
	}
	ZVAL_DOUBLE(&_0, localPosX);
	ZVAL_DOUBLE(&_1, localPosY);
	ZVAL_DOUBLE(&_2, scenePosX);
	ZVAL_DOUBLE(&_3, scenePosY);
	ZVAL_DOUBLE(&_4, globalPosX);
	ZVAL_DOUBLE(&_5, globalPosY);
	RETURN_LONG(phpqt_qenterevent_new_q_point_f_q_point_f_q_point_f_q_pointing_device(&_0, &_1, &_2, &_3, &_4, &_5, device));
}

