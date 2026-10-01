
extern zend_class_entry *qt_gui_qtextcursor_qtextcursor_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextCursor_QTextCursor);

PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, new_);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, newQTextDocument);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, newQTextFrame);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, newQTextBlock);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, newQTextCursor);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, swap);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, isNull);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, setPosition);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, position);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, positionInBlock);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, anchor);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertText);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertTextQStringQTextCharFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, movePosition);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, visualNavigation);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, setVisualNavigation);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, setVerticalMovementX);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, verticalMovementX);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, setKeepPositionOnInsert);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, keepPositionOnInsert);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, deleteChar);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, deletePreviousChar);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, select);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, hasSelection);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, hasComplexSelection);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, removeSelectedText);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, clearSelection);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, selectionStart);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, selectionEnd);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, selectedText);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, selection);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, selectedTableCells);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, block);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, charFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, setCharFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, mergeCharFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, blockFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, setBlockFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, mergeBlockFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, blockCharFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, setBlockCharFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, mergeBlockCharFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, atBlockStart);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, atBlockEnd);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, atStart);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, atEnd);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertBlock);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertBlockQTextBlockFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertBlockQTextBlockFormatQTextCharFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertList);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertListQTextListFormatStyle);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, createList);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, createListQTextListFormatStyle);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, currentList);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertTable);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertTableIntInt);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, currentTable);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertFrame);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, currentFrame);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertFragment);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertHtml);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertMarkdown);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertImage);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertImageQTextImageFormat);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertImageQString);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, insertImageQImageQString);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, beginEditBlock);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, joinPreviousEditBlock);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, endEditBlock);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, isCopyOf);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, blockNumber);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, columnNumber);
PHP_METHOD(Qt_Gui_QTextCursor_QTextCursor, document);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_newqtextdocument, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, document, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_newqtextframe, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, frame, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_newqtextblock, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_newqtextcursor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursor, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_isnull, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_setposition, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_INFO(0, mode)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_position, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_positioninblock, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_anchor, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_inserttext, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_inserttextqstringqtextcharformat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_moveposition, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, op, IS_LONG, 0)
	ZEND_ARG_INFO(0, arg1)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_visualnavigation, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_setvisualnavigation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_setverticalmovementx, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, x, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_verticalmovementx, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_setkeeppositiononinsert, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_keeppositiononinsert, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_deletechar, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_deletepreviouschar, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_select, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, selection, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_hasselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_hascomplexselection, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_removeselectedtext, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_clearselection, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_selectionstart, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_selectionend, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_selectedtext, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_selection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_selectedtablecells, 0, 5, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_INFO(0, firstRow)
	ZEND_ARG_INFO(0, numRows)
	ZEND_ARG_INFO(0, firstColumn)
	ZEND_ARG_INFO(0, numColumns)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_block, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_charformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_setcharformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_mergecharformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifier, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_blockformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_setblockformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_mergeblockformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifier, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_blockcharformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_setblockcharformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_mergeblockcharformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, modifier, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_atblockstart, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_atblockend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_atstart, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_atend, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertblock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertblockqtextblockformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertblockqtextblockformatqtextcharformat, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, charFormat, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertlist, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertlistqtextlistformatstyle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_createlist, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_createlistqtextlistformatstyle, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, style, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_currentlist, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_inserttable, 0, 4, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cols, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_inserttableintint, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rows, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cols, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_currenttable, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertframe, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_currentframe, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertfragment, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, fragment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_inserthtml, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, html, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertmarkdown, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, markdown, IS_STRING, 0)
	ZEND_ARG_INFO(0, features)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertimage, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, alignment, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertimageqtextimageformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertimageqstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_insertimageqimageqstring, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, image, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_begineditblock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_joinpreviouseditblock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_endeditblock, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_iscopyof, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_blocknumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_columnnumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextcursor_qtextcursor_document, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextcursor_qtextcursor_method_entry) {
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, new_, arginfo_qt_gui_qtextcursor_qtextcursor_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, newQTextDocument, arginfo_qt_gui_qtextcursor_qtextcursor_newqtextdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, newQTextFrame, arginfo_qt_gui_qtextcursor_qtextcursor_newqtextframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, newQTextBlock, arginfo_qt_gui_qtextcursor_qtextcursor_newqtextblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, newQTextCursor, arginfo_qt_gui_qtextcursor_qtextcursor_newqtextcursor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, swap, arginfo_qt_gui_qtextcursor_qtextcursor_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, isNull, arginfo_qt_gui_qtextcursor_qtextcursor_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, setPosition, arginfo_qt_gui_qtextcursor_qtextcursor_setposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, position, arginfo_qt_gui_qtextcursor_qtextcursor_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, positionInBlock, arginfo_qt_gui_qtextcursor_qtextcursor_positioninblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, anchor, arginfo_qt_gui_qtextcursor_qtextcursor_anchor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertText, arginfo_qt_gui_qtextcursor_qtextcursor_inserttext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertTextQStringQTextCharFormat, arginfo_qt_gui_qtextcursor_qtextcursor_inserttextqstringqtextcharformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, movePosition, arginfo_qt_gui_qtextcursor_qtextcursor_moveposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, visualNavigation, arginfo_qt_gui_qtextcursor_qtextcursor_visualnavigation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, setVisualNavigation, arginfo_qt_gui_qtextcursor_qtextcursor_setvisualnavigation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, setVerticalMovementX, arginfo_qt_gui_qtextcursor_qtextcursor_setverticalmovementx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, verticalMovementX, arginfo_qt_gui_qtextcursor_qtextcursor_verticalmovementx, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, setKeepPositionOnInsert, arginfo_qt_gui_qtextcursor_qtextcursor_setkeeppositiononinsert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, keepPositionOnInsert, arginfo_qt_gui_qtextcursor_qtextcursor_keeppositiononinsert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, deleteChar, arginfo_qt_gui_qtextcursor_qtextcursor_deletechar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, deletePreviousChar, arginfo_qt_gui_qtextcursor_qtextcursor_deletepreviouschar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, select, arginfo_qt_gui_qtextcursor_qtextcursor_select, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, hasSelection, arginfo_qt_gui_qtextcursor_qtextcursor_hasselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, hasComplexSelection, arginfo_qt_gui_qtextcursor_qtextcursor_hascomplexselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, removeSelectedText, arginfo_qt_gui_qtextcursor_qtextcursor_removeselectedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, clearSelection, arginfo_qt_gui_qtextcursor_qtextcursor_clearselection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, selectionStart, arginfo_qt_gui_qtextcursor_qtextcursor_selectionstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, selectionEnd, arginfo_qt_gui_qtextcursor_qtextcursor_selectionend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, selectedText, arginfo_qt_gui_qtextcursor_qtextcursor_selectedtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, selection, arginfo_qt_gui_qtextcursor_qtextcursor_selection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, selectedTableCells, arginfo_qt_gui_qtextcursor_qtextcursor_selectedtablecells, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, block, arginfo_qt_gui_qtextcursor_qtextcursor_block, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, charFormat, arginfo_qt_gui_qtextcursor_qtextcursor_charformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, setCharFormat, arginfo_qt_gui_qtextcursor_qtextcursor_setcharformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, mergeCharFormat, arginfo_qt_gui_qtextcursor_qtextcursor_mergecharformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, blockFormat, arginfo_qt_gui_qtextcursor_qtextcursor_blockformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, setBlockFormat, arginfo_qt_gui_qtextcursor_qtextcursor_setblockformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, mergeBlockFormat, arginfo_qt_gui_qtextcursor_qtextcursor_mergeblockformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, blockCharFormat, arginfo_qt_gui_qtextcursor_qtextcursor_blockcharformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, setBlockCharFormat, arginfo_qt_gui_qtextcursor_qtextcursor_setblockcharformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, mergeBlockCharFormat, arginfo_qt_gui_qtextcursor_qtextcursor_mergeblockcharformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, atBlockStart, arginfo_qt_gui_qtextcursor_qtextcursor_atblockstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, atBlockEnd, arginfo_qt_gui_qtextcursor_qtextcursor_atblockend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, atStart, arginfo_qt_gui_qtextcursor_qtextcursor_atstart, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, atEnd, arginfo_qt_gui_qtextcursor_qtextcursor_atend, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertBlock, arginfo_qt_gui_qtextcursor_qtextcursor_insertblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertBlockQTextBlockFormat, arginfo_qt_gui_qtextcursor_qtextcursor_insertblockqtextblockformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertBlockQTextBlockFormatQTextCharFormat, arginfo_qt_gui_qtextcursor_qtextcursor_insertblockqtextblockformatqtextcharformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertList, arginfo_qt_gui_qtextcursor_qtextcursor_insertlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertListQTextListFormatStyle, arginfo_qt_gui_qtextcursor_qtextcursor_insertlistqtextlistformatstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, createList, arginfo_qt_gui_qtextcursor_qtextcursor_createlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, createListQTextListFormatStyle, arginfo_qt_gui_qtextcursor_qtextcursor_createlistqtextlistformatstyle, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, currentList, arginfo_qt_gui_qtextcursor_qtextcursor_currentlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertTable, arginfo_qt_gui_qtextcursor_qtextcursor_inserttable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertTableIntInt, arginfo_qt_gui_qtextcursor_qtextcursor_inserttableintint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, currentTable, arginfo_qt_gui_qtextcursor_qtextcursor_currenttable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertFrame, arginfo_qt_gui_qtextcursor_qtextcursor_insertframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, currentFrame, arginfo_qt_gui_qtextcursor_qtextcursor_currentframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertFragment, arginfo_qt_gui_qtextcursor_qtextcursor_insertfragment, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertHtml, arginfo_qt_gui_qtextcursor_qtextcursor_inserthtml, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertMarkdown, arginfo_qt_gui_qtextcursor_qtextcursor_insertmarkdown, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertImage, arginfo_qt_gui_qtextcursor_qtextcursor_insertimage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertImageQTextImageFormat, arginfo_qt_gui_qtextcursor_qtextcursor_insertimageqtextimageformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertImageQString, arginfo_qt_gui_qtextcursor_qtextcursor_insertimageqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, insertImageQImageQString, arginfo_qt_gui_qtextcursor_qtextcursor_insertimageqimageqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, beginEditBlock, arginfo_qt_gui_qtextcursor_qtextcursor_begineditblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, joinPreviousEditBlock, arginfo_qt_gui_qtextcursor_qtextcursor_joinpreviouseditblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, endEditBlock, arginfo_qt_gui_qtextcursor_qtextcursor_endeditblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, isCopyOf, arginfo_qt_gui_qtextcursor_qtextcursor_iscopyof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, blockNumber, arginfo_qt_gui_qtextcursor_qtextcursor_blocknumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, columnNumber, arginfo_qt_gui_qtextcursor_qtextcursor_columnnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextCursor_QTextCursor, document, arginfo_qt_gui_qtextcursor_qtextcursor_document, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
