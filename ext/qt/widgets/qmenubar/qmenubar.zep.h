
extern zend_class_entry *qt_widgets_qmenubar_qmenubar_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QMenuBar_QMenuBar);

PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addAction);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addActionQString);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addActionQIconQString);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addActionQStringQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addActionQIconQStringQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addActionQStringQKeySequence);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addActionQIconQStringQKeySequence);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addActionQStringQKeySequenceQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addActionQIconQStringQKeySequenceQObjectCharQtConnectionType);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, staticMetaObject);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, tr);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, new_);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addMenu);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addMenuQString);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addMenuQIconQString);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, addSeparator);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, insertSeparator);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, insertMenu);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, clear);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, activeAction);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, setActiveAction);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, setDefaultUp);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, isDefaultUp);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, sizeHint);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, heightForWidth);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, actionGeometry);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, actionAt);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, setCornerWidget);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, cornerWidget);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, isNativeMenuBar);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, setNativeMenuBar);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, setVisible);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, triggered);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, hovered);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, changeEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, keyPressEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, mousePressEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, leaveEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, paintEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, resizeEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, actionEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, focusOutEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, focusInEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, timerEvent);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, eventFilter);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, event);
PHP_METHOD(Qt_Widgets_QMenuBar_QMenuBar, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addactionqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addactionqiconqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addactionqstringqobjectcharqtconnectiontype, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addactionqiconqstringqobjectcharqtconnectiontype, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addactionqstringqkeysequence, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addactionqiconqstringqkeysequence, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addactionqstringqkeysequenceqobjectcharqtconnectiontype, 0, 5, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addactionqiconqstringqkeysequenceqobjectcharqtconnectiontype, 0, 6, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, shortcut, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addmenu, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addmenuqstring, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addmenuqiconqstring, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, icon, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, title, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_addseparator, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_insertseparator, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_insertmenu, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, before, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, menu, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_activeaction, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_setactiveaction, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_setdefaultup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_isdefaultup, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_actiongeometry, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_actionat, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_setcornerwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, w, IS_LONG, 0)
	ZEND_ARG_INFO(0, corner)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_cornerwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, corner)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_isnativemenubar, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_setnativemenubar, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, nativeMenuBar, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_triggered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_hovered, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_leaveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_actionevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_focusinevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_timerevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qmenubar_qmenubar_initstyleoption, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, action, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qmenubar_qmenubar_method_entry) {
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addAction, arginfo_qt_widgets_qmenubar_qmenubar_addaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addActionQString, arginfo_qt_widgets_qmenubar_qmenubar_addactionqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addActionQIconQString, arginfo_qt_widgets_qmenubar_qmenubar_addactionqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addActionQStringQObjectCharQtConnectionType, arginfo_qt_widgets_qmenubar_qmenubar_addactionqstringqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addActionQIconQStringQObjectCharQtConnectionType, arginfo_qt_widgets_qmenubar_qmenubar_addactionqiconqstringqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addActionQStringQKeySequence, arginfo_qt_widgets_qmenubar_qmenubar_addactionqstringqkeysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addActionQIconQStringQKeySequence, arginfo_qt_widgets_qmenubar_qmenubar_addactionqiconqstringqkeysequence, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addActionQStringQKeySequenceQObjectCharQtConnectionType, arginfo_qt_widgets_qmenubar_qmenubar_addactionqstringqkeysequenceqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addActionQIconQStringQKeySequenceQObjectCharQtConnectionType, arginfo_qt_widgets_qmenubar_qmenubar_addactionqiconqstringqkeysequenceqobjectcharqtconnectiontype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, staticMetaObject, arginfo_qt_widgets_qmenubar_qmenubar_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, tr, arginfo_qt_widgets_qmenubar_qmenubar_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, new_, arginfo_qt_widgets_qmenubar_qmenubar_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addMenu, arginfo_qt_widgets_qmenubar_qmenubar_addmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addMenuQString, arginfo_qt_widgets_qmenubar_qmenubar_addmenuqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addMenuQIconQString, arginfo_qt_widgets_qmenubar_qmenubar_addmenuqiconqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, addSeparator, arginfo_qt_widgets_qmenubar_qmenubar_addseparator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, insertSeparator, arginfo_qt_widgets_qmenubar_qmenubar_insertseparator, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, insertMenu, arginfo_qt_widgets_qmenubar_qmenubar_insertmenu, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, clear, arginfo_qt_widgets_qmenubar_qmenubar_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, activeAction, arginfo_qt_widgets_qmenubar_qmenubar_activeaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, setActiveAction, arginfo_qt_widgets_qmenubar_qmenubar_setactiveaction, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, setDefaultUp, arginfo_qt_widgets_qmenubar_qmenubar_setdefaultup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, isDefaultUp, arginfo_qt_widgets_qmenubar_qmenubar_isdefaultup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, sizeHint, arginfo_qt_widgets_qmenubar_qmenubar_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, minimumSizeHint, arginfo_qt_widgets_qmenubar_qmenubar_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, heightForWidth, arginfo_qt_widgets_qmenubar_qmenubar_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, actionGeometry, arginfo_qt_widgets_qmenubar_qmenubar_actiongeometry, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, actionAt, arginfo_qt_widgets_qmenubar_qmenubar_actionat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, setCornerWidget, arginfo_qt_widgets_qmenubar_qmenubar_setcornerwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, cornerWidget, arginfo_qt_widgets_qmenubar_qmenubar_cornerwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, isNativeMenuBar, arginfo_qt_widgets_qmenubar_qmenubar_isnativemenubar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, setNativeMenuBar, arginfo_qt_widgets_qmenubar_qmenubar_setnativemenubar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, setVisible, arginfo_qt_widgets_qmenubar_qmenubar_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, triggered, arginfo_qt_widgets_qmenubar_qmenubar_triggered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, hovered, arginfo_qt_widgets_qmenubar_qmenubar_hovered, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, changeEvent, arginfo_qt_widgets_qmenubar_qmenubar_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, keyPressEvent, arginfo_qt_widgets_qmenubar_qmenubar_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, mouseReleaseEvent, arginfo_qt_widgets_qmenubar_qmenubar_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, mousePressEvent, arginfo_qt_widgets_qmenubar_qmenubar_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, mouseMoveEvent, arginfo_qt_widgets_qmenubar_qmenubar_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, leaveEvent, arginfo_qt_widgets_qmenubar_qmenubar_leaveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, paintEvent, arginfo_qt_widgets_qmenubar_qmenubar_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, resizeEvent, arginfo_qt_widgets_qmenubar_qmenubar_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, actionEvent, arginfo_qt_widgets_qmenubar_qmenubar_actionevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, focusOutEvent, arginfo_qt_widgets_qmenubar_qmenubar_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, focusInEvent, arginfo_qt_widgets_qmenubar_qmenubar_focusinevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, timerEvent, arginfo_qt_widgets_qmenubar_qmenubar_timerevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, eventFilter, arginfo_qt_widgets_qmenubar_qmenubar_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, event, arginfo_qt_widgets_qmenubar_qmenubar_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QMenuBar_QMenuBar, initStyleOption, arginfo_qt_widgets_qmenubar_qmenubar_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
