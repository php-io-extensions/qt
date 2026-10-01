
extern zend_class_entry *qt_widgets_qcompleter_qcompleter_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QCompleter_QCompleter);

PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, staticMetaObject);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, tr);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, new_);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, newQAbstractItemModelQObject);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, newQStringListQObject);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setWidget);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, widget);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setModel);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, model);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setCompletionMode);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, completionMode);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setFilterMode);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, filterMode);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, popup);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setPopup);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setCaseSensitivity);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, caseSensitivity);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setModelSorting);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, modelSorting);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setCompletionColumn);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, completionColumn);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setCompletionRole);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, completionRole);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, wrapAround);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, maxVisibleItems);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setMaxVisibleItems);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, completionCount);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setCurrentRow);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, currentRow);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, currentIndex);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, currentCompletion);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, completionModel);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, completionPrefix);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setCompletionPrefix);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, complete);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, setWrapAround);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, pathFromIndex);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, splitPath);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, eventFilter);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, event);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, activated);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, activatedQModelIndex);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, highlighted);
PHP_METHOD(Qt_Widgets_QCompleter_QCompleter, highlightedQModelIndex);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_newqabstractitemmodelqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, model, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_newqstringlistqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_ARRAY_INFO(0, completions, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setmodel, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, c, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_model, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setcompletionmode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_completionmode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setfiltermode, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, filterMode, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_filtermode, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_popup, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setpopup, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, popup, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setcasesensitivity, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, caseSensitivity, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_casesensitivity, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setmodelsorting, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sorting, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_modelsorting, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setcompletioncolumn, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, column, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_completioncolumn, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setcompletionrole, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, role, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_completionrole, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_wraparound, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_maxvisibleitems, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setmaxvisibleitems, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maxItems, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_completioncount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setcurrentrow, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, row, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_currentrow, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_currentindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_currentcompletion, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_completionmodel, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_completionprefix, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setcompletionprefix, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_complete, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, rectX)
	ZEND_ARG_INFO(0, rectY)
	ZEND_ARG_INFO(0, rectWidth)
	ZEND_ARG_INFO(0, rectHeight)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_setwraparound, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, wrap, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_pathfromindex, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_splitpath, 0, 2, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_activated, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_activatedqmodelindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_highlighted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcompleter_qcompleter_highlightedqmodelindex, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qcompleter_qcompleter_method_entry) {
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, staticMetaObject, arginfo_qt_widgets_qcompleter_qcompleter_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, tr, arginfo_qt_widgets_qcompleter_qcompleter_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, new_, arginfo_qt_widgets_qcompleter_qcompleter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, newQAbstractItemModelQObject, arginfo_qt_widgets_qcompleter_qcompleter_newqabstractitemmodelqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, newQStringListQObject, arginfo_qt_widgets_qcompleter_qcompleter_newqstringlistqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setWidget, arginfo_qt_widgets_qcompleter_qcompleter_setwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, widget, arginfo_qt_widgets_qcompleter_qcompleter_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setModel, arginfo_qt_widgets_qcompleter_qcompleter_setmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, model, arginfo_qt_widgets_qcompleter_qcompleter_model, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setCompletionMode, arginfo_qt_widgets_qcompleter_qcompleter_setcompletionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, completionMode, arginfo_qt_widgets_qcompleter_qcompleter_completionmode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setFilterMode, arginfo_qt_widgets_qcompleter_qcompleter_setfiltermode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, filterMode, arginfo_qt_widgets_qcompleter_qcompleter_filtermode, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, popup, arginfo_qt_widgets_qcompleter_qcompleter_popup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setPopup, arginfo_qt_widgets_qcompleter_qcompleter_setpopup, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setCaseSensitivity, arginfo_qt_widgets_qcompleter_qcompleter_setcasesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, caseSensitivity, arginfo_qt_widgets_qcompleter_qcompleter_casesensitivity, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setModelSorting, arginfo_qt_widgets_qcompleter_qcompleter_setmodelsorting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, modelSorting, arginfo_qt_widgets_qcompleter_qcompleter_modelsorting, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setCompletionColumn, arginfo_qt_widgets_qcompleter_qcompleter_setcompletioncolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, completionColumn, arginfo_qt_widgets_qcompleter_qcompleter_completioncolumn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setCompletionRole, arginfo_qt_widgets_qcompleter_qcompleter_setcompletionrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, completionRole, arginfo_qt_widgets_qcompleter_qcompleter_completionrole, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, wrapAround, arginfo_qt_widgets_qcompleter_qcompleter_wraparound, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, maxVisibleItems, arginfo_qt_widgets_qcompleter_qcompleter_maxvisibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setMaxVisibleItems, arginfo_qt_widgets_qcompleter_qcompleter_setmaxvisibleitems, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, completionCount, arginfo_qt_widgets_qcompleter_qcompleter_completioncount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setCurrentRow, arginfo_qt_widgets_qcompleter_qcompleter_setcurrentrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, currentRow, arginfo_qt_widgets_qcompleter_qcompleter_currentrow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, currentIndex, arginfo_qt_widgets_qcompleter_qcompleter_currentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, currentCompletion, arginfo_qt_widgets_qcompleter_qcompleter_currentcompletion, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, completionModel, arginfo_qt_widgets_qcompleter_qcompleter_completionmodel, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, completionPrefix, arginfo_qt_widgets_qcompleter_qcompleter_completionprefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setCompletionPrefix, arginfo_qt_widgets_qcompleter_qcompleter_setcompletionprefix, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, complete, arginfo_qt_widgets_qcompleter_qcompleter_complete, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, setWrapAround, arginfo_qt_widgets_qcompleter_qcompleter_setwraparound, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, pathFromIndex, arginfo_qt_widgets_qcompleter_qcompleter_pathfromindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, splitPath, arginfo_qt_widgets_qcompleter_qcompleter_splitpath, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, eventFilter, arginfo_qt_widgets_qcompleter_qcompleter_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, event, arginfo_qt_widgets_qcompleter_qcompleter_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, activated, arginfo_qt_widgets_qcompleter_qcompleter_activated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, activatedQModelIndex, arginfo_qt_widgets_qcompleter_qcompleter_activatedqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, highlighted, arginfo_qt_widgets_qcompleter_qcompleter_highlighted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCompleter_QCompleter, highlightedQModelIndex, arginfo_qt_widgets_qcompleter_qcompleter_highlightedqmodelindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
