
extern zend_class_entry *qt_core_qstaticplugin_qstaticplugin_ce;

ZEPHIR_INIT_CLASS(Qt_Core_QStaticPlugin_QStaticPlugin);

PHP_METHOD(Qt_Core_QStaticPlugin_QStaticPlugin, metaData);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_core_qstaticplugin_qstaticplugin_metadata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_core_qstaticplugin_qstaticplugin_method_entry) {
	PHP_ME(Qt_Core_QStaticPlugin_QStaticPlugin, metaData, arginfo_qt_core_qstaticplugin_qstaticplugin_metadata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
