
extern zend_class_entry *qt_core_qmessagelogcontext_qmessagelogcontext_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMessageLogContext_QMessageLogContext);

PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, CurrentVersion);
PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, new_);
PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, newCharIntCharChar);
PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, version);
PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, setVersion);
PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, line);
PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, setLine);
PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, file);
PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, function_);
PHP_METHOD(Qt_Core_QMessageLogContext_QMessageLogContext, category);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_currentversion, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_newcharintcharchar, 0, 4, IS_LONG, 0)
	ZEND_ARG_INFO(0, fileName)
	ZEND_ARG_TYPE_INFO(0, lineNumber, IS_LONG, 0)
	ZEND_ARG_INFO(0, functionName)
	ZEND_ARG_INFO(0, categoryName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_version, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_setversion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_line, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_setline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_file, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_function_, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_category, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmessagelogcontext_qmessagelogcontext_method_entry) {
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, CurrentVersion, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_currentversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, new_, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, newCharIntCharChar, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_newcharintcharchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, version, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_version, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, setVersion, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_setversion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, line, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_line, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, setLine, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_setline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, file, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_file, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, function_, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_function_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMessageLogContext_QMessageLogContext, category, arginfo_qt_core_qmessagelogcontext_qmessagelogcontext_category, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
