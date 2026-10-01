
extern zend_class_entry *qt_gui_qaccessiblebridge_qaccessiblebridge_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QAccessibleBridge_QAccessibleBridge);

PHP_METHOD(Qt_Gui_QAccessibleBridge_QAccessibleBridge, setRootObject);
PHP_METHOD(Qt_Gui_QAccessibleBridge_QAccessibleBridge, notifyAccessibilityUpdate);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblebridge_qaccessiblebridge_setrootobject, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessiblebridge_qaccessiblebridge_notifyaccessibilityupdate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qaccessiblebridge_qaccessiblebridge_method_entry) {
	PHP_ME(Qt_Gui_QAccessibleBridge_QAccessibleBridge, setRootObject, arginfo_qt_gui_qaccessiblebridge_qaccessiblebridge_setrootobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessibleBridge_QAccessibleBridge, notifyAccessibilityUpdate, arginfo_qt_gui_qaccessiblebridge_qaccessiblebridge_notifyaccessibilityupdate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
