
extern zend_class_entry *qt_widgets_qabstractbutton_qabstractbutton_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QAbstractButton_QAbstractButton);

PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, staticMetaObject);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, tr);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, new_);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setText);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, text);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setIcon);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, icon);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, iconSize);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setShortcut);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, shortcut);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setCheckable);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, isCheckable);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, isChecked);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setDown);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, isDown);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setAutoRepeat);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, autoRepeat);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setAutoRepeatDelay);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, autoRepeatDelay);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setAutoRepeatInterval);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, autoRepeatInterval);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setAutoExclusive);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, autoExclusive);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, group);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setIconSize);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, animateClick);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, click);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, toggle);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, setChecked);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, pressed);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, released);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, clicked);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, toggled);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, paintEvent);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, hitButton);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, checkStateSet);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, nextCheckState);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, event);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, keyPressEvent);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, keyReleaseEvent);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, mousePressEvent);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, focusInEvent);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, focusOutEvent);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, changeEvent);
PHP_METHOD(Qt_Widgets_QAbstractButton_QAbstractButton, timerEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_seticon, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_icon, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_iconsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_setshortcut, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_shortcut, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_setcheckable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_ischeckable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_ischecked, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_setdown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_isdown, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_setautorepeat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_autorepeat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_setautorepeatdelay, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_autorepeatdelay, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_setautorepeatinterval, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_autorepeatinterval, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_setautoexclusive, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_autoexclusive, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_group, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_seticonsize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_animateclick, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_click, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_toggle, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_setchecked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_pressed, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_released, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_clicked, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_toggled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_hitbutton, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posX, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, posY, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_checkstateset, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_nextcheckstate, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_keyreleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_focusinevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractbutton_qabstractbutton_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qabstractbutton_qabstractbutton_method_entry) {
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, staticMetaObject, arginfo_qt_widgets_qabstractbutton_qabstractbutton_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, tr, arginfo_qt_widgets_qabstractbutton_qabstractbutton_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, new_, arginfo_qt_widgets_qabstractbutton_qabstractbutton_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setText, arginfo_qt_widgets_qabstractbutton_qabstractbutton_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, text, arginfo_qt_widgets_qabstractbutton_qabstractbutton_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setIcon, arginfo_qt_widgets_qabstractbutton_qabstractbutton_seticon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, icon, arginfo_qt_widgets_qabstractbutton_qabstractbutton_icon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, iconSize, arginfo_qt_widgets_qabstractbutton_qabstractbutton_iconsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setShortcut, arginfo_qt_widgets_qabstractbutton_qabstractbutton_setshortcut, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, shortcut, arginfo_qt_widgets_qabstractbutton_qabstractbutton_shortcut, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setCheckable, arginfo_qt_widgets_qabstractbutton_qabstractbutton_setcheckable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, isCheckable, arginfo_qt_widgets_qabstractbutton_qabstractbutton_ischeckable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, isChecked, arginfo_qt_widgets_qabstractbutton_qabstractbutton_ischecked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setDown, arginfo_qt_widgets_qabstractbutton_qabstractbutton_setdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, isDown, arginfo_qt_widgets_qabstractbutton_qabstractbutton_isdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setAutoRepeat, arginfo_qt_widgets_qabstractbutton_qabstractbutton_setautorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, autoRepeat, arginfo_qt_widgets_qabstractbutton_qabstractbutton_autorepeat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setAutoRepeatDelay, arginfo_qt_widgets_qabstractbutton_qabstractbutton_setautorepeatdelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, autoRepeatDelay, arginfo_qt_widgets_qabstractbutton_qabstractbutton_autorepeatdelay, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setAutoRepeatInterval, arginfo_qt_widgets_qabstractbutton_qabstractbutton_setautorepeatinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, autoRepeatInterval, arginfo_qt_widgets_qabstractbutton_qabstractbutton_autorepeatinterval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setAutoExclusive, arginfo_qt_widgets_qabstractbutton_qabstractbutton_setautoexclusive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, autoExclusive, arginfo_qt_widgets_qabstractbutton_qabstractbutton_autoexclusive, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, group, arginfo_qt_widgets_qabstractbutton_qabstractbutton_group, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setIconSize, arginfo_qt_widgets_qabstractbutton_qabstractbutton_seticonsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, animateClick, arginfo_qt_widgets_qabstractbutton_qabstractbutton_animateclick, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, click, arginfo_qt_widgets_qabstractbutton_qabstractbutton_click, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, toggle, arginfo_qt_widgets_qabstractbutton_qabstractbutton_toggle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, setChecked, arginfo_qt_widgets_qabstractbutton_qabstractbutton_setchecked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, pressed, arginfo_qt_widgets_qabstractbutton_qabstractbutton_pressed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, released, arginfo_qt_widgets_qabstractbutton_qabstractbutton_released, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, clicked, arginfo_qt_widgets_qabstractbutton_qabstractbutton_clicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, toggled, arginfo_qt_widgets_qabstractbutton_qabstractbutton_toggled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, paintEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, hitButton, arginfo_qt_widgets_qabstractbutton_qabstractbutton_hitbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, checkStateSet, arginfo_qt_widgets_qabstractbutton_qabstractbutton_checkstateset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, nextCheckState, arginfo_qt_widgets_qabstractbutton_qabstractbutton_nextcheckstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, event, arginfo_qt_widgets_qabstractbutton_qabstractbutton_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, keyPressEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, keyReleaseEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_keyreleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, mousePressEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, mouseReleaseEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, mouseMoveEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, focusInEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_focusinevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, focusOutEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, changeEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractButton_QAbstractButton, timerEvent, arginfo_qt_widgets_qabstractbutton_qabstractbutton_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
