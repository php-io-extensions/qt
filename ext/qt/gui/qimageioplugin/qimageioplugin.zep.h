
extern zend_class_entry *qt_gui_qimageioplugin_qimageioplugin_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QImageIOPlugin_QImageIOPlugin);

PHP_METHOD(Qt_Gui_QImageIOPlugin_QImageIOPlugin, staticMetaObject);
PHP_METHOD(Qt_Gui_QImageIOPlugin_QImageIOPlugin, tr);
PHP_METHOD(Qt_Gui_QImageIOPlugin_QImageIOPlugin, new_);
PHP_METHOD(Qt_Gui_QImageIOPlugin_QImageIOPlugin, capabilities);
PHP_METHOD(Qt_Gui_QImageIOPlugin_QImageIOPlugin, create);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageioplugin_qimageioplugin_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageioplugin_qimageioplugin_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageioplugin_qimageioplugin_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageioplugin_qimageioplugin_capabilities, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qimageioplugin_qimageioplugin_create, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, device, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qimageioplugin_qimageioplugin_method_entry) {
	PHP_ME(Qt_Gui_QImageIOPlugin_QImageIOPlugin, staticMetaObject, arginfo_qt_gui_qimageioplugin_qimageioplugin_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOPlugin_QImageIOPlugin, tr, arginfo_qt_gui_qimageioplugin_qimageioplugin_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOPlugin_QImageIOPlugin, new_, arginfo_qt_gui_qimageioplugin_qimageioplugin_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOPlugin_QImageIOPlugin, capabilities, arginfo_qt_gui_qimageioplugin_qimageioplugin_capabilities, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QImageIOPlugin_QImageIOPlugin, create, arginfo_qt_gui_qimageioplugin_qimageioplugin_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
