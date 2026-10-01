
extern zend_class_entry *qt_network_qsslcipher_qsslcipher_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSslCipher_QSslCipher);

PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, new_);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, newQString);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, newQStringQSslSslProtocol);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, newQSslCipher);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, swap);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, isNull);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, name);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, supportedBits);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, usedBits);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, keyExchangeMethod);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, authenticationMethod);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, encryptionMethod);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, protocolString);
PHP_METHOD(Qt_Network_QSslCipher_QSslCipher, protocol);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_newqstringqsslsslprotocol, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, protocol, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_newqsslcipher, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_supportedbits, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_usedbits, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_keyexchangemethod, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_authenticationmethod, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_encryptionmethod, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_protocolstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcipher_qsslcipher_protocol, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsslcipher_qsslcipher_method_entry) {
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, new_, arginfo_qt_network_qsslcipher_qsslcipher_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, newQString, arginfo_qt_network_qsslcipher_qsslcipher_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, newQStringQSslSslProtocol, arginfo_qt_network_qsslcipher_qsslcipher_newqstringqsslsslprotocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, newQSslCipher, arginfo_qt_network_qsslcipher_qsslcipher_newqsslcipher, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, swap, arginfo_qt_network_qsslcipher_qsslcipher_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, isNull, arginfo_qt_network_qsslcipher_qsslcipher_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, name, arginfo_qt_network_qsslcipher_qsslcipher_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, supportedBits, arginfo_qt_network_qsslcipher_qsslcipher_supportedbits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, usedBits, arginfo_qt_network_qsslcipher_qsslcipher_usedbits, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, keyExchangeMethod, arginfo_qt_network_qsslcipher_qsslcipher_keyexchangemethod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, authenticationMethod, arginfo_qt_network_qsslcipher_qsslcipher_authenticationmethod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, encryptionMethod, arginfo_qt_network_qsslcipher_qsslcipher_encryptionmethod, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, protocolString, arginfo_qt_network_qsslcipher_qsslcipher_protocolstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCipher_QSslCipher, protocol, arginfo_qt_network_qsslcipher_qsslcipher_protocol, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
