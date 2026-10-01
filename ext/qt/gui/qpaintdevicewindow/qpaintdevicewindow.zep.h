
extern zend_class_entry *qt_gui_qpaintdevicewindow_qpaintdevicewindow_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow);

PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, devicePixelRatio);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, width);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, height);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, staticMetaObject);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, tr);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, update);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, updateQRegion);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, update2);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, exposeEvent);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, paintEvent);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, metric);
PHP_METHOD(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_devicepixelratio, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_width, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_height, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_update, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_updateqregion, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, region, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_update2, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_exposeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_metric, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, metric, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpaintdevicewindow_qpaintdevicewindow_method_entry) {
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, devicePixelRatio, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_devicepixelratio, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, width, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_width, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, height, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_height, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, staticMetaObject, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, tr, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, update, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_update, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, updateQRegion, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_updateqregion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, update2, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_update2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, exposeEvent, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_exposeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, paintEvent, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, metric, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_metric, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPaintDeviceWindow_QPaintDeviceWindow, event, arginfo_qt_gui_qpaintdevicewindow_qpaintdevicewindow_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
