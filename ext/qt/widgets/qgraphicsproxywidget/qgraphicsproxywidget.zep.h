
extern zend_class_entry *qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget);

PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, tr);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, new_);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, setWidget);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, widget);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, subWidgetRect);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, setGeometry);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, paint);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, type);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, createProxyForChildWidget);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, itemChange);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, event);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, eventFilter);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, showEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, hideEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, contextMenuEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, dragEnterEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, dragLeaveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, dragMoveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, dropEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, hoverEnterEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, hoverLeaveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, hoverMoveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, grabMouseEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, ungrabMouseEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, mousePressEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, mouseDoubleClickEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, wheelEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, keyPressEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, keyReleaseEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, focusInEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, focusOutEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, focusNextPrevChild);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, inputMethodQuery);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, inputMethodEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, sizeHint);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, resizeEvent);
PHP_METHOD(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, newProxyWidget);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, wFlags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_setwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_subwidgetrect, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_setgeometry, 0, 5, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rectX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectY, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, rectHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_paint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_createproxyforchildwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, child, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_itemchange, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, change, IS_LONG, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, object_, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_hideevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_contextmenuevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_dragenterevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_dragleaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_dragmoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_dropevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_hoverenterevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_hoverleaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_hovermoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_grabmouseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_ungrabmouseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_mousedoubleclickevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_wheelevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_keyreleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_focusinevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_focusnextprevchild, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, next, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_inputmethodquery, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_inputmethodevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_sizehint, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_INFO(0, constraintWidth)
	ZEND_ARG_INFO(0, constraintHeight)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_newproxywidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, staticMetaObject, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, tr, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, new_, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, setWidget, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_setwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, widget, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, subWidgetRect, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_subwidgetrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, setGeometry, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_setgeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, paint, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, type, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, createProxyForChildWidget, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_createproxyforchildwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, itemChange, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_itemchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, event, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, eventFilter, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, showEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, hideEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_hideevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, contextMenuEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_contextmenuevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, dragEnterEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_dragenterevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, dragLeaveEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_dragleaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, dragMoveEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_dragmoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, dropEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_dropevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, hoverEnterEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_hoverenterevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, hoverLeaveEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_hoverleaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, hoverMoveEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_hovermoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, grabMouseEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_grabmouseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, ungrabMouseEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_ungrabmouseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, mouseMoveEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, mousePressEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, mouseReleaseEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, mouseDoubleClickEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_mousedoubleclickevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, wheelEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_wheelevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, keyPressEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, keyReleaseEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_keyreleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, focusInEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_focusinevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, focusOutEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, focusNextPrevChild, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_focusnextprevchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, inputMethodQuery, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_inputmethodquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, inputMethodEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_inputmethodevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, sizeHint, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, resizeEvent, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsProxyWidget_QGraphicsProxyWidget, newProxyWidget, arginfo_qt_widgets_qgraphicsproxywidget_qgraphicsproxywidget_newproxywidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
