
extern zend_class_entry *qt_core_qresource_qresource_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QResource_QResource);

PHP_METHOD(Qt_Core_QResource_QResource, new_);
PHP_METHOD(Qt_Core_QResource_QResource, setFileName);
PHP_METHOD(Qt_Core_QResource_QResource, fileName);
PHP_METHOD(Qt_Core_QResource_QResource, absoluteFilePath);
PHP_METHOD(Qt_Core_QResource_QResource, setLocale);
PHP_METHOD(Qt_Core_QResource_QResource, locale);
PHP_METHOD(Qt_Core_QResource_QResource, isValid);
PHP_METHOD(Qt_Core_QResource_QResource, compressionAlgorithm);
PHP_METHOD(Qt_Core_QResource_QResource, size);
PHP_METHOD(Qt_Core_QResource_QResource, uncompressedSize);
PHP_METHOD(Qt_Core_QResource_QResource, uncompressedData);
PHP_METHOD(Qt_Core_QResource_QResource, lastModified);
PHP_METHOD(Qt_Core_QResource_QResource, registerResource);
PHP_METHOD(Qt_Core_QResource_QResource, unregisterResource);
PHP_METHOD(Qt_Core_QResource_QResource, registerResourceUcharQString);
PHP_METHOD(Qt_Core_QResource_QResource, unregisterResourceUcharQString);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
	ZEND_ARG_INFO(0, locale)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_setfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_absolutefilepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_setlocale, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, locale, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_locale, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_compressionalgorithm, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_uncompressedsize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_uncompresseddata, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_lastmodified, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_registerresource, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rccFilename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, resourceRoot, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_unregisterresource, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, rccFilename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, resourceRoot, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_registerresourceucharqstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, rccData)
	ZEND_ARG_TYPE_INFO(0, resourceRoot, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qresource_qresource_unregisterresourceucharqstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_INFO(0, rccData)
	ZEND_ARG_TYPE_INFO(0, resourceRoot, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qresource_qresource_method_entry) {
	PHP_ME(Qt_Core_QResource_QResource, new_, arginfo_qt_core_qresource_qresource_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, setFileName, arginfo_qt_core_qresource_qresource_setfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, fileName, arginfo_qt_core_qresource_qresource_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, absoluteFilePath, arginfo_qt_core_qresource_qresource_absolutefilepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, setLocale, arginfo_qt_core_qresource_qresource_setlocale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, locale, arginfo_qt_core_qresource_qresource_locale, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, isValid, arginfo_qt_core_qresource_qresource_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, compressionAlgorithm, arginfo_qt_core_qresource_qresource_compressionalgorithm, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, size, arginfo_qt_core_qresource_qresource_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, uncompressedSize, arginfo_qt_core_qresource_qresource_uncompressedsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, uncompressedData, arginfo_qt_core_qresource_qresource_uncompresseddata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, lastModified, arginfo_qt_core_qresource_qresource_lastmodified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, registerResource, arginfo_qt_core_qresource_qresource_registerresource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, unregisterResource, arginfo_qt_core_qresource_qresource_unregisterresource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, registerResourceUcharQString, arginfo_qt_core_qresource_qresource_registerresourceucharqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QResource_QResource, unregisterResourceUcharQString, arginfo_qt_core_qresource_qresource_unregisterresourceucharqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
