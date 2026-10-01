
extern zend_class_entry *qt_gui_qpointingdevice_qpointingdevice_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QPointingDevice_QPointingDevice);

PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, staticMetaObject);
PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, tr);
PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, new_);
PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, newQStringQint64QInputDeviceDeviceTypeQPointingDevicePointerTypeQInputDeviceCapabilitiesIntIntQStringQPointingDeviceUniqueIdQObject);
PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, pointerType);
PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, maximumPoints);
PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, buttonCount);
PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, uniqueId);
PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, primaryPointingDevice);
PHP_METHOD(Qt_Gui_QPointingDevice_QPointingDevice, grabChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_newqstringqint64qinputdevicedevicetypeqpointingdevicepointertypeqinputdevicecapabilitiesintintqstringqpointingdeviceuniqueidqobject, 0, 7, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, systemId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, devType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pType, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caps, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxPoints, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttonCount, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seatName, IS_STRING, 0)
	ZEND_ARG_INFO(0, uniqueId)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_pointertype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_maximumpoints, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_buttoncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_uniqueid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_primarypointingdevice, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, seatName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qpointingdevice_qpointingdevice_grabchanged, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, grabber, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, transition, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, point, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qpointingdevice_qpointingdevice_method_entry) {
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, staticMetaObject, arginfo_qt_gui_qpointingdevice_qpointingdevice_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, tr, arginfo_qt_gui_qpointingdevice_qpointingdevice_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, new_, arginfo_qt_gui_qpointingdevice_qpointingdevice_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, newQStringQint64QInputDeviceDeviceTypeQPointingDevicePointerTypeQInputDeviceCapabilitiesIntIntQStringQPointingDeviceUniqueIdQObject, arginfo_qt_gui_qpointingdevice_qpointingdevice_newqstringqint64qinputdevicedevicetypeqpointingdevicepointertypeqinputdevicecapabilitiesintintqstringqpointingdeviceuniqueidqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, pointerType, arginfo_qt_gui_qpointingdevice_qpointingdevice_pointertype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, maximumPoints, arginfo_qt_gui_qpointingdevice_qpointingdevice_maximumpoints, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, buttonCount, arginfo_qt_gui_qpointingdevice_qpointingdevice_buttoncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, uniqueId, arginfo_qt_gui_qpointingdevice_qpointingdevice_uniqueid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, primaryPointingDevice, arginfo_qt_gui_qpointingdevice_qpointingdevice_primarypointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QPointingDevice_QPointingDevice, grabChanged, arginfo_qt_gui_qpointingdevice_qpointingdevice_grabchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
