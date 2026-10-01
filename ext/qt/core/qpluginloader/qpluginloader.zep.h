
extern zend_class_entry *qt_core_qpluginloader_qpluginloader_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QPluginLoader_QPluginLoader);

PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, staticMetaObject);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, tr);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, new_);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, newQStringQObject);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, instance);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, metaData);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, staticInstances);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, staticPlugins);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, load);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, unload);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, isLoaded);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, setFileName);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, fileName);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, errorString);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, setLoadHints);
PHP_METHOD(Qt_Core_QPluginLoader_QPluginLoader, loadHints);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_newqstringqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_instance, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_metadata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_staticinstances, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_staticplugins, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_load, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_unload, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_isloaded, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_setfilename, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fileName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_filename, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_errorstring, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_setloadhints, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, loadHints, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qpluginloader_qpluginloader_loadhints, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qpluginloader_qpluginloader_method_entry) {
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, staticMetaObject, arginfo_qt_core_qpluginloader_qpluginloader_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, tr, arginfo_qt_core_qpluginloader_qpluginloader_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, new_, arginfo_qt_core_qpluginloader_qpluginloader_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, newQStringQObject, arginfo_qt_core_qpluginloader_qpluginloader_newqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, instance, arginfo_qt_core_qpluginloader_qpluginloader_instance, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, metaData, arginfo_qt_core_qpluginloader_qpluginloader_metadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, staticInstances, arginfo_qt_core_qpluginloader_qpluginloader_staticinstances, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, staticPlugins, arginfo_qt_core_qpluginloader_qpluginloader_staticplugins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, load, arginfo_qt_core_qpluginloader_qpluginloader_load, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, unload, arginfo_qt_core_qpluginloader_qpluginloader_unload, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, isLoaded, arginfo_qt_core_qpluginloader_qpluginloader_isloaded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, setFileName, arginfo_qt_core_qpluginloader_qpluginloader_setfilename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, fileName, arginfo_qt_core_qpluginloader_qpluginloader_filename, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, errorString, arginfo_qt_core_qpluginloader_qpluginloader_errorstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, setLoadHints, arginfo_qt_core_qpluginloader_qpluginloader_setloadhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Core_QPluginLoader_QPluginLoader, loadHints, arginfo_qt_core_qpluginloader_qpluginloader_loadhints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
