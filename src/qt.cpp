/*
 * qt: 1:1 bindings of Qt 6 as PHP classes named after their C++ counterparts.
 * Nested C++ scopes become PHP namespaces: Qt::TimerType is Qt\TimerType,
 * QMetaObject::Connection is QMetaObject\Connection.
 */

#include "runtime.h"
#include "ext/standard/info.h"
#include "ext/spl/spl_exceptions.h"
#include "../stubs/qt_arginfo.h"
#include "../stubs/QEventLoop_arginfo.h"
#include "../stubs/qnamespace_arginfo.h"

#include <QtCore/QtGlobal>

ZEND_DECLARE_MODULE_GLOBALS(qt)

zend_class_entry *phpqt_ce_QtException;
zend_class_entry *phpqt_ce_QObject;
zend_class_entry *phpqt_ce_QMetaObject_Connection;
zend_class_entry *phpqt_ce_QEventLoop_ProcessEventsFlag;
zend_class_entry *phpqt_ce_Qt_TimerType;
zend_class_entry *phpqt_ce_QCoreApplication;
zend_class_entry *phpqt_ce_QGuiApplication;
zend_class_entry *phpqt_ce_QApplication;
zend_class_entry *phpqt_ce_QTimer;
zend_class_entry *phpqt_ce_QSocketNotifier;
zend_class_entry *phpqt_ce_QSocketNotifier_Type;
zend_class_entry *phpqt_ce_QAbstractEventDispatcher;

ZEND_FUNCTION(qVersion)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_STRING(qVersion());
}

void phpqt_register_enums()
{
	phpqt_ce_QEventLoop_ProcessEventsFlag = register_class_QEventLoop_ProcessEventsFlag();
	phpqt_ce_Qt_TimerType = register_class_Qt_TimerType();
}

static PHP_GINIT_FUNCTION(qt)
{
#if defined(COMPILE_DL_QT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	zend_hash_init(&qt_globals->boxes, 32, nullptr, nullptr, 1);
	qt_globals->slots_head = nullptr;
	qt_globals->callout_depth = 0;
}

static PHP_GSHUTDOWN_FUNCTION(qt)
{
	zend_hash_destroy(&qt_globals->boxes);
}

PHP_MINIT_FUNCTION(qt)
{
	phpqt_ce_QtException = register_class_QtException(spl_ce_RuntimeException);

	phpqt_register_enums();
	phpqt_register_QObject();
	phpqt_register_QMetaObject();
	phpqt_register_QCoreApplication();
	phpqt_register_QTimer();
	phpqt_register_QSocketNotifier();
	phpqt_register_QAbstractEventDispatcher();

	return SUCCESS;
}

PHP_RINIT_FUNCTION(qt)
{
#if defined(COMPILE_DL_QT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(qt)
{
	phpqt_slots_detach_all();
	return SUCCESS;
}

PHP_MINFO_FUNCTION(qt)
{
	char version[64];

	snprintf(version, sizeof(version), "%s (built %s)", qVersion(), QT_VERSION_STR);

	php_info_print_table_start();
	php_info_print_table_row(2, "qt support", "enabled");
	php_info_print_table_row(2, "Version", PHP_QT_VERSION);
	php_info_print_table_row(2, "Qt", version);
	php_info_print_table_end();
}

zend_module_entry qt_module_entry = {
	STANDARD_MODULE_HEADER,
	"qt",
	ext_functions,
	PHP_MINIT(qt),
	nullptr,
	PHP_RINIT(qt),
	PHP_RSHUTDOWN(qt),
	PHP_MINFO(qt),
	PHP_QT_VERSION,
	PHP_MODULE_GLOBALS(qt),
	PHP_GINIT(qt),
	PHP_GSHUTDOWN(qt),
	nullptr,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_QT
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(qt)
#endif
