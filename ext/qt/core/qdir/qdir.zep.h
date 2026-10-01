
extern zend_class_entry *qt_core_qdir_qdir_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QDir_QDir);

PHP_METHOD(Qt_Core_QDir_QDir, new_);
PHP_METHOD(Qt_Core_QDir_QDir, newQString);
PHP_METHOD(Qt_Core_QDir_QDir, newQStringQStringQDirSortFlagsQDirFilters);
PHP_METHOD(Qt_Core_QDir_QDir, swap);
PHP_METHOD(Qt_Core_QDir_QDir, setPath);
PHP_METHOD(Qt_Core_QDir_QDir, path);
PHP_METHOD(Qt_Core_QDir_QDir, absolutePath);
PHP_METHOD(Qt_Core_QDir_QDir, canonicalPath);
PHP_METHOD(Qt_Core_QDir_QDir, setSearchPaths);
PHP_METHOD(Qt_Core_QDir_QDir, addSearchPath);
PHP_METHOD(Qt_Core_QDir_QDir, searchPaths);
PHP_METHOD(Qt_Core_QDir_QDir, dirName);
PHP_METHOD(Qt_Core_QDir_QDir, filePath);
PHP_METHOD(Qt_Core_QDir_QDir, absoluteFilePath);
PHP_METHOD(Qt_Core_QDir_QDir, relativeFilePath);
PHP_METHOD(Qt_Core_QDir_QDir, toNativeSeparators);
PHP_METHOD(Qt_Core_QDir_QDir, fromNativeSeparators);
PHP_METHOD(Qt_Core_QDir_QDir, cd);
PHP_METHOD(Qt_Core_QDir_QDir, cdUp);
PHP_METHOD(Qt_Core_QDir_QDir, nameFilters);
PHP_METHOD(Qt_Core_QDir_QDir, setNameFilters);
PHP_METHOD(Qt_Core_QDir_QDir, filter);
PHP_METHOD(Qt_Core_QDir_QDir, setFilter);
PHP_METHOD(Qt_Core_QDir_QDir, sorting);
PHP_METHOD(Qt_Core_QDir_QDir, setSorting);
PHP_METHOD(Qt_Core_QDir_QDir, count);
PHP_METHOD(Qt_Core_QDir_QDir, isEmpty);
PHP_METHOD(Qt_Core_QDir_QDir, nameFiltersFromString);
PHP_METHOD(Qt_Core_QDir_QDir, entryList);
PHP_METHOD(Qt_Core_QDir_QDir, entryListQStringListQDirFiltersQDirSortFlags);
PHP_METHOD(Qt_Core_QDir_QDir, entryInfoList);
PHP_METHOD(Qt_Core_QDir_QDir, entryInfoListQStringListQDirFiltersQDirSortFlags);
PHP_METHOD(Qt_Core_QDir_QDir, mkdir);
PHP_METHOD(Qt_Core_QDir_QDir, mkdirQStringQFileDevicePermissions);
PHP_METHOD(Qt_Core_QDir_QDir, rmdir);
PHP_METHOD(Qt_Core_QDir_QDir, mkpath);
PHP_METHOD(Qt_Core_QDir_QDir, rmpath);
PHP_METHOD(Qt_Core_QDir_QDir, removeRecursively);
PHP_METHOD(Qt_Core_QDir_QDir, isReadable);
PHP_METHOD(Qt_Core_QDir_QDir, exists);
PHP_METHOD(Qt_Core_QDir_QDir, isRoot);
PHP_METHOD(Qt_Core_QDir_QDir, isRelativePath);
PHP_METHOD(Qt_Core_QDir_QDir, isAbsolutePath);
PHP_METHOD(Qt_Core_QDir_QDir, isRelative);
PHP_METHOD(Qt_Core_QDir_QDir, isAbsolute);
PHP_METHOD(Qt_Core_QDir_QDir, makeAbsolute);
PHP_METHOD(Qt_Core_QDir_QDir, remove);
PHP_METHOD(Qt_Core_QDir_QDir, rename);
PHP_METHOD(Qt_Core_QDir_QDir, existsQString);
PHP_METHOD(Qt_Core_QDir_QDir, drives);
PHP_METHOD(Qt_Core_QDir_QDir, listSeparator);
PHP_METHOD(Qt_Core_QDir_QDir, separator);
PHP_METHOD(Qt_Core_QDir_QDir, setCurrent);
PHP_METHOD(Qt_Core_QDir_QDir, current);
PHP_METHOD(Qt_Core_QDir_QDir, currentPath);
PHP_METHOD(Qt_Core_QDir_QDir, home);
PHP_METHOD(Qt_Core_QDir_QDir, homePath);
PHP_METHOD(Qt_Core_QDir_QDir, root);
PHP_METHOD(Qt_Core_QDir_QDir, rootPath);
PHP_METHOD(Qt_Core_QDir_QDir, temp);
PHP_METHOD(Qt_Core_QDir_QDir, tempPath);
PHP_METHOD(Qt_Core_QDir_QDir, match_);
PHP_METHOD(Qt_Core_QDir_QDir, matchQStringQString);
PHP_METHOD(Qt_Core_QDir_QDir, cleanPath);
PHP_METHOD(Qt_Core_QDir_QDir, refresh);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_newqstring, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_newqstringqstringqdirsortflagsqdirfilters, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, nameFilter, IS_STRING, 0)
	ZEND_ARG_INFO(0, sort)
	ZEND_ARG_INFO(0, filter)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_setpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_absolutepath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_canonicalpath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_setsearchpaths, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
	ZEND_ARG_ARRAY_INFO(0, searchPaths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_addsearchpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_searchpaths, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_dirname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_filepath, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_absolutefilepath, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_relativefilepath, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_tonativeseparators, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pathName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_fromnativeseparators, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, pathName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_cd, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dirName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_cdup, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_namefilters, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_setnamefilters, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, nameFilters, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_filter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_setfilter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_sorting, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_setsorting, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sort, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, filters)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_namefiltersfromstring, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, nameFilter, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_entrylist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, filters)
	ZEND_ARG_INFO(0, sort)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_entrylistqstringlistqdirfiltersqdirsortflags, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, nameFilters, 0)
	ZEND_ARG_INFO(0, filters)
	ZEND_ARG_INFO(0, sort)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_entryinfolist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, filters)
	ZEND_ARG_INFO(0, sort)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_entryinfolistqstringlistqdirfiltersqdirsortflags, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, nameFilters, 0)
	ZEND_ARG_INFO(0, filters)
	ZEND_ARG_INFO(0, sort)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_mkdir, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dirName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_mkdirqstringqfiledevicepermissions, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dirName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, permissions, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_rmdir, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dirName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_mkpath, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dirPath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_rmpath, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dirPath, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_removerecursively, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_isreadable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_exists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_isroot, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_isrelativepath, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_isabsolutepath, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_isrelative, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_isabsolute, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_makeabsolute, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_remove, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_rename, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, oldName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_existsqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_drives, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_listseparator, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_separator, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_setcurrent, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_current, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_currentpath, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_home, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_homepath, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_root, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_rootpath, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_temp, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_temppath, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_match_, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_ARRAY_INFO(0, filters, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_matchqstringqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, filter, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_cleanpath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qdir_qdir_refresh, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qdir_qdir_method_entry) {
	PHP_ME(Qt_Core_QDir_QDir, new_, arginfo_qt_core_qdir_qdir_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, newQString, arginfo_qt_core_qdir_qdir_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, newQStringQStringQDirSortFlagsQDirFilters, arginfo_qt_core_qdir_qdir_newqstringqstringqdirsortflagsqdirfilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, swap, arginfo_qt_core_qdir_qdir_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, setPath, arginfo_qt_core_qdir_qdir_setpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, path, arginfo_qt_core_qdir_qdir_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, absolutePath, arginfo_qt_core_qdir_qdir_absolutepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, canonicalPath, arginfo_qt_core_qdir_qdir_canonicalpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, setSearchPaths, arginfo_qt_core_qdir_qdir_setsearchpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, addSearchPath, arginfo_qt_core_qdir_qdir_addsearchpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, searchPaths, arginfo_qt_core_qdir_qdir_searchpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, dirName, arginfo_qt_core_qdir_qdir_dirname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, filePath, arginfo_qt_core_qdir_qdir_filepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, absoluteFilePath, arginfo_qt_core_qdir_qdir_absolutefilepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, relativeFilePath, arginfo_qt_core_qdir_qdir_relativefilepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, toNativeSeparators, arginfo_qt_core_qdir_qdir_tonativeseparators, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, fromNativeSeparators, arginfo_qt_core_qdir_qdir_fromnativeseparators, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, cd, arginfo_qt_core_qdir_qdir_cd, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, cdUp, arginfo_qt_core_qdir_qdir_cdup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, nameFilters, arginfo_qt_core_qdir_qdir_namefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, setNameFilters, arginfo_qt_core_qdir_qdir_setnamefilters, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, filter, arginfo_qt_core_qdir_qdir_filter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, setFilter, arginfo_qt_core_qdir_qdir_setfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, sorting, arginfo_qt_core_qdir_qdir_sorting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, setSorting, arginfo_qt_core_qdir_qdir_setsorting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, count, arginfo_qt_core_qdir_qdir_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, isEmpty, arginfo_qt_core_qdir_qdir_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, nameFiltersFromString, arginfo_qt_core_qdir_qdir_namefiltersfromstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, entryList, arginfo_qt_core_qdir_qdir_entrylist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, entryListQStringListQDirFiltersQDirSortFlags, arginfo_qt_core_qdir_qdir_entrylistqstringlistqdirfiltersqdirsortflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, entryInfoList, arginfo_qt_core_qdir_qdir_entryinfolist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, entryInfoListQStringListQDirFiltersQDirSortFlags, arginfo_qt_core_qdir_qdir_entryinfolistqstringlistqdirfiltersqdirsortflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, mkdir, arginfo_qt_core_qdir_qdir_mkdir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, mkdirQStringQFileDevicePermissions, arginfo_qt_core_qdir_qdir_mkdirqstringqfiledevicepermissions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, rmdir, arginfo_qt_core_qdir_qdir_rmdir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, mkpath, arginfo_qt_core_qdir_qdir_mkpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, rmpath, arginfo_qt_core_qdir_qdir_rmpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, removeRecursively, arginfo_qt_core_qdir_qdir_removerecursively, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, isReadable, arginfo_qt_core_qdir_qdir_isreadable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, exists, arginfo_qt_core_qdir_qdir_exists, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, isRoot, arginfo_qt_core_qdir_qdir_isroot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, isRelativePath, arginfo_qt_core_qdir_qdir_isrelativepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, isAbsolutePath, arginfo_qt_core_qdir_qdir_isabsolutepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, isRelative, arginfo_qt_core_qdir_qdir_isrelative, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, isAbsolute, arginfo_qt_core_qdir_qdir_isabsolute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, makeAbsolute, arginfo_qt_core_qdir_qdir_makeabsolute, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, remove, arginfo_qt_core_qdir_qdir_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, rename, arginfo_qt_core_qdir_qdir_rename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, existsQString, arginfo_qt_core_qdir_qdir_existsqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, drives, arginfo_qt_core_qdir_qdir_drives, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, listSeparator, arginfo_qt_core_qdir_qdir_listseparator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, separator, arginfo_qt_core_qdir_qdir_separator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, setCurrent, arginfo_qt_core_qdir_qdir_setcurrent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, current, arginfo_qt_core_qdir_qdir_current, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, currentPath, arginfo_qt_core_qdir_qdir_currentpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, home, arginfo_qt_core_qdir_qdir_home, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, homePath, arginfo_qt_core_qdir_qdir_homepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, root, arginfo_qt_core_qdir_qdir_root, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, rootPath, arginfo_qt_core_qdir_qdir_rootpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, temp, arginfo_qt_core_qdir_qdir_temp, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, tempPath, arginfo_qt_core_qdir_qdir_temppath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, match_, arginfo_qt_core_qdir_qdir_match_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, matchQStringQString, arginfo_qt_core_qdir_qdir_matchqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, cleanPath, arginfo_qt_core_qdir_qdir_cleanpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QDir_QDir, refresh, arginfo_qt_core_qdir_qdir_refresh, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
