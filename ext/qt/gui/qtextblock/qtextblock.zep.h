
extern zend_class_entry *qt_gui_qtextblock_qtextblock_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextBlock_QTextBlock);

PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, new_);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, newQTextBlock);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, isValid);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, position);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, length);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, contains);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, layout);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, clearLayout);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, blockFormat);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, blockFormatIndex);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, charFormat);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, charFormatIndex);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, textDirection);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, text);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, textFormats);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, document);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, textList);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, userData);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, setUserData);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, userState);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, setUserState);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, revision);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, setRevision);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, isVisible);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, setVisible);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, blockNumber);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, firstLineNumber);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, setLineCount);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, lineCount);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, next);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, previous);
PHP_METHOD(Qt_Gui_QTextBlock_QTextBlock, fragmentIndex);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_newqtextblock, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_isvalid, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_position, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_length, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_layout, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_clearlayout, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_blockformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_blockformatindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_charformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_charformatindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_textdirection, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_text, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_textformats, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_document, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_textlist, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_userdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_setuserdata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_userstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_setuserstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, state, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_revision, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_setrevision, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, rev, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_isvisible, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_blocknumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_firstlinenumber, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_setlinecount, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_linecount, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_next, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_previous, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblock_qtextblock_fragmentindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextblock_qtextblock_method_entry) {
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, new_, arginfo_qt_gui_qtextblock_qtextblock_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, newQTextBlock, arginfo_qt_gui_qtextblock_qtextblock_newqtextblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, isValid, arginfo_qt_gui_qtextblock_qtextblock_isvalid, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, position, arginfo_qt_gui_qtextblock_qtextblock_position, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, length, arginfo_qt_gui_qtextblock_qtextblock_length, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, contains, arginfo_qt_gui_qtextblock_qtextblock_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, layout, arginfo_qt_gui_qtextblock_qtextblock_layout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, clearLayout, arginfo_qt_gui_qtextblock_qtextblock_clearlayout, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, blockFormat, arginfo_qt_gui_qtextblock_qtextblock_blockformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, blockFormatIndex, arginfo_qt_gui_qtextblock_qtextblock_blockformatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, charFormat, arginfo_qt_gui_qtextblock_qtextblock_charformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, charFormatIndex, arginfo_qt_gui_qtextblock_qtextblock_charformatindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, textDirection, arginfo_qt_gui_qtextblock_qtextblock_textdirection, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, text, arginfo_qt_gui_qtextblock_qtextblock_text, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, textFormats, arginfo_qt_gui_qtextblock_qtextblock_textformats, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, document, arginfo_qt_gui_qtextblock_qtextblock_document, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, textList, arginfo_qt_gui_qtextblock_qtextblock_textlist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, userData, arginfo_qt_gui_qtextblock_qtextblock_userdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, setUserData, arginfo_qt_gui_qtextblock_qtextblock_setuserdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, userState, arginfo_qt_gui_qtextblock_qtextblock_userstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, setUserState, arginfo_qt_gui_qtextblock_qtextblock_setuserstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, revision, arginfo_qt_gui_qtextblock_qtextblock_revision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, setRevision, arginfo_qt_gui_qtextblock_qtextblock_setrevision, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, isVisible, arginfo_qt_gui_qtextblock_qtextblock_isvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, setVisible, arginfo_qt_gui_qtextblock_qtextblock_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, blockNumber, arginfo_qt_gui_qtextblock_qtextblock_blocknumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, firstLineNumber, arginfo_qt_gui_qtextblock_qtextblock_firstlinenumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, setLineCount, arginfo_qt_gui_qtextblock_qtextblock_setlinecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, lineCount, arginfo_qt_gui_qtextblock_qtextblock_linecount, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, next, arginfo_qt_gui_qtextblock_qtextblock_next, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, previous, arginfo_qt_gui_qtextblock_qtextblock_previous, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlock_QTextBlock, fragmentIndex, arginfo_qt_gui_qtextblock_qtextblock_fragmentindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
