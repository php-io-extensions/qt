
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
#include "src/gui-qpointingdevice.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPointingDevice_QPointingDevice)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPointingDevice, QPointingDevice, qt, gui_qpointingdevice_qpointingdevice, qt_gui_qpointingdevice_qpointingdevice_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, staticMetaObject)
{

	RETURN_LONG(phpqt_qpointingdevice_static_meta_object());
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, tr)
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
	phpqt_qpointingdevice_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, new_)
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
	RETURN_LONG(phpqt_qpointingdevice_new(&_0));
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, newQStringQint64QInputDeviceDeviceTypeQPointingDevicePointerTypeQInputDeviceCapabilitiesIntIntQStringQPointingDeviceUniqueIdQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long systemId, devType, pType, caps, maxPoints, buttonCount, parent_;
	zval *name_param = NULL, *systemId_param = NULL, *devType_param = NULL, *pType_param = NULL, *caps_param = NULL, *maxPoints_param = NULL, *buttonCount_param = NULL, *seatName_param = NULL, *uniqueId = NULL, uniqueId_sub, *parent__param = NULL, __$null, _0, _1, _2, _3, _4, _5, _6;
	zval name, seatName;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&seatName);
	ZVAL_UNDEF(&uniqueId_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(7, 10)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(systemId)
		Z_PARAM_LONG(devType)
		Z_PARAM_LONG(pType)
		Z_PARAM_LONG(caps)
		Z_PARAM_LONG(maxPoints)
		Z_PARAM_LONG(buttonCount)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(seatName)
		Z_PARAM_ZVAL_OR_NULL(uniqueId)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 7, 3, &name_param, &systemId_param, &devType_param, &pType_param, &caps_param, &maxPoints_param, &buttonCount_param, &seatName_param, &uniqueId, &parent__param);
	zephir_get_strval(&name, name_param);
	if (!seatName_param) {
		ZEPHIR_INIT_VAR(&seatName);
		ZVAL_STRING(&seatName, "");
	} else {
		zephir_get_strval(&seatName, seatName_param);
	}
	if (!uniqueId) {
		uniqueId = &uniqueId_sub;
		uniqueId = &__$null;
	}
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, systemId);
	ZVAL_LONG(&_1, devType);
	ZVAL_LONG(&_2, pType);
	ZVAL_LONG(&_3, caps);
	ZVAL_LONG(&_4, maxPoints);
	ZVAL_LONG(&_5, buttonCount);
	ZVAL_LONG(&_6, parent_);
	RETURN_MM_LONG(phpqt_qpointingdevice_new_q_string_qint64_q_input_device_device_type_q_pointing_device_pointer_type_q_input_device_capabilities_int_int_q_string_q_pointing_device_unique_id_q_object(&name, &_0, &_1, &_2, &_3, &_4, &_5, &seatName, uniqueId, &_6));
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, pointerType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpointingdevice_pointer_type(&_0));
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, maximumPoints)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpointingdevice_maximum_points(&_0));
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, buttonCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpointingdevice_button_count(&_0));
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, uniqueId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpointingdevice_unique_id(&_0));
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, primaryPointingDevice)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *seatName_param = NULL;
	zval seatName;

	ZVAL_UNDEF(&seatName);
	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(seatName)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 0, 1, &seatName_param);
	if (!seatName_param) {
		ZEPHIR_INIT_VAR(&seatName);
		ZVAL_STRING(&seatName, "");
	} else {
		zephir_get_strval(&seatName, seatName_param);
	}
	RETURN_MM_LONG(phpqt_qpointingdevice_primary_pointing_device(&seatName));
}

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, grabChanged)
{
	zval *handle_param = NULL, *grabber_param = NULL, *transition_param = NULL, *event_param = NULL, *point_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, grabber, transition, event, point;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(grabber)
		Z_PARAM_LONG(transition)
		Z_PARAM_LONG(event)
		Z_PARAM_LONG(point)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &grabber_param, &transition_param, &event_param, &point_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, grabber);
	ZVAL_LONG(&_2, transition);
	ZVAL_LONG(&_3, event);
	ZVAL_LONG(&_4, point);
	phpqt_qpointingdevice_grab_changed(&_0, &_1, &_2, &_3, &_4);
}

