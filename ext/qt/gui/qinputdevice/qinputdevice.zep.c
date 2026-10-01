
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
#include "src/gui-qinputdevice.h"
#include "kernel/object.h"
#include "kernel/string.h"
#include "kernel/memory.h"
#include "kernel/operators.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QInputDevice_QInputDevice)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QInputDevice, QInputDevice, qt, gui_qinputdevice_qinputdevice, qt_gui_qinputdevice_qinputdevice_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, staticMetaObject)
{

	RETURN_LONG(phpqt_qinputdevice_static_meta_object());
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, tr)
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
	phpqt_qinputdevice_tr(&result, s, c, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, new_)
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
	RETURN_LONG(phpqt_qinputdevice_new(&_0));
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, newQStringQint64QInputDeviceDeviceTypeQStringQObject)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long systemId, type, parent_;
	zval *name_param = NULL, *systemId_param = NULL, *type_param = NULL, *seatName_param = NULL, *parent__param = NULL, _0, _1, _2;
	zval name, seatName;

	ZVAL_UNDEF(&name);
	ZVAL_UNDEF(&seatName);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 5)
		Z_PARAM_STR(name)
		Z_PARAM_LONG(systemId)
		Z_PARAM_LONG(type)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(seatName)
		Z_PARAM_LONG(parent_)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 3, 2, &name_param, &systemId_param, &type_param, &seatName_param, &parent__param);
	zephir_get_strval(&name, name_param);
	if (!seatName_param) {
		ZEPHIR_INIT_VAR(&seatName);
		ZVAL_STRING(&seatName, "");
	} else {
		zephir_get_strval(&seatName, seatName_param);
	}
	if (!parent__param) {
		parent_ = 0;
	} else {
		}
	ZVAL_LONG(&_0, systemId);
	ZVAL_LONG(&_1, type);
	ZVAL_LONG(&_2, parent_);
	RETURN_MM_LONG(phpqt_qinputdevice_new_q_string_qint64_q_input_device_device_type_q_string_q_object(&name, &_0, &_1, &seatName, &_2));
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, name)
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
	phpqt_qinputdevice_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, type)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdevice_type(&_0));
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, capabilities)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdevice_capabilities(&_0));
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, hasCapability)
{
	zval *handle_param = NULL, *cap_param = NULL, _0, _1;
	zend_long handle, cap, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(cap)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &cap_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, cap);
	r = phpqt_qinputdevice_has_capability(&_0, &_1);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, systemId)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qinputdevice_system_id(&_0));
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, seatName)
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
	phpqt_qinputdevice_seat_name(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, availableVirtualGeometry)
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
	phpqt_qinputdevice_available_virtual_geometry(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, seatNames)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qinputdevice_seat_names(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, devices)
{
	zval result;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;

	ZVAL_UNDEF(&result);
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);

	ZEPHIR_INIT_VAR(&result);
	phpqt_qinputdevice_devices(&result);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, primaryKeyboard)
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
	RETURN_MM_LONG(phpqt_qinputdevice_primary_keyboard(&seatName));
}

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, availableVirtualGeometryChanged)
{
	zval *handle_param = NULL, *areaX_param = NULL, *areaY_param = NULL, *areaWidth_param = NULL, *areaHeight_param = NULL, _0, _1, _2, _3, _4;
	zend_long handle, areaX, areaY, areaWidth, areaHeight;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(areaX)
		Z_PARAM_LONG(areaY)
		Z_PARAM_LONG(areaWidth)
		Z_PARAM_LONG(areaHeight)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(5, 0, &handle_param, &areaX_param, &areaY_param, &areaWidth_param, &areaHeight_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, areaX);
	ZVAL_LONG(&_2, areaY);
	ZVAL_LONG(&_3, areaWidth);
	ZVAL_LONG(&_4, areaHeight);
	phpqt_qinputdevice_available_virtual_geometry_changed(&_0, &_1, &_2, &_3, &_4);
}

