
extern zend_class_entry *qt_widgets_qfileiconprovider_qfileiconprovider_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QFileIconProvider_QFileIconProvider);

PHP_METHOD(Qt_Widgets_QFileIconProvider_QFileIconProvider, new_);
PHP_METHOD(Qt_Widgets_QFileIconProvider_QFileIconProvider, icon);
PHP_METHOD(Qt_Widgets_QFileIconProvider_QFileIconProvider, iconQFileInfo);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfileiconprovider_qfileiconprovider_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfileiconprovider_qfileiconprovider_icon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfileiconprovider_qfileiconprovider_iconqfileinfo, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, info, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qfileiconprovider_qfileiconprovider_method_entry) {
	PHP_ME(Qt_Widgets_QFileIconProvider_QFileIconProvider, new_, arginfo_qt_widgets_qfileiconprovider_qfileiconprovider_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileIconProvider_QFileIconProvider, icon, arginfo_qt_widgets_qfileiconprovider_qfileiconprovider_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFileIconProvider_QFileIconProvider, iconQFileInfo, arginfo_qt_widgets_qfileiconprovider_qfileiconprovider_iconqfileinfo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
