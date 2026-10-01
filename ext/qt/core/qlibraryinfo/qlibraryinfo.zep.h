
extern zend_class_entry *qt_core_qlibraryinfo_qlibraryinfo_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QLibraryInfo_QLibraryInfo);

PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, build);
PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, isDebugBuild);
PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, isSharedBuild);
PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, version);
PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, path);
PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, paths);
PHP_METHOD(Qt_Core_QLibraryInfo_QLibraryInfo, platformPluginArguments);

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_core_qlibraryinfo_qlibraryinfo_build, 0, 0, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibraryinfo_qlibraryinfo_isdebugbuild, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibraryinfo_qlibraryinfo_issharedbuild, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibraryinfo_qlibraryinfo_version, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibraryinfo_qlibraryinfo_path, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibraryinfo_qlibraryinfo_paths, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qlibraryinfo_qlibraryinfo_platformpluginarguments, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, platformName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qlibraryinfo_qlibraryinfo_method_entry) {
PHP_ME(Qt_Core_QLibraryInfo_QLibraryInfo, build, arginfo_qt_core_qlibraryinfo_qlibraryinfo_build, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibraryInfo_QLibraryInfo, isDebugBuild, arginfo_qt_core_qlibraryinfo_qlibraryinfo_isdebugbuild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibraryInfo_QLibraryInfo, isSharedBuild, arginfo_qt_core_qlibraryinfo_qlibraryinfo_issharedbuild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibraryInfo_QLibraryInfo, version, arginfo_qt_core_qlibraryinfo_qlibraryinfo_version, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibraryInfo_QLibraryInfo, path, arginfo_qt_core_qlibraryinfo_qlibraryinfo_path, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibraryInfo_QLibraryInfo, paths, arginfo_qt_core_qlibraryinfo_qlibraryinfo_paths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QLibraryInfo_QLibraryInfo, platformPluginArguments, arginfo_qt_core_qlibraryinfo_qlibraryinfo_platformpluginarguments, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
