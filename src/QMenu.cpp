#include "runtime.h"
#include "../stubs/QMenuBar_arginfo.h"
#include "../stubs/QAction_arginfo.h"

#include <QtCore/QPoint>
#include <QtCore/QString>
#include <QtGui/QAction>
#include <QtGui/QActionGroup>
#include <QtGui/QKeySequence>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>

static_assert(QAction::NoRole == 0 && QAction::TextHeuristicRole == 1 && QAction::ApplicationSpecificRole == 2
	&& QAction::AboutQtRole == 3 && QAction::AboutRole == 4 && QAction::PreferencesRole == 5 && QAction::QuitRole == 6,
	"QAction::MenuRole values differ from the stub's QAction\\MenuRole enum");

void phpqt_register_QMenu()
{
	phpqt_ce_QMenuBar = register_class_QMenuBar(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QMenuBar);
	phpqt_map_class("QMenuBar", phpqt_ce_QMenuBar);

	phpqt_ce_QMenu = register_class_QMenu(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QMenu);
	phpqt_map_class("QMenu", phpqt_ce_QMenu);

	phpqt_ce_QAction_MenuRole = register_class_QAction_MenuRole();
	phpqt_ce_QAction = register_class_QAction(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QAction);
	phpqt_map_class("QAction", phpqt_ce_QAction);

	phpqt_ce_QActionGroup = register_class_QActionGroup(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QActionGroup);
	phpqt_map_class("QActionGroup", phpqt_ce_QActionGroup);
}


/* ---- QMenuBar ---------------------------------------------------------- */

ZEND_METHOD(QMenuBar, __construct)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts with qFatal ("Must construct a QApplication before a QWidget"). */
	if (!PHPQT_PROBE_OFF("qapp-menubar") && (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "QMenuBar needs a QApplication first", 0); /* binding:qapp-menubar */
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QMenuBar(qparent));
}

ZEND_METHOD(QMenuBar, addMenu)
{
	zend_string *title;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMenuBar, bar);

	phpqt_box(return_value, bar->addMenu(phpqt_qstring(title)));
}

ZEND_METHOD(QMenuBar, addAction)
{
	zend_string *text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMenuBar, bar);

	phpqt_box(return_value, bar->addAction(phpqt_qstring(text)));
}

ZEND_METHOD(QMenuBar, clear)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMenuBar, bar);

	bar->clear();
}

ZEND_METHOD(QMenuBar, isNativeMenuBar)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMenuBar, bar);

	RETURN_BOOL(bar->isNativeMenuBar());
}

ZEND_METHOD(QMenuBar, setNativeMenuBar)
{
	bool native;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(native)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMenuBar, bar);

	bar->setNativeMenuBar(native);
}

/* ---- QMenu ------------------------------------------------------------- */

ZEND_METHOD(QMenu, __construct)
{
	zend_string *title = nullptr;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(title)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts with qFatal ("Must construct a QApplication before a QWidget"). */
	if (!PHPQT_PROBE_OFF("qapp-menu") && (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "QMenu needs a QApplication first", 0); /* binding:qapp-menu */
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QMenu(title != nullptr ? phpqt_qstring(title) : QString(), qparent));
}

ZEND_METHOD(QMenu, title)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMenu, menu);

	phpqt_return_qstring(return_value, menu->title());
}

ZEND_METHOD(QMenu, setTitle)
{
	zend_string *title;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMenu, menu);

	menu->setTitle(phpqt_qstring(title));
}

ZEND_METHOD(QMenu, addAction)
{
	zend_string *text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMenu, menu);

	phpqt_box(return_value, menu->addAction(phpqt_qstring(text)));
}

ZEND_METHOD(QMenu, addMenu)
{
	zend_string *title;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(title)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMenu, menu);

	phpqt_box(return_value, menu->addMenu(phpqt_qstring(title)));
}

ZEND_METHOD(QMenu, addSeparator)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMenu, menu);

	phpqt_box(return_value, menu->addSeparator());
}

ZEND_METHOD(QMenu, clear)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMenu, menu);

	menu->clear();
}

ZEND_METHOD(QMenu, isEmpty)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMenu, menu);

	RETURN_BOOL(menu->isEmpty());
}

ZEND_METHOD(QMenu, popup)
{
	zend_object *pos_obj;
	zend_object *at_obj = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(pos_obj, phpqt_ce_QPoint)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(at_obj, phpqt_ce_QAction)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QMenu, menu);

	QPoint *pos = static_cast<QPoint *>(phpqt_value_arg(pos_obj, 1));
	if (pos == nullptr) {
		RETURN_THROWS();
	}
	QAction *at = static_cast<QAction *>(phpqt_arg(at_obj, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	menu->popup(*pos, at);
}

ZEND_METHOD(QMenu, menuAction)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QMenu, menu);

	phpqt_box(return_value, menu->menuAction());
}

/* ---- QAction ----------------------------------------------------------- */

ZEND_METHOD(QAction, __construct)
{
	zend_string *text = nullptr;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(text)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	QObject *qparent = phpqt_arg(parent, 2, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QAction(text != nullptr ? phpqt_qstring(text) : QString(), qparent));
}

ZEND_METHOD(QAction, text)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAction, action);

	phpqt_return_qstring(return_value, action->text());
}

ZEND_METHOD(QAction, setText)
{
	zend_string *text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAction, action);

	action->setText(phpqt_qstring(text));
}

#define PHPQT_ACTION_BOOL_GETTER(name, call) \
ZEND_METHOD(QAction, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(QAction, action); \
	RETURN_BOOL(action->call()); \
}

#define PHPQT_ACTION_BOOL_SETTER(name, call) \
ZEND_METHOD(QAction, name) \
{ \
	bool value; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_BOOL(value) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(QAction, action); \
	action->call(value); \
}

PHPQT_ACTION_BOOL_GETTER(isCheckable, isCheckable)
PHPQT_ACTION_BOOL_SETTER(setCheckable, setCheckable)
PHPQT_ACTION_BOOL_GETTER(isChecked, isChecked)
PHPQT_ACTION_BOOL_SETTER(setChecked, setChecked)
PHPQT_ACTION_BOOL_GETTER(isEnabled, isEnabled)
PHPQT_ACTION_BOOL_SETTER(setEnabled, setEnabled)
PHPQT_ACTION_BOOL_GETTER(isSeparator, isSeparator)
PHPQT_ACTION_BOOL_SETTER(setSeparator, setSeparator)

ZEND_METHOD(QAction, menuRole)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAction, action);

	phpqt_return_enum(return_value, phpqt_ce_QAction_MenuRole, static_cast<zend_long>(action->menuRole()));
}

ZEND_METHOD(QAction, setMenuRole)
{
	zend_object *role;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(role, phpqt_ce_QAction_MenuRole)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAction, action);

	action->setMenuRole(static_cast<QAction::MenuRole>(phpqt_enum_value(role, 0)));
}

ZEND_METHOD(QAction, shortcut)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAction, action);

	phpqt_return_qkeysequence(return_value, action->shortcut());
}

ZEND_METHOD(QAction, setShortcut)
{
	zend_object *shortcut_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(shortcut_obj, phpqt_ce_QKeySequence)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAction, action);

	QKeySequence *shortcut = static_cast<QKeySequence *>(phpqt_value_arg(shortcut_obj, 1));
	if (shortcut == nullptr) {
		RETURN_THROWS();
	}

	action->setShortcut(*shortcut);
}

ZEND_METHOD(QAction, trigger)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAction, action);

	action->trigger();
}

ZEND_METHOD(QAction, toggle)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAction, action);

	action->toggle();
}

/* ---- QActionGroup ------------------------------------------------------ */

ZEND_METHOD(QActionGroup, __construct)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	QObject *qparent = phpqt_arg(parent, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QActionGroup(qparent));
}

ZEND_METHOD(QActionGroup, addAction)
{
	zend_object *action_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(action_obj, phpqt_ce_QAction)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QActionGroup, group);

	QAction *action = static_cast<QAction *>(phpqt_arg(action_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_box(return_value, group->addAction(action));
}

ZEND_METHOD(QActionGroup, checkedAction)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QActionGroup, group);

	phpqt_box(return_value, group->checkedAction());
}
