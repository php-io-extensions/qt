
extern zend_class_entry *qt_widgets_qabstractscrollarea_qabstractscrollarea_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea);

PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, staticMetaObject);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, tr);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, new_);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, verticalScrollBarPolicy);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setVerticalScrollBarPolicy);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, verticalScrollBar);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setVerticalScrollBar);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, horizontalScrollBarPolicy);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setHorizontalScrollBarPolicy);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, horizontalScrollBar);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setHorizontalScrollBar);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, cornerWidget);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setCornerWidget);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, addScrollBarWidget);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, scrollBarWidgets);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, viewport);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setViewport);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, maximumViewportSize);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, sizeHint);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setupViewport);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, sizeAdjustPolicy);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setSizeAdjustPolicy);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setViewportMargins);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setViewportMarginsQMargins);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, viewportMargins);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, eventFilter);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, event);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, viewportEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, resizeEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, paintEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, mousePressEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, mouseDoubleClickEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, wheelEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, contextMenuEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, dragEnterEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, dragMoveEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, dragLeaveEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, dropEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, keyPressEvent);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, scrollContentsBy);
PHP_METHOD(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, viewportSizeHint);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_verticalscrollbarpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setverticalscrollbarpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_verticalscrollbar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setverticalscrollbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrollbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_horizontalscrollbarpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_sethorizontalscrollbarpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_horizontalscrollbar, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_sethorizontalscrollbar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, scrollbar, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_cornerwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setcornerwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_addscrollbarwidget, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_scrollbarwidgets, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_viewport, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setviewport, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_maximumviewportsize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setupviewport, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, viewport, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_sizeadjustpolicy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setsizeadjustpolicy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, policy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setviewportmargins, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, left, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, top, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, right, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, bottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setviewportmarginsqmargins, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsLeft, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsTop, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsRight, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, marginsBottom, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_viewportmargins, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_viewportevent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_mousedoubleclickevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_wheelevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_contextmenuevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_dragenterevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_dragmoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_dragleaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_dropevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_scrollcontentsby, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dx, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, dy, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_viewportsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qabstractscrollarea_qabstractscrollarea_method_entry) {
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, staticMetaObject, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, tr, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, new_, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, verticalScrollBarPolicy, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_verticalscrollbarpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setVerticalScrollBarPolicy, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setverticalscrollbarpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, verticalScrollBar, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_verticalscrollbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setVerticalScrollBar, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setverticalscrollbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, horizontalScrollBarPolicy, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_horizontalscrollbarpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setHorizontalScrollBarPolicy, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_sethorizontalscrollbarpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, horizontalScrollBar, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_horizontalscrollbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setHorizontalScrollBar, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_sethorizontalscrollbar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, cornerWidget, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_cornerwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setCornerWidget, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setcornerwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, addScrollBarWidget, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_addscrollbarwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, scrollBarWidgets, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_scrollbarwidgets, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, viewport, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_viewport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setViewport, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setviewport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, maximumViewportSize, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_maximumviewportsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, minimumSizeHint, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, sizeHint, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setupViewport, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setupviewport, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, sizeAdjustPolicy, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_sizeadjustpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setSizeAdjustPolicy, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setsizeadjustpolicy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setViewportMargins, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setviewportmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, setViewportMarginsQMargins, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_setviewportmarginsqmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, viewportMargins, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_viewportmargins, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, eventFilter, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, event, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, viewportEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_viewportevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, resizeEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, paintEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, mousePressEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, mouseReleaseEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, mouseDoubleClickEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_mousedoubleclickevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, mouseMoveEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, wheelEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_wheelevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, contextMenuEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_contextmenuevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, dragEnterEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_dragenterevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, dragMoveEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_dragmoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, dragLeaveEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_dragleaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, dropEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_dropevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, keyPressEvent, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, scrollContentsBy, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_scrollcontentsby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QAbstractScrollArea_QAbstractScrollArea, viewportSizeHint, arginfo_qt_widgets_qabstractscrollarea_qabstractscrollarea_viewportsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
