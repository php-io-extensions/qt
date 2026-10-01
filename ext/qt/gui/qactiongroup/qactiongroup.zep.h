
extern zend_class_entry *qt_gui_qactiongroup_qactiongroup_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QActionGroup_QActionGroup);

PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, staticMetaObject);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, tr);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, new_);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, addAction);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, addActionQString);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, addActionQIconQString);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, removeAction);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, actions);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, checkedAction);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, isExclusive);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, isEnabled);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, isVisible);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, exclusionPolicy);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, setEnabled);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, setDisabled);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, setVisible);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, setExclusive);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, setExclusionPolicy);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, triggered);
PHP_METHOD(Qt_Gui_QActionGroup_QActionGroup, hovered);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_addaction, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_addactionqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_addactionqiconqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_removeaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, a, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_actions, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_checkedaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_isexclusive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_isenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_exclusionpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_setenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_setdisabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_setexclusive, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_setexclusionpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_triggered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qactiongroup_qactiongroup_hovered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qactiongroup_qactiongroup_method_entry) {
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, staticMetaObject, arginfo_qt_gui_qactiongroup_qactiongroup_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, tr, arginfo_qt_gui_qactiongroup_qactiongroup_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, new_, arginfo_qt_gui_qactiongroup_qactiongroup_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, addAction, arginfo_qt_gui_qactiongroup_qactiongroup_addaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, addActionQString, arginfo_qt_gui_qactiongroup_qactiongroup_addactionqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, addActionQIconQString, arginfo_qt_gui_qactiongroup_qactiongroup_addactionqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, removeAction, arginfo_qt_gui_qactiongroup_qactiongroup_removeaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, actions, arginfo_qt_gui_qactiongroup_qactiongroup_actions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, checkedAction, arginfo_qt_gui_qactiongroup_qactiongroup_checkedaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, isExclusive, arginfo_qt_gui_qactiongroup_qactiongroup_isexclusive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, isEnabled, arginfo_qt_gui_qactiongroup_qactiongroup_isenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, isVisible, arginfo_qt_gui_qactiongroup_qactiongroup_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, exclusionPolicy, arginfo_qt_gui_qactiongroup_qactiongroup_exclusionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, setEnabled, arginfo_qt_gui_qactiongroup_qactiongroup_setenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, setDisabled, arginfo_qt_gui_qactiongroup_qactiongroup_setdisabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, setVisible, arginfo_qt_gui_qactiongroup_qactiongroup_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, setExclusive, arginfo_qt_gui_qactiongroup_qactiongroup_setexclusive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, setExclusionPolicy, arginfo_qt_gui_qactiongroup_qactiongroup_setexclusionpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, triggered, arginfo_qt_gui_qactiongroup_qactiongroup_triggered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QActionGroup_QActionGroup, hovered, arginfo_qt_gui_qactiongroup_qactiongroup_hovered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
