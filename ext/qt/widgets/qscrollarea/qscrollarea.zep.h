
extern zend_class_entry *qt_widgets_qscrollarea_qscrollarea_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QScrollArea_QScrollArea);

PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, staticMetaObject);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, tr);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, new_);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, widget);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, setWidget);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, takeWidget);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, widgetResizable);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, setWidgetResizable);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, sizeHint);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, focusNextPrevChild);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, alignment);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, setAlignment);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, ensureVisible);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, ensureWidgetVisible);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, event);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, eventFilter);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, resizeEvent);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, scrollContentsBy);
PHP_METHOD(Qt_Widgets_QScrollArea_QScrollArea, viewportSizeHint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_setwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_takewidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_widgetresizable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_setwidgetresizable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, resizable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_focusnextprevchild, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, next, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_ensurevisible, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, y, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xmargin, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ymargin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_ensurewidgetvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, childWidget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, xmargin, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ymargin, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_scrollcontentsby, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollarea_qscrollarea_viewportsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qscrollarea_qscrollarea_method_entry) {
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, staticMetaObject, arginfo_qt_widgets_qscrollarea_qscrollarea_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, tr, arginfo_qt_widgets_qscrollarea_qscrollarea_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, new_, arginfo_qt_widgets_qscrollarea_qscrollarea_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, widget, arginfo_qt_widgets_qscrollarea_qscrollarea_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, setWidget, arginfo_qt_widgets_qscrollarea_qscrollarea_setwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, takeWidget, arginfo_qt_widgets_qscrollarea_qscrollarea_takewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, widgetResizable, arginfo_qt_widgets_qscrollarea_qscrollarea_widgetresizable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, setWidgetResizable, arginfo_qt_widgets_qscrollarea_qscrollarea_setwidgetresizable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, sizeHint, arginfo_qt_widgets_qscrollarea_qscrollarea_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, focusNextPrevChild, arginfo_qt_widgets_qscrollarea_qscrollarea_focusnextprevchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, alignment, arginfo_qt_widgets_qscrollarea_qscrollarea_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, setAlignment, arginfo_qt_widgets_qscrollarea_qscrollarea_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, ensureVisible, arginfo_qt_widgets_qscrollarea_qscrollarea_ensurevisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, ensureWidgetVisible, arginfo_qt_widgets_qscrollarea_qscrollarea_ensurewidgetvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, event, arginfo_qt_widgets_qscrollarea_qscrollarea_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, eventFilter, arginfo_qt_widgets_qscrollarea_qscrollarea_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, resizeEvent, arginfo_qt_widgets_qscrollarea_qscrollarea_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, scrollContentsBy, arginfo_qt_widgets_qscrollarea_qscrollarea_scrollcontentsby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollArea_QScrollArea, viewportSizeHint, arginfo_qt_widgets_qscrollarea_qscrollarea_viewportsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
