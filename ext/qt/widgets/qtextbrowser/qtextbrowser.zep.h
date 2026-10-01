
extern zend_class_entry *qt_widgets_qtextbrowser_qtextbrowser_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTextBrowser_QTextBrowser);

PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, staticMetaObject);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, tr);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, new_);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, source);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, sourceType);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, searchPaths);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, setSearchPaths);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, loadResource);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, isBackwardAvailable);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, isForwardAvailable);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, clearHistory);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, historyTitle);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, historyUrl);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, backwardHistoryCount);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, forwardHistoryCount);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, openExternalLinks);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, setOpenExternalLinks);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, openLinks);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, setOpenLinks);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, setSource);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, backward);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, forward);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, home);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, reload);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, backwardAvailable);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, forwardAvailable);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, historyChanged);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, sourceChanged);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, highlighted);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, anchorClicked);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, event);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, keyPressEvent);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, mousePressEvent);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, focusOutEvent);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, focusNextPrevChild);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, paintEvent);
PHP_METHOD(Qt_Widgets_QTextBrowser_QTextBrowser, doSetSource);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_source, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_sourcetype, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_searchpaths, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_setsearchpaths, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, paths, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_loadresource, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_isbackwardavailable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_isforwardavailable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_clearhistory, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_historytitle, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_historyurl, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_backwardhistorycount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_forwardhistorycount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_openexternallinks, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_setopenexternallinks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, open, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_openlinks, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_setopenlinks, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, open, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_setsource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_backward, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_forward, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_home, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_reload, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_backwardavailable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_forwardavailable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_historychanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_sourcechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_highlighted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_anchorclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_keypressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_focusoutevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, ev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_focusnextprevchild, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, next, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtextbrowser_qtextbrowser_dosetsource, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
	ZEND_ARG_INFO(0, type)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtextbrowser_qtextbrowser_method_entry) {
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, staticMetaObject, arginfo_qt_widgets_qtextbrowser_qtextbrowser_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, tr, arginfo_qt_widgets_qtextbrowser_qtextbrowser_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, new_, arginfo_qt_widgets_qtextbrowser_qtextbrowser_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, source, arginfo_qt_widgets_qtextbrowser_qtextbrowser_source, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, sourceType, arginfo_qt_widgets_qtextbrowser_qtextbrowser_sourcetype, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, searchPaths, arginfo_qt_widgets_qtextbrowser_qtextbrowser_searchpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, setSearchPaths, arginfo_qt_widgets_qtextbrowser_qtextbrowser_setsearchpaths, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, loadResource, arginfo_qt_widgets_qtextbrowser_qtextbrowser_loadresource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, isBackwardAvailable, arginfo_qt_widgets_qtextbrowser_qtextbrowser_isbackwardavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, isForwardAvailable, arginfo_qt_widgets_qtextbrowser_qtextbrowser_isforwardavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, clearHistory, arginfo_qt_widgets_qtextbrowser_qtextbrowser_clearhistory, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, historyTitle, arginfo_qt_widgets_qtextbrowser_qtextbrowser_historytitle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, historyUrl, arginfo_qt_widgets_qtextbrowser_qtextbrowser_historyurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, backwardHistoryCount, arginfo_qt_widgets_qtextbrowser_qtextbrowser_backwardhistorycount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, forwardHistoryCount, arginfo_qt_widgets_qtextbrowser_qtextbrowser_forwardhistorycount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, openExternalLinks, arginfo_qt_widgets_qtextbrowser_qtextbrowser_openexternallinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, setOpenExternalLinks, arginfo_qt_widgets_qtextbrowser_qtextbrowser_setopenexternallinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, openLinks, arginfo_qt_widgets_qtextbrowser_qtextbrowser_openlinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, setOpenLinks, arginfo_qt_widgets_qtextbrowser_qtextbrowser_setopenlinks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, setSource, arginfo_qt_widgets_qtextbrowser_qtextbrowser_setsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, backward, arginfo_qt_widgets_qtextbrowser_qtextbrowser_backward, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, forward, arginfo_qt_widgets_qtextbrowser_qtextbrowser_forward, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, home, arginfo_qt_widgets_qtextbrowser_qtextbrowser_home, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, reload, arginfo_qt_widgets_qtextbrowser_qtextbrowser_reload, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, backwardAvailable, arginfo_qt_widgets_qtextbrowser_qtextbrowser_backwardavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, forwardAvailable, arginfo_qt_widgets_qtextbrowser_qtextbrowser_forwardavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, historyChanged, arginfo_qt_widgets_qtextbrowser_qtextbrowser_historychanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, sourceChanged, arginfo_qt_widgets_qtextbrowser_qtextbrowser_sourcechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, highlighted, arginfo_qt_widgets_qtextbrowser_qtextbrowser_highlighted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, anchorClicked, arginfo_qt_widgets_qtextbrowser_qtextbrowser_anchorclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, event, arginfo_qt_widgets_qtextbrowser_qtextbrowser_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, keyPressEvent, arginfo_qt_widgets_qtextbrowser_qtextbrowser_keypressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, mouseMoveEvent, arginfo_qt_widgets_qtextbrowser_qtextbrowser_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, mousePressEvent, arginfo_qt_widgets_qtextbrowser_qtextbrowser_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, mouseReleaseEvent, arginfo_qt_widgets_qtextbrowser_qtextbrowser_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, focusOutEvent, arginfo_qt_widgets_qtextbrowser_qtextbrowser_focusoutevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, focusNextPrevChild, arginfo_qt_widgets_qtextbrowser_qtextbrowser_focusnextprevchild, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, paintEvent, arginfo_qt_widgets_qtextbrowser_qtextbrowser_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTextBrowser_QTextBrowser, doSetSource, arginfo_qt_widgets_qtextbrowser_qtextbrowser_dosetsource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
