
extern zend_class_entry *qt_widgets_qtoolbutton_qtoolbutton_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QToolButton_QToolButton);

PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, staticMetaObject);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, tr);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, new_);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, sizeHint);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, toolButtonStyle);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, arrowType);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, setArrowType);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, setMenu);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, menu);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, setPopupMode);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, popupMode);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, defaultAction);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, setAutoRaise);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, autoRaise);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, showMenu);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, setToolButtonStyle);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, setDefaultAction);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, triggered);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, event);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, mousePressEvent);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, paintEvent);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, actionEvent);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, enterEvent);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, leaveEvent);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, timerEvent);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, changeEvent);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, hitButton);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, checkStateSet);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, nextCheckState);
PHP_METHOD(Qt_Widgets_QToolButton_QToolButton, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_toolbuttonstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_arrowtype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_setarrowtype, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_setmenu, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_menu, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_setpopupmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_popupmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_defaultaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_setautoraise, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_autoraise, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_showmenu, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_settoolbuttonstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_setdefaultaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_triggered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_actionevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_enterevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_leaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_hitbutton, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_checkstateset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_nextcheckstate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbutton_qtoolbutton_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtoolbutton_qtoolbutton_method_entry) {
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, staticMetaObject, arginfo_qt_widgets_qtoolbutton_qtoolbutton_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, tr, arginfo_qt_widgets_qtoolbutton_qtoolbutton_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, new_, arginfo_qt_widgets_qtoolbutton_qtoolbutton_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, sizeHint, arginfo_qt_widgets_qtoolbutton_qtoolbutton_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, minimumSizeHint, arginfo_qt_widgets_qtoolbutton_qtoolbutton_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, toolButtonStyle, arginfo_qt_widgets_qtoolbutton_qtoolbutton_toolbuttonstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, arrowType, arginfo_qt_widgets_qtoolbutton_qtoolbutton_arrowtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, setArrowType, arginfo_qt_widgets_qtoolbutton_qtoolbutton_setarrowtype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, setMenu, arginfo_qt_widgets_qtoolbutton_qtoolbutton_setmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, menu, arginfo_qt_widgets_qtoolbutton_qtoolbutton_menu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, setPopupMode, arginfo_qt_widgets_qtoolbutton_qtoolbutton_setpopupmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, popupMode, arginfo_qt_widgets_qtoolbutton_qtoolbutton_popupmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, defaultAction, arginfo_qt_widgets_qtoolbutton_qtoolbutton_defaultaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, setAutoRaise, arginfo_qt_widgets_qtoolbutton_qtoolbutton_setautoraise, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, autoRaise, arginfo_qt_widgets_qtoolbutton_qtoolbutton_autoraise, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, showMenu, arginfo_qt_widgets_qtoolbutton_qtoolbutton_showmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, setToolButtonStyle, arginfo_qt_widgets_qtoolbutton_qtoolbutton_settoolbuttonstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, setDefaultAction, arginfo_qt_widgets_qtoolbutton_qtoolbutton_setdefaultaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, triggered, arginfo_qt_widgets_qtoolbutton_qtoolbutton_triggered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, event, arginfo_qt_widgets_qtoolbutton_qtoolbutton_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, mousePressEvent, arginfo_qt_widgets_qtoolbutton_qtoolbutton_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, mouseReleaseEvent, arginfo_qt_widgets_qtoolbutton_qtoolbutton_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, paintEvent, arginfo_qt_widgets_qtoolbutton_qtoolbutton_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, actionEvent, arginfo_qt_widgets_qtoolbutton_qtoolbutton_actionevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, enterEvent, arginfo_qt_widgets_qtoolbutton_qtoolbutton_enterevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, leaveEvent, arginfo_qt_widgets_qtoolbutton_qtoolbutton_leaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, timerEvent, arginfo_qt_widgets_qtoolbutton_qtoolbutton_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, changeEvent, arginfo_qt_widgets_qtoolbutton_qtoolbutton_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, hitButton, arginfo_qt_widgets_qtoolbutton_qtoolbutton_hitbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, checkStateSet, arginfo_qt_widgets_qtoolbutton_qtoolbutton_checkstateset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, nextCheckState, arginfo_qt_widgets_qtoolbutton_qtoolbutton_nextcheckstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolButton_QToolButton, initStyleOption, arginfo_qt_widgets_qtoolbutton_qtoolbutton_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
