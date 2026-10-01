
extern zend_class_entry *qt_widgets_qstackedwidget_qstackedwidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStackedWidget_QStackedWidget);

PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, staticMetaObject);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, tr);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, new_);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, addWidget);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, insertWidget);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, removeWidget);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, currentWidget);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, currentIndex);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, indexOf);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, widget);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, count);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, setCurrentIndex);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, setCurrentWidget);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, currentChanged);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, widgetRemoved);
PHP_METHOD(Qt_Widgets_QStackedWidget_QStackedWidget, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_addwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_insertwidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_removewidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_currentwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_currentindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_widget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_setcurrentindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_setcurrentwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_currentchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_widgetremoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstackedwidget_qstackedwidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstackedwidget_qstackedwidget_method_entry) {
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, staticMetaObject, arginfo_qt_widgets_qstackedwidget_qstackedwidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, tr, arginfo_qt_widgets_qstackedwidget_qstackedwidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, new_, arginfo_qt_widgets_qstackedwidget_qstackedwidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, addWidget, arginfo_qt_widgets_qstackedwidget_qstackedwidget_addwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, insertWidget, arginfo_qt_widgets_qstackedwidget_qstackedwidget_insertwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, removeWidget, arginfo_qt_widgets_qstackedwidget_qstackedwidget_removewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, currentWidget, arginfo_qt_widgets_qstackedwidget_qstackedwidget_currentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, currentIndex, arginfo_qt_widgets_qstackedwidget_qstackedwidget_currentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, indexOf, arginfo_qt_widgets_qstackedwidget_qstackedwidget_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, widget, arginfo_qt_widgets_qstackedwidget_qstackedwidget_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, count, arginfo_qt_widgets_qstackedwidget_qstackedwidget_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, setCurrentIndex, arginfo_qt_widgets_qstackedwidget_qstackedwidget_setcurrentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, setCurrentWidget, arginfo_qt_widgets_qstackedwidget_qstackedwidget_setcurrentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, currentChanged, arginfo_qt_widgets_qstackedwidget_qstackedwidget_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, widgetRemoved, arginfo_qt_widgets_qstackedwidget_qstackedwidget_widgetremoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStackedWidget_QStackedWidget, event, arginfo_qt_widgets_qstackedwidget_qstackedwidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
