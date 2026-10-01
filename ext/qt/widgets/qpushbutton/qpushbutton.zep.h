
extern zend_class_entry *qt_widgets_qpushbutton_qpushbutton_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QPushButton_QPushButton);

PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, staticMetaObject);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, tr);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, new_);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, newQStringQWidget);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, newQIconQStringQWidget);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, sizeHint);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, autoDefault);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, setAutoDefault);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, isDefault);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, setDefault);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, setMenu);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, menu);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, setFlat);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, isFlat);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, showMenu);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, event);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, paintEvent);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, keyPressEvent);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, focusInEvent);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, focusOutEvent);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, initStyleOption);
PHP_METHOD(Qt_Widgets_QPushButton_QPushButton, hitButton);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_newqstringqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_newqiconqstringqwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_autodefault, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_setautodefault, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_isdefault, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_setdefault, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_setmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_menu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_setflat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_isflat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_showmenu, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_focusinevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qpushbutton_qpushbutton_hitbutton, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qpushbutton_qpushbutton_method_entry) {
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, staticMetaObject, arginfo_qt_widgets_qpushbutton_qpushbutton_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, tr, arginfo_qt_widgets_qpushbutton_qpushbutton_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, new_, arginfo_qt_widgets_qpushbutton_qpushbutton_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, newQStringQWidget, arginfo_qt_widgets_qpushbutton_qpushbutton_newqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, newQIconQStringQWidget, arginfo_qt_widgets_qpushbutton_qpushbutton_newqiconqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, sizeHint, arginfo_qt_widgets_qpushbutton_qpushbutton_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, minimumSizeHint, arginfo_qt_widgets_qpushbutton_qpushbutton_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, autoDefault, arginfo_qt_widgets_qpushbutton_qpushbutton_autodefault, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, setAutoDefault, arginfo_qt_widgets_qpushbutton_qpushbutton_setautodefault, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, isDefault, arginfo_qt_widgets_qpushbutton_qpushbutton_isdefault, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, setDefault, arginfo_qt_widgets_qpushbutton_qpushbutton_setdefault, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, setMenu, arginfo_qt_widgets_qpushbutton_qpushbutton_setmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, menu, arginfo_qt_widgets_qpushbutton_qpushbutton_menu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, setFlat, arginfo_qt_widgets_qpushbutton_qpushbutton_setflat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, isFlat, arginfo_qt_widgets_qpushbutton_qpushbutton_isflat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, showMenu, arginfo_qt_widgets_qpushbutton_qpushbutton_showmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, event, arginfo_qt_widgets_qpushbutton_qpushbutton_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, paintEvent, arginfo_qt_widgets_qpushbutton_qpushbutton_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, keyPressEvent, arginfo_qt_widgets_qpushbutton_qpushbutton_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, focusInEvent, arginfo_qt_widgets_qpushbutton_qpushbutton_focusinevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, focusOutEvent, arginfo_qt_widgets_qpushbutton_qpushbutton_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, mouseMoveEvent, arginfo_qt_widgets_qpushbutton_qpushbutton_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, initStyleOption, arginfo_qt_widgets_qpushbutton_qpushbutton_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QPushButton_QPushButton, hitButton, arginfo_qt_widgets_qpushbutton_qpushbutton_hitbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
