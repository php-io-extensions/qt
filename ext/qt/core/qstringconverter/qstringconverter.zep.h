
extern zend_class_entry *qt_core_qstringconverter_qstringconverter_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QStringConverter_QStringConverter);

PHP_METHOD(Qt_Core_QStringConverter_QStringConverter, isValid);
PHP_METHOD(Qt_Core_QStringConverter_QStringConverter, resetState);
PHP_METHOD(Qt_Core_QStringConverter_QStringConverter, hasError);
PHP_METHOD(Qt_Core_QStringConverter_QStringConverter, name);
PHP_METHOD(Qt_Core_QStringConverter_QStringConverter, nameForEncoding);
PHP_METHOD(Qt_Core_QStringConverter_QStringConverter, availableCodecs);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringconverter_qstringconverter_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringconverter_qstringconverter_resetstate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringconverter_qstringconverter_haserror, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qstringconverter_qstringconverter_name, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qstringconverter_qstringconverter_nameforencoding, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstringconverter_qstringconverter_availablecodecs, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qstringconverter_qstringconverter_method_entry) {
	PHP_ME(Qt_Core_QStringConverter_QStringConverter, isValid, arginfo_qt_core_qstringconverter_qstringconverter_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringConverter_QStringConverter, resetState, arginfo_qt_core_qstringconverter_qstringconverter_resetstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringConverter_QStringConverter, hasError, arginfo_qt_core_qstringconverter_qstringconverter_haserror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringConverter_QStringConverter, name, arginfo_qt_core_qstringconverter_qstringconverter_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringConverter_QStringConverter, nameForEncoding, arginfo_qt_core_qstringconverter_qstringconverter_nameforencoding, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStringConverter_QStringConverter, availableCodecs, arginfo_qt_core_qstringconverter_qstringconverter_availablecodecs, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
