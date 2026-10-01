
extern zend_class_entry *qt_core_qjsonparseerror_qjsonparseerror_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QJsonParseError_QJsonParseError);

PHP_METHOD(Qt_Core_QJsonParseError_QJsonParseError, errorString);
PHP_METHOD(Qt_Core_QJsonParseError_QJsonParseError, offset);
PHP_METHOD(Qt_Core_QJsonParseError_QJsonParseError, setOffset);
PHP_METHOD(Qt_Core_QJsonParseError_QJsonParseError, error);
PHP_METHOD(Qt_Core_QJsonParseError_QJsonParseError, setError);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonparseerror_qjsonparseerror_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonparseerror_qjsonparseerror_offset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonparseerror_qjsonparseerror_setoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonparseerror_qjsonparseerror_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qjsonparseerror_qjsonparseerror_seterror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qjsonparseerror_qjsonparseerror_method_entry) {
	PHP_ME(Qt_Core_QJsonParseError_QJsonParseError, errorString, arginfo_qt_core_qjsonparseerror_qjsonparseerror_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonParseError_QJsonParseError, offset, arginfo_qt_core_qjsonparseerror_qjsonparseerror_offset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonParseError_QJsonParseError, setOffset, arginfo_qt_core_qjsonparseerror_qjsonparseerror_setoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonParseError_QJsonParseError, error, arginfo_qt_core_qjsonparseerror_qjsonparseerror_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QJsonParseError_QJsonParseError, setError, arginfo_qt_core_qjsonparseerror_qjsonparseerror_seterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
