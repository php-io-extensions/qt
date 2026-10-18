/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 08521e77680124052ab2a5a52ff2678628212408 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QColor___construct, 0, 0, 3)
	ZEND_ARG_TYPE_INFO(0, r, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, g, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, b, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, a, IS_LONG, 0, "255")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QColor_red, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QColor_green arginfo_class_QColor_red

#define arginfo_class_QColor_blue arginfo_class_QColor_red

#define arginfo_class_QColor_alpha arginfo_class_QColor_red

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QColor_isValid, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QBrush___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, color, QColor, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, bs, Qt\\BrushStyle, 0, "Qt\\BrushStyle::SOLID_PATTERN")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QBrush_color, 0, 0, QColor, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QBrush_style, 0, 0, Qt\\BrushStyle, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QTextFormat___construct, 0, 0, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTextCharFormat___construct arginfo_class_QTextFormat___construct

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTextCharFormat_setForeground, 0, 1, IS_VOID, 0)
	ZEND_ARG_OBJ_INFO(0, brush, QBrush, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTextCharFormat_setBackground arginfo_class_QTextCharFormat_setForeground

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTextCharFormat_foreground, 0, 0, QBrush, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTextCharFormat_background arginfo_class_QTextCharFormat_foreground

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTextCharFormat_setProperty, 0, 2, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTextCharFormat_boolProperty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, propertyId, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTextCharFormat_hasProperty arginfo_class_QTextCharFormat_boolProperty

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QTextCursor___construct, 0, 0, 1)
	ZEND_ARG_OBJ_INFO(0, document, QTextDocument, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTextCursor_setPosition, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, position, IS_LONG, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, mode, QTextCursor\\MoveMode, 0, "QTextCursor\\MoveMode::MOVE_ANCHOR")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_QTextCursor_movePosition, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, op, QTextCursor\\MoveOperation, 0)
	ZEND_ARG_OBJ_INFO_WITH_DEFAULT_VALUE(0, mode, QTextCursor\\MoveMode, 0, "QTextCursor\\MoveMode::MOVE_ANCHOR")
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, n, IS_LONG, 0, "1")
ZEND_END_ARG_INFO()

#define arginfo_class_QTextCursor_position arginfo_class_QColor_red

#define arginfo_class_QTextCursor_anchor arginfo_class_QColor_red

#define arginfo_class_QTextCursor_selectionStart arginfo_class_QColor_red

#define arginfo_class_QTextCursor_selectionEnd arginfo_class_QColor_red

#define arginfo_class_QTextCursor_hasSelection arginfo_class_QColor_isValid

#define arginfo_class_QTextCursor_isNull arginfo_class_QColor_isValid

#define arginfo_class_QTextBlock___construct arginfo_class_QTextFormat___construct

#define arginfo_class_QTextBlock_position arginfo_class_QColor_red

#define arginfo_class_QTextBlock_length arginfo_class_QColor_red

#define arginfo_class_QTextBlock_blockNumber arginfo_class_QColor_red

#define arginfo_class_QTextBlock_firstLineNumber arginfo_class_QColor_red

#define arginfo_class_QTextBlock_isValid arginfo_class_QColor_isValid

#define arginfo_class_QTextDocument___construct arginfo_class_QTextFormat___construct

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_QTextDocument_findBlockByNumber, 0, 1, QTextBlock, 0)
	ZEND_ARG_TYPE_INFO(0, blockNumber, IS_LONG, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_QTextDocument_blockCount arginfo_class_QColor_red

#define arginfo_class_QTextDocument_characterCount arginfo_class_QColor_red

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_QTextEdit_ExtraSelection___construct, 0, 0, 2)
	ZEND_ARG_OBJ_INFO(0, cursor, QTextCursor, 0)
	ZEND_ARG_OBJ_INFO(0, format, QTextCharFormat, 0)
ZEND_END_ARG_INFO()

ZEND_METHOD(QColor, __construct);
ZEND_METHOD(QColor, red);
ZEND_METHOD(QColor, green);
ZEND_METHOD(QColor, blue);
ZEND_METHOD(QColor, alpha);
ZEND_METHOD(QColor, isValid);
ZEND_METHOD(QBrush, __construct);
ZEND_METHOD(QBrush, color);
ZEND_METHOD(QBrush, style);
ZEND_METHOD(QTextFormat, __construct);
ZEND_METHOD(QTextCharFormat, __construct);
ZEND_METHOD(QTextCharFormat, setForeground);
ZEND_METHOD(QTextCharFormat, setBackground);
ZEND_METHOD(QTextCharFormat, foreground);
ZEND_METHOD(QTextCharFormat, background);
ZEND_METHOD(QTextCharFormat, setProperty);
ZEND_METHOD(QTextCharFormat, boolProperty);
ZEND_METHOD(QTextCharFormat, hasProperty);
ZEND_METHOD(QTextCursor, __construct);
ZEND_METHOD(QTextCursor, setPosition);
ZEND_METHOD(QTextCursor, movePosition);
ZEND_METHOD(QTextCursor, position);
ZEND_METHOD(QTextCursor, anchor);
ZEND_METHOD(QTextCursor, selectionStart);
ZEND_METHOD(QTextCursor, selectionEnd);
ZEND_METHOD(QTextCursor, hasSelection);
ZEND_METHOD(QTextCursor, isNull);
ZEND_METHOD(QTextBlock, __construct);
ZEND_METHOD(QTextBlock, position);
ZEND_METHOD(QTextBlock, length);
ZEND_METHOD(QTextBlock, blockNumber);
ZEND_METHOD(QTextBlock, firstLineNumber);
ZEND_METHOD(QTextBlock, isValid);
ZEND_METHOD(QTextDocument, __construct);
ZEND_METHOD(QTextDocument, findBlockByNumber);
ZEND_METHOD(QTextDocument, blockCount);
ZEND_METHOD(QTextDocument, characterCount);
ZEND_METHOD(QTextEdit_ExtraSelection, __construct);

static const zend_function_entry class_QColor_methods[] = {
	ZEND_ME(QColor, __construct, arginfo_class_QColor___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QColor, red, arginfo_class_QColor_red, ZEND_ACC_PUBLIC)
	ZEND_ME(QColor, green, arginfo_class_QColor_green, ZEND_ACC_PUBLIC)
	ZEND_ME(QColor, blue, arginfo_class_QColor_blue, ZEND_ACC_PUBLIC)
	ZEND_ME(QColor, alpha, arginfo_class_QColor_alpha, ZEND_ACC_PUBLIC)
	ZEND_ME(QColor, isValid, arginfo_class_QColor_isValid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QBrush_methods[] = {
	ZEND_ME(QBrush, __construct, arginfo_class_QBrush___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QBrush, color, arginfo_class_QBrush_color, ZEND_ACC_PUBLIC)
	ZEND_ME(QBrush, style, arginfo_class_QBrush_style, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QTextFormat_methods[] = {
	ZEND_ME(QTextFormat, __construct, arginfo_class_QTextFormat___construct, ZEND_ACC_PRIVATE)
	ZEND_FE_END
};

static const zend_function_entry class_QTextCharFormat_methods[] = {
	ZEND_ME(QTextCharFormat, __construct, arginfo_class_QTextCharFormat___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCharFormat, setForeground, arginfo_class_QTextCharFormat_setForeground, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCharFormat, setBackground, arginfo_class_QTextCharFormat_setBackground, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCharFormat, foreground, arginfo_class_QTextCharFormat_foreground, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCharFormat, background, arginfo_class_QTextCharFormat_background, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCharFormat, setProperty, arginfo_class_QTextCharFormat_setProperty, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCharFormat, boolProperty, arginfo_class_QTextCharFormat_boolProperty, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCharFormat, hasProperty, arginfo_class_QTextCharFormat_hasProperty, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QTextCursor_methods[] = {
	ZEND_ME(QTextCursor, __construct, arginfo_class_QTextCursor___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCursor, setPosition, arginfo_class_QTextCursor_setPosition, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCursor, movePosition, arginfo_class_QTextCursor_movePosition, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCursor, position, arginfo_class_QTextCursor_position, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCursor, anchor, arginfo_class_QTextCursor_anchor, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCursor, selectionStart, arginfo_class_QTextCursor_selectionStart, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCursor, selectionEnd, arginfo_class_QTextCursor_selectionEnd, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCursor, hasSelection, arginfo_class_QTextCursor_hasSelection, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextCursor, isNull, arginfo_class_QTextCursor_isNull, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QTextBlock_methods[] = {
	ZEND_ME(QTextBlock, __construct, arginfo_class_QTextBlock___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QTextBlock, position, arginfo_class_QTextBlock_position, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextBlock, length, arginfo_class_QTextBlock_length, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextBlock, blockNumber, arginfo_class_QTextBlock_blockNumber, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextBlock, firstLineNumber, arginfo_class_QTextBlock_firstLineNumber, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextBlock, isValid, arginfo_class_QTextBlock_isValid, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QTextDocument_methods[] = {
	ZEND_ME(QTextDocument, __construct, arginfo_class_QTextDocument___construct, ZEND_ACC_PRIVATE)
	ZEND_ME(QTextDocument, findBlockByNumber, arginfo_class_QTextDocument_findBlockByNumber, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextDocument, blockCount, arginfo_class_QTextDocument_blockCount, ZEND_ACC_PUBLIC)
	ZEND_ME(QTextDocument, characterCount, arginfo_class_QTextDocument_characterCount, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static const zend_function_entry class_QTextEdit_ExtraSelection_methods[] = {
	ZEND_ME(QTextEdit_ExtraSelection, __construct, arginfo_class_QTextEdit_ExtraSelection___construct, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};

static zend_class_entry *register_class_QTextCursor_MoveMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QTextCursor\\MoveMode", IS_LONG, NULL);

	zval enum_case_MOVE_ANCHOR_value;
	ZVAL_LONG(&enum_case_MOVE_ANCHOR_value, 0);
	zend_enum_add_case_cstr(class_entry, "MOVE_ANCHOR", &enum_case_MOVE_ANCHOR_value);

	zval enum_case_KEEP_ANCHOR_value;
	ZVAL_LONG(&enum_case_KEEP_ANCHOR_value, 1);
	zend_enum_add_case_cstr(class_entry, "KEEP_ANCHOR", &enum_case_KEEP_ANCHOR_value);

	return class_entry;
}

static zend_class_entry *register_class_QTextCursor_MoveOperation(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("QTextCursor\\MoveOperation", IS_LONG, NULL);

	zval enum_case_NO_MOVE_value;
	ZVAL_LONG(&enum_case_NO_MOVE_value, 0);
	zend_enum_add_case_cstr(class_entry, "NO_MOVE", &enum_case_NO_MOVE_value);

	zval enum_case_START_value;
	ZVAL_LONG(&enum_case_START_value, 1);
	zend_enum_add_case_cstr(class_entry, "START", &enum_case_START_value);

	zval enum_case_UP_value;
	ZVAL_LONG(&enum_case_UP_value, 2);
	zend_enum_add_case_cstr(class_entry, "UP", &enum_case_UP_value);

	zval enum_case_START_OF_LINE_value;
	ZVAL_LONG(&enum_case_START_OF_LINE_value, 3);
	zend_enum_add_case_cstr(class_entry, "START_OF_LINE", &enum_case_START_OF_LINE_value);

	zval enum_case_START_OF_BLOCK_value;
	ZVAL_LONG(&enum_case_START_OF_BLOCK_value, 4);
	zend_enum_add_case_cstr(class_entry, "START_OF_BLOCK", &enum_case_START_OF_BLOCK_value);

	zval enum_case_START_OF_WORD_value;
	ZVAL_LONG(&enum_case_START_OF_WORD_value, 5);
	zend_enum_add_case_cstr(class_entry, "START_OF_WORD", &enum_case_START_OF_WORD_value);

	zval enum_case_PREVIOUS_BLOCK_value;
	ZVAL_LONG(&enum_case_PREVIOUS_BLOCK_value, 6);
	zend_enum_add_case_cstr(class_entry, "PREVIOUS_BLOCK", &enum_case_PREVIOUS_BLOCK_value);

	zval enum_case_PREVIOUS_CHARACTER_value;
	ZVAL_LONG(&enum_case_PREVIOUS_CHARACTER_value, 7);
	zend_enum_add_case_cstr(class_entry, "PREVIOUS_CHARACTER", &enum_case_PREVIOUS_CHARACTER_value);

	zval enum_case_PREVIOUS_WORD_value;
	ZVAL_LONG(&enum_case_PREVIOUS_WORD_value, 8);
	zend_enum_add_case_cstr(class_entry, "PREVIOUS_WORD", &enum_case_PREVIOUS_WORD_value);

	zval enum_case_LEFT_value;
	ZVAL_LONG(&enum_case_LEFT_value, 9);
	zend_enum_add_case_cstr(class_entry, "LEFT", &enum_case_LEFT_value);

	zval enum_case_WORD_LEFT_value;
	ZVAL_LONG(&enum_case_WORD_LEFT_value, 10);
	zend_enum_add_case_cstr(class_entry, "WORD_LEFT", &enum_case_WORD_LEFT_value);

	zval enum_case_END_value;
	ZVAL_LONG(&enum_case_END_value, 11);
	zend_enum_add_case_cstr(class_entry, "END", &enum_case_END_value);

	zval enum_case_DOWN_value;
	ZVAL_LONG(&enum_case_DOWN_value, 12);
	zend_enum_add_case_cstr(class_entry, "DOWN", &enum_case_DOWN_value);

	zval enum_case_END_OF_LINE_value;
	ZVAL_LONG(&enum_case_END_OF_LINE_value, 13);
	zend_enum_add_case_cstr(class_entry, "END_OF_LINE", &enum_case_END_OF_LINE_value);

	zval enum_case_END_OF_WORD_value;
	ZVAL_LONG(&enum_case_END_OF_WORD_value, 14);
	zend_enum_add_case_cstr(class_entry, "END_OF_WORD", &enum_case_END_OF_WORD_value);

	zval enum_case_END_OF_BLOCK_value;
	ZVAL_LONG(&enum_case_END_OF_BLOCK_value, 15);
	zend_enum_add_case_cstr(class_entry, "END_OF_BLOCK", &enum_case_END_OF_BLOCK_value);

	zval enum_case_NEXT_BLOCK_value;
	ZVAL_LONG(&enum_case_NEXT_BLOCK_value, 16);
	zend_enum_add_case_cstr(class_entry, "NEXT_BLOCK", &enum_case_NEXT_BLOCK_value);

	zval enum_case_NEXT_CHARACTER_value;
	ZVAL_LONG(&enum_case_NEXT_CHARACTER_value, 17);
	zend_enum_add_case_cstr(class_entry, "NEXT_CHARACTER", &enum_case_NEXT_CHARACTER_value);

	zval enum_case_NEXT_WORD_value;
	ZVAL_LONG(&enum_case_NEXT_WORD_value, 18);
	zend_enum_add_case_cstr(class_entry, "NEXT_WORD", &enum_case_NEXT_WORD_value);

	zval enum_case_RIGHT_value;
	ZVAL_LONG(&enum_case_RIGHT_value, 19);
	zend_enum_add_case_cstr(class_entry, "RIGHT", &enum_case_RIGHT_value);

	zval enum_case_WORD_RIGHT_value;
	ZVAL_LONG(&enum_case_WORD_RIGHT_value, 20);
	zend_enum_add_case_cstr(class_entry, "WORD_RIGHT", &enum_case_WORD_RIGHT_value);

	zval enum_case_NEXT_CELL_value;
	ZVAL_LONG(&enum_case_NEXT_CELL_value, 21);
	zend_enum_add_case_cstr(class_entry, "NEXT_CELL", &enum_case_NEXT_CELL_value);

	zval enum_case_PREVIOUS_CELL_value;
	ZVAL_LONG(&enum_case_PREVIOUS_CELL_value, 22);
	zend_enum_add_case_cstr(class_entry, "PREVIOUS_CELL", &enum_case_PREVIOUS_CELL_value);

	zval enum_case_NEXT_ROW_value;
	ZVAL_LONG(&enum_case_NEXT_ROW_value, 23);
	zend_enum_add_case_cstr(class_entry, "NEXT_ROW", &enum_case_NEXT_ROW_value);

	zval enum_case_PREVIOUS_ROW_value;
	ZVAL_LONG(&enum_case_PREVIOUS_ROW_value, 24);
	zend_enum_add_case_cstr(class_entry, "PREVIOUS_ROW", &enum_case_PREVIOUS_ROW_value);

	return class_entry;
}

static zend_class_entry *register_class_QColor(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QColor", class_QColor_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QBrush(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QBrush", class_QBrush_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QTextFormat(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTextFormat", class_QTextFormat_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL);

	zval const_FULL_WIDTH_SELECTION_value;
	ZVAL_LONG(&const_FULL_WIDTH_SELECTION_value, QTextFormat::FullWidthSelection);
	zend_string *const_FULL_WIDTH_SELECTION_name = zend_string_init_interned("FULL_WIDTH_SELECTION", sizeof("FULL_WIDTH_SELECTION") - 1, 1);
	zend_declare_typed_class_constant(class_entry, const_FULL_WIDTH_SELECTION_name, &const_FULL_WIDTH_SELECTION_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(const_FULL_WIDTH_SELECTION_name);

	return class_entry;
}

static zend_class_entry *register_class_QTextCharFormat(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTextCharFormat", class_QTextCharFormat_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QTextCursor(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTextCursor", class_QTextCursor_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QTextBlock(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTextBlock", class_QTextBlock_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QTextDocument(zend_class_entry *class_entry_QObject)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "QTextDocument", class_QTextDocument_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, class_entry_QObject, ZEND_ACC_NOT_SERIALIZABLE);

	return class_entry;
}

static zend_class_entry *register_class_QTextEdit_ExtraSelection(void)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "QTextEdit", "ExtraSelection", class_QTextEdit_ExtraSelection_methods);
	class_entry = zend_register_internal_class_with_flags(&ce, NULL, ZEND_ACC_FINAL|ZEND_ACC_NOT_SERIALIZABLE);

	zval property_cursor_default_value;
	ZVAL_UNDEF(&property_cursor_default_value);
	zend_string *property_cursor_name = zend_string_init("cursor", sizeof("cursor") - 1, 1);
	zend_string *property_cursor_class_QTextCursor = zend_string_init("QTextCursor", sizeof("QTextCursor")-1, 1);
	zend_declare_typed_property(class_entry, property_cursor_name, &property_cursor_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_cursor_class_QTextCursor, 0, 0));
	zend_string_release(property_cursor_name);

	zval property_format_default_value;
	ZVAL_UNDEF(&property_format_default_value);
	zend_string *property_format_name = zend_string_init("format", sizeof("format") - 1, 1);
	zend_string *property_format_class_QTextCharFormat = zend_string_init("QTextCharFormat", sizeof("QTextCharFormat")-1, 1);
	zend_declare_typed_property(class_entry, property_format_name, &property_format_default_value, ZEND_ACC_PUBLIC, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_format_class_QTextCharFormat, 0, 0));
	zend_string_release(property_format_name);

	return class_entry;
}
