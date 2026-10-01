
extern zend_class_entry *qt_gui_qaccessibleplugin_qaccessibleplugin_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QAccessiblePlugin_QAccessiblePlugin);

PHP_METHOD(Qt_Gui_QAccessiblePlugin_QAccessiblePlugin, staticMetaObject);
PHP_METHOD(Qt_Gui_QAccessiblePlugin_QAccessiblePlugin, tr);
PHP_METHOD(Qt_Gui_QAccessiblePlugin_QAccessiblePlugin, new_);
PHP_METHOD(Qt_Gui_QAccessiblePlugin_QAccessiblePlugin, create);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleplugin_qaccessibleplugin_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleplugin_qaccessibleplugin_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleplugin_qaccessibleplugin_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleplugin_qaccessibleplugin_create, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qaccessibleplugin_qaccessibleplugin_method_entry) {
	PHP_ME(Qt_Gui_QAccessiblePlugin_QAccessiblePlugin, staticMetaObject, arginfo_qt_gui_qaccessibleplugin_qaccessibleplugin_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessiblePlugin_QAccessiblePlugin, tr, arginfo_qt_gui_qaccessibleplugin_qaccessibleplugin_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessiblePlugin_QAccessiblePlugin, new_, arginfo_qt_gui_qaccessibleplugin_qaccessibleplugin_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessiblePlugin_QAccessiblePlugin, create, arginfo_qt_gui_qaccessibleplugin_qaccessibleplugin_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
