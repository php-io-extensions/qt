
extern zend_class_entry *qt_core_qstorageinfo_qstorageinfo_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QStorageInfo_QStorageInfo);

PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, new_);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, newQString);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, newQDir);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, newQStorageInfo);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, swap);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, setPath);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, rootPath);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, device);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, subvolume);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, fileSystemType);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, name);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, displayName);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, bytesTotal);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, bytesFree);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, bytesAvailable);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, blockSize);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, isRoot);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, isReadOnly);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, isReady);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, isValid);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, refresh);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, mountedVolumes);
PHP_METHOD(Qt_Core_QStorageInfo_QStorageInfo, root);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_newqdir, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dir, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_newqstorageinfo, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_setpath, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_rootpath, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_device, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_subvolume, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_filesystemtype, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_displayname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_bytestotal, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_bytesfree, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_bytesavailable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_blocksize, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_isroot, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_isreadonly, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_isready, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_refresh, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_mountedvolumes, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstorageinfo_qstorageinfo_root, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qstorageinfo_qstorageinfo_method_entry) {
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, new_, arginfo_qt_core_qstorageinfo_qstorageinfo_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, newQString, arginfo_qt_core_qstorageinfo_qstorageinfo_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, newQDir, arginfo_qt_core_qstorageinfo_qstorageinfo_newqdir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, newQStorageInfo, arginfo_qt_core_qstorageinfo_qstorageinfo_newqstorageinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, swap, arginfo_qt_core_qstorageinfo_qstorageinfo_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, setPath, arginfo_qt_core_qstorageinfo_qstorageinfo_setpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, rootPath, arginfo_qt_core_qstorageinfo_qstorageinfo_rootpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, device, arginfo_qt_core_qstorageinfo_qstorageinfo_device, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, subvolume, arginfo_qt_core_qstorageinfo_qstorageinfo_subvolume, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, fileSystemType, arginfo_qt_core_qstorageinfo_qstorageinfo_filesystemtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, name, arginfo_qt_core_qstorageinfo_qstorageinfo_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, displayName, arginfo_qt_core_qstorageinfo_qstorageinfo_displayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, bytesTotal, arginfo_qt_core_qstorageinfo_qstorageinfo_bytestotal, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, bytesFree, arginfo_qt_core_qstorageinfo_qstorageinfo_bytesfree, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, bytesAvailable, arginfo_qt_core_qstorageinfo_qstorageinfo_bytesavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, blockSize, arginfo_qt_core_qstorageinfo_qstorageinfo_blocksize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, isRoot, arginfo_qt_core_qstorageinfo_qstorageinfo_isroot, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, isReadOnly, arginfo_qt_core_qstorageinfo_qstorageinfo_isreadonly, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, isReady, arginfo_qt_core_qstorageinfo_qstorageinfo_isready, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, isValid, arginfo_qt_core_qstorageinfo_qstorageinfo_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, refresh, arginfo_qt_core_qstorageinfo_qstorageinfo_refresh, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, mountedVolumes, arginfo_qt_core_qstorageinfo_qstorageinfo_mountedvolumes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStorageInfo_QStorageInfo, root, arginfo_qt_core_qstorageinfo_qstorageinfo_root, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
