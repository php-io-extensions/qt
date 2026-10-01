
extern zend_class_entry *qt_widgets_qdockwidget_qdockwidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QDockWidget_QDockWidget);

PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, staticMetaObject);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, tr);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, new_);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, newQWidgetQtWindowFlags);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, widget);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, setWidget);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, setFeatures);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, features);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, setFloating);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, isFloating);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, setAllowedAreas);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, allowedAreas);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, setTitleBarWidget);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, titleBarWidget);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, isAreaAllowed);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, toggleViewAction);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, featuresChanged);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, topLevelChanged);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, allowedAreasChanged);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, visibilityChanged);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, dockLocationChanged);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, changeEvent);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, closeEvent);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, paintEvent);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, event);
PHP_METHOD(Qt_Widgets_QDockWidget_QDockWidget, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_newqwidgetqtwindowflags, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_setwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_setfeatures, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, features, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_features, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_setfloating, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, floating, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_isfloating, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_setallowedareas, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, areas, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_allowedareas, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_settitlebarwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_titlebarwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_isareaallowed, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_toggleviewaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_featureschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, features, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_toplevelchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, topLevel, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_allowedareaschanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, allowedAreas, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_visibilitychanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_docklocationchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, area, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_closeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdockwidget_qdockwidget_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qdockwidget_qdockwidget_method_entry) {
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, staticMetaObject, arginfo_qt_widgets_qdockwidget_qdockwidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, tr, arginfo_qt_widgets_qdockwidget_qdockwidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, new_, arginfo_qt_widgets_qdockwidget_qdockwidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, newQWidgetQtWindowFlags, arginfo_qt_widgets_qdockwidget_qdockwidget_newqwidgetqtwindowflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, widget, arginfo_qt_widgets_qdockwidget_qdockwidget_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, setWidget, arginfo_qt_widgets_qdockwidget_qdockwidget_setwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, setFeatures, arginfo_qt_widgets_qdockwidget_qdockwidget_setfeatures, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, features, arginfo_qt_widgets_qdockwidget_qdockwidget_features, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, setFloating, arginfo_qt_widgets_qdockwidget_qdockwidget_setfloating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, isFloating, arginfo_qt_widgets_qdockwidget_qdockwidget_isfloating, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, setAllowedAreas, arginfo_qt_widgets_qdockwidget_qdockwidget_setallowedareas, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, allowedAreas, arginfo_qt_widgets_qdockwidget_qdockwidget_allowedareas, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, setTitleBarWidget, arginfo_qt_widgets_qdockwidget_qdockwidget_settitlebarwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, titleBarWidget, arginfo_qt_widgets_qdockwidget_qdockwidget_titlebarwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, isAreaAllowed, arginfo_qt_widgets_qdockwidget_qdockwidget_isareaallowed, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, toggleViewAction, arginfo_qt_widgets_qdockwidget_qdockwidget_toggleviewaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, featuresChanged, arginfo_qt_widgets_qdockwidget_qdockwidget_featureschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, topLevelChanged, arginfo_qt_widgets_qdockwidget_qdockwidget_toplevelchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, allowedAreasChanged, arginfo_qt_widgets_qdockwidget_qdockwidget_allowedareaschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, visibilityChanged, arginfo_qt_widgets_qdockwidget_qdockwidget_visibilitychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, dockLocationChanged, arginfo_qt_widgets_qdockwidget_qdockwidget_docklocationchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, changeEvent, arginfo_qt_widgets_qdockwidget_qdockwidget_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, closeEvent, arginfo_qt_widgets_qdockwidget_qdockwidget_closeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, paintEvent, arginfo_qt_widgets_qdockwidget_qdockwidget_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, event, arginfo_qt_widgets_qdockwidget_qdockwidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDockWidget_QDockWidget, initStyleOption, arginfo_qt_widgets_qdockwidget_qdockwidget_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
