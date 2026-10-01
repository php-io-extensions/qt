
extern zend_class_entry *qt_widgets_qbuttongroup_qbuttongroup_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QButtonGroup_QButtonGroup);

PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, staticMetaObject);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, tr);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, new_);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, setExclusive);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, exclusive);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, addButton);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, removeButton);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, buttons);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, checkedButton);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, button);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, setId);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, id);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, checkedId);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, buttonClicked);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, buttonPressed);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, buttonReleased);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, buttonToggled);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, idClicked);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, idPressed);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, idReleased);
PHP_METHOD(Qt_Widgets_QButtonGroup_QButtonGroup, idToggled);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_setexclusive, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_exclusive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_addbutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_removebutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttons, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_checkedbutton, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_button, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_setid, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_id, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_checkedid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttonclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttonpressed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttonreleased, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttontoggled, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_idclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_idpressed, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_idreleased, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qbuttongroup_qbuttongroup_idtoggled, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qbuttongroup_qbuttongroup_method_entry) {
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, staticMetaObject, arginfo_qt_widgets_qbuttongroup_qbuttongroup_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, tr, arginfo_qt_widgets_qbuttongroup_qbuttongroup_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, new_, arginfo_qt_widgets_qbuttongroup_qbuttongroup_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, setExclusive, arginfo_qt_widgets_qbuttongroup_qbuttongroup_setexclusive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, exclusive, arginfo_qt_widgets_qbuttongroup_qbuttongroup_exclusive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, addButton, arginfo_qt_widgets_qbuttongroup_qbuttongroup_addbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, removeButton, arginfo_qt_widgets_qbuttongroup_qbuttongroup_removebutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, buttons, arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, checkedButton, arginfo_qt_widgets_qbuttongroup_qbuttongroup_checkedbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, button, arginfo_qt_widgets_qbuttongroup_qbuttongroup_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, setId, arginfo_qt_widgets_qbuttongroup_qbuttongroup_setid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, id, arginfo_qt_widgets_qbuttongroup_qbuttongroup_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, checkedId, arginfo_qt_widgets_qbuttongroup_qbuttongroup_checkedid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, buttonClicked, arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttonclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, buttonPressed, arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttonpressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, buttonReleased, arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttonreleased, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, buttonToggled, arginfo_qt_widgets_qbuttongroup_qbuttongroup_buttontoggled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, idClicked, arginfo_qt_widgets_qbuttongroup_qbuttongroup_idclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, idPressed, arginfo_qt_widgets_qbuttongroup_qbuttongroup_idpressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, idReleased, arginfo_qt_widgets_qbuttongroup_qbuttongroup_idreleased, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QButtonGroup_QButtonGroup, idToggled, arginfo_qt_widgets_qbuttongroup_qbuttongroup_idtoggled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
