
extern zend_class_entry *qt_widgets_qwizard_qwizard_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QWizard_QWizard);

PHP_METHOD(Qt_Widgets_QWizard_QWizard, staticMetaObject);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, tr);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, new_);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, addPage);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setPage);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, removePage);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, page);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, hasVisitedPage);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, visitedIds);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, pageIds);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setStartId);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, startId);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, currentPage);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, currentId);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, validateCurrentPage);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, nextId);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setField);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, field);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setWizardStyle);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, wizardStyle);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setOption);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, testOption);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setOptions);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, options);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setButtonText);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, buttonText);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setButtonLayout);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setButton);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, button);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setTitleFormat);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, titleFormat);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setSubTitleFormat);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, subTitleFormat);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setPixmap);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, pixmap);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setSideWidget);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, sideWidget);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setDefaultProperty);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setVisible);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, sizeHint);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, currentIdChanged);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, helpRequested);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, customButtonClicked);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, pageAdded);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, pageRemoved);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, back);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, next);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, setCurrentId);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, restart);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, event);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, resizeEvent);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, paintEvent);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, done);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, initializePage);
PHP_METHOD(Qt_Widgets_QWizard_QWizard, cleanupPage);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
	ZEND_ARG_INFO(0, flags)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_addpage, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, page, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setpage, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, page, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_removepage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_page, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_hasvisitedpage, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_visitedids, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_pageids, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setstartid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_startid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_currentpage, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_currentid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_validatecurrentpage, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_nextid, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setfield, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_INFO(0, value)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_field, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setwizardstyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_wizardstyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setbuttontext, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_buttontext, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setbuttonlayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, layout, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setbutton, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_button, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_settitleformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_titleformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setsubtitleformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_subtitleformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setpixmap, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pixmap, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_pixmap, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setsidewidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_sidewidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setdefaultproperty, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, className)
	ZEND_ARG_INFO(0, property)
	ZEND_ARG_INFO(0, changedSignal)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_currentidchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_helprequested, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_custombuttonclicked, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, which, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_pageadded, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_pageremoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_back, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_next, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_setcurrentid, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_restart, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_done, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_initializepage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qwizard_qwizard_cleanuppage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, id, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qwizard_qwizard_method_entry) {
	PHP_ME(Qt_Widgets_QWizard_QWizard, staticMetaObject, arginfo_qt_widgets_qwizard_qwizard_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, tr, arginfo_qt_widgets_qwizard_qwizard_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, new_, arginfo_qt_widgets_qwizard_qwizard_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, addPage, arginfo_qt_widgets_qwizard_qwizard_addpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setPage, arginfo_qt_widgets_qwizard_qwizard_setpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, removePage, arginfo_qt_widgets_qwizard_qwizard_removepage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, page, arginfo_qt_widgets_qwizard_qwizard_page, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, hasVisitedPage, arginfo_qt_widgets_qwizard_qwizard_hasvisitedpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, visitedIds, arginfo_qt_widgets_qwizard_qwizard_visitedids, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, pageIds, arginfo_qt_widgets_qwizard_qwizard_pageids, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setStartId, arginfo_qt_widgets_qwizard_qwizard_setstartid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, startId, arginfo_qt_widgets_qwizard_qwizard_startid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, currentPage, arginfo_qt_widgets_qwizard_qwizard_currentpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, currentId, arginfo_qt_widgets_qwizard_qwizard_currentid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, validateCurrentPage, arginfo_qt_widgets_qwizard_qwizard_validatecurrentpage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, nextId, arginfo_qt_widgets_qwizard_qwizard_nextid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setField, arginfo_qt_widgets_qwizard_qwizard_setfield, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, field, arginfo_qt_widgets_qwizard_qwizard_field, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setWizardStyle, arginfo_qt_widgets_qwizard_qwizard_setwizardstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, wizardStyle, arginfo_qt_widgets_qwizard_qwizard_wizardstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setOption, arginfo_qt_widgets_qwizard_qwizard_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, testOption, arginfo_qt_widgets_qwizard_qwizard_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setOptions, arginfo_qt_widgets_qwizard_qwizard_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, options, arginfo_qt_widgets_qwizard_qwizard_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setButtonText, arginfo_qt_widgets_qwizard_qwizard_setbuttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, buttonText, arginfo_qt_widgets_qwizard_qwizard_buttontext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setButtonLayout, arginfo_qt_widgets_qwizard_qwizard_setbuttonlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setButton, arginfo_qt_widgets_qwizard_qwizard_setbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, button, arginfo_qt_widgets_qwizard_qwizard_button, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setTitleFormat, arginfo_qt_widgets_qwizard_qwizard_settitleformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, titleFormat, arginfo_qt_widgets_qwizard_qwizard_titleformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setSubTitleFormat, arginfo_qt_widgets_qwizard_qwizard_setsubtitleformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, subTitleFormat, arginfo_qt_widgets_qwizard_qwizard_subtitleformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setPixmap, arginfo_qt_widgets_qwizard_qwizard_setpixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, pixmap, arginfo_qt_widgets_qwizard_qwizard_pixmap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setSideWidget, arginfo_qt_widgets_qwizard_qwizard_setsidewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, sideWidget, arginfo_qt_widgets_qwizard_qwizard_sidewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setDefaultProperty, arginfo_qt_widgets_qwizard_qwizard_setdefaultproperty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setVisible, arginfo_qt_widgets_qwizard_qwizard_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, sizeHint, arginfo_qt_widgets_qwizard_qwizard_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, currentIdChanged, arginfo_qt_widgets_qwizard_qwizard_currentidchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, helpRequested, arginfo_qt_widgets_qwizard_qwizard_helprequested, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, customButtonClicked, arginfo_qt_widgets_qwizard_qwizard_custombuttonclicked, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, pageAdded, arginfo_qt_widgets_qwizard_qwizard_pageadded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, pageRemoved, arginfo_qt_widgets_qwizard_qwizard_pageremoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, back, arginfo_qt_widgets_qwizard_qwizard_back, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, next, arginfo_qt_widgets_qwizard_qwizard_next, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, setCurrentId, arginfo_qt_widgets_qwizard_qwizard_setcurrentid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, restart, arginfo_qt_widgets_qwizard_qwizard_restart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, event, arginfo_qt_widgets_qwizard_qwizard_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, resizeEvent, arginfo_qt_widgets_qwizard_qwizard_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, paintEvent, arginfo_qt_widgets_qwizard_qwizard_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, done, arginfo_qt_widgets_qwizard_qwizard_done, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, initializePage, arginfo_qt_widgets_qwizard_qwizard_initializepage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QWizard_QWizard, cleanupPage, arginfo_qt_widgets_qwizard_qwizard_cleanuppage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
