/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: d9ff24c92501e9d4c7a2003c14895daae9b58ee7 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QCoreApplication___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, argv, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QCoreApplication_instance, 0, 0, QCoreApplication, 1)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QCoreApplication_processEvents, 0, 0, IS_VOID, 0)
	ZEND_ARG_OBJ_TYPE_MASK(0, flags, QEventLoop\\ProcessEventsFlag, MAY_BE_LONG, "0")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, maxtime, IS_LONG, 1, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QCoreApplication_sendPostedEvents, 0, 0, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, receiver, QObject, 1, "null")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, eventType, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QCoreApplication_exec, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QCoreApplication_quit, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QCoreApplication_exit, 0, 0, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, returnCode, IS_LONG, 0, "0")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QCoreApplication_applicationName, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QCoreApplication_setApplicationName, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, application, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QCoreApplication_applicationPid arginfo_class_QCoreApplication_exec

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QCoreApplication_closingDown, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QCoreApplication_startingUp arginfo_class_QCoreApplication_closingDown

#define arginfo_class_QGuiApplication___construct arginfo_class_QCoreApplication___construct

#define arginfo_class_QGuiApplication_platformName arginfo_class_QCoreApplication_applicationName

#define arginfo_class_QGuiApplication_desktopFileName arginfo_class_QCoreApplication_applicationName

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGuiApplication_setDesktopFileName, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QGuiApplication_applicationDisplayName arginfo_class_QCoreApplication_applicationName

#define arginfo_class_QGuiApplication_setApplicationDisplayName arginfo_class_QGuiApplication_setDesktopFileName

#define arginfo_class_QGuiApplication_quitOnLastWindowClosed arginfo_class_QCoreApplication_closingDown

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QGuiApplication_setQuitOnLastWindowClosed, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, quit, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QApplication___construct arginfo_class_QCoreApplication___construct

ZEND_METHOD(QCoreApplication, __construct);
ZEND_METHOD(QCoreApplication, instance);
ZEND_METHOD(QCoreApplication, processEvents);
ZEND_METHOD(QCoreApplication, sendPostedEvents);
ZEND_METHOD(QCoreApplication, exec);
ZEND_METHOD(QCoreApplication, quit);
ZEND_METHOD(QCoreApplication, exit);
ZEND_METHOD(QCoreApplication, applicationName);
ZEND_METHOD(QCoreApplication, setApplicationName);
ZEND_METHOD(QCoreApplication, applicationPid);
ZEND_METHOD(QCoreApplication, closingDown);
ZEND_METHOD(QCoreApplication, startingUp);
ZEND_METHOD(QGuiApplication, __construct);
ZEND_METHOD(QGuiApplication, platformName);
ZEND_METHOD(QGuiApplication, desktopFileName);
ZEND_METHOD(QGuiApplication, setDesktopFileName);
ZEND_METHOD(QGuiApplication, applicationDisplayName);
ZEND_METHOD(QGuiApplication, setApplicationDisplayName);
ZEND_METHOD(QGuiApplication, quitOnLastWindowClosed);
ZEND_METHOD(QGuiApplication, setQuitOnLastWindowClosed);
ZEND_METHOD(QApplication, __construct);

static const zend_function_entry class_QCoreApplication_methods[] = {
	ZEND_ME(QCoreApplication, __construct, arginfo_class_QCoreApplication___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QCoreApplication, instance, arginfo_class_QCoreApplication_instance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, processEvents, arginfo_class_QCoreApplication_processEvents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, sendPostedEvents, arginfo_class_QCoreApplication_sendPostedEvents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, exec, arginfo_class_QCoreApplication_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, quit, arginfo_class_QCoreApplication_quit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, exit, arginfo_class_QCoreApplication_exit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, applicationName, arginfo_class_QCoreApplication_applicationName, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, setApplicationName, arginfo_class_QCoreApplication_setApplicationName, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, applicationPid, arginfo_class_QCoreApplication_applicationPid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, closingDown, arginfo_class_QCoreApplication_closingDown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QCoreApplication, startingUp, arginfo_class_QCoreApplication_startingUp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_QGuiApplication_methods[] = {
	ZEND_ME(QGuiApplication, __construct, arginfo_class_QGuiApplication___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QGuiApplication, platformName, arginfo_class_QGuiApplication_platformName, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QGuiApplication, desktopFileName, arginfo_class_QGuiApplication_desktopFileName, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QGuiApplication, setDesktopFileName, arginfo_class_QGuiApplication_setDesktopFileName, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QGuiApplication, applicationDisplayName, arginfo_class_QGuiApplication_applicationDisplayName, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QGuiApplication, setApplicationDisplayName, arginfo_class_QGuiApplication_setApplicationDisplayName, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QGuiApplication, quitOnLastWindowClosed, arginfo_class_QGuiApplication_quitOnLastWindowClosed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(QGuiApplication, setQuitOnLastWindowClosed, arginfo_class_QGuiApplication_setQuitOnLastWindowClosed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};

static const zend_function_entry class_QApplication_methods[] = {
	ZEND_ME(QApplication, __construct, arginfo_class_QApplication___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QCoreApplication(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QCoreApplication", class_QCoreApplication_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QGuiApplication(zend_class_entry *class_entry_QCoreApplication)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QGuiApplication", class_QGuiApplication_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QCoreApplication, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QApplication(zend_class_entry *class_entry_QGuiApplication)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QApplication", class_QApplication_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QGuiApplication, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}
