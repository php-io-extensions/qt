#include "runtime.h"
#include "../stubs/QCoreApplication_arginfo.h"

#include <QtCore/QCoreApplication>
#include <QtCore/QString>
#include <QtGui/QGuiApplication>
#include <QtWidgets/QApplication>
#include <QtGui/QStyleHints>
#include <QtCore/QEvent>

void phpqt_register_QCoreApplication()
{
	phpqt_ce_QCoreApplication = register_class_QCoreApplication(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QCoreApplication);
	phpqt_map_class("QCoreApplication", phpqt_ce_QCoreApplication);

	phpqt_ce_QGuiApplication = register_class_QGuiApplication(phpqt_ce_QCoreApplication);
	phpqt_object_setup(phpqt_ce_QGuiApplication);
	phpqt_map_class("QGuiApplication", phpqt_ce_QGuiApplication);

	phpqt_ce_QApplication = register_class_QApplication(phpqt_ce_QGuiApplication);
	phpqt_object_setup(phpqt_ce_QApplication);
	phpqt_map_class("QApplication", phpqt_ce_QApplication);
}

static zend_string *phpqt_utf8(const QString &value)
{
	QByteArray utf8 = value.toUtf8();
	return zend_string_init(utf8.constData(), (size_t) utf8.size(), 0);
}

/*
 * int &argc and char **argv as C holds them: argv copied into persistent storage
 * the PHP object keeps, argc stored beside it. Qt keeps both for the
 * application's life and rewrites them as it strips its own options.
 */
static bool phpqt_application_argv(zval *argc_zv, HashTable *argv_ht, phpqt_object *intern)
{
	zval *argc_val = argc_zv;
	ZVAL_DEREF(argc_val);
	if (Z_TYPE_P(argc_val) != IS_LONG) {
		zend_argument_type_error(1, "must be of type int, %s given", zend_zval_value_name(argc_val));
		return false;
	}

	int count = (int) zend_hash_num_elements(argv_ht);
	if (!phpqt_long_fits(Z_LVAL_P(argc_val), 0, count, 1)) {
		return false;
	}

	char **strings = static_cast<char **>(pecalloc((size_t) count + 1, sizeof(char *), 1));
	zval *arg;
	int i = 0;

	ZEND_HASH_FOREACH_VAL(argv_ht, arg) {
		zend_string *str = zval_try_get_string(arg);
		if (str == nullptr) {
			for (int j = 0; j < i; j++) {
				pefree(strings[j], 1);
			}
			pefree(strings, 1);
			return false;
		}
		strings[i++] = pestrndup(ZSTR_VAL(str), ZSTR_LEN(str), 1);
		zend_string_release(str);
	} ZEND_HASH_FOREACH_END();

	intern->strings = strings;
	intern->string_count = count;
	intern->argv = static_cast<char **>(pecalloc((size_t) count + 1, sizeof(char *), 1));
	memcpy(intern->argv, strings, sizeof(char *) * (size_t) count);
	intern->argc = (int) Z_LVAL_P(argc_val);

	return true;
}

/*
 * The three constructors share one shape, QCoreApplication(int &argc, char **argv,
 * int flags): Qt's argc after it parsed its options is written back to $argc.
 */
template <typename App>
static void phpqt_construct_application(INTERNAL_FUNCTION_PARAMETERS)
{
	zval *argc_zv;
	HashTable *argv_ht;
	zend_long flags = QCoreApplication::ApplicationFlags;

	ZEND_PARSE_PARAMETERS_START(2, 3)
		Z_PARAM_ZVAL(argc_zv)
		Z_PARAM_ARRAY_HT(argv_ht)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(flags)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

#ifdef __APPLE__
	/* A second application in the process: on macOS Qt dies at teardown. Elsewhere Qt answers for itself. */
	if (!PHPQT_PROBE_OFF("second-application-macos") && (QCoreApplication::instance() != nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "A QCoreApplication already exists in this process", 0); /* binding:second-application-macos */
		RETURN_THROWS();
	}
#endif

	phpqt_object *intern = phpqt_object_from(Z_OBJ_P(ZEND_THIS));
	if (!phpqt_long_fits(flags, INT_MIN, INT_MAX, 3) || !phpqt_application_argv(argc_zv, argv_ht, intern)) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new App(intern->argc, intern->argv, static_cast<int>(flags)));
	ZEND_TRY_ASSIGN_REF_LONG(argc_zv, intern->argc);
}

ZEND_METHOD(QCoreApplication, __construct)
{
	phpqt_construct_application<QCoreApplication>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QGuiApplication, __construct)
{
	phpqt_construct_application<QGuiApplication>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QApplication, __construct)
{
	phpqt_construct_application<QApplication>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QCoreApplication, instance)
{
	ZEND_PARSE_PARAMETERS_NONE();

	phpqt_box(return_value, QCoreApplication::instance());
}

ZEND_METHOD(QCoreApplication, sendEvent)
{
	zend_object *receiver_obj;
	zend_object *event_obj;
	bool failed = false;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(receiver_obj, phpqt_ce_QObject)
		Z_PARAM_OBJ_OF_CLASS(event_obj, phpqt_ce_QEvent)
	ZEND_PARSE_PARAMETERS_END();

	QObject *receiver = phpqt_arg(receiver_obj, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}
	QEvent *event = static_cast<QEvent *>(phpqt_value_arg(event_obj, 2));
	if (event == nullptr) {
		RETURN_THROWS();
	}

	RETURN_BOOL(QCoreApplication::sendEvent(receiver, event));
}

ZEND_METHOD(QGuiApplication, styleHints)
{
	ZEND_PARSE_PARAMETERS_NONE();

	phpqt_box(return_value, QGuiApplication::styleHints());
}

ZEND_METHOD(QApplication, widgetAt)
{
	zend_long x;
	zend_long y;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(x)
		Z_PARAM_LONG(y)
	ZEND_PARSE_PARAMETERS_END();

	phpqt_box(return_value, QApplication::widgetAt(int(x), int(y)));
}

ZEND_METHOD(QApplication, focusWidget)
{
	ZEND_PARSE_PARAMETERS_NONE();

	phpqt_box(return_value, QApplication::focusWidget());
}

ZEND_METHOD(QCoreApplication, processEvents)
{
	zend_object *flags_case = nullptr;
	zend_long flags_long = 0;
	zend_long maxtime = 0;
	bool maxtime_null = true;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, phpqt_ce_QEventLoop_ProcessEventsFlag, flags_long)
		Z_PARAM_LONG_OR_NULL(maxtime, maxtime_null)
	ZEND_PARSE_PARAMETERS_END();

	QEventLoop::ProcessEventsFlags flags(static_cast<int>(phpqt_enum_value(flags_case, flags_long)));

	if (maxtime_null) {
		QCoreApplication::processEvents(flags);
	} else {
		if (!phpqt_long_fits(maxtime, INT_MIN, INT_MAX, 2)) {
			RETURN_THROWS();
		}
		QCoreApplication::processEvents(flags, static_cast<int>(maxtime));
	}
}

ZEND_METHOD(QCoreApplication, sendPostedEvents)
{
	zend_object *receiver = nullptr;
	zend_long event_type = 0;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(receiver, phpqt_ce_QObject)
		Z_PARAM_LONG(event_type)
	ZEND_PARSE_PARAMETERS_END();

	QObject *qreceiver = phpqt_arg(receiver, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	QCoreApplication::sendPostedEvents(qreceiver, static_cast<int>(event_type));
}

ZEND_METHOD(QCoreApplication, exec)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG(QCoreApplication::exec());
}

ZEND_METHOD(QCoreApplication, quit)
{
	ZEND_PARSE_PARAMETERS_NONE();

	QCoreApplication::quit();
}

ZEND_METHOD(QCoreApplication, exit)
{
	zend_long return_code = 0;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(return_code)
	ZEND_PARSE_PARAMETERS_END();

	QCoreApplication::exit(static_cast<int>(return_code));
}

ZEND_METHOD(QCoreApplication, applicationName)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_STR(phpqt_utf8(QCoreApplication::applicationName()));
}

ZEND_METHOD(QCoreApplication, setApplicationName)
{
	zend_string *application;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(application)
	ZEND_PARSE_PARAMETERS_END();

	QCoreApplication::setApplicationName(phpqt_qstring(application));
}

ZEND_METHOD(QCoreApplication, applicationPid)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_LONG((zend_long) QCoreApplication::applicationPid());
}

ZEND_METHOD(QCoreApplication, closingDown)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL(QCoreApplication::closingDown());
}

ZEND_METHOD(QCoreApplication, startingUp)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL(QCoreApplication::startingUp());
}

ZEND_METHOD(QCoreApplication, setAttribute)
{
	zend_object *attribute;
	bool on = true;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(attribute, phpqt_ce_Qt_ApplicationAttribute)
		Z_PARAM_OPTIONAL
		Z_PARAM_BOOL(on)
	ZEND_PARSE_PARAMETERS_END();

	QCoreApplication::setAttribute(static_cast<Qt::ApplicationAttribute>(phpqt_enum_value(attribute, 0)), on);
}

ZEND_METHOD(QCoreApplication, testAttribute)
{
	zend_object *attribute;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(attribute, phpqt_ce_Qt_ApplicationAttribute)
	ZEND_PARSE_PARAMETERS_END();

	RETURN_BOOL(QCoreApplication::testAttribute(static_cast<Qt::ApplicationAttribute>(phpqt_enum_value(attribute, 0))));
}

ZEND_METHOD(QGuiApplication, platformName)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_STR(phpqt_utf8(QGuiApplication::platformName()));
}

ZEND_METHOD(QGuiApplication, desktopFileName)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_STR(phpqt_utf8(QGuiApplication::desktopFileName()));
}

ZEND_METHOD(QGuiApplication, setDesktopFileName)
{
	zend_string *name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();

	QGuiApplication::setDesktopFileName(phpqt_qstring(name));
}

ZEND_METHOD(QGuiApplication, applicationDisplayName)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_STR(phpqt_utf8(QGuiApplication::applicationDisplayName()));
}

ZEND_METHOD(QGuiApplication, setApplicationDisplayName)
{
	zend_string *name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();

	QGuiApplication::setApplicationDisplayName(phpqt_qstring(name));
}

ZEND_METHOD(QGuiApplication, quitOnLastWindowClosed)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL(QGuiApplication::quitOnLastWindowClosed());
}

ZEND_METHOD(QGuiApplication, setQuitOnLastWindowClosed)
{
	bool quit;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(quit)
	ZEND_PARSE_PARAMETERS_END();

	QGuiApplication::setQuitOnLastWindowClosed(quit);
}
