
extern zend_class_entry *qt_core_qstandardpaths_qstandardpaths_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QStandardPaths_QStandardPaths);

PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, staticMetaObject);
PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, writableLocation);
PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, standardLocations);
PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, locate);
PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, locateAll);
PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, displayName);
PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, findExecutable);
PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, setTestModeEnabled);
PHP_METHOD(Qt_Core_QStandardPaths_QStandardPaths, isTestModeEnabled);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_writablelocation, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_standardlocations, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_locate, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_locateall, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_displayname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_findexecutable, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, executableName, IS_STRING, 0)
	ZEND_ARG_INFO(0, paths)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_settestmodeenabled, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, testMode, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstandardpaths_qstandardpaths_istestmodeenabled, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qstandardpaths_qstandardpaths_method_entry) {
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, staticMetaObject, arginfo_qt_core_qstandardpaths_qstandardpaths_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, qt_check_for_QGADGET_macro, arginfo_qt_core_qstandardpaths_qstandardpaths_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, writableLocation, arginfo_qt_core_qstandardpaths_qstandardpaths_writablelocation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, standardLocations, arginfo_qt_core_qstandardpaths_qstandardpaths_standardlocations, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, locate, arginfo_qt_core_qstandardpaths_qstandardpaths_locate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, locateAll, arginfo_qt_core_qstandardpaths_qstandardpaths_locateall, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, displayName, arginfo_qt_core_qstandardpaths_qstandardpaths_displayname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, findExecutable, arginfo_qt_core_qstandardpaths_qstandardpaths_findexecutable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, setTestModeEnabled, arginfo_qt_core_qstandardpaths_qstandardpaths_settestmodeenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QStandardPaths_QStandardPaths, isTestModeEnabled, arginfo_qt_core_qstandardpaths_qstandardpaths_istestmodeenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
