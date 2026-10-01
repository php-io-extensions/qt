
extern zend_class_entry *qt_widgets_qhboxlayout_qhboxlayout_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QHBoxLayout_QHBoxLayout);

PHP_METHOD(Qt_Widgets_QHBoxLayout_QHBoxLayout, staticMetaObject);
PHP_METHOD(Qt_Widgets_QHBoxLayout_QHBoxLayout, tr);
PHP_METHOD(Qt_Widgets_QHBoxLayout_QHBoxLayout, new_);
PHP_METHOD(Qt_Widgets_QHBoxLayout_QHBoxLayout, newQWidget);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qhboxlayout_qhboxlayout_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qhboxlayout_qhboxlayout_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qhboxlayout_qhboxlayout_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qhboxlayout_qhboxlayout_newqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qhboxlayout_qhboxlayout_method_entry) {
	PHP_ME(Qt_Widgets_QHBoxLayout_QHBoxLayout, staticMetaObject, arginfo_qt_widgets_qhboxlayout_qhboxlayout_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QHBoxLayout_QHBoxLayout, tr, arginfo_qt_widgets_qhboxlayout_qhboxlayout_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QHBoxLayout_QHBoxLayout, new_, arginfo_qt_widgets_qhboxlayout_qhboxlayout_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QHBoxLayout_QHBoxLayout, newQWidget, arginfo_qt_widgets_qhboxlayout_qhboxlayout_newqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
