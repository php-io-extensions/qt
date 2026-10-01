#include "runtime.h"
#include "../stubs/QWidget_arginfo.h"
#include "../stubs/QMainWindow_arginfo.h"
#include "../stubs/QDialog_arginfo.h"

#include <QtCore/QString>
#include <QtWidgets/QApplication>
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

static QString phpqt_qstring(zend_string *value)
{
	return QString::fromUtf8(ZSTR_VAL(value), (qsizetype) ZSTR_LEN(value));
}

static void phpqt_return_qstring(zval *rv, const QString &value)
{
	QByteArray utf8 = value.toUtf8();
	ZVAL_STRINGL(rv, utf8.constData(), (size_t) utf8.size());
}

/*
 * The widget constructors share one shape: an optional parent widget, a new object
 * PHP owns until the parent (or a later setParent) takes it. Widgets are made on the
 * main thread, after a QApplication.
 */
template <typename Widget>
static void phpqt_construct_widget(INTERNAL_FUNCTION_PARAMETERS)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	if (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "%s needs a QApplication first", ZSTR_VAL(EX(func)->common.scope->name));
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new Widget(qparent));
}

/* ---- QWidget ----------------------------------------------------------- */

ZEND_METHOD(QWidget, __construct)
{
	phpqt_construct_widget<QWidget>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
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
