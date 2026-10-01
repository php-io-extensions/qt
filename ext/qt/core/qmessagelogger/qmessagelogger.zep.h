
extern zend_class_entry *qt_core_qmessagelogger_qmessagelogger_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMessageLogger_QMessageLogger);

PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, new_);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, newCharIntChar);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, newCharIntCharChar);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, debug);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, noDebug);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, info);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, warning);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, critical);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, fatal);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, debugQLoggingCategoryChar);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, infoQLoggingCategoryChar);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, warningQLoggingCategoryChar);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, criticalQLoggingCategoryChar);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, fatalQLoggingCategoryChar);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, debug2);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, debugQLoggingCategory);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, info2);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, infoQLoggingCategory);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, warning2);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, warningQLoggingCategory);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, critical2);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, criticalQLoggingCategory);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, fatal2);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, fatalQLoggingCategory);
PHP_METHOD(Qt_Core_QMessageLogger_QMessageLogger, noDebug2);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_newcharintchar, 0, 3, IS_LONG, 0)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_INFO(0, function_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_newcharintcharchar, 0, 4, IS_LONG, 0)
	ZEND_ARG_INFO(0, file)
	ZEND_ARG_TYPE_INFO(0, line, IS_LONG, 0)
	ZEND_ARG_INFO(0, function_)
	ZEND_ARG_INFO(0, category)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_debug, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_nodebug, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_info, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_warning, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_critical, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_fatal, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_debugqloggingcategorychar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_infoqloggingcategorychar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_warningqloggingcategorychar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_criticalqloggingcategorychar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_fatalqloggingcategorychar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_debug2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_debugqloggingcategory, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_info2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_infoqloggingcategory, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_warning2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_warningqloggingcategory, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_critical2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_criticalqloggingcategory, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_fatal2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_fatalqloggingcategory, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogger_qmessagelogger_nodebug2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmessagelogger_qmessagelogger_method_entry) {
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, new_, arginfo_qt_core_qmessagelogger_qmessagelogger_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, newCharIntChar, arginfo_qt_core_qmessagelogger_qmessagelogger_newcharintchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, newCharIntCharChar, arginfo_qt_core_qmessagelogger_qmessagelogger_newcharintcharchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, debug, arginfo_qt_core_qmessagelogger_qmessagelogger_debug, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, noDebug, arginfo_qt_core_qmessagelogger_qmessagelogger_nodebug, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, info, arginfo_qt_core_qmessagelogger_qmessagelogger_info, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, warning, arginfo_qt_core_qmessagelogger_qmessagelogger_warning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, critical, arginfo_qt_core_qmessagelogger_qmessagelogger_critical, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, fatal, arginfo_qt_core_qmessagelogger_qmessagelogger_fatal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, debugQLoggingCategoryChar, arginfo_qt_core_qmessagelogger_qmessagelogger_debugqloggingcategorychar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, infoQLoggingCategoryChar, arginfo_qt_core_qmessagelogger_qmessagelogger_infoqloggingcategorychar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, warningQLoggingCategoryChar, arginfo_qt_core_qmessagelogger_qmessagelogger_warningqloggingcategorychar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, criticalQLoggingCategoryChar, arginfo_qt_core_qmessagelogger_qmessagelogger_criticalqloggingcategorychar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, fatalQLoggingCategoryChar, arginfo_qt_core_qmessagelogger_qmessagelogger_fatalqloggingcategorychar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, debug2, arginfo_qt_core_qmessagelogger_qmessagelogger_debug2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, debugQLoggingCategory, arginfo_qt_core_qmessagelogger_qmessagelogger_debugqloggingcategory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, info2, arginfo_qt_core_qmessagelogger_qmessagelogger_info2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, infoQLoggingCategory, arginfo_qt_core_qmessagelogger_qmessagelogger_infoqloggingcategory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, warning2, arginfo_qt_core_qmessagelogger_qmessagelogger_warning2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, warningQLoggingCategory, arginfo_qt_core_qmessagelogger_qmessagelogger_warningqloggingcategory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, critical2, arginfo_qt_core_qmessagelogger_qmessagelogger_critical2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, criticalQLoggingCategory, arginfo_qt_core_qmessagelogger_qmessagelogger_criticalqloggingcategory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, fatal2, arginfo_qt_core_qmessagelogger_qmessagelogger_fatal2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, fatalQLoggingCategory, arginfo_qt_core_qmessagelogger_qmessagelogger_fatalqloggingcategory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogger_QMessageLogger, noDebug2, arginfo_qt_core_qmessagelogger_qmessagelogger_nodebug2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
