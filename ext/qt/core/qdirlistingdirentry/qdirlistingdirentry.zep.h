
extern zend_class_entry *qt_core_qdirlistingdirentry_qdirlistingdirentry_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDirListingDirEntry_QDirListingDirEntry);

PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, fileName);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, baseName);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, completeBaseName);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, suffix);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, bundleName);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, completeSuffix);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, filePath);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isDir);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isFile);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isSymLink);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, exists);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isHidden);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isReadable);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isWritable);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isExecutable);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, fileInfo);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, canonicalFilePath);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, absoluteFilePath);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, absolutePath);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, size);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, birthTime);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, metadataChangeTime);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, lastModified);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, lastRead);
PHP_METHOD(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, fileTime);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_basename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_completebasename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_suffix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_bundlename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_completesuffix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_filepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_isdir, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_isfile, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_issymlink, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_exists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_isreadable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_iswritable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_isexecutable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_fileinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_canonicalfilepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_absolutefilepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_absolutepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_birthtime, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_metadatachangetime, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_lastmodified, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_lastread, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_filetime, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdirlistingdirentry_qdirlistingdirentry_method_entry) {
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, fileName, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, baseName, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_basename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, completeBaseName, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_completebasename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, suffix, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_suffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, bundleName, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_bundlename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, completeSuffix, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_completesuffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, filePath, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_filepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isDir, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_isdir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isFile, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_isfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isSymLink, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_issymlink, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, exists, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_exists, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isHidden, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isReadable, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_isreadable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isWritable, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_iswritable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, isExecutable, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_isexecutable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, fileInfo, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_fileinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, canonicalFilePath, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_canonicalfilepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, absoluteFilePath, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_absolutefilepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, absolutePath, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_absolutepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, size, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, birthTime, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_birthtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, metadataChangeTime, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_metadatachangetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, lastModified, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_lastmodified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, lastRead, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_lastread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDirListingDirEntry_QDirListingDirEntry, fileTime, arginfo_qt_core_qdirlistingdirentry_qdirlistingdirentry_filetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
