
extern zend_class_entry *qt_network_qsslkey_qsslkey_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSslKey_QSslKey);

PHP_METHOD(Qt_Network_QSslKey_QSslKey, new_);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, newQByteArrayQSslKeyAlgorithmQSslEncodingFormatQSslKeyTypeQByteArray);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, newQIODeviceQSslKeyAlgorithmQSslEncodingFormatQSslKeyTypeQByteArray);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, newQSslKey);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, swap);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, isNull);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, clear);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, length);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, type);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, algorithm);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, toPem);
PHP_METHOD(Qt_Network_QSslKey_QSslKey, toDer);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_newqbytearrayqsslkeyalgorithmqsslencodingformatqsslkeytypeqbytearray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, encoded, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, algorithm, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_TYPE_INFO(0, passPhrase, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_newqiodeviceqsslkeyalgorithmqsslencodingformatqsslkeytypeqbytearray, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, algorithm, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_INFO(0, type)
	ZEND_ARG_TYPE_INFO(0, passPhrase, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_newqsslkey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_algorithm, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_topem, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, passPhrase, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslkey_qsslkey_toder, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, passPhrase, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsslkey_qsslkey_method_entry) {
	PHP_ME(Qt_Network_QSslKey_QSslKey, new_, arginfo_qt_network_qsslkey_qsslkey_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, newQByteArrayQSslKeyAlgorithmQSslEncodingFormatQSslKeyTypeQByteArray, arginfo_qt_network_qsslkey_qsslkey_newqbytearrayqsslkeyalgorithmqsslencodingformatqsslkeytypeqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, newQIODeviceQSslKeyAlgorithmQSslEncodingFormatQSslKeyTypeQByteArray, arginfo_qt_network_qsslkey_qsslkey_newqiodeviceqsslkeyalgorithmqsslencodingformatqsslkeytypeqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, newQSslKey, arginfo_qt_network_qsslkey_qsslkey_newqsslkey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, swap, arginfo_qt_network_qsslkey_qsslkey_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, isNull, arginfo_qt_network_qsslkey_qsslkey_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, clear, arginfo_qt_network_qsslkey_qsslkey_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, length, arginfo_qt_network_qsslkey_qsslkey_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, type, arginfo_qt_network_qsslkey_qsslkey_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, algorithm, arginfo_qt_network_qsslkey_qsslkey_algorithm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, toPem, arginfo_qt_network_qsslkey_qsslkey_topem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslKey_QSslKey, toDer, arginfo_qt_network_qsslkey_qsslkey_toder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
