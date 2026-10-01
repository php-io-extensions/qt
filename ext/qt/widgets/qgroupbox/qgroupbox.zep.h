
extern zend_class_entry *qt_widgets_qgroupbox_qgroupbox_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGroupBox_QGroupBox);

PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, tr);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, new_);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, newQStringQWidget);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, title);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, setTitle);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, alignment);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, setAlignment);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, isFlat);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, setFlat);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, isCheckable);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, setCheckable);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, isChecked);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, setChecked);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, clicked);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, toggled);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, event);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, childEvent);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, resizeEvent);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, paintEvent);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, focusInEvent);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, changeEvent);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, mousePressEvent);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QGroupBox_QGroupBox, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_newqstringqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_title, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_settitle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_isflat, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_setflat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flat, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_ischeckable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_setcheckable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checkable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_ischecked, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_setchecked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_clicked, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, checked, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_toggled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_childevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_focusinevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgroupbox_qgroupbox_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgroupbox_qgroupbox_method_entry) {
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, staticMetaObject, arginfo_qt_widgets_qgroupbox_qgroupbox_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, tr, arginfo_qt_widgets_qgroupbox_qgroupbox_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, new_, arginfo_qt_widgets_qgroupbox_qgroupbox_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, newQStringQWidget, arginfo_qt_widgets_qgroupbox_qgroupbox_newqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, title, arginfo_qt_widgets_qgroupbox_qgroupbox_title, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, setTitle, arginfo_qt_widgets_qgroupbox_qgroupbox_settitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, alignment, arginfo_qt_widgets_qgroupbox_qgroupbox_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, setAlignment, arginfo_qt_widgets_qgroupbox_qgroupbox_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, minimumSizeHint, arginfo_qt_widgets_qgroupbox_qgroupbox_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, isFlat, arginfo_qt_widgets_qgroupbox_qgroupbox_isflat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, setFlat, arginfo_qt_widgets_qgroupbox_qgroupbox_setflat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, isCheckable, arginfo_qt_widgets_qgroupbox_qgroupbox_ischeckable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, setCheckable, arginfo_qt_widgets_qgroupbox_qgroupbox_setcheckable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, isChecked, arginfo_qt_widgets_qgroupbox_qgroupbox_ischecked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, setChecked, arginfo_qt_widgets_qgroupbox_qgroupbox_setchecked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, clicked, arginfo_qt_widgets_qgroupbox_qgroupbox_clicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, toggled, arginfo_qt_widgets_qgroupbox_qgroupbox_toggled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, event, arginfo_qt_widgets_qgroupbox_qgroupbox_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, childEvent, arginfo_qt_widgets_qgroupbox_qgroupbox_childevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, resizeEvent, arginfo_qt_widgets_qgroupbox_qgroupbox_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, paintEvent, arginfo_qt_widgets_qgroupbox_qgroupbox_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, focusInEvent, arginfo_qt_widgets_qgroupbox_qgroupbox_focusinevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, changeEvent, arginfo_qt_widgets_qgroupbox_qgroupbox_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, mousePressEvent, arginfo_qt_widgets_qgroupbox_qgroupbox_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, mouseMoveEvent, arginfo_qt_widgets_qgroupbox_qgroupbox_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, mouseReleaseEvent, arginfo_qt_widgets_qgroupbox_qgroupbox_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGroupBox_QGroupBox, initStyleOption, arginfo_qt_widgets_qgroupbox_qgroupbox_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
