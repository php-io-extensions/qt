
extern zend_class_entry *qt_core_qfile_qfile_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QFile_QFile);

PHP_METHOD(Qt_Core_QFile_QFile, staticMetaObject);
PHP_METHOD(Qt_Core_QFile_QFile, tr);
PHP_METHOD(Qt_Core_QFile_QFile, new_);
PHP_METHOD(Qt_Core_QFile_QFile, newQString);
PHP_METHOD(Qt_Core_QFile_QFile, newQObject);
PHP_METHOD(Qt_Core_QFile_QFile, newQStringQObject);
PHP_METHOD(Qt_Core_QFile_QFile, fileName);
PHP_METHOD(Qt_Core_QFile_QFile, setFileName);
PHP_METHOD(Qt_Core_QFile_QFile, encodeName);
PHP_METHOD(Qt_Core_QFile_QFile, decodeName);
PHP_METHOD(Qt_Core_QFile_QFile, decodeNameChar);
PHP_METHOD(Qt_Core_QFile_QFile, exists);
PHP_METHOD(Qt_Core_QFile_QFile, existsQString);
PHP_METHOD(Qt_Core_QFile_QFile, symLinkTarget);
PHP_METHOD(Qt_Core_QFile_QFile, symLinkTargetQString);
PHP_METHOD(Qt_Core_QFile_QFile, remove);
PHP_METHOD(Qt_Core_QFile_QFile, removeQString);
PHP_METHOD(Qt_Core_QFile_QFile, moveToTrash);
PHP_METHOD(Qt_Core_QFile_QFile, moveToTrashQStringQString);
PHP_METHOD(Qt_Core_QFile_QFile, rename);
PHP_METHOD(Qt_Core_QFile_QFile, renameQStringQString);
PHP_METHOD(Qt_Core_QFile_QFile, link);
PHP_METHOD(Qt_Core_QFile_QFile, linkQStringQString);
PHP_METHOD(Qt_Core_QFile_QFile, copy);
PHP_METHOD(Qt_Core_QFile_QFile, copyQStringQString);
PHP_METHOD(Qt_Core_QFile_QFile, open);
PHP_METHOD(Qt_Core_QFile_QFile, openQIODeviceBaseOpenModeQFileDevicePermissions);
PHP_METHOD(Qt_Core_QFile_QFile, openIntQIODeviceBaseOpenModeQFileDeviceFileHandleFlags);
PHP_METHOD(Qt_Core_QFile_QFile, size);
PHP_METHOD(Qt_Core_QFile_QFile, resize);
PHP_METHOD(Qt_Core_QFile_QFile, resizeQStringQint64);
PHP_METHOD(Qt_Core_QFile_QFile, permissions);
PHP_METHOD(Qt_Core_QFile_QFile, permissionsQString);
PHP_METHOD(Qt_Core_QFile_QFile, setPermissions);
PHP_METHOD(Qt_Core_QFile_QFile, setPermissionsQStringQFileDevicePermissions);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_newqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_newqstringqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_setfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_encodename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_decodename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, localFileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_decodenamechar, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, localFileName)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_exists, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_existsqstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_symlinktarget, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_symlinktargetqstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_remove, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_removeqstring, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_movetotrash, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_movetotrashqstringqstring, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, pathInTrash)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_rename, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_renameqstringqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, oldName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_link, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_linkqstringqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_copy, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_copyqstringqstring, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, newName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_open, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_openqiodevicebaseopenmodeqfiledevicepermissions, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, permissions, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_openintqiodevicebaseopenmodeqfiledevicefilehandleflags, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fd, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ioFlags, IS_LONG, 0)
	ZEND_ARG_INFO(0, handleFlags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_resize, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_resizeqstringqint64, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, sz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_permissions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_permissionsqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_setpermissions, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, permissionSpec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfile_qfile_setpermissionsqstringqfiledevicepermissions, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, permissionSpec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qfile_qfile_method_entry) {
	PHP_ME(Qt_Core_QFile_QFile, staticMetaObject, arginfo_qt_core_qfile_qfile_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, tr, arginfo_qt_core_qfile_qfile_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, new_, arginfo_qt_core_qfile_qfile_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, newQString, arginfo_qt_core_qfile_qfile_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, newQObject, arginfo_qt_core_qfile_qfile_newqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, newQStringQObject, arginfo_qt_core_qfile_qfile_newqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, fileName, arginfo_qt_core_qfile_qfile_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, setFileName, arginfo_qt_core_qfile_qfile_setfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, encodeName, arginfo_qt_core_qfile_qfile_encodename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, decodeName, arginfo_qt_core_qfile_qfile_decodename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, decodeNameChar, arginfo_qt_core_qfile_qfile_decodenamechar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, exists, arginfo_qt_core_qfile_qfile_exists, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, existsQString, arginfo_qt_core_qfile_qfile_existsqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, symLinkTarget, arginfo_qt_core_qfile_qfile_symlinktarget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, symLinkTargetQString, arginfo_qt_core_qfile_qfile_symlinktargetqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, remove, arginfo_qt_core_qfile_qfile_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, removeQString, arginfo_qt_core_qfile_qfile_removeqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, moveToTrash, arginfo_qt_core_qfile_qfile_movetotrash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, moveToTrashQStringQString, arginfo_qt_core_qfile_qfile_movetotrashqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, rename, arginfo_qt_core_qfile_qfile_rename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, renameQStringQString, arginfo_qt_core_qfile_qfile_renameqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, link, arginfo_qt_core_qfile_qfile_link, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, linkQStringQString, arginfo_qt_core_qfile_qfile_linkqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, copy, arginfo_qt_core_qfile_qfile_copy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, copyQStringQString, arginfo_qt_core_qfile_qfile_copyqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, open, arginfo_qt_core_qfile_qfile_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, openQIODeviceBaseOpenModeQFileDevicePermissions, arginfo_qt_core_qfile_qfile_openqiodevicebaseopenmodeqfiledevicepermissions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, openIntQIODeviceBaseOpenModeQFileDeviceFileHandleFlags, arginfo_qt_core_qfile_qfile_openintqiodevicebaseopenmodeqfiledevicefilehandleflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, size, arginfo_qt_core_qfile_qfile_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, resize, arginfo_qt_core_qfile_qfile_resize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, resizeQStringQint64, arginfo_qt_core_qfile_qfile_resizeqstringqint64, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, permissions, arginfo_qt_core_qfile_qfile_permissions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, permissionsQString, arginfo_qt_core_qfile_qfile_permissionsqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, setPermissions, arginfo_qt_core_qfile_qfile_setpermissions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFile_QFile, setPermissionsQStringQFileDevicePermissions, arginfo_qt_core_qfile_qfile_setpermissionsqstringqfiledevicepermissions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
