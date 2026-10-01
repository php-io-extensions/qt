
extern zend_class_entry *qt_widgets_qwidgetaction_qwidgetaction_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QWidgetAction_QWidgetAction);

PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, staticMetaObject);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, tr);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, new_);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, setDefaultWidget);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, defaultWidget);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, requestWidget);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, releaseWidget);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, event);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, eventFilter);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, createWidget);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, deleteWidget);
PHP_METHOD(Qt_Widgets_QWidgetAction_QWidgetAction, createdWidgets);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_setdefaultwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_defaultwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_requestwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_releasewidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_createwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_deletewidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwidgetaction_qwidgetaction_createdwidgets, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qwidgetaction_qwidgetaction_method_entry) {
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, staticMetaObject, arginfo_qt_widgets_qwidgetaction_qwidgetaction_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, tr, arginfo_qt_widgets_qwidgetaction_qwidgetaction_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, new_, arginfo_qt_widgets_qwidgetaction_qwidgetaction_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, setDefaultWidget, arginfo_qt_widgets_qwidgetaction_qwidgetaction_setdefaultwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, defaultWidget, arginfo_qt_widgets_qwidgetaction_qwidgetaction_defaultwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, requestWidget, arginfo_qt_widgets_qwidgetaction_qwidgetaction_requestwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, releaseWidget, arginfo_qt_widgets_qwidgetaction_qwidgetaction_releasewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, event, arginfo_qt_widgets_qwidgetaction_qwidgetaction_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, eventFilter, arginfo_qt_widgets_qwidgetaction_qwidgetaction_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, createWidget, arginfo_qt_widgets_qwidgetaction_qwidgetaction_createwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, deleteWidget, arginfo_qt_widgets_qwidgetaction_qwidgetaction_deletewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWidgetAction_QWidgetAction, createdWidgets, arginfo_qt_widgets_qwidgetaction_qwidgetaction_createdwidgets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
