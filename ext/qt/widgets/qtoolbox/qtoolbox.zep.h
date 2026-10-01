
extern zend_class_entry *qt_widgets_qtoolbox_qtoolbox_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QToolBox_QToolBox);

PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, staticMetaObject);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, tr);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, new_);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, addItem);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, addItemQWidgetQIconQString);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, insertItem);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, insertItemIntQWidgetQIconQString);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, removeItem);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, setItemEnabled);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, isItemEnabled);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, setItemText);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, itemText);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, setItemIcon);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, itemIcon);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, setItemToolTip);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, itemToolTip);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, currentIndex);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, currentWidget);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, widget);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, indexOf);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, count);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, setCurrentIndex);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, setCurrentWidget);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, currentChanged);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, event);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, itemInserted);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, itemRemoved);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, showEvent);
PHP_METHOD(Qt_Widgets_QToolBox_QToolBox, changeEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_additem, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_additemqwidgetqiconqstring, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_insertitem, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_insertitemintqwidgetqiconqstring, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_removeitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_setitemenabled, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enabled, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_isitemenabled, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_setitemtext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_itemtext, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_setitemicon, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_itemicon, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_setitemtooltip, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, toolTip, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_itemtooltip, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_currentindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_currentwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_widget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_setcurrentindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_setcurrentwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_currentchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_iteminserted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_itemremoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtoolbox_qtoolbox_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtoolbox_qtoolbox_method_entry) {
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, staticMetaObject, arginfo_qt_widgets_qtoolbox_qtoolbox_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, tr, arginfo_qt_widgets_qtoolbox_qtoolbox_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, new_, arginfo_qt_widgets_qtoolbox_qtoolbox_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, addItem, arginfo_qt_widgets_qtoolbox_qtoolbox_additem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, addItemQWidgetQIconQString, arginfo_qt_widgets_qtoolbox_qtoolbox_additemqwidgetqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, insertItem, arginfo_qt_widgets_qtoolbox_qtoolbox_insertitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, insertItemIntQWidgetQIconQString, arginfo_qt_widgets_qtoolbox_qtoolbox_insertitemintqwidgetqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, removeItem, arginfo_qt_widgets_qtoolbox_qtoolbox_removeitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, setItemEnabled, arginfo_qt_widgets_qtoolbox_qtoolbox_setitemenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, isItemEnabled, arginfo_qt_widgets_qtoolbox_qtoolbox_isitemenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, setItemText, arginfo_qt_widgets_qtoolbox_qtoolbox_setitemtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, itemText, arginfo_qt_widgets_qtoolbox_qtoolbox_itemtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, setItemIcon, arginfo_qt_widgets_qtoolbox_qtoolbox_setitemicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, itemIcon, arginfo_qt_widgets_qtoolbox_qtoolbox_itemicon, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, setItemToolTip, arginfo_qt_widgets_qtoolbox_qtoolbox_setitemtooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, itemToolTip, arginfo_qt_widgets_qtoolbox_qtoolbox_itemtooltip, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, currentIndex, arginfo_qt_widgets_qtoolbox_qtoolbox_currentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, currentWidget, arginfo_qt_widgets_qtoolbox_qtoolbox_currentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, widget, arginfo_qt_widgets_qtoolbox_qtoolbox_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, indexOf, arginfo_qt_widgets_qtoolbox_qtoolbox_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, count, arginfo_qt_widgets_qtoolbox_qtoolbox_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, setCurrentIndex, arginfo_qt_widgets_qtoolbox_qtoolbox_setcurrentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, setCurrentWidget, arginfo_qt_widgets_qtoolbox_qtoolbox_setcurrentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, currentChanged, arginfo_qt_widgets_qtoolbox_qtoolbox_currentchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, event, arginfo_qt_widgets_qtoolbox_qtoolbox_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, itemInserted, arginfo_qt_widgets_qtoolbox_qtoolbox_iteminserted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, itemRemoved, arginfo_qt_widgets_qtoolbox_qtoolbox_itemremoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, showEvent, arginfo_qt_widgets_qtoolbox_qtoolbox_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QToolBox_QToolBox, changeEvent, arginfo_qt_widgets_qtoolbox_qtoolbox_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
