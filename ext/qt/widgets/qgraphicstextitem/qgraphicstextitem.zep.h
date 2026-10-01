
extern zend_class_entry *qt_widgets_qgraphicstextitem_qgraphicstextitem_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem);

PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, staticMetaObject);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, tr);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, new_);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, newQStringQGraphicsItem);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, toHtml);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setHtml);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, toPlainText);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setPlainText);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, font);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setFont);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setDefaultTextColor);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, defaultTextColor);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, boundingRect);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, shape);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, contains);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, paint);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, isObscuredBy);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, opaqueArea);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, type);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setTextWidth);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, textWidth);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, adjustSize);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setDocument);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, document);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setTextInteractionFlags);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, textInteractionFlags);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setTabChangesFocus);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, tabChangesFocus);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setOpenExternalLinks);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, openExternalLinks);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setTextCursor);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, textCursor);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, linkActivated);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, linkHovered);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, sceneEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, mousePressEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, mouseDoubleClickEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, contextMenuEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, keyPressEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, keyReleaseEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, focusInEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, focusOutEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, dragEnterEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, dragLeaveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, dragMoveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, dropEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, inputMethodEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, hoverEnterEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, hoverMoveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, hoverLeaveEvent);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, inputMethodQuery);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, supportsExtension);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setExtension);
PHP_METHOD(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, extension);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_newqstringqgraphicsitem, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_tohtml, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_sethtml, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, html, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_toplaintext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setplaintext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_font, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setdefaulttextcolor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_defaulttextcolor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_boundingrect, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_shape, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_contains, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pointX, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, pointY, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_paint, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_isobscuredby, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, item, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_opaquearea, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_type, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_settextwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_textwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_adjustsize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setdocument, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_document, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_settextinteractionflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_textinteractionflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_settabchangesfocus, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_tabchangesfocus, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setopenexternallinks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, open, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_openexternallinks, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_settextcursor, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_textcursor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_linkactivated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_linkhovered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_sceneevent, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_mousedoubleclickevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_contextmenuevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_keyreleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_focusinevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_dragenterevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_dragleaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_dragmoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_dropevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_inputmethodevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_hoverenterevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_hovermoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_hoverleaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_inputmethodquery, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, query, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_supportsextension, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setextension, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, extension, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_extension, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, variant)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qgraphicstextitem_qgraphicstextitem_method_entry) {
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, staticMetaObject, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, tr, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, new_, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, newQStringQGraphicsItem, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_newqstringqgraphicsitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, toHtml, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_tohtml, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setHtml, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_sethtml, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, toPlainText, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_toplaintext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setPlainText, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setplaintext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, font, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_font, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setFont, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setDefaultTextColor, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setdefaulttextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, defaultTextColor, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_defaulttextcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, boundingRect, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_boundingrect, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, shape, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_shape, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, contains, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, paint, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_paint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, isObscuredBy, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_isobscuredby, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, opaqueArea, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_opaquearea, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, type, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setTextWidth, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_settextwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, textWidth, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_textwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, adjustSize, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_adjustsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setDocument, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, document, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_document, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setTextInteractionFlags, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_settextinteractionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, textInteractionFlags, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_textinteractionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setTabChangesFocus, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_settabchangesfocus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, tabChangesFocus, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_tabchangesfocus, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setOpenExternalLinks, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setopenexternallinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, openExternalLinks, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_openexternallinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setTextCursor, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_settextcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, textCursor, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_textcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, linkActivated, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_linkactivated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, linkHovered, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_linkhovered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, sceneEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_sceneevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, mousePressEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, mouseMoveEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, mouseReleaseEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, mouseDoubleClickEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_mousedoubleclickevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, contextMenuEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_contextmenuevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, keyPressEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, keyReleaseEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_keyreleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, focusInEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_focusinevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, focusOutEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, dragEnterEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_dragenterevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, dragLeaveEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_dragleaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, dragMoveEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_dragmoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, dropEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_dropevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, inputMethodEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_inputmethodevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, hoverEnterEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_hoverenterevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, hoverMoveEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_hovermoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, hoverLeaveEvent, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_hoverleaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, inputMethodQuery, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_inputmethodquery, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, supportsExtension, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_supportsextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, setExtension, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_setextension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QGraphicsTextItem_QGraphicsTextItem, extension, arginfo_qt_widgets_qgraphicstextitem_qgraphicstextitem_extension, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
