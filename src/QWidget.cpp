#include "runtime.h"
#include "../stubs/QWidget_arginfo.h"
#include "../stubs/QMainWindow_arginfo.h"
#include "../stubs/QDialog_arginfo.h"

#include <QtCore/QString>
#include <QtGui/QFont>
#include <QtGui/QWindow>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLayout>
#include <QtWidgets/QSizePolicy>
#include <QtWidgets/QDialog>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QWidget>

void phpqt_register_QWidget()
{
	phpqt_ce_QWidget = register_class_QWidget(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QWidget);
	phpqt_map_class("QWidget", phpqt_ce_QWidget);

	phpqt_ce_QMainWindow = register_class_QMainWindow(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QMainWindow);
	phpqt_map_class("QMainWindow", phpqt_ce_QMainWindow);

	phpqt_ce_QDialog = register_class_QDialog(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QDialog);
	phpqt_map_class("QDialog", phpqt_ce_QDialog);

	phpqt_ce_QMessageBox = register_class_QMessageBox(phpqt_ce_QDialog);
	phpqt_object_setup(phpqt_ce_QMessageBox);
	phpqt_map_class("QMessageBox", phpqt_ce_QMessageBox);
}

/* ---- QWidget ----------------------------------------------------------- */

ZEND_METHOD(QWidget, __construct)
{
	phpqt_construct_widget<QWidget>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QWidget, createWindowContainer)
{
	zend_object *window_obj;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(window_obj, phpqt_ce_QWindow)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	QWindow *window = static_cast<QWindow *>(phpqt_arg(window_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}
	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_box(return_value, QWidget::createWindowContainer(window, qparent));
}

#define PHPQT_WIDGET_VOID(name, call) \
ZEND_METHOD(QWidget, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(QWidget, widget); \
	widget->call(); \
}

#define PHPQT_WIDGET_BOOL(name, call) \
ZEND_METHOD(QWidget, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(QWidget, widget); \
	RETURN_BOOL(widget->call()); \
}

#define PHPQT_WIDGET_INT(name, call) \
ZEND_METHOD(QWidget, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(QWidget, widget); \
	RETURN_LONG(widget->call()); \
}

PHPQT_WIDGET_VOID(show, show)
PHPQT_WIDGET_VOID(hide, hide)
PHPQT_WIDGET_BOOL(close, close)
PHPQT_WIDGET_BOOL(isVisible, isVisible)
PHPQT_WIDGET_BOOL(isWindow, isWindow)
PHPQT_WIDGET_BOOL(isActiveWindow, isActiveWindow)
PHPQT_WIDGET_VOID(activateWindow, activateWindow)
PHPQT_WIDGET_VOID(raise, raise)
PHPQT_WIDGET_INT(width, width)
PHPQT_WIDGET_INT(height, height)

ZEND_METHOD(QWidget, setVisible)
{
	bool visible;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(visible)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	widget->setVisible(visible);
}

ZEND_METHOD(QWidget, windowTitle)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	phpqt_return_qstring(return_value, widget->windowTitle());
}

ZEND_METHOD(QWidget, setWindowTitle)
{
	zend_string *title;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	widget->setWindowTitle(phpqt_qstring(title));
}

ZEND_METHOD(QWidget, resize)
{
	zend_long w;
	zend_long h;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	widget->resize(static_cast<int>(w), static_cast<int>(h));
}

ZEND_METHOD(QWidget, parentWidget)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	phpqt_box(return_value, widget->parentWidget());
}

ZEND_METHOD(QWidget, mapFromGlobal)
{
	double x;
	double y;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(x)
		Z_PARAM_DOUBLE(y)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	QPointF local = widget->mapFromGlobal(QPointF(x, y));
	array_init_size(return_value, 2);
	add_next_index_double(return_value, local.x());
	add_next_index_double(return_value, local.y());
}

ZEND_METHOD(QWidget, setAttribute)
{
	zend_object *attribute;
	bool on = true;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(attribute, phpqt_ce_Qt_WidgetAttribute)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	widget->setAttribute(static_cast<Qt::WidgetAttribute>(phpqt_enum_value(attribute, 0)), on);
}

ZEND_METHOD(QWidget, testAttribute)
{
	zend_object *attribute;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(attribute, phpqt_ce_Qt_WidgetAttribute)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	RETURN_BOOL(widget->testAttribute(static_cast<Qt::WidgetAttribute>(phpqt_enum_value(attribute, 0))));
}

ZEND_METHOD(QWidget, setLayout)
{
	zend_object *layout_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(layout_obj, phpqt_ce_QLayout)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	QLayout *layout = static_cast<QLayout *>(phpqt_arg(layout_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	widget->setLayout(layout);
}

ZEND_METHOD(QWidget, layout)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	phpqt_box(return_value, widget->layout());
}

#define PHPQT_WIDGET_INT2(name, call) \
ZEND_METHOD(QWidget, name) \
{ \
	zend_long a; \
	zend_long b; \
	ZEND_PARSE_PARAMETERS_START(2, 2) \
		Z_PARAM_LONG(a) \
		Z_PARAM_LONG(b) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(QWidget, widget); \
	widget->call(static_cast<int>(a), static_cast<int>(b)); \
}

PHPQT_WIDGET_INT2(setMinimumSize, setMinimumSize)
PHPQT_WIDGET_INT2(setFixedSize, setFixedSize)
PHPQT_WIDGET_INT2(move, move)
PHPQT_WIDGET_INT(minimumWidth, minimumWidth)
PHPQT_WIDGET_INT(minimumHeight, minimumHeight)
PHPQT_WIDGET_BOOL(isEnabled, isEnabled)

static void phpqt_return_size(zval *rv, const QSize &size)
{
	array_init_size(rv, 2);
	add_next_index_long(rv, size.width());
	add_next_index_long(rv, size.height());
}

ZEND_METHOD(QWidget, sizeHint)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	phpqt_return_size(return_value, widget->sizeHint());
}

ZEND_METHOD(QWidget, size)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	phpqt_return_size(return_value, widget->size());
}

ZEND_METHOD(QWidget, pos)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	QPoint pos = widget->pos();
	array_init_size(return_value, 2);
	add_next_index_long(return_value, pos.x());
	add_next_index_long(return_value, pos.y());
}

ZEND_METHOD(QWidget, geometry)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	QRect rect = widget->geometry();
	array_init_size(return_value, 4);
	add_assoc_long(return_value, "x", rect.x());
	add_assoc_long(return_value, "y", rect.y());
	add_assoc_long(return_value, "width", rect.width());
	add_assoc_long(return_value, "height", rect.height());
}

ZEND_METHOD(QWidget, setGeometry)
{
	zend_long x, y, w, h;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	widget->setGeometry(static_cast<int>(x), static_cast<int>(y), static_cast<int>(w), static_cast<int>(h));
}

ZEND_METHOD(QWidget, setSizePolicy)
{
	zend_object *horizontal;
	zend_object *vertical;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(horizontal, phpqt_ce_QSizePolicy_Policy)
		Z_PARAM_OBJ_OF_CLASS(vertical, phpqt_ce_QSizePolicy_Policy)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	widget->setSizePolicy(QSizePolicy(
		static_cast<QSizePolicy::Policy>(phpqt_enum_value(horizontal, 0)),
		static_cast<QSizePolicy::Policy>(phpqt_enum_value(vertical, 0))));
}

ZEND_METHOD(QWidget, setEnabled)
{
	bool enabled;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(enabled)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	widget->setEnabled(enabled);
}

ZEND_METHOD(QWidget, setStyleSheet)
{
	zend_string *sheet;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(sheet)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	widget->setStyleSheet(phpqt_qstring(sheet));
}

ZEND_METHOD(QWidget, styleSheet)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	phpqt_return_qstring(return_value, widget->styleSheet());
}

ZEND_METHOD(QWidget, devicePixelRatioF)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	RETURN_DOUBLE(widget->devicePixelRatioF());
}

ZEND_METHOD(QWidget, setFont)
{
	zend_object *font_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(font_obj, phpqt_ce_QFont)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	QFont *font = static_cast<QFont *>(phpqt_value_arg(font_obj, 1));
	if (font == nullptr) {
		RETURN_THROWS();
	}

	widget->setFont(*font);
}

ZEND_METHOD(QWidget, font)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWidget, widget);

	phpqt_return_font(return_value, widget->font());
}

/* QWidget::setParent(QWidget *): the QObject overload is hidden, so a non-widget parent is refused. */
ZEND_METHOD(QWidget, setParent)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWidget, widget);

	if (parent != nullptr && !instanceof_function(parent->ce, phpqt_ce_QWidget)) {
		zend_argument_type_error(1, "must be of type ?QWidget, %s given", ZSTR_VAL(parent->ce->name));
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	widget->setParent(qparent);
}

/* ---- QMainWindow ------------------------------------------------------- */

ZEND_METHOD(QMainWindow, __construct)
{
	phpqt_construct_widget<QMainWindow>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QMainWindow, menuBar)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMainWindow, window);

	phpqt_box(return_value, window->menuBar());
}

ZEND_METHOD(QMainWindow, setMenuBar)
{
	zend_object *menubar;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(menubar, phpqt_ce_QMenuBar)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMainWindow, window);

	QMenuBar *bar = static_cast<QMenuBar *>(phpqt_arg(menubar, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	window->setMenuBar(bar);
}

ZEND_METHOD(QMainWindow, centralWidget)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMainWindow, window);

	phpqt_box(return_value, window->centralWidget());
}

ZEND_METHOD(QMainWindow, setCentralWidget)
{
	zend_object *widget_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMainWindow, window);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	window->setCentralWidget(widget);
}

/* ---- QDialog, QMessageBox ---------------------------------------------- */

ZEND_METHOD(QDialog, __construct)
{
	phpqt_construct_widget<QDialog>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QDialog, open)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDialog, dialog);

	dialog->open();
}

ZEND_METHOD(QDialog, isModal)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDialog, dialog);

	RETURN_BOOL(dialog->isModal());
}

ZEND_METHOD(QDialog, setModal)
{
	bool modal;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(modal)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QDialog, dialog);

	dialog->setModal(modal);
}

ZEND_METHOD(QDialog, result)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDialog, dialog);

	RETURN_LONG(dialog->result());
}

ZEND_METHOD(QDialog, done)
{
	zend_long r;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(r)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QDialog, dialog);

	dialog->done(static_cast<int>(r));
}

ZEND_METHOD(QDialog, accept)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDialog, dialog);

	dialog->accept();
}

ZEND_METHOD(QDialog, reject)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDialog, dialog);

	dialog->reject();
}

ZEND_METHOD(QMessageBox, __construct)
{
	phpqt_construct_widget<QMessageBox>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QMessageBox, text)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMessageBox, box);

	phpqt_return_qstring(return_value, box->text());
}

ZEND_METHOD(QMessageBox, setText)
{
	zend_string *text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMessageBox, box);

	box->setText(phpqt_qstring(text));
}

ZEND_METHOD(QMessageBox, informativeText)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMessageBox, box);

	phpqt_return_qstring(return_value, box->informativeText());
}

ZEND_METHOD(QMessageBox, setInformativeText)
{
	zend_string *text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMessageBox, box);

	box->setInformativeText(phpqt_qstring(text));
}
