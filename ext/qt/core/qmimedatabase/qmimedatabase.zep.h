
extern zend_class_entry *qt_core_qmimedatabase_qmimedatabase_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QMimeDatabase_QMimeDatabase);

PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, new_);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForName);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFile);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFileQFileInfoQMimeDatabaseMatchMode);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypesForFileName);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForData);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForDataQIODevice);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForUrl);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFileNameAndData);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFileNameAndDataQStringQByteArray);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, suffixForFileName);
PHP_METHOD(Qt_Core_QMimeDatabase_QMimeDatabase, allMimeTypes);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforname, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nameOrAlias, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforfile, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforfileqfileinfoqmimedatabasematchmode, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileInfo, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypesforfilename, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypefordata, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypefordataqiodevice, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforurl, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforfilenameanddata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforfilenameanddataqstringqbytearray, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_suffixforfilename, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qmimedatabase_qmimedatabase_allmimetypes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qmimedatabase_qmimedatabase_method_entry) {
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, new_, arginfo_qt_core_qmimedatabase_qmimedatabase_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForName, arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFile, arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFileQFileInfoQMimeDatabaseMatchMode, arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforfileqfileinfoqmimedatabasematchmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypesForFileName, arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypesforfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForData, arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypefordata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForDataQIODevice, arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypefordataqiodevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForUrl, arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFileNameAndData, arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforfilenameanddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, mimeTypeForFileNameAndDataQStringQByteArray, arginfo_qt_core_qmimedatabase_qmimedatabase_mimetypeforfilenameanddataqstringqbytearray, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, suffixForFileName, arginfo_qt_core_qmimedatabase_qmimedatabase_suffixforfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QMimeDatabase_QMimeDatabase, allMimeTypes, arginfo_qt_core_qmimedatabase_qmimedatabase_allmimetypes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
