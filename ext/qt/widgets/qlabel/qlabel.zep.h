
extern zend_class_entry *qt_widgets_qlabel_qlabel_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QLabel_QLabel);

PHP_METHOD(Qt_Widgets_QLabel_QLabel, staticMetaObject);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, tr);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, new_);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, newQStringQWidgetQtWindowFlags);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, text);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, pixmap);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, pixmap2);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, picture);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, picture2);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, movie);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, textFormat);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setTextFormat);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, alignment);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setAlignment);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setWordWrap);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, wordWrap);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, indent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setIndent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, margin);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setMargin);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, hasScaledContents);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setScaledContents);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, sizeHint);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setBuddy);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, buddy);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, heightForWidth);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, openExternalLinks);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setOpenExternalLinks);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setTextInteractionFlags);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, textInteractionFlags);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setSelection);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, hasSelectedText);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, selectedText);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, selectionStart);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setText);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setPixmap);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setPicture);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setMovie);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setNum);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, setNumDouble);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, clear);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, linkActivated);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, linkHovered);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, event);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, keyPressEvent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, paintEvent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, changeEvent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, mousePressEvent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, contextMenuEvent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, focusInEvent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, focusOutEvent);
PHP_METHOD(Qt_Widgets_QLabel_QLabel, focusNextPrevChild);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_newqstringqwidgetqtwindowflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, f)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_pixmap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_pixmap2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_picture, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_picture2, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_movie, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_textformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_settextformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_alignment, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setalignment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setwordwrap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_wordwrap, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_indent, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setindent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_margin, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_hasscaledcontents, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setscaledcontents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setbuddy, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_buddy, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_openexternallinks, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setopenexternallinks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, open, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_settextinteractionflags, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, flags, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_textinteractionflags, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setselection, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_hasselectedtext, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_selectedtext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_selectionstart, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_settext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setpixmap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setpicture, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setmovie, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, movie, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setnum, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_setnumdouble, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_linkactivated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, link, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_linkhovered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, link, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_contextmenuevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_focusinevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qlabel_qlabel_focusnextprevchild, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, next, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qlabel_qlabel_method_entry) {
	PHP_ME(Qt_Widgets_QLabel_QLabel, staticMetaObject, arginfo_qt_widgets_qlabel_qlabel_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, tr, arginfo_qt_widgets_qlabel_qlabel_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, new_, arginfo_qt_widgets_qlabel_qlabel_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, newQStringQWidgetQtWindowFlags, arginfo_qt_widgets_qlabel_qlabel_newqstringqwidgetqtwindowflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, text, arginfo_qt_widgets_qlabel_qlabel_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, pixmap, arginfo_qt_widgets_qlabel_qlabel_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, pixmap2, arginfo_qt_widgets_qlabel_qlabel_pixmap2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, picture, arginfo_qt_widgets_qlabel_qlabel_picture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, picture2, arginfo_qt_widgets_qlabel_qlabel_picture2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, movie, arginfo_qt_widgets_qlabel_qlabel_movie, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, textFormat, arginfo_qt_widgets_qlabel_qlabel_textformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setTextFormat, arginfo_qt_widgets_qlabel_qlabel_settextformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, alignment, arginfo_qt_widgets_qlabel_qlabel_alignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setAlignment, arginfo_qt_widgets_qlabel_qlabel_setalignment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setWordWrap, arginfo_qt_widgets_qlabel_qlabel_setwordwrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, wordWrap, arginfo_qt_widgets_qlabel_qlabel_wordwrap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, indent, arginfo_qt_widgets_qlabel_qlabel_indent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setIndent, arginfo_qt_widgets_qlabel_qlabel_setindent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, margin, arginfo_qt_widgets_qlabel_qlabel_margin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setMargin, arginfo_qt_widgets_qlabel_qlabel_setmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, hasScaledContents, arginfo_qt_widgets_qlabel_qlabel_hasscaledcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setScaledContents, arginfo_qt_widgets_qlabel_qlabel_setscaledcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, sizeHint, arginfo_qt_widgets_qlabel_qlabel_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, minimumSizeHint, arginfo_qt_widgets_qlabel_qlabel_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setBuddy, arginfo_qt_widgets_qlabel_qlabel_setbuddy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, buddy, arginfo_qt_widgets_qlabel_qlabel_buddy, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, heightForWidth, arginfo_qt_widgets_qlabel_qlabel_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, openExternalLinks, arginfo_qt_widgets_qlabel_qlabel_openexternallinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setOpenExternalLinks, arginfo_qt_widgets_qlabel_qlabel_setopenexternallinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setTextInteractionFlags, arginfo_qt_widgets_qlabel_qlabel_settextinteractionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, textInteractionFlags, arginfo_qt_widgets_qlabel_qlabel_textinteractionflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setSelection, arginfo_qt_widgets_qlabel_qlabel_setselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, hasSelectedText, arginfo_qt_widgets_qlabel_qlabel_hasselectedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, selectedText, arginfo_qt_widgets_qlabel_qlabel_selectedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, selectionStart, arginfo_qt_widgets_qlabel_qlabel_selectionstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setText, arginfo_qt_widgets_qlabel_qlabel_settext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setPixmap, arginfo_qt_widgets_qlabel_qlabel_setpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setPicture, arginfo_qt_widgets_qlabel_qlabel_setpicture, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setMovie, arginfo_qt_widgets_qlabel_qlabel_setmovie, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setNum, arginfo_qt_widgets_qlabel_qlabel_setnum, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, setNumDouble, arginfo_qt_widgets_qlabel_qlabel_setnumdouble, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, clear, arginfo_qt_widgets_qlabel_qlabel_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, linkActivated, arginfo_qt_widgets_qlabel_qlabel_linkactivated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, linkHovered, arginfo_qt_widgets_qlabel_qlabel_linkhovered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, event, arginfo_qt_widgets_qlabel_qlabel_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, keyPressEvent, arginfo_qt_widgets_qlabel_qlabel_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, paintEvent, arginfo_qt_widgets_qlabel_qlabel_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, changeEvent, arginfo_qt_widgets_qlabel_qlabel_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, mousePressEvent, arginfo_qt_widgets_qlabel_qlabel_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, mouseMoveEvent, arginfo_qt_widgets_qlabel_qlabel_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, mouseReleaseEvent, arginfo_qt_widgets_qlabel_qlabel_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, contextMenuEvent, arginfo_qt_widgets_qlabel_qlabel_contextmenuevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, focusInEvent, arginfo_qt_widgets_qlabel_qlabel_focusinevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, focusOutEvent, arginfo_qt_widgets_qlabel_qlabel_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QLabel_QLabel, focusNextPrevChild, arginfo_qt_widgets_qlabel_qlabel_focusnextprevchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
