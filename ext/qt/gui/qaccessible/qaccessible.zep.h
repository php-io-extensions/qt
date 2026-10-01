
extern zend_class_entry *qt_gui_qaccessible_qaccessible_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QAccessible_QAccessible);

PHP_METHOD(Qt_Gui_QAccessible_QAccessible, staticMetaObject);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, installActivationObserver);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, removeActivationObserver);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, queryAccessibleInterface);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, uniqueId);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, accessibleInterface);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, registerAccessibleInterface);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, deleteAccessibleInterface);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, updateAccessibility);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, isActive);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, setActive);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, setRootObject);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, cleanup);
PHP_METHOD(Qt_Gui_QAccessible_QAccessible, qAccessibleTextBoundaryHelper);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_installactivationobserver, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_removeactivationobserver, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_queryaccessibleinterface, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_uniqueid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iface, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_accessibleinterface, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, uniqueId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_registeraccessibleinterface, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, iface, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_deleteaccessibleinterface, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, uniqueId, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_updateaccessibility, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_isactive, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_setactive, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, active, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_setrootobject, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_cleanup, 0, 0, IS_VOID, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qaccessible_qaccessible_qaccessibletextboundaryhelper, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, boundaryType, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qaccessible_qaccessible_method_entry) {
	PHP_ME(Qt_Gui_QAccessible_QAccessible, staticMetaObject, arginfo_qt_gui_qaccessible_qaccessible_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, qt_check_for_QGADGET_macro, arginfo_qt_gui_qaccessible_qaccessible_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, installActivationObserver, arginfo_qt_gui_qaccessible_qaccessible_installactivationobserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, removeActivationObserver, arginfo_qt_gui_qaccessible_qaccessible_removeactivationobserver, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, queryAccessibleInterface, arginfo_qt_gui_qaccessible_qaccessible_queryaccessibleinterface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, uniqueId, arginfo_qt_gui_qaccessible_qaccessible_uniqueid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, accessibleInterface, arginfo_qt_gui_qaccessible_qaccessible_accessibleinterface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, registerAccessibleInterface, arginfo_qt_gui_qaccessible_qaccessible_registeraccessibleinterface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, deleteAccessibleInterface, arginfo_qt_gui_qaccessible_qaccessible_deleteaccessibleinterface, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, updateAccessibility, arginfo_qt_gui_qaccessible_qaccessible_updateaccessibility, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, isActive, arginfo_qt_gui_qaccessible_qaccessible_isactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, setActive, arginfo_qt_gui_qaccessible_qaccessible_setactive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, setRootObject, arginfo_qt_gui_qaccessible_qaccessible_setrootobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, cleanup, arginfo_qt_gui_qaccessible_qaccessible_cleanup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QAccessible_QAccessible, qAccessibleTextBoundaryHelper, arginfo_qt_gui_qaccessible_qaccessible_qaccessibletextboundaryhelper, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
