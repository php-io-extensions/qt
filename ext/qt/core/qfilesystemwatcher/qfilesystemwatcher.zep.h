
extern zend_class_entry *qt_core_qfilesystemwatcher_qfilesystemwatcher_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QFileSystemWatcher_QFileSystemWatcher);

PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, staticMetaObject);
PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, tr);
PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, new_);
PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, newQStringListQObject);
PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, addPath);
PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, addPaths);
PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, removePath);
PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, removePaths);
PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, files);
PHP_METHOD(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, directories);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_newqstringlistqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, paths, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_addpath, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_addpaths, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, files, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_removepath, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, file, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_removepaths, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, files, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_files, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_directories, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qfilesystemwatcher_qfilesystemwatcher_method_entry) {
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, staticMetaObject, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, tr, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, new_, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, newQStringListQObject, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_newqstringlistqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, addPath, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_addpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, addPaths, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_addpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, removePath, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_removepath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, removePaths, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_removepaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, files, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_files, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QFileSystemWatcher_QFileSystemWatcher, directories, arginfo_qt_core_qfilesystemwatcher_qfilesystemwatcher_directories, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
