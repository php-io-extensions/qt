
extern zend_class_entry *qt_gui_qinputdevice_qinputdevice_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QInputDevice_QInputDevice);

PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, staticMetaObject);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, tr);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, new_);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, newQStringQint64QInputDeviceDeviceTypeQStringQObject);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, name);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, type);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, capabilities);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, hasCapability);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, systemId);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, seatName);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, availableVirtualGeometry);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, seatNames);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, devices);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, primaryKeyboard);
PHP_METHOD(Qt_Gui_QInputDevice_QInputDevice, availableVirtualGeometryChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_newqstringqint64qinputdevicedevicetypeqstringqobject, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, systemId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seatName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_capabilities, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_hascapability, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_systemid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_seatname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_availablevirtualgeometry, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_seatnames, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_devices, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_primarykeyboard, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seatName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qinputdevice_qinputdevice_availablevirtualgeometrychanged, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, areaX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, areaY, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, areaWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, areaHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qinputdevice_qinputdevice_method_entry) {
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, staticMetaObject, arginfo_qt_gui_qinputdevice_qinputdevice_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, tr, arginfo_qt_gui_qinputdevice_qinputdevice_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, new_, arginfo_qt_gui_qinputdevice_qinputdevice_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, newQStringQint64QInputDeviceDeviceTypeQStringQObject, arginfo_qt_gui_qinputdevice_qinputdevice_newqstringqint64qinputdevicedevicetypeqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, name, arginfo_qt_gui_qinputdevice_qinputdevice_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, type, arginfo_qt_gui_qinputdevice_qinputdevice_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, capabilities, arginfo_qt_gui_qinputdevice_qinputdevice_capabilities, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, hasCapability, arginfo_qt_gui_qinputdevice_qinputdevice_hascapability, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, systemId, arginfo_qt_gui_qinputdevice_qinputdevice_systemid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, seatName, arginfo_qt_gui_qinputdevice_qinputdevice_seatname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, availableVirtualGeometry, arginfo_qt_gui_qinputdevice_qinputdevice_availablevirtualgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, seatNames, arginfo_qt_gui_qinputdevice_qinputdevice_seatnames, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, devices, arginfo_qt_gui_qinputdevice_qinputdevice_devices, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, primaryKeyboard, arginfo_qt_gui_qinputdevice_qinputdevice_primarykeyboard, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QInputDevice_QInputDevice, availableVirtualGeometryChanged, arginfo_qt_gui_qinputdevice_qinputdevice_availablevirtualgeometrychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
