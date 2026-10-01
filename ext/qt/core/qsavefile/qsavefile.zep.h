
extern zend_class_entry *qt_core_qsavefile_qsavefile_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QSaveFile_QSaveFile);

PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, staticMetaObject);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, tr);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, new_);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, newQObject);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, newQStringQObject);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, fileName);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, setFileName);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, open);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, commit);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, cancelWriting);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, setDirectWriteFallback);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, directWriteFallback);
PHP_METHOD(Qt_Core_QSaveFile_QSaveFile, writeData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_newqobject, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_newqstringqobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_setfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_open, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_commit, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_cancelwriting, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_setdirectwritefallback, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_directwritefallback, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qsavefile_qsavefile_writedata, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, len, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qsavefile_qsavefile_method_entry) {
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, staticMetaObject, arginfo_qt_core_qsavefile_qsavefile_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, tr, arginfo_qt_core_qsavefile_qsavefile_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, new_, arginfo_qt_core_qsavefile_qsavefile_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, newQObject, arginfo_qt_core_qsavefile_qsavefile_newqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, newQStringQObject, arginfo_qt_core_qsavefile_qsavefile_newqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, fileName, arginfo_qt_core_qsavefile_qsavefile_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, setFileName, arginfo_qt_core_qsavefile_qsavefile_setfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, open, arginfo_qt_core_qsavefile_qsavefile_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, commit, arginfo_qt_core_qsavefile_qsavefile_commit, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, cancelWriting, arginfo_qt_core_qsavefile_qsavefile_cancelwriting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, setDirectWriteFallback, arginfo_qt_core_qsavefile_qsavefile_setdirectwritefallback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, directWriteFallback, arginfo_qt_core_qsavefile_qsavefile_directwritefallback, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QSaveFile_QSaveFile, writeData, arginfo_qt_core_qsavefile_qsavefile_writedata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
