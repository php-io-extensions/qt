
extern zend_class_entry *qt_core_qcborparsererror_qcborparsererror_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QCborParserError_QCborParserError);

PHP_METHOD(Qt_Core_QCborParserError_QCborParserError, offset);
PHP_METHOD(Qt_Core_QCborParserError_QCborParserError, setOffset);
PHP_METHOD(Qt_Core_QCborParserError_QCborParserError, error);
PHP_METHOD(Qt_Core_QCborParserError_QCborParserError, setError);
PHP_METHOD(Qt_Core_QCborParserError_QCborParserError, errorString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborparsererror_qcborparsererror_offset, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborparsererror_qcborparsererror_setoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborparsererror_qcborparsererror_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborparsererror_qcborparsererror_seterror, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qcborparsererror_qcborparsererror_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qcborparsererror_qcborparsererror_method_entry) {
	PHP_ME(Qt_Core_QCborParserError_QCborParserError, offset, arginfo_qt_core_qcborparsererror_qcborparsererror_offset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborParserError_QCborParserError, setOffset, arginfo_qt_core_qcborparsererror_qcborparsererror_setoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborParserError_QCborParserError, error, arginfo_qt_core_qcborparsererror_qcborparsererror_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborParserError_QCborParserError, setError, arginfo_qt_core_qcborparsererror_qcborparsererror_seterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QCborParserError_QCborParserError, errorString, arginfo_qt_core_qcborparsererror_qcborparsererror_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
