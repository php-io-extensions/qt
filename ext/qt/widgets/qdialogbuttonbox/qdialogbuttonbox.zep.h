
extern zend_class_entry *qt_widgets_qdialogbuttonbox_qdialogbuttonbox_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QDialogButtonBox_QDialogButtonBox);

PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, staticMetaObject);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, tr);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, new_);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, newQtOrientationQWidget);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, newQDialogButtonBoxStandardButtonsQWidget);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, newQDialogButtonBoxStandardButtonsQtOrientationQWidget);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, setOrientation);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, orientation);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, addButton);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, addButtonQStringQDialogButtonBoxButtonRole);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, addButtonQDialogButtonBoxStandardButton);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, removeButton);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, clear);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, buttons);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, buttonRole);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, setStandardButtons);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, standardButtons);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, standardButton);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, button);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, setCenterButtons);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, centerButtons);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, clicked);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, accepted);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, helpRequested);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, rejected);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, changeEvent);
PHP_METHOD(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_newqtorientationqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_newqdialogbuttonboxstandardbuttonsqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_newqdialogbuttonboxstandardbuttonsqtorientationqwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, orientation, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_addbutton, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_addbuttonqstringqdialogbuttonboxbuttonrole, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_addbuttonqdialogbuttonboxstandardbutton, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_removebutton, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_buttons, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_buttonrole, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_setstandardbuttons, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, buttons, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_standardbuttons, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_standardbutton, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_button, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_setcenterbuttons, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, center, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_centerbuttons, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_clicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_accepted, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_helprequested, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_rejected, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qdialogbuttonbox_qdialogbuttonbox_method_entry) {
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, staticMetaObject, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, tr, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, new_, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, newQtOrientationQWidget, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_newqtorientationqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, newQDialogButtonBoxStandardButtonsQWidget, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_newqdialogbuttonboxstandardbuttonsqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, newQDialogButtonBoxStandardButtonsQtOrientationQWidget, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_newqdialogbuttonboxstandardbuttonsqtorientationqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, setOrientation, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, orientation, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, addButton, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_addbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, addButtonQStringQDialogButtonBoxButtonRole, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_addbuttonqstringqdialogbuttonboxbuttonrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, addButtonQDialogButtonBoxStandardButton, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_addbuttonqdialogbuttonboxstandardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, removeButton, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_removebutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, clear, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, buttons, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_buttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, buttonRole, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_buttonrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, setStandardButtons, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_setstandardbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, standardButtons, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_standardbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, standardButton, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_standardbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, button, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, setCenterButtons, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_setcenterbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, centerButtons, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_centerbuttons, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, clicked, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_clicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, accepted, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_accepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, helpRequested, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_helprequested, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, rejected, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_rejected, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, changeEvent, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDialogButtonBox_QDialogButtonBox, event, arginfo_qt_widgets_qdialogbuttonbox_qdialogbuttonbox_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
