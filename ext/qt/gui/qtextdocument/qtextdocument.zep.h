
extern zend_class_entry *qt_gui_qtextdocument_qtextdocument_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextDocument_QTextDocument);

PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, staticMetaObject);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, tr);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, new_);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, newQStringQObject);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, clone_);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isEmpty);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, clear);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setUndoRedoEnabled);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isUndoRedoEnabled);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isUndoAvailable);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isRedoAvailable);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, availableUndoSteps);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, availableRedoSteps);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, revision);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDocumentLayout);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, documentLayout);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setMetaInformation);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, metaInformation);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, toHtml);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setHtml);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, toMarkdown);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setMarkdown);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, toRawText);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, toPlainText);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setPlainText);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, characterAt);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, find);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findQStringQTextCursorQTextDocumentFindFlags);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findQRegularExpressionIntQTextDocumentFindFlags);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findQRegularExpressionQTextCursorQTextDocumentFindFlags);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, frameAt);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, rootFrame);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, object_);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, objectForFormat);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findBlock);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findBlockByNumber);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, findBlockByLineNumber);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, begin);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, end);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, firstBlock);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, lastBlock);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setPageSize);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, pageSize);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDefaultFont);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, defaultFont);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setSuperScriptBaseline);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, superScriptBaseline);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setSubScriptBaseline);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, subScriptBaseline);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setBaselineOffset);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, baselineOffset);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, pageCount);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isModified);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, print_);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, resource_);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, addResource);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, allFormats);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, markContentsDirty);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setUseDesignMetrics);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, useDesignMetrics);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setLayoutEnabled);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, isLayoutEnabled);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, drawContents);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setTextWidth);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, textWidth);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, idealWidth);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, indentWidth);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setIndentWidth);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, documentMargin);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDocumentMargin);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, adjustSize);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, size);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, blockCount);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, lineCount);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, characterCount);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDefaultStyleSheet);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, defaultStyleSheet);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, undo);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, redo);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, clearUndoRedoStacks);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, maximumBlockCount);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setMaximumBlockCount);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, defaultTextOption);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDefaultTextOption);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, baseUrl);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setBaseUrl);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, defaultCursorMoveStyle);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setDefaultCursorMoveStyle);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, contentsChange);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, contentsChanged);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, undoAvailable);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, redoAvailable);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, undoCommandAdded);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, modificationChanged);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, cursorPositionChanged);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, blockCountChanged);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, baseUrlChanged);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, documentLayoutChanged);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, undo2);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, redo2);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, appendUndoItem);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, setModified);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, createObject);
PHP_METHOD(Qt_Gui_QTextDocument_QTextDocument, loadResource);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_newqstringqobject, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_clone_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setundoredoenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, enable, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_isundoredoenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_isundoavailable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_isredoavailable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_availableundosteps, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_availableredosteps, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_revision, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setdocumentlayout, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, layout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_documentlayout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setmetainformation, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, info, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_metainformation, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, info, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_tohtml, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_sethtml, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, html, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_tomarkdown, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, features)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setmarkdown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, markdown, IS_STRING, 0)
	ZEND_ARG_INFO(0, features)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_torawtext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_toplaintext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setplaintext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_characterat, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_find, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subString, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_findqstringqtextcursorqtextdocumentfindflags, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, subString, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_findqregularexpressionintqtextdocumentfindflags, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_findqregularexpressionqtextcursorqtextdocumentfindflags, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, expr, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
	ZEND_ARG_INFO(0, options)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_frameat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_rootframe, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_object_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, objectIndex, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_objectforformat, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_findblock, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_findblockbynumber, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blockNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_findblockbylinenumber, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, blockNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_begin, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_end, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_firstblock, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_lastblock, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setpagesize, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sizeWidth, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, sizeHeight, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_pagesize, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setdefaultfont, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_defaultfont, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setsuperscriptbaseline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseline, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_superscriptbaseline, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setsubscriptbaseline, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseline, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_subscriptbaseline, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setbaselineoffset, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, baseline, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_baselineoffset, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_pagecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_ismodified, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_print_, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_resource_, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_addresource, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
	ZEND_ARG_INFO(0, resource_)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_allformats, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_markcontentsdirty, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, length, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setusedesignmetrics, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_usedesignmetrics, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setlayoutenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_islayoutenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_drawcontents, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, painter, IS_LONG, 0)
	ZEND_ARG_INFO(0, rectX)
	ZEND_ARG_INFO(0, rectY)
	ZEND_ARG_INFO(0, rectWidth)
	ZEND_ARG_INFO(0, rectHeight)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_settextwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_textwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_idealwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_indentwidth, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setindentwidth, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, width, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_documentmargin, 0, 1, IS_DOUBLE, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setdocumentmargin, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, margin, IS_DOUBLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_adjustsize, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_size, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_blockcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_linecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_charactercount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setdefaultstylesheet, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, sheet, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_defaultstylesheet, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_undo, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_redo, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_clearundoredostacks, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, historyToClear)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_maximumblockcount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setmaximumblockcount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, maximum, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_defaulttextoption, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setdefaulttextoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_baseurl, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setbaseurl, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_defaultcursormovestyle, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setdefaultcursormovestyle, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_contentschange, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, from, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charsRemoved, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charsAdded, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_contentschanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_undoavailable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_redoavailable, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_undocommandadded, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_modificationchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_cursorpositionchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_blockcountchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newBlockCount, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_baseurlchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, url, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_documentlayoutchanged, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_undo2, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_redo2, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_appendundoitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_setmodified, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, m, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_createobject, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, f, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_gui_qtextdocument_qtextdocument_loadresource, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextdocument_qtextdocument_method_entry) {
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, staticMetaObject, arginfo_qt_gui_qtextdocument_qtextdocument_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, tr, arginfo_qt_gui_qtextdocument_qtextdocument_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, new_, arginfo_qt_gui_qtextdocument_qtextdocument_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, newQStringQObject, arginfo_qt_gui_qtextdocument_qtextdocument_newqstringqobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, clone_, arginfo_qt_gui_qtextdocument_qtextdocument_clone_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, isEmpty, arginfo_qt_gui_qtextdocument_qtextdocument_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, clear, arginfo_qt_gui_qtextdocument_qtextdocument_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setUndoRedoEnabled, arginfo_qt_gui_qtextdocument_qtextdocument_setundoredoenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, isUndoRedoEnabled, arginfo_qt_gui_qtextdocument_qtextdocument_isundoredoenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, isUndoAvailable, arginfo_qt_gui_qtextdocument_qtextdocument_isundoavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, isRedoAvailable, arginfo_qt_gui_qtextdocument_qtextdocument_isredoavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, availableUndoSteps, arginfo_qt_gui_qtextdocument_qtextdocument_availableundosteps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, availableRedoSteps, arginfo_qt_gui_qtextdocument_qtextdocument_availableredosteps, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, revision, arginfo_qt_gui_qtextdocument_qtextdocument_revision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setDocumentLayout, arginfo_qt_gui_qtextdocument_qtextdocument_setdocumentlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, documentLayout, arginfo_qt_gui_qtextdocument_qtextdocument_documentlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setMetaInformation, arginfo_qt_gui_qtextdocument_qtextdocument_setmetainformation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, metaInformation, arginfo_qt_gui_qtextdocument_qtextdocument_metainformation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, toHtml, arginfo_qt_gui_qtextdocument_qtextdocument_tohtml, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setHtml, arginfo_qt_gui_qtextdocument_qtextdocument_sethtml, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, toMarkdown, arginfo_qt_gui_qtextdocument_qtextdocument_tomarkdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setMarkdown, arginfo_qt_gui_qtextdocument_qtextdocument_setmarkdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, toRawText, arginfo_qt_gui_qtextdocument_qtextdocument_torawtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, toPlainText, arginfo_qt_gui_qtextdocument_qtextdocument_toplaintext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setPlainText, arginfo_qt_gui_qtextdocument_qtextdocument_setplaintext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, characterAt, arginfo_qt_gui_qtextdocument_qtextdocument_characterat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, find, arginfo_qt_gui_qtextdocument_qtextdocument_find, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, findQStringQTextCursorQTextDocumentFindFlags, arginfo_qt_gui_qtextdocument_qtextdocument_findqstringqtextcursorqtextdocumentfindflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, findQRegularExpressionIntQTextDocumentFindFlags, arginfo_qt_gui_qtextdocument_qtextdocument_findqregularexpressionintqtextdocumentfindflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, findQRegularExpressionQTextCursorQTextDocumentFindFlags, arginfo_qt_gui_qtextdocument_qtextdocument_findqregularexpressionqtextcursorqtextdocumentfindflags, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, frameAt, arginfo_qt_gui_qtextdocument_qtextdocument_frameat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, rootFrame, arginfo_qt_gui_qtextdocument_qtextdocument_rootframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, object_, arginfo_qt_gui_qtextdocument_qtextdocument_object_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, objectForFormat, arginfo_qt_gui_qtextdocument_qtextdocument_objectforformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, findBlock, arginfo_qt_gui_qtextdocument_qtextdocument_findblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, findBlockByNumber, arginfo_qt_gui_qtextdocument_qtextdocument_findblockbynumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, findBlockByLineNumber, arginfo_qt_gui_qtextdocument_qtextdocument_findblockbylinenumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, begin, arginfo_qt_gui_qtextdocument_qtextdocument_begin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, end, arginfo_qt_gui_qtextdocument_qtextdocument_end, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, firstBlock, arginfo_qt_gui_qtextdocument_qtextdocument_firstblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, lastBlock, arginfo_qt_gui_qtextdocument_qtextdocument_lastblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setPageSize, arginfo_qt_gui_qtextdocument_qtextdocument_setpagesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, pageSize, arginfo_qt_gui_qtextdocument_qtextdocument_pagesize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setDefaultFont, arginfo_qt_gui_qtextdocument_qtextdocument_setdefaultfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, defaultFont, arginfo_qt_gui_qtextdocument_qtextdocument_defaultfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setSuperScriptBaseline, arginfo_qt_gui_qtextdocument_qtextdocument_setsuperscriptbaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, superScriptBaseline, arginfo_qt_gui_qtextdocument_qtextdocument_superscriptbaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setSubScriptBaseline, arginfo_qt_gui_qtextdocument_qtextdocument_setsubscriptbaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, subScriptBaseline, arginfo_qt_gui_qtextdocument_qtextdocument_subscriptbaseline, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setBaselineOffset, arginfo_qt_gui_qtextdocument_qtextdocument_setbaselineoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, baselineOffset, arginfo_qt_gui_qtextdocument_qtextdocument_baselineoffset, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, pageCount, arginfo_qt_gui_qtextdocument_qtextdocument_pagecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, isModified, arginfo_qt_gui_qtextdocument_qtextdocument_ismodified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, print_, arginfo_qt_gui_qtextdocument_qtextdocument_print_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, resource_, arginfo_qt_gui_qtextdocument_qtextdocument_resource_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, addResource, arginfo_qt_gui_qtextdocument_qtextdocument_addresource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, allFormats, arginfo_qt_gui_qtextdocument_qtextdocument_allformats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, markContentsDirty, arginfo_qt_gui_qtextdocument_qtextdocument_markcontentsdirty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setUseDesignMetrics, arginfo_qt_gui_qtextdocument_qtextdocument_setusedesignmetrics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, useDesignMetrics, arginfo_qt_gui_qtextdocument_qtextdocument_usedesignmetrics, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setLayoutEnabled, arginfo_qt_gui_qtextdocument_qtextdocument_setlayoutenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, isLayoutEnabled, arginfo_qt_gui_qtextdocument_qtextdocument_islayoutenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, drawContents, arginfo_qt_gui_qtextdocument_qtextdocument_drawcontents, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setTextWidth, arginfo_qt_gui_qtextdocument_qtextdocument_settextwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, textWidth, arginfo_qt_gui_qtextdocument_qtextdocument_textwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, idealWidth, arginfo_qt_gui_qtextdocument_qtextdocument_idealwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, indentWidth, arginfo_qt_gui_qtextdocument_qtextdocument_indentwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setIndentWidth, arginfo_qt_gui_qtextdocument_qtextdocument_setindentwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, documentMargin, arginfo_qt_gui_qtextdocument_qtextdocument_documentmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setDocumentMargin, arginfo_qt_gui_qtextdocument_qtextdocument_setdocumentmargin, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, adjustSize, arginfo_qt_gui_qtextdocument_qtextdocument_adjustsize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, size, arginfo_qt_gui_qtextdocument_qtextdocument_size, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, blockCount, arginfo_qt_gui_qtextdocument_qtextdocument_blockcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, lineCount, arginfo_qt_gui_qtextdocument_qtextdocument_linecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, characterCount, arginfo_qt_gui_qtextdocument_qtextdocument_charactercount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setDefaultStyleSheet, arginfo_qt_gui_qtextdocument_qtextdocument_setdefaultstylesheet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, defaultStyleSheet, arginfo_qt_gui_qtextdocument_qtextdocument_defaultstylesheet, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, undo, arginfo_qt_gui_qtextdocument_qtextdocument_undo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, redo, arginfo_qt_gui_qtextdocument_qtextdocument_redo, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, clearUndoRedoStacks, arginfo_qt_gui_qtextdocument_qtextdocument_clearundoredostacks, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, maximumBlockCount, arginfo_qt_gui_qtextdocument_qtextdocument_maximumblockcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setMaximumBlockCount, arginfo_qt_gui_qtextdocument_qtextdocument_setmaximumblockcount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, defaultTextOption, arginfo_qt_gui_qtextdocument_qtextdocument_defaulttextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setDefaultTextOption, arginfo_qt_gui_qtextdocument_qtextdocument_setdefaulttextoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, baseUrl, arginfo_qt_gui_qtextdocument_qtextdocument_baseurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setBaseUrl, arginfo_qt_gui_qtextdocument_qtextdocument_setbaseurl, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, defaultCursorMoveStyle, arginfo_qt_gui_qtextdocument_qtextdocument_defaultcursormovestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setDefaultCursorMoveStyle, arginfo_qt_gui_qtextdocument_qtextdocument_setdefaultcursormovestyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, contentsChange, arginfo_qt_gui_qtextdocument_qtextdocument_contentschange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, contentsChanged, arginfo_qt_gui_qtextdocument_qtextdocument_contentschanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, undoAvailable, arginfo_qt_gui_qtextdocument_qtextdocument_undoavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, redoAvailable, arginfo_qt_gui_qtextdocument_qtextdocument_redoavailable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, undoCommandAdded, arginfo_qt_gui_qtextdocument_qtextdocument_undocommandadded, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, modificationChanged, arginfo_qt_gui_qtextdocument_qtextdocument_modificationchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, cursorPositionChanged, arginfo_qt_gui_qtextdocument_qtextdocument_cursorpositionchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, blockCountChanged, arginfo_qt_gui_qtextdocument_qtextdocument_blockcountchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, baseUrlChanged, arginfo_qt_gui_qtextdocument_qtextdocument_baseurlchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, documentLayoutChanged, arginfo_qt_gui_qtextdocument_qtextdocument_documentlayoutchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, undo2, arginfo_qt_gui_qtextdocument_qtextdocument_undo2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, redo2, arginfo_qt_gui_qtextdocument_qtextdocument_redo2, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, appendUndoItem, arginfo_qt_gui_qtextdocument_qtextdocument_appendundoitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, setModified, arginfo_qt_gui_qtextdocument_qtextdocument_setmodified, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, createObject, arginfo_qt_gui_qtextdocument_qtextdocument_createobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextDocument_QTextDocument, loadResource, arginfo_qt_gui_qtextdocument_qtextdocument_loadresource, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
