
extern zend_class_entry *qt_gui_qdesktopservices_qdesktopservices_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QDesktopServices_QDesktopServices);

PHP_METHOD(Qt_Gui_QDesktopServices_QDesktopServices, openUrl);
PHP_METHOD(Qt_Gui_QDesktopServices_QDesktopServices, setUrlHandler);
PHP_METHOD(Qt_Gui_QDesktopServices_QDesktopServices, unsetUrlHandler);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdesktopservices_qdesktopservices_openurl, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdesktopservices_qdesktopservices_seturlhandler, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scheme, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, method)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qdesktopservices_qdesktopservices_unseturlhandler, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, scheme, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qdesktopservices_qdesktopservices_method_entry) {
	PHP_ME(Qt_Gui_QDesktopServices_QDesktopServices, openUrl, arginfo_qt_gui_qdesktopservices_qdesktopservices_openurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDesktopServices_QDesktopServices, setUrlHandler, arginfo_qt_gui_qdesktopservices_qdesktopservices_seturlhandler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QDesktopServices_QDesktopServices, unsetUrlHandler, arginfo_qt_gui_qdesktopservices_qdesktopservices_unseturlhandler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
