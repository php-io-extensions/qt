
extern zend_class_entry *qt_network_qsslcertificate_qsslcertificate_ce;

ZEPHIR_INIT_CLASS(Qt_Network_QSslCertificate_QSslCertificate);

PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, new_);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, newQByteArrayQSslEncodingFormat);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, newQSslCertificate);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, swap);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, isNull);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, isBlacklisted);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, isSelfSigned);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, clear);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, version);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, serialNumber);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, digest);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, issuerInfo);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, issuerInfoQByteArray);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, subjectInfo);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, subjectInfoQByteArray);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, issuerDisplayName);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, subjectDisplayName);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, subjectInfoAttributes);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, issuerInfoAttributes);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, subjectAlternativeNames);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, effectiveDate);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, expiryDate);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, publicKey);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, extensions);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, toPem);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, toDer);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, toText);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, fromPath);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, fromDevice);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, fromData);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, verify);
PHP_METHOD(Qt_Network_QSslCertificate_QSslCertificate, importPkcs12);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_newqbytearrayqsslencodingformat, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_newqsslcertificate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_isblacklisted, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_isselfsigned, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_version, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_serialnumber, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_digest, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, algorithm)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_issuerinfo, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, info, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_issuerinfoqbytearray, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_subjectinfo, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, info, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_subjectinfoqbytearray, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, attribute, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_issuerdisplayname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_subjectdisplayname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_subjectinfoattributes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_issuerinfoattributes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_subjectalternativenames, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_effectivedate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_expirydate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_publickey, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_extensions, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_topem, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_toder, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_totext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_frompath, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
	ZEND_ARG_INFO(0, syntax)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_fromdevice, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_fromdata, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
	ZEND_ARG_INFO(0, format)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_verify, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_ARRAY_INFO(0, certificateChain, 0)
	ZEND_ARG_TYPE_INFO(0, hostName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_network_qsslcertificate_qsslcertificate_importpkcs12, 0, 3, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cert, IS_LONG, 0)
	ZEND_ARG_INFO(0, caCertificates)
	ZEND_ARG_TYPE_INFO(0, passPhrase, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_network_qsslcertificate_qsslcertificate_method_entry) {
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, new_, arginfo_qt_network_qsslcertificate_qsslcertificate_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, newQByteArrayQSslEncodingFormat, arginfo_qt_network_qsslcertificate_qsslcertificate_newqbytearrayqsslencodingformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, newQSslCertificate, arginfo_qt_network_qsslcertificate_qsslcertificate_newqsslcertificate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, swap, arginfo_qt_network_qsslcertificate_qsslcertificate_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, isNull, arginfo_qt_network_qsslcertificate_qsslcertificate_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, isBlacklisted, arginfo_qt_network_qsslcertificate_qsslcertificate_isblacklisted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, isSelfSigned, arginfo_qt_network_qsslcertificate_qsslcertificate_isselfsigned, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, clear, arginfo_qt_network_qsslcertificate_qsslcertificate_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, version, arginfo_qt_network_qsslcertificate_qsslcertificate_version, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, serialNumber, arginfo_qt_network_qsslcertificate_qsslcertificate_serialnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, digest, arginfo_qt_network_qsslcertificate_qsslcertificate_digest, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, issuerInfo, arginfo_qt_network_qsslcertificate_qsslcertificate_issuerinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, issuerInfoQByteArray, arginfo_qt_network_qsslcertificate_qsslcertificate_issuerinfoqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, subjectInfo, arginfo_qt_network_qsslcertificate_qsslcertificate_subjectinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, subjectInfoQByteArray, arginfo_qt_network_qsslcertificate_qsslcertificate_subjectinfoqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, issuerDisplayName, arginfo_qt_network_qsslcertificate_qsslcertificate_issuerdisplayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, subjectDisplayName, arginfo_qt_network_qsslcertificate_qsslcertificate_subjectdisplayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, subjectInfoAttributes, arginfo_qt_network_qsslcertificate_qsslcertificate_subjectinfoattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, issuerInfoAttributes, arginfo_qt_network_qsslcertificate_qsslcertificate_issuerinfoattributes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, subjectAlternativeNames, arginfo_qt_network_qsslcertificate_qsslcertificate_subjectalternativenames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, effectiveDate, arginfo_qt_network_qsslcertificate_qsslcertificate_effectivedate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, expiryDate, arginfo_qt_network_qsslcertificate_qsslcertificate_expirydate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, publicKey, arginfo_qt_network_qsslcertificate_qsslcertificate_publickey, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, extensions, arginfo_qt_network_qsslcertificate_qsslcertificate_extensions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, toPem, arginfo_qt_network_qsslcertificate_qsslcertificate_topem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, toDer, arginfo_qt_network_qsslcertificate_qsslcertificate_toder, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, toText, arginfo_qt_network_qsslcertificate_qsslcertificate_totext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, fromPath, arginfo_qt_network_qsslcertificate_qsslcertificate_frompath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, fromDevice, arginfo_qt_network_qsslcertificate_qsslcertificate_fromdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, fromData, arginfo_qt_network_qsslcertificate_qsslcertificate_fromdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, verify, arginfo_qt_network_qsslcertificate_qsslcertificate_verify, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Network_QSslCertificate_QSslCertificate, importPkcs12, arginfo_qt_network_qsslcertificate_qsslcertificate_importpkcs12, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
