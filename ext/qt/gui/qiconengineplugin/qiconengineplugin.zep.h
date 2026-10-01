
extern zend_class_entry *qt_gui_qiconengineplugin_qiconengineplugin_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QIconEnginePlugin_QIconEnginePlugin);

PHP_METHOD(Qt_Gui_QIconEnginePlugin_QIconEnginePlugin, staticMetaObject);
PHP_METHOD(Qt_Gui_QIconEnginePlugin_QIconEnginePlugin, tr);
PHP_METHOD(Qt_Gui_QIconEnginePlugin_QIconEnginePlugin, new_);
PHP_METHOD(Qt_Gui_QIconEnginePlugin_QIconEnginePlugin, create);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengineplugin_qiconengineplugin_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengineplugin_qiconengineplugin_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengineplugin_qiconengineplugin_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qiconengineplugin_qiconengineplugin_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filename, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qiconengineplugin_qiconengineplugin_method_entry) {
	PHP_ME(Qt_Gui_QIconEnginePlugin_QIconEnginePlugin, staticMetaObject, arginfo_qt_gui_qiconengineplugin_qiconengineplugin_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEnginePlugin_QIconEnginePlugin, tr, arginfo_qt_gui_qiconengineplugin_qiconengineplugin_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEnginePlugin_QIconEnginePlugin, new_, arginfo_qt_gui_qiconengineplugin_qiconengineplugin_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QIconEnginePlugin_QIconEnginePlugin, create, arginfo_qt_gui_qiconengineplugin_qiconengineplugin_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
