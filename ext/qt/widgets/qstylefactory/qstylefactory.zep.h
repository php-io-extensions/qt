
extern zend_class_entry *qt_widgets_qstylefactory_qstylefactory_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStyleFactory_QStyleFactory);

PHP_METHOD(Qt_Widgets_QStyleFactory_QStyleFactory, keys);
PHP_METHOD(Qt_Widgets_QStyleFactory_QStyleFactory, create);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylefactory_qstylefactory_keys, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstylefactory_qstylefactory_create, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstylefactory_qstylefactory_method_entry) {
	PHP_ME(Qt_Widgets_QStyleFactory_QStyleFactory, keys, arginfo_qt_widgets_qstylefactory_qstylefactory_keys, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStyleFactory_QStyleFactory, create, arginfo_qt_widgets_qstylefactory_qstylefactory_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
