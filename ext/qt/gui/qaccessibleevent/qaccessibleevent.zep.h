
extern zend_class_entry *qt_gui_qaccessibleevent_qaccessibleevent_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleEvent_QAccessibleEvent);

PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, new_);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, newQAccessibleInterfaceQAccessibleEvent);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, type);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, object_);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, uniqueId);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, setChild);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, child);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, accessibleInterface);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, m_type);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, setM_type);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, m_object);
PHP_METHOD(Qt_Gui_QAccessibleEvent_QAccessibleEvent, setM_object);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_new_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, obj, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typ, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_newqaccessibleinterfaceqaccessibleevent, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iface, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, typ, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_object_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_uniqueid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_setchild, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, chld, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_child, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_accessibleinterface, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_m_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_setm_type, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_m_object, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessibleevent_qaccessibleevent_setm_object, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qaccessibleevent_qaccessibleevent_method_entry) {
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, new_, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, newQAccessibleInterfaceQAccessibleEvent, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_newqaccessibleinterfaceqaccessibleevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, type, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, object_, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_object_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, uniqueId, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_uniqueid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, setChild, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_setchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, child, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_child, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, accessibleInterface, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_accessibleinterface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, m_type, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_m_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, setM_type, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_setm_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, m_object, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_m_object, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleEvent_QAccessibleEvent, setM_object, arginfo_qt_gui_qaccessibleevent_qaccessibleevent_setm_object, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
