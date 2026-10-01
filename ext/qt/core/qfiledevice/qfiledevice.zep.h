
extern zend_class_entry *qt_core_qfiledevice_qfiledevice_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QFileDevice_QFileDevice);

PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, staticMetaObject);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, tr);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, error);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, unsetError);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, close);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, isSequential);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, handle);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, fileName);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, pos);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, seek);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, atEnd);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, flush);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, size);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, resize);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, permissions);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, setPermissions);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, unmap);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, fileTime);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, setFileTime);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, new_);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, newQObject);
PHP_METHOD(Qt_Core_QFileDevice_QFileDevice, writeData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_error, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_unseterror, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_close, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_issequential, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_handle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_pos, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_seek, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, offset, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_atend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_flush, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_size, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_resize, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sz, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_permissions, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_setpermissions, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, permissionSpec, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_unmap, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, address)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_filetime, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_setfiletime, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newDate, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileTime, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_newqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfiledevice_qfiledevice_writedata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qfiledevice_qfiledevice_method_entry) {
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, staticMetaObject, arginfo_qt_core_qfiledevice_qfiledevice_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, tr, arginfo_qt_core_qfiledevice_qfiledevice_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, error, arginfo_qt_core_qfiledevice_qfiledevice_error, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, unsetError, arginfo_qt_core_qfiledevice_qfiledevice_unseterror, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, close, arginfo_qt_core_qfiledevice_qfiledevice_close, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, isSequential, arginfo_qt_core_qfiledevice_qfiledevice_issequential, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, handle, arginfo_qt_core_qfiledevice_qfiledevice_handle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, fileName, arginfo_qt_core_qfiledevice_qfiledevice_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, pos, arginfo_qt_core_qfiledevice_qfiledevice_pos, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, seek, arginfo_qt_core_qfiledevice_qfiledevice_seek, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, atEnd, arginfo_qt_core_qfiledevice_qfiledevice_atend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, flush, arginfo_qt_core_qfiledevice_qfiledevice_flush, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, size, arginfo_qt_core_qfiledevice_qfiledevice_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, resize, arginfo_qt_core_qfiledevice_qfiledevice_resize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, permissions, arginfo_qt_core_qfiledevice_qfiledevice_permissions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, setPermissions, arginfo_qt_core_qfiledevice_qfiledevice_setpermissions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, unmap, arginfo_qt_core_qfiledevice_qfiledevice_unmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, fileTime, arginfo_qt_core_qfiledevice_qfiledevice_filetime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, setFileTime, arginfo_qt_core_qfiledevice_qfiledevice_setfiletime, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, new_, arginfo_qt_core_qfiledevice_qfiledevice_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, newQObject, arginfo_qt_core_qfiledevice_qfiledevice_newqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileDevice_QFileDevice, writeData, arginfo_qt_core_qfiledevice_qfiledevice_writedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
