
extern zend_class_entry *qt_widgets_qstyleplugin_qstyleplugin_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStylePlugin_QStylePlugin);

PHP_METHOD(Qt_Widgets_QStylePlugin_QStylePlugin, staticMetaObject);
PHP_METHOD(Qt_Widgets_QStylePlugin_QStylePlugin, tr);
PHP_METHOD(Qt_Widgets_QStylePlugin_QStylePlugin, new_);
PHP_METHOD(Qt_Widgets_QStylePlugin_QStylePlugin, create);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleplugin_qstyleplugin_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleplugin_qstyleplugin_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleplugin_qstyleplugin_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstyleplugin_qstyleplugin_create, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstyleplugin_qstyleplugin_method_entry) {
	PHP_ME(Qt_Widgets_QStylePlugin_QStylePlugin, staticMetaObject, arginfo_qt_widgets_qstyleplugin_qstyleplugin_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePlugin_QStylePlugin, tr, arginfo_qt_widgets_qstyleplugin_qstyleplugin_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePlugin_QStylePlugin, new_, arginfo_qt_widgets_qstyleplugin_qstyleplugin_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStylePlugin_QStylePlugin, create, arginfo_qt_widgets_qstyleplugin_qstyleplugin_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
