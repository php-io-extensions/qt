
extern zend_class_entry *qt_core_qtemporaryfile_qtemporaryfile_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QTemporaryFile_QTemporaryFile);

PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, staticMetaObject);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, tr);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, new_);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, newQString);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, newQObject);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, newQStringQObject);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, autoRemove);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, setAutoRemove);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, open);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, fileName);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, fileTemplate);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, setFileTemplate);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, rename);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, createNativeFile);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, createNativeFileQFile);
PHP_METHOD(Qt_Core_QTemporaryFile_QTemporaryFile, openQIODeviceBaseOpenMode);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_newqstring, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, templateName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_newqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_newqstringqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, templateName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_autoremove, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_setautoremove, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_open, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_filetemplate, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_setfiletemplate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_rename, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_createnativefile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_createnativefileqfile, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qtemporaryfile_qtemporaryfile_openqiodevicebaseopenmode, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qtemporaryfile_qtemporaryfile_method_entry) {
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, staticMetaObject, arginfo_qt_core_qtemporaryfile_qtemporaryfile_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, tr, arginfo_qt_core_qtemporaryfile_qtemporaryfile_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, new_, arginfo_qt_core_qtemporaryfile_qtemporaryfile_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, newQString, arginfo_qt_core_qtemporaryfile_qtemporaryfile_newqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, newQObject, arginfo_qt_core_qtemporaryfile_qtemporaryfile_newqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, newQStringQObject, arginfo_qt_core_qtemporaryfile_qtemporaryfile_newqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, autoRemove, arginfo_qt_core_qtemporaryfile_qtemporaryfile_autoremove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, setAutoRemove, arginfo_qt_core_qtemporaryfile_qtemporaryfile_setautoremove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, open, arginfo_qt_core_qtemporaryfile_qtemporaryfile_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, fileName, arginfo_qt_core_qtemporaryfile_qtemporaryfile_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, fileTemplate, arginfo_qt_core_qtemporaryfile_qtemporaryfile_filetemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, setFileTemplate, arginfo_qt_core_qtemporaryfile_qtemporaryfile_setfiletemplate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, rename, arginfo_qt_core_qtemporaryfile_qtemporaryfile_rename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, createNativeFile, arginfo_qt_core_qtemporaryfile_qtemporaryfile_createnativefile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, createNativeFileQFile, arginfo_qt_core_qtemporaryfile_qtemporaryfile_createnativefileqfile, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QTemporaryFile_QTemporaryFile, openQIODeviceBaseOpenMode, arginfo_qt_core_qtemporaryfile_qtemporaryfile_openqiodevicebaseopenmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
