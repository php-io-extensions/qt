
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
#include "src/gui-qpointerevent.h"
#include "kernel/object.h"
#include "kernel/operators.h"
#include "kernel/memory.h"


ZEPHIR_INIT_CLASS(Qt_Gui_QPointerEvent_QPointerEvent)
{
	ZEPHIR_REGISTER_CLASS(Qt\\Gui\\QPointerEvent, QPointerEvent, qt, gui_qpointerevent_qpointerevent, qt_gui_qpointerevent_qpointerevent_method_entry, 0);

	return SUCCESS;
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, staticMetaObject)
{

	RETURN_LONG(phpqt_qpointerevent_static_meta_object());
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, qt_check_for_QGADGET_macro)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpointerevent_qt_check_for__q_g_a_d_g_e_t_macro(&_0);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, new_)
{
	zval *arg0_param = NULL, _0;
	zend_long arg0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(arg0)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &arg0_param);
	ZVAL_LONG(&_0, arg0);
	RETURN_LONG(phpqt_qpointerevent_new(&_0));
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, clone_)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpointerevent_clone(&_0));
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, newQEventTypeQPointingDeviceQtKeyboardModifiersQListQEventPoint)
{
	zval *type_param = NULL, *dev_param = NULL, *modifiers = NULL, modifiers_sub, *points = NULL, points_sub, __$null, _0, _1;
	zend_long type, dev;

	ZVAL_UNDEF(&modifiers_sub);
	ZVAL_UNDEF(&points_sub);
	ZVAL_NULL(&__$null);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(type)
		Z_PARAM_LONG(dev)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(modifiers)
		Z_PARAM_ZVAL_OR_NULL(points)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 2, &type_param, &dev_param, &modifiers, &points);
	if (!modifiers) {
		modifiers = &modifiers_sub;
		modifiers = &__$null;
	}
	if (!points) {
		points = &points_sub;
		points = &__$null;
	}
	ZVAL_LONG(&_0, type);
	ZVAL_LONG(&_1, dev);
	RETURN_LONG(phpqt_qpointerevent_new_q_event_type_q_pointing_device_qt_keyboard_modifiers_q_list_q_event_point(&_0, &_1, modifiers, points));
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, pointingDevice)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpointerevent_pointing_device(&_0));
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, pointerType)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpointerevent_pointer_type(&_0));
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, setTimestamp)
{
	zval *handle_param = NULL, *timestamp_param = NULL, _0, _1;
	zend_long handle, timestamp;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(timestamp)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &timestamp_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, timestamp);
	phpqt_qpointerevent_set_timestamp(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, pointCount)
{
	zval *handle_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	RETURN_LONG(phpqt_qpointerevent_point_count(&_0));
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, point)
{
	zval *handle_param = NULL, *i_param = NULL, _0, _1;
	zend_long handle, i;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(i)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &i_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, i);
	RETURN_LONG(phpqt_qpointerevent_point(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, points)
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
	phpqt_qpointerevent_points(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, pointById)
{
	zval *handle_param = NULL, *id_param = NULL, _0, _1;
	zend_long handle, id;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &id_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, id);
	RETURN_LONG(phpqt_qpointerevent_point_by_id(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, allPointsGrabbed)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpointerevent_all_points_grabbed(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, isBeginEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpointerevent_is_begin_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, isUpdateEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpointerevent_is_update_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, isEndEvent)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpointerevent_is_end_event(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, allPointsAccepted)
{
	zval *handle_param = NULL, _0;
	zend_long handle, r = 0;

	ZVAL_UNDEF(&_0);
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(handle)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(1, 0, &handle_param);
	ZVAL_LONG(&_0, handle);
	r = phpqt_qpointerevent_all_points_accepted(&_0);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, setAccepted)
{
	zend_bool accepted;
	zval *handle_param = NULL, *accepted_param = NULL, _0, _1;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_BOOL(accepted)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &accepted_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_BOOL(&_1, (accepted ? 1 : 0));
	phpqt_qpointerevent_set_accepted(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, exclusiveGrabber)
{
	zval *handle_param = NULL, *point_param = NULL, _0, _1;
	zend_long handle, point;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(point)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &point_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, point);
	RETURN_LONG(phpqt_qpointerevent_exclusive_grabber(&_0, &_1));
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, setExclusiveGrabber)
{
	zval *handle_param = NULL, *point_param = NULL, *exclusiveGrabber_param = NULL, _0, _1, _2;
	zend_long handle, point, exclusiveGrabber;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(point)
		Z_PARAM_LONG(exclusiveGrabber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &point_param, &exclusiveGrabber_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, point);
	ZVAL_LONG(&_2, exclusiveGrabber);
	phpqt_qpointerevent_set_exclusive_grabber(&_0, &_1, &_2);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, clearPassiveGrabbers)
{
	zval *handle_param = NULL, *point_param = NULL, _0, _1;
	zend_long handle, point;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(point)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(2, 0, &handle_param, &point_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, point);
	phpqt_qpointerevent_clear_passive_grabbers(&_0, &_1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, addPassiveGrabber)
{
	zval *handle_param = NULL, *point_param = NULL, *grabber_param = NULL, _0, _1, _2;
	zend_long handle, point, grabber, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(point)
		Z_PARAM_LONG(grabber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &point_param, &grabber_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, point);
	ZVAL_LONG(&_2, grabber);
	r = phpqt_qpointerevent_add_passive_grabber(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, removePassiveGrabber)
{
	zval *handle_param = NULL, *point_param = NULL, *grabber_param = NULL, _0, _1, _2;
	zend_long handle, point, grabber, r = 0;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(handle)
		Z_PARAM_LONG(point)
		Z_PARAM_LONG(grabber)
	ZEND_PARSE_PARAMETERS_END();
	zephir_fetch_params_without_memory_grow(3, 0, &handle_param, &point_param, &grabber_param);
	ZVAL_LONG(&_0, handle);
	ZVAL_LONG(&_1, point);
	ZVAL_LONG(&_2, grabber);
	r = phpqt_qpointerevent_remove_passive_grabber(&_0, &_1, &_2);
	RETURN_BOOL(r == 1);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, m_points)
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
	phpqt_qpointerevent_m_points(&result, &_0);
	RETURN_CCTOR(&result);
}

PHP_METHOD(Qt_Gui_QPointerEvent_QPointerEvent, setM_points)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval value;
	zval *handle_param = NULL, *value_param = NULL, _0;
	zend_long handle;

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&value);
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(handle)
		Z_PARAM_ARRAY(value)
	ZEND_PARSE_PARAMETERS_END();
	ZEPHIR_METHOD_GLOBALS_PTR = pecalloc(1, sizeof(zephir_method_globals), 0);
	zephir_memory_grow_stack(ZEPHIR_METHOD_GLOBALS_PTR, __func__);
	zephir_fetch_params(1, 2, 0, &handle_param, &value_param);
	zephir_get_arrval(&value, value_param);
	ZVAL_LONG(&_0, handle);
	phpqt_qpointerevent_set_m_points(&_0, &value);
	ZEPHIR_MM_RESTORE();
}

