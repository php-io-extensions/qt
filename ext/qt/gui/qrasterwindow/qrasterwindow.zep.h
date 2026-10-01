
extern zend_class_entry *qt_gui_qrasterwindow_qrasterwindow_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QRasterWindow_QRasterWindow);

PHP_METHOD(Qt_Gui_QRasterWindow_QRasterWindow, staticMetaObject);
PHP_METHOD(Qt_Gui_QRasterWindow_QRasterWindow, tr);
PHP_METHOD(Qt_Gui_QRasterWindow_QRasterWindow, new_);
PHP_METHOD(Qt_Gui_QRasterWindow_QRasterWindow, metric);
PHP_METHOD(Qt_Gui_QRasterWindow_QRasterWindow, redirected);
PHP_METHOD(Qt_Gui_QRasterWindow_QRasterWindow, resizeEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrasterwindow_qrasterwindow_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrasterwindow_qrasterwindow_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrasterwindow_qrasterwindow_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrasterwindow_qrasterwindow_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrasterwindow_qrasterwindow_redirected, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qrasterwindow_qrasterwindow_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qrasterwindow_qrasterwindow_method_entry) {
	PHP_ME(Qt_Gui_QRasterWindow_QRasterWindow, staticMetaObject, arginfo_qt_gui_qrasterwindow_qrasterwindow_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRasterWindow_QRasterWindow, tr, arginfo_qt_gui_qrasterwindow_qrasterwindow_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRasterWindow_QRasterWindow, new_, arginfo_qt_gui_qrasterwindow_qrasterwindow_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRasterWindow_QRasterWindow, metric, arginfo_qt_gui_qrasterwindow_qrasterwindow_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRasterWindow_QRasterWindow, redirected, arginfo_qt_gui_qrasterwindow_qrasterwindow_redirected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QRasterWindow_QRasterWindow, resizeEvent, arginfo_qt_gui_qrasterwindow_qrasterwindow_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
