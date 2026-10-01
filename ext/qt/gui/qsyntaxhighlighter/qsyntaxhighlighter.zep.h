
extern zend_class_entry *qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter);

PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, staticMetaObject);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, tr);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, new_);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, newQTextDocument);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setDocument);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, document);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, rehighlight);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, rehighlightBlock);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, highlightBlock);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setFormat);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setFormatIntIntQColor);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setFormatIntIntQFont);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, format);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, previousBlockState);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, currentBlockState);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setCurrentBlockState);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setCurrentBlockUserData);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, currentBlockUserData);
PHP_METHOD(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, currentBlock);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_newqtextdocument, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setdocument, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_document, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_rehighlight, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_rehighlightblock, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_highlightblock, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setformat, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setformatintintqcolor, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, color, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setformatintintqfont, 0, 4, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, start, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, count, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, font, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_format, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_previousblockstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_currentblockstate, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setcurrentblockstate, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, newState, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setcurrentblockuserdata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_currentblockuserdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_currentblock, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_method_entry) {
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, staticMetaObject, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, tr, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, new_, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, newQTextDocument, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_newqtextdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setDocument, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setdocument, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, document, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_document, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, rehighlight, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_rehighlight, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, rehighlightBlock, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_rehighlightblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, highlightBlock, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_highlightblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setFormat, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setFormatIntIntQColor, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setformatintintqcolor, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setFormatIntIntQFont, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setformatintintqfont, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, format, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, previousBlockState, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_previousblockstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, currentBlockState, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_currentblockstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setCurrentBlockState, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setcurrentblockstate, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, setCurrentBlockUserData, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_setcurrentblockuserdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, currentBlockUserData, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_currentblockuserdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QSyntaxHighlighter_QSyntaxHighlighter, currentBlock, arginfo_qt_gui_qsyntaxhighlighter_qsyntaxhighlighter_currentblock, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
