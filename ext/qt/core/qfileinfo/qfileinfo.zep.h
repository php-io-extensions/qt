
extern zend_class_entry *qt_core_qfileinfo_qfileinfo_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QFileInfo_QFileInfo);

PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, new_);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, newQString);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, newQFileDevice);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, newQDirQString);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, newQFileInfo);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, swap);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, setFile);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, setFileQFileDevice);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, setFileQDirQString);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, exists);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, existsQString);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, refresh);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, filePath);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, absoluteFilePath);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, canonicalFilePath);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, fileName);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, baseName);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, completeBaseName);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, suffix);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, bundleName);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, completeSuffix);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, path);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, absolutePath);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, canonicalPath);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, dir);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, absoluteDir);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isReadable);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isWritable);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isExecutable);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isHidden);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isNativePath);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isRelative);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isAbsolute);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, makeAbsolute);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isFile);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isDir);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isSymLink);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isSymbolicLink);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isShortcut);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isAlias);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isJunction);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isRoot);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, isBundle);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, symLinkTarget);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, readSymLink);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, junctionTarget);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, owner);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, ownerId);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, group);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, groupId);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, permission);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, permissions);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, size);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, birthTime);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, metadataChangeTime);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, lastModified);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, lastRead);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, fileTime);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, birthTimeQTimeZone);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, metadataChangeTimeQTimeZone);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, lastModifiedQTimeZone);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, lastReadQTimeZone);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, fileTimeQFileDeviceFileTimeQTimeZone);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, caching);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, setCaching);
PHP_METHOD(Qt_Core_QFileInfo_QFileInfo, stat);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_newqfiledevice, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_newqdirqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_newqfileinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileinfo, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_setfile, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_setfileqfiledevice, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_setfileqdirqstring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_exists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_existsqstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_refresh, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_filepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_absolutefilepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_canonicalfilepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_basename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_completebasename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_suffix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_bundlename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_completesuffix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_absolutepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_canonicalpath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_dir, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_absolutedir, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isreadable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_iswritable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isexecutable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_ishidden, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isnativepath, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isrelative, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isabsolute, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_makeabsolute, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isfile, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isdir, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_issymlink, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_issymboliclink, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isshortcut, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isalias, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isjunction, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isroot, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_isbundle, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_symlinktarget, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_readsymlink, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_junctiontarget, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_owner, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_ownerid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_group, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_groupid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_permission, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, permissions, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_permissions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_birthtime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_metadatachangetime, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_lastmodified, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_lastread, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_filetime, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_birthtimeqtimezone, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_metadatachangetimeqtimezone, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_lastmodifiedqtimezone, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_lastreadqtimezone, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_filetimeqfiledevicefiletimeqtimezone, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, tz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_caching, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_setcaching, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfileinfo_qfileinfo_stat, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qfileinfo_qfileinfo_method_entry) {
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, new_, arginfo_qt_core_qfileinfo_qfileinfo_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, newQString, arginfo_qt_core_qfileinfo_qfileinfo_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, newQFileDevice, arginfo_qt_core_qfileinfo_qfileinfo_newqfiledevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, newQDirQString, arginfo_qt_core_qfileinfo_qfileinfo_newqdirqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, newQFileInfo, arginfo_qt_core_qfileinfo_qfileinfo_newqfileinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, swap, arginfo_qt_core_qfileinfo_qfileinfo_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, setFile, arginfo_qt_core_qfileinfo_qfileinfo_setfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, setFileQFileDevice, arginfo_qt_core_qfileinfo_qfileinfo_setfileqfiledevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, setFileQDirQString, arginfo_qt_core_qfileinfo_qfileinfo_setfileqdirqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, exists, arginfo_qt_core_qfileinfo_qfileinfo_exists, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, existsQString, arginfo_qt_core_qfileinfo_qfileinfo_existsqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, refresh, arginfo_qt_core_qfileinfo_qfileinfo_refresh, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, filePath, arginfo_qt_core_qfileinfo_qfileinfo_filepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, absoluteFilePath, arginfo_qt_core_qfileinfo_qfileinfo_absolutefilepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, canonicalFilePath, arginfo_qt_core_qfileinfo_qfileinfo_canonicalfilepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, fileName, arginfo_qt_core_qfileinfo_qfileinfo_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, baseName, arginfo_qt_core_qfileinfo_qfileinfo_basename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, completeBaseName, arginfo_qt_core_qfileinfo_qfileinfo_completebasename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, suffix, arginfo_qt_core_qfileinfo_qfileinfo_suffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, bundleName, arginfo_qt_core_qfileinfo_qfileinfo_bundlename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, completeSuffix, arginfo_qt_core_qfileinfo_qfileinfo_completesuffix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, path, arginfo_qt_core_qfileinfo_qfileinfo_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, absolutePath, arginfo_qt_core_qfileinfo_qfileinfo_absolutepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, canonicalPath, arginfo_qt_core_qfileinfo_qfileinfo_canonicalpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, dir, arginfo_qt_core_qfileinfo_qfileinfo_dir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, absoluteDir, arginfo_qt_core_qfileinfo_qfileinfo_absolutedir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isReadable, arginfo_qt_core_qfileinfo_qfileinfo_isreadable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isWritable, arginfo_qt_core_qfileinfo_qfileinfo_iswritable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isExecutable, arginfo_qt_core_qfileinfo_qfileinfo_isexecutable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isHidden, arginfo_qt_core_qfileinfo_qfileinfo_ishidden, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isNativePath, arginfo_qt_core_qfileinfo_qfileinfo_isnativepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isRelative, arginfo_qt_core_qfileinfo_qfileinfo_isrelative, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isAbsolute, arginfo_qt_core_qfileinfo_qfileinfo_isabsolute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, makeAbsolute, arginfo_qt_core_qfileinfo_qfileinfo_makeabsolute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isFile, arginfo_qt_core_qfileinfo_qfileinfo_isfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isDir, arginfo_qt_core_qfileinfo_qfileinfo_isdir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isSymLink, arginfo_qt_core_qfileinfo_qfileinfo_issymlink, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isSymbolicLink, arginfo_qt_core_qfileinfo_qfileinfo_issymboliclink, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isShortcut, arginfo_qt_core_qfileinfo_qfileinfo_isshortcut, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isAlias, arginfo_qt_core_qfileinfo_qfileinfo_isalias, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isJunction, arginfo_qt_core_qfileinfo_qfileinfo_isjunction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isRoot, arginfo_qt_core_qfileinfo_qfileinfo_isroot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, isBundle, arginfo_qt_core_qfileinfo_qfileinfo_isbundle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, symLinkTarget, arginfo_qt_core_qfileinfo_qfileinfo_symlinktarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, readSymLink, arginfo_qt_core_qfileinfo_qfileinfo_readsymlink, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, junctionTarget, arginfo_qt_core_qfileinfo_qfileinfo_junctiontarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, owner, arginfo_qt_core_qfileinfo_qfileinfo_owner, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, ownerId, arginfo_qt_core_qfileinfo_qfileinfo_ownerid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, group, arginfo_qt_core_qfileinfo_qfileinfo_group, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, groupId, arginfo_qt_core_qfileinfo_qfileinfo_groupid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, permission, arginfo_qt_core_qfileinfo_qfileinfo_permission, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, permissions, arginfo_qt_core_qfileinfo_qfileinfo_permissions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, size, arginfo_qt_core_qfileinfo_qfileinfo_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, birthTime, arginfo_qt_core_qfileinfo_qfileinfo_birthtime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, metadataChangeTime, arginfo_qt_core_qfileinfo_qfileinfo_metadatachangetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, lastModified, arginfo_qt_core_qfileinfo_qfileinfo_lastmodified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, lastRead, arginfo_qt_core_qfileinfo_qfileinfo_lastread, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, fileTime, arginfo_qt_core_qfileinfo_qfileinfo_filetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, birthTimeQTimeZone, arginfo_qt_core_qfileinfo_qfileinfo_birthtimeqtimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, metadataChangeTimeQTimeZone, arginfo_qt_core_qfileinfo_qfileinfo_metadatachangetimeqtimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, lastModifiedQTimeZone, arginfo_qt_core_qfileinfo_qfileinfo_lastmodifiedqtimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, lastReadQTimeZone, arginfo_qt_core_qfileinfo_qfileinfo_lastreadqtimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, fileTimeQFileDeviceFileTimeQTimeZone, arginfo_qt_core_qfileinfo_qfileinfo_filetimeqfiledevicefiletimeqtimezone, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, caching, arginfo_qt_core_qfileinfo_qfileinfo_caching, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, setCaching, arginfo_qt_core_qfileinfo_qfileinfo_setcaching, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileInfo_QFileInfo, stat, arginfo_qt_core_qfileinfo_qfileinfo_stat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
