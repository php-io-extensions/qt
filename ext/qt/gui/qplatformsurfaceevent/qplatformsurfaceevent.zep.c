
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
#include "src/gui-qplatformsurfaceevent.h"
#include "kernel/operators.h"
#include "kernel/memory.h"
#include "kernel/object.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPlatformSurfaceEvent_QPlatformSurfaceEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPlatformSurfaceEvent, QPlatformSurfaceEvent, qt, gui_qplatformsurfaceevent_qplatformsurfaceevent, qt_gui_qplatformsurfaceevent_qplatformsurfaceevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPlatformSurfaceEvent_QPlatformSurfaceEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qplatformsurfaceevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QPlatformSurfaceEvent_QPlatformSurfaceEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplatformsurfaceevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QPlatformSurfaceEvent_QPlatformSurfaceEvent, newQPlatformSurfaceEventSurfaceEventType)
{
	zval *surfaceEventType_param = NULL, _0;
	zend_long surfaceEventType;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(surfaceEventType)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &surfaceEventType_param);
	ZVAL_LONG(&_0, surfaceEventType);
	RETURN_LONG(phpqt_qplatformsurfaceevent_new_q_platform_surface_event_surface_event_type(&_0));
}

PHP_METHOD(Qt_Gui_QPlatformSurfaceEvent_QPlatformSurfaceEvent, surfaceEventType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplatformsurfaceevent_surface_event_type(&_0));
}

PHP_METHOD(Qt_Gui_QPlatformSurfaceEvent_QPlatformSurfaceEvent, m_surfaceEventType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qplatformsurfaceevent_m_surface_event_type(&_0));
}

PHP_METHOD(Qt_Gui_QPlatformSurfaceEvent_QPlatformSurfaceEvent, setM_surfaceEventType)
{
	zval *handle_param = NULL, *value_param = NULL, _0, _1;
	zend_long handle, value;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(value)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &value_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, value);
	phpqt_qplatformsurfaceevent_set_m_surface_event_type(&_0, &_1);
}

