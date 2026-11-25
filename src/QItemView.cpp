#include "runtime.h"
#include "../stubs/QItemView_arginfo.h"

#include <QtGui/QBrush>
#include <QtGui/QColor>
#include <QtGui/QFont>
#include <QtGui/QImage>
#include <QtGui/QPainter>
#include <QtGui/QPainterPath>
#include <QtGui/QPixmap>
#include <QtGui/QAction>
#include <QtWidgets/QListView>
#include <QtWidgets/QStyledItemDelegate>
#include <QtWidgets/QToolBar>

#include "checks/QListView_ViewMode.inc"
#include "checks/QListView_Flow.inc"
#include "checks/QListView_ResizeMode.inc"
#include "checks/QListView_Movement.inc"
#include "checks/QPainter_RenderHint.inc"

zend_class_entry *phpqt_ce_QAbstractItemDelegate;
zend_class_entry *phpqt_ce_QStyledItemDelegate;
zend_class_entry *phpqt_ce_QStyleOptionViewItem;
zend_class_entry *phpqt_ce_QPainter;
zend_class_entry *phpqt_ce_QPainter_RenderHint;
zend_class_entry *phpqt_ce_QPainterPath;
zend_class_entry *phpqt_ce_QListView;
zend_class_entry *phpqt_ce_QListView_ViewMode;
zend_class_entry *phpqt_ce_QListView_Flow;
zend_class_entry *phpqt_ce_QListView_ResizeMode;
zend_class_entry *phpqt_ce_QListView_Movement;
zend_class_entry *phpqt_ce_QToolBar;

void phpqt_register_QItemView()
{
	phpqt_ce_QListView_ViewMode = register_class_QListView_ViewMode();
	phpqt_ce_QListView_Flow = register_class_QListView_Flow();
	phpqt_ce_QListView_ResizeMode = register_class_QListView_ResizeMode();
	phpqt_ce_QListView_Movement = register_class_QListView_Movement();
	phpqt_ce_QPainter_RenderHint = register_class_QPainter_RenderHint();

	phpqt_ce_QAbstractItemDelegate = register_class_QAbstractItemDelegate(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QAbstractItemDelegate);
	phpqt_map_class("QAbstractItemDelegate", phpqt_ce_QAbstractItemDelegate);

	phpqt_ce_QStyledItemDelegate = register_class_QStyledItemDelegate(phpqt_ce_QAbstractItemDelegate);
	phpqt_object_setup(phpqt_ce_QStyledItemDelegate);
	phpqt_map_class("QStyledItemDelegate", phpqt_ce_QStyledItemDelegate);

	phpqt_ce_QStyleOptionViewItem = register_class_QStyleOptionViewItem();
	phpqt_value_setup(phpqt_ce_QStyleOptionViewItem);

	phpqt_ce_QPainter = register_class_QPainter();
	phpqt_value_setup(phpqt_ce_QPainter);

	phpqt_ce_QPainterPath = register_class_QPainterPath();
	phpqt_value_setup(phpqt_ce_QPainterPath);

	phpqt_ce_QListView = register_class_QListView(phpqt_ce_QAbstractItemView);
	phpqt_object_setup(phpqt_ce_QListView);
	phpqt_map_class("QListView", phpqt_ce_QListView);

	phpqt_ce_QToolBar = register_class_QToolBar(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QToolBar);
	phpqt_map_class("QToolBar", phpqt_ce_QToolBar);
}

/* ---- QAbstractItemDelegate, QStyledItemDelegate --------------------------- */

ZEND_METHOD(QAbstractItemDelegate, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QStyledItemDelegate, __construct)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	QObject *qparent = phpqt_arg(parent, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QStyledItemDelegate(qparent));
}

/* ---- QStyleOptionViewItem --------------------------------------------------- */

ZEND_METHOD(QStyleOptionViewItem, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QStyleOptionViewItem, rect)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QStyleOptionViewItem, option);

	phpqt_return_qrect(return_value, option->rect);
}

ZEND_METHOD(QStyleOptionViewItem, state)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QStyleOptionViewItem, option);

	RETURN_LONG(static_cast<zend_long>(option->state.toInt()));
}

/* ---- QPainter --------------------------------------------------------------- */

/*
 * A painter PHP made: it keeps the device's PHP object, which owns the native device, until the
 * painter goes, and ends the painting first, as ~QPainter() would.
 */
class PhpDevicePainter : public QPainter {
public:
	PhpDevicePainter() = default;

	PhpDevicePainter(QPaintDevice *native, zend_object *wrapper) : QPainter(native), device(wrapper)
	{
		GC_ADDREF(device);
	}

	~PhpDevicePainter()
	{
		if (isActive()) {
			end();
		}
		if (device != nullptr) {
			OBJ_RELEASE(device);
		}
	}

	zend_object *device = nullptr;
};

static void phpqt_destroy_device_painter(void *ptr) { delete static_cast<PhpDevicePainter *>(static_cast<QPainter *>(ptr)); }

/* QPainter() or QPainter(QPaintDevice *device): the PHP device classes are QPixmap and QImage. */
ZEND_METHOD(QPainter, __construct)
{
	zend_object *device_obj = nullptr;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(device_obj, phpqt_ce_QPaintDevice)
	ZEND_PARSE_PARAMETERS_END();

	QPaintDevice *device = nullptr;
	if (device_obj != nullptr) {
		void *native = phpqt_value_arg(device_obj, 1);
		if (native == nullptr) {
			RETURN_THROWS();
		}
		device = instanceof_function(device_obj->ce, phpqt_ce_QPixmap)
			? static_cast<QPaintDevice *>(static_cast<QPixmap *>(native))
			: static_cast<QPaintDevice *>(static_cast<QImage *>(native));
	}
	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}

	PhpDevicePainter *painter = device == nullptr ? new PhpDevicePainter() : new PhpDevicePainter(device, device_obj);
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), static_cast<QPainter *>(painter), true, phpqt_destroy_device_painter);
}

ZEND_METHOD(QPainter, end)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QPainter, painter);

	RETURN_BOOL(painter->end());
}

ZEND_METHOD(QPainter, isActive)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QPainter, painter);

	RETURN_BOOL(painter->isActive());
}

ZEND_METHOD(QPainter, setClipPath)
{
	zend_object *path_obj, *operation = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(path_obj, phpqt_ce_QPainterPath)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(operation, phpqt_ce_Qt_ClipOperation)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	QPainterPath *path = static_cast<QPainterPath *>(phpqt_value_arg(path_obj, 1));
	if (path == nullptr) {
		RETURN_THROWS();
	}

	painter->setClipPath(*path, static_cast<Qt::ClipOperation>(phpqt_enum_value(operation, Qt::ReplaceClip)));
}

/* ---- QPainterPath ----------------------------------------------------------- */

static void phpqt_destroy_painter_path(void *ptr) { delete static_cast<QPainterPath *>(ptr); }

ZEND_METHOD(QPainterPath, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QPainterPath(), true, phpqt_destroy_painter_path);
}

ZEND_METHOD(QPainterPath, moveTo)
{
	double x, y;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(x)
		Z_PARAM_DOUBLE(y)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainterPath, path);

	path->moveTo(x, y);
}

ZEND_METHOD(QPainterPath, lineTo)
{
	double x, y;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(x)
		Z_PARAM_DOUBLE(y)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainterPath, path);

	path->lineTo(x, y);
}

ZEND_METHOD(QPainterPath, arcTo)
{
	double x, y, w, h, start_angle, arc_length;

	ZEND_PARSE_PARAMETERS_START(6, 6)
		Z_PARAM_DOUBLE(x)
		Z_PARAM_DOUBLE(y)
		Z_PARAM_DOUBLE(w)
		Z_PARAM_DOUBLE(h)
		Z_PARAM_DOUBLE(start_angle)
		Z_PARAM_DOUBLE(arc_length)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainterPath, path);

	path->arcTo(x, y, w, h, start_angle, arc_length);
}

ZEND_METHOD(QPainterPath, closeSubpath)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QPainterPath, path);

	path->closeSubpath();
}

ZEND_METHOD(QPainterPath, addRoundedRect)
{
	zend_object *rect_obj, *mode = nullptr;
	double x_radius, y_radius;

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, phpqt_ce_QRectF)
		Z_PARAM_DOUBLE(x_radius)
		Z_PARAM_DOUBLE(y_radius)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_Qt_SizeMode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainterPath, path);

	QRectF *rect = static_cast<QRectF *>(phpqt_value_arg(rect_obj, 1));
	if (rect == nullptr) {
		RETURN_THROWS();
	}

	path->addRoundedRect(*rect, x_radius, y_radius, static_cast<Qt::SizeMode>(phpqt_enum_value(mode, Qt::AbsoluteSize)));
}

ZEND_METHOD(QPainter, save)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QPainter, painter);

	painter->save();
}

ZEND_METHOD(QPainter, restore)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QPainter, painter);

	painter->restore();
}

ZEND_METHOD(QPainter, setRenderHint)
{
	zend_object *hint;
	bool on = true;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(hint, phpqt_ce_QPainter_RenderHint)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	painter->setRenderHint(static_cast<QPainter::RenderHint>(phpqt_enum_value(hint, 0)), on);
}

ZEND_METHOD(QPainter, setOpacity)
{
	double opacity;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(opacity)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	painter->setOpacity(opacity);
}

ZEND_METHOD(QPainter, setPen)
{
	zend_object *color_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(color_obj, phpqt_ce_QColor)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	QColor *color = static_cast<QColor *>(phpqt_value_arg(color_obj, 1));
	if (color == nullptr) {
		RETURN_THROWS();
	}

	painter->setPen(*color);
}

ZEND_METHOD(QPainter, setBrush)
{
	zend_object *brush_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(brush_obj, phpqt_ce_QBrush)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	QBrush *brush = static_cast<QBrush *>(phpqt_value_arg(brush_obj, 1));
	if (brush == nullptr) {
		RETURN_THROWS();
	}

	painter->setBrush(*brush);
}

ZEND_METHOD(QPainter, setFont)
{
	zend_object *font_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(font_obj, phpqt_ce_QFont)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	QFont *font = static_cast<QFont *>(phpqt_value_arg(font_obj, 1));
	if (font == nullptr) {
		RETURN_THROWS();
	}

	painter->setFont(*font);
}

ZEND_METHOD(QPainter, fillRect)
{
	zend_object *rect_obj, *color_obj;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, phpqt_ce_QRect)
		Z_PARAM_OBJ_OF_CLASS(color_obj, phpqt_ce_QColor)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	QRect *rect = static_cast<QRect *>(phpqt_value_arg(rect_obj, 1));
	QColor *color = rect == nullptr ? nullptr : static_cast<QColor *>(phpqt_value_arg(color_obj, 2));
	if (color == nullptr) {
		RETURN_THROWS();
	}

	painter->fillRect(*rect, *color);
}

ZEND_METHOD(QPainter, drawRect)
{
	zend_object *rect_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, phpqt_ce_QRect)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	QRect *rect = static_cast<QRect *>(phpqt_value_arg(rect_obj, 1));
	if (rect == nullptr) {
		RETURN_THROWS();
	}

	painter->drawRect(*rect);
}

ZEND_METHOD(QPainter, drawRoundedRect)
{
	zend_object *rect_obj, *mode = nullptr;
	double x_radius, y_radius;

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, phpqt_ce_QRect)
		Z_PARAM_DOUBLE(x_radius)
		Z_PARAM_DOUBLE(y_radius)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_Qt_SizeMode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	QRect *rect = static_cast<QRect *>(phpqt_value_arg(rect_obj, 1));
	if (rect == nullptr) {
		RETURN_THROWS();
	}

	painter->drawRoundedRect(*rect, x_radius, y_radius, static_cast<Qt::SizeMode>(phpqt_enum_value(mode, Qt::AbsoluteSize)));
}

ZEND_METHOD(QPainter, drawPixmap)
{
	zend_object *rect_obj, *pixmap_obj;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, phpqt_ce_QRect)
		Z_PARAM_OBJ_OF_CLASS(pixmap_obj, phpqt_ce_QPixmap)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	QRect *rect = static_cast<QRect *>(phpqt_value_arg(rect_obj, 1));
	QPixmap *pixmap = rect == nullptr ? nullptr : static_cast<QPixmap *>(phpqt_value_arg(pixmap_obj, 2));
	if (pixmap == nullptr) {
		RETURN_THROWS();
	}

	painter->drawPixmap(*rect, *pixmap);
}

ZEND_METHOD(QPainter, drawText)
{
	zend_object *rect_obj;
	zend_long flags;
	zend_string *text;
	zval *br = nullptr;

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_OBJ_OF_CLASS(rect_obj, phpqt_ce_QRect)
		Z_PARAM_LONG(flags)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(br)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPainter, painter);

	QRect *rect = static_cast<QRect *>(phpqt_value_arg(rect_obj, 1));
	if (rect == nullptr) {
		RETURN_THROWS();
	}

	if (br == nullptr) {
		painter->drawText(*rect, static_cast<int>(flags), phpqt_qstring(text));
		return;
	}

	QRect bounding;
	painter->drawText(*rect, static_cast<int>(flags), phpqt_qstring(text), &bounding);

	zval out;
	phpqt_return_qrect(&out, bounding);
	ZEND_TRY_ASSIGN_REF_TMP(br, &out);
}

/* ---- QListView -------------------------------------------------------------- */

ZEND_METHOD(QListView, __construct)
{
	phpqt_construct_widget<QListView>(INTERNAL_FUNCTION_PARAM_PASSTHRU); /* binding:qapp-list-view */
}

#define PHPQT_LIST_ENUM(get, set, Type, ce) \
ZEND_METHOD(QListView, get) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(QListView, view); \
	phpqt_return_enum(return_value, ce, static_cast<zend_long>(view->get())); \
} \
ZEND_METHOD(QListView, set) \
{ \
	zend_object *value; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_OBJ_OF_CLASS(value, ce) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(QListView, view); \
	view->set(static_cast<QListView::Type>(phpqt_enum_value(value, 0))); \
}

PHPQT_LIST_ENUM(viewMode, setViewMode, ViewMode, phpqt_ce_QListView_ViewMode)
PHPQT_LIST_ENUM(flow, setFlow, Flow, phpqt_ce_QListView_Flow)
PHPQT_LIST_ENUM(resizeMode, setResizeMode, ResizeMode, phpqt_ce_QListView_ResizeMode)
PHPQT_LIST_ENUM(movement, setMovement, Movement, phpqt_ce_QListView_Movement)

ZEND_METHOD(QListView, isWrapping)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QListView, view);

	RETURN_BOOL(view->isWrapping());
}

ZEND_METHOD(QListView, setWrapping)
{
	bool enable;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QListView, view);

	view->setWrapping(enable);
}

ZEND_METHOD(QListView, gridSize)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QListView, view);

	phpqt_return_qsize(return_value, view->gridSize());
}

ZEND_METHOD(QListView, setGridSize)
{
	zend_object *size_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(size_obj, phpqt_ce_QSize)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QListView, view);

	QSize *size = static_cast<QSize *>(phpqt_value_arg(size_obj, 1));
	if (size == nullptr) {
		RETURN_THROWS();
	}

	view->setGridSize(*size);
}

ZEND_METHOD(QListView, spacing)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QListView, view);

	RETURN_LONG(view->spacing());
}

ZEND_METHOD(QListView, setSpacing)
{
	zend_long space;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(space)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QListView, view);

	view->setSpacing(static_cast<int>(space));
}

ZEND_METHOD(QListView, uniformItemSizes)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QListView, view);

	RETURN_BOOL(view->uniformItemSizes());
}

ZEND_METHOD(QListView, setUniformItemSizes)
{
	bool enable;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enable)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QListView, view);

	view->setUniformItemSizes(enable);
}

/* ---- QToolBar --------------------------------------------------------------- */

ZEND_METHOD(QToolBar, __construct)
{
	phpqt_construct_widget<QToolBar>(INTERNAL_FUNCTION_PARAM_PASSTHRU); /* binding:qapp-tool-bar */
}

ZEND_METHOD(QToolBar, addWidget)
{
	zend_object *widget_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QToolBar, toolbar);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_box(return_value, toolbar->addWidget(widget));
}

ZEND_METHOD(QToolBar, addSeparator)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QToolBar, toolbar);

	phpqt_box(return_value, toolbar->addSeparator());
}

ZEND_METHOD(QToolBar, isMovable)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QToolBar, toolbar);

	RETURN_BOOL(toolbar->isMovable());
}

ZEND_METHOD(QToolBar, setMovable)
{
	bool movable;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(movable)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QToolBar, toolbar);

	toolbar->setMovable(movable);
}

ZEND_METHOD(QToolBar, isFloatable)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QToolBar, toolbar);

	RETURN_BOOL(toolbar->isFloatable());
}

ZEND_METHOD(QToolBar, setFloatable)
{
	bool floatable;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(floatable)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QToolBar, toolbar);

	toolbar->setFloatable(floatable);
}

ZEND_METHOD(QToolBar, iconSize)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QToolBar, toolbar);

	phpqt_return_qsize(return_value, toolbar->iconSize());
}

ZEND_METHOD(QToolBar, setIconSize)
{
	zend_object *size_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(size_obj, phpqt_ce_QSize)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QToolBar, toolbar);

	QSize *size = static_cast<QSize *>(phpqt_value_arg(size_obj, 1));
	if (size == nullptr) {
		RETURN_THROWS();
	}

	toolbar->setIconSize(*size);
}

ZEND_METHOD(QToolBar, toolButtonStyle)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QToolBar, toolbar);

	phpqt_return_enum(return_value, phpqt_ce_Qt_ToolButtonStyle, static_cast<zend_long>(toolbar->toolButtonStyle()));
}

ZEND_METHOD(QToolBar, setToolButtonStyle)
{
	zend_object *style;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(style, phpqt_ce_Qt_ToolButtonStyle)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QToolBar, toolbar);

	toolbar->setToolButtonStyle(static_cast<Qt::ToolButtonStyle>(phpqt_enum_value(style, Qt::ToolButtonIconOnly)));
}
