/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 1bab8fea7f5ef81bc6f98caa5fc55a55eca7a5de */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QEvent___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, type, QEvent\\Type, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_TYPE_MASK_EX(arginfo_class_QEvent_type, 0, 0, QEvent\\Type, MAY_BE_LONG)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QEvent_accept, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QEvent_ignore arginfo_class_QEvent_accept

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QEvent_isAccepted, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QEvent_spontaneous arginfo_class_QEvent_isAccepted

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QInputEvent_modifiers, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QInputEvent_timestamp arginfo_class_QInputEvent_modifiers

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QInputEvent_setTimestamp, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, timestamp, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QInputEvent_deviceType, 0, 0, QInputDevice\\DeviceType, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QMouseEvent___construct, 0, 0, 7)
	ZEND_ARG_OBJ_INFO(0, type, QEvent\\Type, 0)
	ZEND_ARG_OBJ_INFO(0, localPos, QPointF, 0)
	ZEND_ARG_OBJ_INFO(0, globalPos, QPointF, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, device, QPointingDevice, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMouseEvent_button arginfo_class_QInputEvent_modifiers

#define arginfo_class_QMouseEvent_buttons arginfo_class_QInputEvent_modifiers

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QMouseEvent_position, 0, 0, QPointF, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QMouseEvent_globalPosition arginfo_class_QMouseEvent_position

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QKeyEvent___construct, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, type, QEvent\\Type, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, text, IS_STRING, 0, "\"\"")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, autorep, _IS_BOOL, 0, "false")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, count, IS_LONG, 0, "1")
ZEND_END_ARG_INFO()

#define arginfo_class_QKeyEvent_key arginfo_class_QInputEvent_modifiers

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QKeyEvent_text, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QKeyEvent_isAutoRepeat arginfo_class_QEvent_isAccepted

#define arginfo_class_QKeyEvent_nativeScanCode arginfo_class_QInputEvent_modifiers

#define arginfo_class_QKeyEvent_nativeVirtualKey arginfo_class_QInputEvent_modifiers

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QWheelEvent___construct, 0, 0, 10)
	ZEND_ARG_OBJ_INFO(0, pos, QPointF, 0)
	ZEND_ARG_OBJ_INFO(0, globalPos, QPointF, 0)
	ZEND_ARG_OBJ_INFO(0, pixelDelta, QPoint, 0)
	ZEND_ARG_OBJ_INFO(0, angleDelta, QPoint, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifiers, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO(0, phase, Qt\\ScrollPhase, 0)
	ZEND_ARG_TYPE_INFO(0, inverted, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, source, Qt\\MouseEventSource, 0)
	ZEND_ARG_OBJ_INFO(0, device, QPointingDevice, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWheelEvent_pixelDelta, 0, 0, QPoint, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QWheelEvent_angleDelta arginfo_class_QWheelEvent_pixelDelta

#define arginfo_class_QWheelEvent_position arginfo_class_QMouseEvent_position

#define arginfo_class_QWheelEvent_globalPosition arginfo_class_QMouseEvent_position

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWheelEvent_source, 0, 0, Qt\\MouseEventSource, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QWheelEvent_phase, 0, 0, Qt\\ScrollPhase, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QContextMenuEvent___construct, 0, 0, 3)
	ZEND_ARG_OBJ_INFO(0, reason, QContextMenuEvent\\Reason, 0)
	ZEND_ARG_OBJ_INFO(0, pos, QPoint, 0)
	ZEND_ARG_OBJ_INFO(0, globalPos, QPoint, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, modifiers, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QContextMenuEvent_reason, 0, 0, QContextMenuEvent\\Reason, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QContextMenuEvent_pos arginfo_class_QWheelEvent_pixelDelta

#define arginfo_class_QContextMenuEvent_globalPos arginfo_class_QWheelEvent_pixelDelta

#define arginfo_class_QStyleHints_mousePressAndHoldInterval arginfo_class_QInputEvent_modifiers

#define arginfo_class_QStyleHints_startDragDistance arginfo_class_QInputEvent_modifiers

#define arginfo_class_QStyleHints_mouseDoubleClickInterval arginfo_class_QInputEvent_modifiers

#define arginfo_class_QStyleHints_mouseDoubleClickDistance arginfo_class_QInputEvent_modifiers

ZEND_METHOD(QEvent, __construct);
ZEND_METHOD(QEvent, type);
ZEND_METHOD(QEvent, accept);
ZEND_METHOD(QEvent, ignore);
ZEND_METHOD(QEvent, isAccepted);
ZEND_METHOD(QEvent, spontaneous);
ZEND_METHOD(QInputEvent, modifiers);
ZEND_METHOD(QInputEvent, timestamp);
ZEND_METHOD(QInputEvent, setTimestamp);
ZEND_METHOD(QInputEvent, deviceType);
ZEND_METHOD(QMouseEvent, __construct);
ZEND_METHOD(QMouseEvent, button);
ZEND_METHOD(QMouseEvent, buttons);
ZEND_METHOD(QMouseEvent, position);
ZEND_METHOD(QMouseEvent, globalPosition);
ZEND_METHOD(QKeyEvent, __construct);
ZEND_METHOD(QKeyEvent, key);
ZEND_METHOD(QKeyEvent, text);
ZEND_METHOD(QKeyEvent, isAutoRepeat);
ZEND_METHOD(QKeyEvent, nativeScanCode);
ZEND_METHOD(QKeyEvent, nativeVirtualKey);
ZEND_METHOD(QWheelEvent, __construct);
ZEND_METHOD(QWheelEvent, pixelDelta);
ZEND_METHOD(QWheelEvent, angleDelta);
ZEND_METHOD(QWheelEvent, position);
ZEND_METHOD(QWheelEvent, globalPosition);
ZEND_METHOD(QWheelEvent, source);
ZEND_METHOD(QWheelEvent, phase);
ZEND_METHOD(QContextMenuEvent, __construct);
ZEND_METHOD(QContextMenuEvent, reason);
ZEND_METHOD(QContextMenuEvent, pos);
ZEND_METHOD(QContextMenuEvent, globalPos);
ZEND_METHOD(QStyleHints, mousePressAndHoldInterval);
ZEND_METHOD(QStyleHints, startDragDistance);
ZEND_METHOD(QStyleHints, mouseDoubleClickInterval);
ZEND_METHOD(QStyleHints, mouseDoubleClickDistance);

static const zend_function_entry class_QEvent_methods[] = {
	ZEND_ME(QEvent, __construct, arginfo_class_QEvent___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QEvent, type, arginfo_class_QEvent_type, ZEND_ACC_PUBLIC)
	ZEND_ME(QEvent, accept, arginfo_class_QEvent_accept, ZEND_ACC_PUBLIC)
	ZEND_ME(QEvent, ignore, arginfo_class_QEvent_ignore, ZEND_ACC_PUBLIC)
	ZEND_ME(QEvent, isAccepted, arginfo_class_QEvent_isAccepted, ZEND_ACC_PUBLIC)
	ZEND_ME(QEvent, spontaneous, arginfo_class_QEvent_spontaneous, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QInputEvent_methods[] = {
	ZEND_ME(QInputEvent, modifiers, arginfo_class_QInputEvent_modifiers, ZEND_ACC_PUBLIC)
	ZEND_ME(QInputEvent, timestamp, arginfo_class_QInputEvent_timestamp, ZEND_ACC_PUBLIC)
	ZEND_ME(QInputEvent, setTimestamp, arginfo_class_QInputEvent_setTimestamp, ZEND_ACC_PUBLIC)
	ZEND_ME(QInputEvent, deviceType, arginfo_class_QInputEvent_deviceType, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QMouseEvent_methods[] = {
	ZEND_ME(QMouseEvent, __construct, arginfo_class_QMouseEvent___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QMouseEvent, button, arginfo_class_QMouseEvent_button, ZEND_ACC_PUBLIC)
	ZEND_ME(QMouseEvent, buttons, arginfo_class_QMouseEvent_buttons, ZEND_ACC_PUBLIC)
	ZEND_ME(QMouseEvent, position, arginfo_class_QMouseEvent_position, ZEND_ACC_PUBLIC)
	ZEND_ME(QMouseEvent, globalPosition, arginfo_class_QMouseEvent_globalPosition, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QKeyEvent_methods[] = {
	ZEND_ME(QKeyEvent, __construct, arginfo_class_QKeyEvent___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QKeyEvent, key, arginfo_class_QKeyEvent_key, ZEND_ACC_PUBLIC)
	ZEND_ME(QKeyEvent, text, arginfo_class_QKeyEvent_text, ZEND_ACC_PUBLIC)
	ZEND_ME(QKeyEvent, isAutoRepeat, arginfo_class_QKeyEvent_isAutoRepeat, ZEND_ACC_PUBLIC)
	ZEND_ME(QKeyEvent, nativeScanCode, arginfo_class_QKeyEvent_nativeScanCode, ZEND_ACC_PUBLIC)
	ZEND_ME(QKeyEvent, nativeVirtualKey, arginfo_class_QKeyEvent_nativeVirtualKey, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QWheelEvent_methods[] = {
	ZEND_ME(QWheelEvent, __construct, arginfo_class_QWheelEvent___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QWheelEvent, pixelDelta, arginfo_class_QWheelEvent_pixelDelta, ZEND_ACC_PUBLIC)
	ZEND_ME(QWheelEvent, angleDelta, arginfo_class_QWheelEvent_angleDelta, ZEND_ACC_PUBLIC)
	ZEND_ME(QWheelEvent, position, arginfo_class_QWheelEvent_position, ZEND_ACC_PUBLIC)
	ZEND_ME(QWheelEvent, globalPosition, arginfo_class_QWheelEvent_globalPosition, ZEND_ACC_PUBLIC)
	ZEND_ME(QWheelEvent, source, arginfo_class_QWheelEvent_source, ZEND_ACC_PUBLIC)
	ZEND_ME(QWheelEvent, phase, arginfo_class_QWheelEvent_phase, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QContextMenuEvent_methods[] = {
	ZEND_ME(QContextMenuEvent, __construct, arginfo_class_QContextMenuEvent___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QContextMenuEvent, reason, arginfo_class_QContextMenuEvent_reason, ZEND_ACC_PUBLIC)
	ZEND_ME(QContextMenuEvent, pos, arginfo_class_QContextMenuEvent_pos, ZEND_ACC_PUBLIC)
	ZEND_ME(QContextMenuEvent, globalPos, arginfo_class_QContextMenuEvent_globalPos, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QStyleHints_methods[] = {
	ZEND_ME(QStyleHints, mousePressAndHoldInterval, arginfo_class_QStyleHints_mousePressAndHoldInterval, ZEND_ACC_PUBLIC)
	ZEND_ME(QStyleHints, startDragDistance, arginfo_class_QStyleHints_startDragDistance, ZEND_ACC_PUBLIC)
	ZEND_ME(QStyleHints, mouseDoubleClickInterval, arginfo_class_QStyleHints_mouseDoubleClickInterval, ZEND_ACC_PUBLIC)
	ZEND_ME(QStyleHints, mouseDoubleClickDistance, arginfo_class_QStyleHints_mouseDoubleClickDistance, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QEvent(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QEvent", class_QEvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QInputEvent(zend_class_entry *class_entry_QEvent)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QInputEvent", class_QInputEvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QEvent, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QMouseEvent(zend_class_entry *class_entry_QInputEvent)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QMouseEvent", class_QMouseEvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QInputEvent, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QKeyEvent(zend_class_entry *class_entry_QInputEvent)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QKeyEvent", class_QKeyEvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QInputEvent, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QWheelEvent(zend_class_entry *class_entry_QInputEvent)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QWheelEvent", class_QWheelEvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QInputEvent, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QContextMenuEvent(zend_class_entry *class_entry_QInputEvent)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QContextMenuEvent", class_QContextMenuEvent_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QInputEvent, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QStyleHints(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QStyleHints", class_QStyleHints_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
