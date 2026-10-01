
extern zend_class_entry *qt_core_qloggingfunctions_qloggingfunctions_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLoggingFunctions_QLoggingFunctions);

PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qt_message_output);
PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qErrnoWarning);
PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qErrnoWarningChar);
PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qSetMessagePattern);
PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qFormatLogMessage);
PHP_METHOD(Qt_Core_QLoggingFunctions_QLoggingFunctions, qt_error_string);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingfunctions_qloggingfunctions_qt_message_output, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingfunctions_qloggingfunctions_qerrnowarning, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, code, IS_LONG, 0)
	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingfunctions_qloggingfunctions_qerrnowarningchar, 0, 1, IS_VOID, 0)

	ZEND_ARG_INFO(0, msg)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingfunctions_qloggingfunctions_qsetmessagepattern, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, messagePattern, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingfunctions_qloggingfunctions_qformatlogmessage, 0, 3, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, context, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buf, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qloggingfunctions_qloggingfunctions_qt_error_string, 0, 0, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, errorCode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qloggingfunctions_qloggingfunctions_method_entry) {
	PHP_ME(Qt_Core_QLoggingFunctions_QLoggingFunctions, qt_message_output, arginfo_qt_core_qloggingfunctions_qloggingfunctions_qt_message_output, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingFunctions_QLoggingFunctions, qErrnoWarning, arginfo_qt_core_qloggingfunctions_qloggingfunctions_qerrnowarning, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingFunctions_QLoggingFunctions, qErrnoWarningChar, arginfo_qt_core_qloggingfunctions_qloggingfunctions_qerrnowarningchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingFunctions_QLoggingFunctions, qSetMessagePattern, arginfo_qt_core_qloggingfunctions_qloggingfunctions_qsetmessagepattern, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingFunctions_QLoggingFunctions, qFormatLogMessage, arginfo_qt_core_qloggingfunctions_qloggingfunctions_qformatlogmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLoggingFunctions_QLoggingFunctions, qt_error_string, arginfo_qt_core_qloggingfunctions_qloggingfunctions_qt_error_string, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
