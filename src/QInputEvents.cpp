#include "runtime.h"
#include "../stubs/QInputEvents_arginfo.h"
#include "../stubs/QContextMenuEvent_arginfo.h"
#include "../stubs/QInputDevice_arginfo.h"

#include <QtCore/QEvent>
#include <QtGui/QContextMenuEvent>
#include <QtGui/QInputDevice>
#include <QtGui/QMouseEvent>
#include <QtGui/QStyleHints>

zend_class_entry *phpqt_ce_QEvent;
zend_class_entry *phpqt_ce_QInputEvent;
zend_class_entry *phpqt_ce_QMouseEvent;
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
	phpqt_ce_QContextMenuEvent = register_class_QContextMenuEvent(phpqt_ce_QInputEvent);
	phpqt_value_setup(phpqt_ce_QContextMenuEvent);

	phpqt_ce_QStyleHints = register_class_QStyleHints(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QStyleHints);
	phpqt_map_class("QStyleHints", phpqt_ce_QStyleHints);
}

/* Qt's event, borrowed for a filter call: the most specific class, released by phpqt_event_release(). */
void phpqt_box_event(zval *rv, QEvent *event)
{
	zend_class_entry *ce = phpqt_ce_QEvent;

	if (dynamic_cast<QContextMenuEvent *>(event) != nullptr) {
		ce = phpqt_ce_QContextMenuEvent;
	} else if (dynamic_cast<QMouseEvent *>(event) != nullptr) {
		ce = phpqt_ce_QMouseEvent;
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

static void phpqt_return_point(zval *rv, double x, double y)
{
	array_init_size(rv, 2);
	add_next_index_double(rv, x);
	add_next_index_double(rv, y);
}

static void phpqt_return_ipoint(zval *rv, int x, int y)
{
	array_init_size(rv, 2);
	add_next_index_long(rv, x);
	add_next_index_long(rv, y);
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

ZEND_METHOD(QInputEvent, deviceType)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QInputEvent, event);

	phpqt_return_enum(return_value, phpqt_ce_QInputDevice_DeviceType, (zend_long) event->deviceType());
}

/* ---- QMouseEvent ------------------------------------------------------------ */

ZEND_METHOD(QMouseEvent, __construct)
{
	zend_object *type_case;
	double x;
	double y;
	double gx;
	double gy;
	zend_long button;
	zend_long buttons;
	zend_long modifiers = 0;

	ZEND_PARSE_PARAMETERS_START(7, 8)
		Z_PARAM_OBJ_OF_CLASS(type_case, phpqt_ce_QEvent_Type)
		Z_PARAM_DOUBLE(x)
		Z_PARAM_DOUBLE(y)
		Z_PARAM_DOUBLE(gx)
		Z_PARAM_DOUBLE(gy)
		Z_PARAM_LONG(button)
		Z_PARAM_LONG(buttons)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(modifiers)
	ZEND_PARSE_PARAMETERS_END();

	QEvent::Type type = static_cast<QEvent::Type>(Z_LVAL_P(zend_enum_fetch_case_value(type_case)));
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QMouseEvent(type, QPointF(x, y), QPointF(gx, gy),
		static_cast<Qt::MouseButton>(button), Qt::MouseButtons(int(buttons)), Qt::KeyboardModifiers(int(modifiers))), true, phpqt_destroy_event);
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

	phpqt_return_point(return_value, event->position().x(), event->position().y());
}

ZEND_METHOD(QMouseEvent, globalPosition)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QMouseEvent, event);

	phpqt_return_point(return_value, event->globalPosition().x(), event->globalPosition().y());
}

/* ---- QContextMenuEvent ------------------------------------------------------- */

ZEND_METHOD(QContextMenuEvent, __construct)
{
	zend_object *reason_case;
	zend_long x;
	zend_long y;
	zend_long gx;
	zend_long gy;
	zend_long modifiers = 0;

	ZEND_PARSE_PARAMETERS_START(5, 6)
		Z_PARAM_OBJ_OF_CLASS(reason_case, phpqt_ce_QContextMenuEvent_Reason)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(gx)
		Z_PARAM_LONG(gy)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(modifiers)
	ZEND_PARSE_PARAMETERS_END();

	auto reason = static_cast<QContextMenuEvent::Reason>(Z_LVAL_P(zend_enum_fetch_case_value(reason_case)));
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QContextMenuEvent(reason, QPoint(int(x), int(y)), QPoint(int(gx), int(gy)),
		Qt::KeyboardModifiers(int(modifiers))), true, phpqt_destroy_event);
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

	phpqt_return_ipoint(return_value, event->pos().x(), event->pos().y());
}

ZEND_METHOD(QContextMenuEvent, globalPos)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QContextMenuEvent, event);

	phpqt_return_ipoint(return_value, event->globalPos().x(), event->globalPos().y());
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
