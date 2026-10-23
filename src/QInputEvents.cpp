#include "runtime.h"
#include "../stubs/QInputEvents_arginfo.h"
#include "../stubs/QContextMenuEvent_arginfo.h"
#include "../stubs/QInputDevice_arginfo.h"

#include <QtCore/QEvent>
#include <QtGui/QContextMenuEvent>
#include <QtGui/QInputDevice>
#include <QtGui/QKeyEvent>
#include <QtGui/QMouseEvent>
#include <QtGui/QStyleHints>
#include <QtGui/QWheelEvent>

zend_class_entry *phpqt_ce_QEvent;
zend_class_entry *phpqt_ce_QInputEvent;
zend_class_entry *phpqt_ce_QMouseEvent;
zend_class_entry *phpqt_ce_QKeyEvent;
zend_class_entry *phpqt_ce_QWheelEvent;
zend_class_entry *phpqt_ce_QContextMenuEvent;
zend_class_entry *phpqt_ce_QStyleHints;
zend_class_entry *phpqt_ce_QContextMenuEvent_Reason;
zend_class_entry *phpqt_ce_QInputDevice_DeviceType;

static_assert(QContextMenuEvent::Mouse == 0 && QContextMenuEvent::Keyboard == 1 && QContextMenuEvent::Other == 2);
static_assert(int(QInputDevice::DeviceType::Mouse) == 1 && int(QInputDevice::DeviceType::TouchScreen) == 2 && int(QInputDevice::DeviceType::TouchPad) == 4);

static void phpqt_destroy_event(void *ptr)
{
	delete static_cast<QEvent *>(ptr);
}

void phpqt_register_QInputEvents()
{
	phpqt_ce_QContextMenuEvent_Reason = register_class_QContextMenuEvent_Reason();
	phpqt_ce_QInputDevice_DeviceType = register_class_QInputDevice_DeviceType();

	phpqt_ce_QEvent = register_class_QEvent();
	phpqt_value_setup(phpqt_ce_QEvent);
	phpqt_ce_QInputEvent = register_class_QInputEvent(phpqt_ce_QEvent);
	phpqt_value_setup(phpqt_ce_QInputEvent);
	phpqt_ce_QMouseEvent = register_class_QMouseEvent(phpqt_ce_QInputEvent);
	phpqt_value_setup(phpqt_ce_QMouseEvent);
	phpqt_ce_QKeyEvent = register_class_QKeyEvent(phpqt_ce_QInputEvent);
	phpqt_value_setup(phpqt_ce_QKeyEvent);
	phpqt_ce_QWheelEvent = register_class_QWheelEvent(phpqt_ce_QInputEvent);
	phpqt_value_setup(phpqt_ce_QWheelEvent);
	phpqt_ce_QContextMenuEvent = register_class_QContextMenuEvent(phpqt_ce_QInputEvent);
	phpqt_value_setup(phpqt_ce_QContextMenuEvent);

	phpqt_ce_QStyleHints = register_class_QStyleHints(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QStyleHints);
	phpqt_map_class("QStyleHints", phpqt_ce_QStyleHints);

	phpqt_ce_QInputDevice = register_class_QInputDevice(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QInputDevice);
	phpqt_map_class("QInputDevice", phpqt_ce_QInputDevice);
	phpqt_ce_QPointingDevice = register_class_QPointingDevice(phpqt_ce_QInputDevice);
	phpqt_object_setup(phpqt_ce_QPointingDevice);
	phpqt_map_class("QPointingDevice", phpqt_ce_QPointingDevice);
}

/* ---- QInputDevice, QPointingDevice ------------------------------------------ */

zend_class_entry *phpqt_ce_QInputDevice;
zend_class_entry *phpqt_ce_QPointingDevice;

ZEND_METHOD(QInputDevice, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QPointingDevice, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QPointingDevice, primaryPointingDevice)
{
	zend_string *seat_name = nullptr;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(seat_name)
	ZEND_PARSE_PARAMETERS_END();

	/* Qt's registry keeps the device: PHP boxes it unowned, as const as Qt hands it out. */
	phpqt_box(return_value, const_cast<QPointingDevice *>(QPointingDevice::primaryPointingDevice(seat_name != nullptr ? phpqt_qstring(seat_name) : QString())));
}

/* Qt's event, borrowed for a filter call: the most specific class, released by phpqt_event_release(). */
void phpqt_box_event(zval *rv, QEvent *event)
{
	zend_class_entry *ce = phpqt_ce_QEvent;

	if (dynamic_cast<QContextMenuEvent *>(event) != nullptr) {
		ce = phpqt_ce_QContextMenuEvent;
	} else if (dynamic_cast<QMouseEvent *>(event) != nullptr) {
		ce = phpqt_ce_QMouseEvent;
	} else if (dynamic_cast<QKeyEvent *>(event) != nullptr) {
		ce = phpqt_ce_QKeyEvent;
	} else if (dynamic_cast<QWheelEvent *>(event) != nullptr) {
		/* A QSinglePointEvent, not a QMouseEvent: its own branch, or it boxes as a QInputEvent. */
		ce = phpqt_ce_QWheelEvent;
	} else if (dynamic_cast<QInputEvent *>(event) != nullptr) {
		ce = phpqt_ce_QInputEvent;
	}

	object_init_ex(rv, ce);
	phpqt_value_hold(Z_OBJ_P(rv), event, false, phpqt_destroy_event);
}

/* The filter call is over: Qt keeps its event, and the wrapper reads as gone from now on. */
void phpqt_event_release(zval *boxed)
{
	phpqt_value_from(Z_OBJ_P(boxed))->ptr = nullptr;
}

/* ---- QEvent ---------------------------------------------------------------- */

ZEND_METHOD(QEvent, type)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QEvent, event);

	int type = static_cast<int>(event->type());
	phpqt_return_enum(return_value, phpqt_ce_QEvent_Type, type);
	if (Z_TYPE_P(return_value) == IS_NULL) {
		RETURN_LONG(type);
	}
}

ZEND_METHOD(QEvent, accept)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QEvent, event);

	event->accept();
}

ZEND_METHOD(QEvent, ignore)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QEvent, event);

	event->ignore();
}

ZEND_METHOD(QEvent, isAccepted)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QEvent, event);

	RETURN_BOOL(event->isAccepted());
}

ZEND_METHOD(QEvent, spontaneous)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QEvent, event);

	RETURN_BOOL(event->spontaneous());
}

/* ---- QInputEvent ------------------------------------------------------------ */

ZEND_METHOD(QInputEvent, modifiers)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QInputEvent, event);

	RETURN_LONG((zend_long) event->modifiers().toInt());
}

ZEND_METHOD(QInputEvent, timestamp)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QInputEvent, event);

	RETURN_LONG((zend_long) event->timestamp());
}

ZEND_METHOD(QInputEvent, setTimestamp)
{
	zend_long timestamp;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(timestamp)
	ZEND_PARSE_PARAMETERS_END();

	/* quint64: a negative PHP int has no value there. */
	if (!phpqt_long_fits(timestamp, 0, ZEND_LONG_MAX, 1)) {
		RETURN_THROWS();
	}
	PHPQT_VALUE_THIS(QInputEvent, event);

	event->setTimestamp(static_cast<quint64>(timestamp));
}

ZEND_METHOD(QInputEvent, deviceType)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QInputEvent, event);

	phpqt_return_enum(return_value, phpqt_ce_QInputDevice_DeviceType, (zend_long) event->deviceType());
}

/* ---- QMouseEvent ------------------------------------------------------------ */

/* Types Qt sends as a plain QEvent: no receiver casts them to a subclass. */
static bool phpqt_event_type_is_plain(QEvent::Type type)
{
	switch (type) {
		case QEvent::Leave: case QEvent::Quit:
		case QEvent::WindowActivate: case QEvent::WindowDeactivate: case QEvent::ActivationChange:
		case QEvent::ApplicationActivate: case QEvent::ApplicationDeactivate:
		case QEvent::ShowToParent: case QEvent::HideToParent:
		case QEvent::WindowTitleChange: case QEvent::WindowIconChange: case QEvent::ApplicationWindowIconChange:
		case QEvent::ApplicationFontChange: case QEvent::ApplicationLayoutDirectionChange: case QEvent::ApplicationPaletteChange:
		case QEvent::PaletteChange: case QEvent::FontChange: case QEvent::StyleChange: case QEvent::EnabledChange:
		case QEvent::LocaleChange: case QEvent::LanguageChange: case QEvent::LayoutDirectionChange:
		case QEvent::ModifiedChange: case QEvent::MouseTrackingChange: case QEvent::ReadOnlyChange:
		case QEvent::ZOrderChange: case QEvent::AcceptDropsChange:
		case QEvent::PolishRequest: case QEvent::Polish: case QEvent::LayoutRequest:
		case QEvent::UpdateRequest:
		case QEvent::EnterWhatsThisMode: case QEvent::LeaveWhatsThisMode:
			return true;
		default:
			return false;
	}
}

/* QEvent::__construct() makes a plain QEvent: a subclass wrapper would hold a native object of the wrong class. */
static bool phpqt_event_class(zend_object *wrapper)
{
	if (instanceof_function(wrapper->ce, phpqt_ce_QInputEvent)) {
		zend_throw_error(nullptr, "%s is not made by QEvent::__construct()", ZSTR_VAL(wrapper->ce->name));
		return false;
	}

	return true;
}

ZEND_METHOD(QEvent, __construct)
{
	zend_object *type_case;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(type_case, phpqt_ce_QEvent_Type)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_event_class(Z_OBJ_P(ZEND_THIS)) || !phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	/* A receiver casts an event of such a type to its subclass and reads past the plain QEvent. */
	QEvent::Type type = static_cast<QEvent::Type>(Z_LVAL_P(zend_enum_fetch_case_value(type_case)));
	if (!PHPQT_PROBE_OFF("qevent-plain-type") && (!phpqt_event_type_is_plain(type))) {
		zend_argument_value_error(1, "is a type Qt delivers as a QEvent subclass"); /* binding:qevent-plain-type */
		RETURN_THROWS();
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QEvent(type), true, phpqt_destroy_event);
}

ZEND_METHOD(QMouseEvent, __construct)
{
	zend_object *type_case;
	zend_object *local_obj;
	zend_object *global_obj;
	zend_long button;
	zend_long buttons;
	zend_long modifiers;
	zend_object *device_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(7, 7)
		Z_PARAM_OBJ_OF_CLASS(type_case, phpqt_ce_QEvent_Type)
		Z_PARAM_OBJ_OF_CLASS(local_obj, phpqt_ce_QPointF)
		Z_PARAM_OBJ_OF_CLASS(global_obj, phpqt_ce_QPointF)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_OBJ_OF_CLASS(device_obj, phpqt_ce_QPointingDevice)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	/* 32-bit flag masks: signed or unsigned spellings of the same bits, nothing wider. */
	if (!phpqt_long_fits(button, INT32_MIN, UINT32_MAX, 4) || !phpqt_long_fits(buttons, INT32_MIN, UINT32_MAX, 5) || !phpqt_long_fits(modifiers, INT32_MIN, UINT32_MAX, 6)) {
		RETURN_THROWS();
	}
	QPointF *local = static_cast<QPointF *>(phpqt_value_arg(local_obj, 2));
	if (local == nullptr) {
		RETURN_THROWS();
	}
	QPointF *global = static_cast<QPointF *>(phpqt_value_arg(global_obj, 3));
	if (global == nullptr) {
		RETURN_THROWS();
	}
	QPointingDevice *device = static_cast<QPointingDevice *>(phpqt_arg(device_obj, 7, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	QEvent::Type type = static_cast<QEvent::Type>(Z_LVAL_P(zend_enum_fetch_case_value(type_case)));
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QMouseEvent(type, *local, *global,
		static_cast<Qt::MouseButton>(static_cast<uint32_t>(button)), Qt::MouseButtons(int(static_cast<uint32_t>(buttons))), Qt::KeyboardModifiers(int(static_cast<uint32_t>(modifiers))), device), true, phpqt_destroy_event);
}

ZEND_METHOD(QMouseEvent, button)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QMouseEvent, event);

	RETURN_LONG((zend_long) event->button());
}

ZEND_METHOD(QMouseEvent, buttons)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QMouseEvent, event);

	RETURN_LONG((zend_long) event->buttons().toInt());
}

ZEND_METHOD(QMouseEvent, position)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QMouseEvent, event);

	phpqt_return_qpointf(return_value, event->position());
}

ZEND_METHOD(QMouseEvent, globalPosition)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QMouseEvent, event);

	phpqt_return_qpointf(return_value, event->globalPosition());
}

/* ---- QKeyEvent --------------------------------------------------------------- */

ZEND_METHOD(QKeyEvent, __construct)
{
	zend_object *type_case;
	zend_long key;
	zend_long modifiers;
	zend_string *text = nullptr;
	bool autorep = false;
	zend_long count = 1;

	ZEND_PARSE_PARAMETERS_START(3, 6)
		Z_PARAM_OBJ_OF_CLASS(type_case, phpqt_ce_QEvent_Type)
		Z_PARAM_LONG(key)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(text)
		Z_PARAM_BOOL(autorep)
		Z_PARAM_LONG(count)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	/* int key, a 32-bit modifier mask, quint16 count: a value outside its C type has no value there. */
	if (!phpqt_long_fits(key, INT_MIN, INT_MAX, 2) || !phpqt_long_fits(modifiers, INT32_MIN, UINT32_MAX, 3) || !phpqt_long_fits(count, 0, UINT16_MAX, 6)) {
		RETURN_THROWS();
	}

	QEvent::Type type = static_cast<QEvent::Type>(Z_LVAL_P(zend_enum_fetch_case_value(type_case)));
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QKeyEvent(type, static_cast<int>(key), Qt::KeyboardModifiers(int(static_cast<uint32_t>(modifiers))),
		text != nullptr ? phpqt_qstring(text) : QString(), autorep, static_cast<quint16>(count)), true, phpqt_destroy_event);
}

ZEND_METHOD(QKeyEvent, key)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QKeyEvent, event);

	RETURN_LONG(event->key());
}

ZEND_METHOD(QKeyEvent, text)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QKeyEvent, event);

	phpqt_return_qstring(return_value, event->text());
}

ZEND_METHOD(QKeyEvent, isAutoRepeat)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QKeyEvent, event);

	RETURN_BOOL(event->isAutoRepeat());
}

ZEND_METHOD(QKeyEvent, nativeScanCode)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QKeyEvent, event);

	RETURN_LONG(static_cast<zend_long>(event->nativeScanCode()));
}

ZEND_METHOD(QKeyEvent, nativeVirtualKey)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QKeyEvent, event);

	RETURN_LONG(static_cast<zend_long>(event->nativeVirtualKey()));
}

/* ---- QWheelEvent ------------------------------------------------------------- */

ZEND_METHOD(QWheelEvent, __construct)
{
	zend_object *pos_obj;
	zend_object *global_obj;
	zend_object *pixel_obj;
	zend_object *angle_obj;
	zend_long buttons;
	zend_long modifiers;
	zend_object *phase_case;
	bool inverted;
	zend_object *source_case;
	zend_object *device_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(10, 10)
		Z_PARAM_OBJ_OF_CLASS(pos_obj, phpqt_ce_QPointF)
		Z_PARAM_OBJ_OF_CLASS(global_obj, phpqt_ce_QPointF)
		Z_PARAM_OBJ_OF_CLASS(pixel_obj, phpqt_ce_QPoint)
		Z_PARAM_OBJ_OF_CLASS(angle_obj, phpqt_ce_QPoint)
		Z_PARAM_LONG(buttons)
		Z_PARAM_LONG(modifiers)
		Z_PARAM_OBJ_OF_CLASS(phase_case, phpqt_ce_Qt_ScrollPhase)
		Z_PARAM_BOOL(inverted)
		Z_PARAM_OBJ_OF_CLASS(source_case, phpqt_ce_Qt_MouseEventSource)
		Z_PARAM_OBJ_OF_CLASS(device_obj, phpqt_ce_QPointingDevice)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	/* 32-bit flag masks: signed or unsigned spellings of the same bits, nothing wider. */
	if (!phpqt_long_fits(buttons, INT32_MIN, UINT32_MAX, 5) || !phpqt_long_fits(modifiers, INT32_MIN, UINT32_MAX, 6)) {
		RETURN_THROWS();
	}
	QPointF *pos = static_cast<QPointF *>(phpqt_value_arg(pos_obj, 1));
	if (pos == nullptr) {
		RETURN_THROWS();
	}
	QPointF *global = static_cast<QPointF *>(phpqt_value_arg(global_obj, 2));
	if (global == nullptr) {
		RETURN_THROWS();
	}
	QPoint *pixel = static_cast<QPoint *>(phpqt_value_arg(pixel_obj, 3));
	if (pixel == nullptr) {
		RETURN_THROWS();
	}
	QPoint *angle = static_cast<QPoint *>(phpqt_value_arg(angle_obj, 4));
	if (angle == nullptr) {
		RETURN_THROWS();
	}
	QPointingDevice *device = static_cast<QPointingDevice *>(phpqt_arg(device_obj, 10, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	auto phase = static_cast<Qt::ScrollPhase>(Z_LVAL_P(zend_enum_fetch_case_value(phase_case)));
	auto source = static_cast<Qt::MouseEventSource>(Z_LVAL_P(zend_enum_fetch_case_value(source_case)));
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QWheelEvent(*pos, *global, *pixel, *angle,
		Qt::MouseButtons(int(static_cast<uint32_t>(buttons))), Qt::KeyboardModifiers(int(static_cast<uint32_t>(modifiers))), phase, inverted, source, device),
		true, phpqt_destroy_event);
}

ZEND_METHOD(QWheelEvent, pixelDelta)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWheelEvent, event);

	phpqt_return_qpoint(return_value, event->pixelDelta());
}

ZEND_METHOD(QWheelEvent, angleDelta)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWheelEvent, event);

	phpqt_return_qpoint(return_value, event->angleDelta());
}

ZEND_METHOD(QWheelEvent, position)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWheelEvent, event);

	phpqt_return_qpointf(return_value, event->position());
}

ZEND_METHOD(QWheelEvent, globalPosition)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWheelEvent, event);

	phpqt_return_qpointf(return_value, event->globalPosition());
}

ZEND_METHOD(QWheelEvent, source)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QWheelEvent, event);

	phpqt_return_enum(return_value, phpqt_ce_Qt_MouseEventSource, (zend_long) event->source());
}

/* ---- QContextMenuEvent ------------------------------------------------------- */

ZEND_METHOD(QContextMenuEvent, __construct)
{
	zend_object *reason_case;
	zend_object *pos_obj;
	zend_object *global_obj;
	zend_long modifiers = 0;

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_OBJ_OF_CLASS(reason_case, phpqt_ce_QContextMenuEvent_Reason)
		Z_PARAM_OBJ_OF_CLASS(pos_obj, phpqt_ce_QPoint)
		Z_PARAM_OBJ_OF_CLASS(global_obj, phpqt_ce_QPoint)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(modifiers)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	if (!phpqt_long_fits(modifiers, INT32_MIN, UINT32_MAX, 4)) {
		RETURN_THROWS();
	}
	QPoint *pos = static_cast<QPoint *>(phpqt_value_arg(pos_obj, 2));
	if (pos == nullptr) {
		RETURN_THROWS();
	}
	QPoint *global = static_cast<QPoint *>(phpqt_value_arg(global_obj, 3));
	if (global == nullptr) {
		RETURN_THROWS();
	}

	auto reason = static_cast<QContextMenuEvent::Reason>(Z_LVAL_P(zend_enum_fetch_case_value(reason_case)));
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QContextMenuEvent(reason, *pos, *global, Qt::KeyboardModifiers(int(static_cast<uint32_t>(modifiers)))), true, phpqt_destroy_event);
}

ZEND_METHOD(QContextMenuEvent, reason)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QContextMenuEvent, event);

	phpqt_return_enum(return_value, phpqt_ce_QContextMenuEvent_Reason, (zend_long) event->reason());
}

ZEND_METHOD(QContextMenuEvent, pos)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QContextMenuEvent, event);

	phpqt_return_qpoint(return_value, event->pos());
}

ZEND_METHOD(QContextMenuEvent, globalPos)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QContextMenuEvent, event);

	phpqt_return_qpoint(return_value, event->globalPos());
}

/* ---- QStyleHints --------------------------------------------------------------- */

ZEND_METHOD(QStyleHints, mousePressAndHoldInterval)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QStyleHints, hints);

	RETURN_LONG(hints->mousePressAndHoldInterval());
}

ZEND_METHOD(QStyleHints, startDragDistance)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QStyleHints, hints);

	RETURN_LONG(hints->startDragDistance());
}

ZEND_METHOD(QStyleHints, mouseDoubleClickInterval)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QStyleHints, hints);

	RETURN_LONG(hints->mouseDoubleClickInterval());
}

ZEND_METHOD(QStyleHints, mouseDoubleClickDistance)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QStyleHints, hints);

	RETURN_LONG(hints->mouseDoubleClickDistance());
}
