
extern zend_class_entry *qt_gui_qenterevent_qenterevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QEnterEvent_QEnterEvent);

PHP_METHOD(Qt_Gui_QEnterEvent_QEnterEvent, new_);
PHP_METHOD(Qt_Gui_QEnterEvent_QEnterEvent, clone_);
PHP_METHOD(Qt_Gui_QEnterEvent_QEnterEvent, newQPointFQPointFQPointFQPointingDevice);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qenterevent_qenterevent_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qenterevent_qenterevent_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qenterevent_qenterevent_newqpointfqpointfqpointfqpointingdevice, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, localPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, localPosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, scenePosY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, globalPosY, IS_DOUBLE, 0)
	ZEND_ARG_INFO(0, device)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qenterevent_qenterevent_method_entry) {
	PHP_ME(Qt_Gui_QEnterEvent_QEnterEvent, new_, arginfo_qt_gui_qenterevent_qenterevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEnterEvent_QEnterEvent, clone_, arginfo_qt_gui_qenterevent_qenterevent_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QEnterEvent_QEnterEvent, newQPointFQPointFQPointFQPointingDevice, arginfo_qt_gui_qenterevent_qenterevent_newqpointfqpointfqpointfqpointingdevice, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
