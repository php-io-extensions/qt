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
 * The three constructors share one shape: Qt takes argc by reference and keeps
 * argv, so both live in the PHP object and outlive the application.
 */
template <typename App>
static void phpqt_construct_application(INTERNAL_FUNCTION_PARAMETERS)
{
	HashTable *argv_ht;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(argv_ht)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	if (zend_hash_num_elements(argv_ht) == 0) {
		zend_argument_value_error(1, "must hold at least argv[0]");
		RETURN_THROWS();
	}
	if (QCoreApplication::instance() != nullptr) {
		zend_throw_exception(phpqt_ce_QtException, "A QCoreApplication already exists in this process", 0);
		RETURN_THROWS();
	}

	phpqt_object *intern = phpqt_object_from(Z_OBJ_P(ZEND_THIS));
	int argc = (int) zend_hash_num_elements(argv_ht);
	char **argv = static_cast<char **>(pecalloc((size_t) argc + 1, sizeof(char *), 1));
	zval *arg;
	int i = 0;

	ZEND_HASH_FOREACH_VAL(argv_ht, arg) {
		zend_string *str = zval_try_get_string(arg);
		if (str == nullptr) {
			for (int j = 0; j < i; j++) {
				pefree(argv[j], 1);
			}
			pefree(argv, 1);
			RETURN_THROWS();
		}
		argv[i++] = pestrndup(ZSTR_VAL(str), ZSTR_LEN(str), 1);
		zend_string_release(str);
	} ZEND_HASH_FOREACH_END();

	intern->argc = argc;
	intern->argv = argv;

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new App(intern->argc, intern->argv));
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
	PHPQT_REQUIRE_MAIN_THREAD();

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
	PHPQT_REQUIRE_MAIN_THREAD();

	phpqt_box(return_value, QApplication::widgetAt(int(x), int(y)));
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
		if (maxtime < 0 || maxtime > INT_MAX) {
			zend_argument_value_error(2, "must be between 0 and %d", INT_MAX);
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
	PHPQT_REQUIRE_MAIN_THREAD();

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
