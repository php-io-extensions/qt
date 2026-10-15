#include "qtext.h"

#include <QtGui/QBrush>
#include <QtGui/QColor>
#include <QtGui/QTextBlock>
#include <QtGui/QTextCharFormat>
#include <QtGui/QTextDocument>
#include <QtGui/QTextFormat>

/* After the Qt headers: the class constant spells QTextFormat::FullWidthSelection. */
#include "../stubs/QText_arginfo.h"

static_assert(QTextCursor::MoveAnchor == 0 && QTextCursor::KeepAnchor == 1,
	"QTextCursor::MoveMode values differ from the stub's QTextCursor\\MoveMode enum");

static_assert(QTextCursor::NoMove == 0 && QTextCursor::Start == 1 && QTextCursor::Up == 2 &&
	QTextCursor::StartOfLine == 3 && QTextCursor::StartOfBlock == 4 && QTextCursor::StartOfWord == 5 &&
	QTextCursor::PreviousBlock == 6 && QTextCursor::PreviousCharacter == 7 && QTextCursor::PreviousWord == 8 &&
	QTextCursor::Left == 9 && QTextCursor::WordLeft == 10 && QTextCursor::End == 11 &&
	QTextCursor::Down == 12 && QTextCursor::EndOfLine == 13 && QTextCursor::EndOfWord == 14 &&
	QTextCursor::EndOfBlock == 15 && QTextCursor::NextBlock == 16 && QTextCursor::NextCharacter == 17 &&
	QTextCursor::NextWord == 18 && QTextCursor::Right == 19 && QTextCursor::WordRight == 20 &&
	QTextCursor::NextCell == 21 && QTextCursor::PreviousCell == 22 && QTextCursor::NextRow == 23 &&
	QTextCursor::PreviousRow == 24,
	"QTextCursor::MoveOperation values differ from the stub's QTextCursor\\MoveOperation enum");

static void phpqt_destroy_color(void *ptr) { delete static_cast<QColor *>(ptr); }
static void phpqt_destroy_brush(void *ptr) { delete static_cast<QBrush *>(ptr); }
static void phpqt_destroy_char_format(void *ptr) { delete static_cast<QTextCharFormat *>(ptr); }
static void phpqt_destroy_text_cursor(void *ptr) { delete static_cast<QTextCursor *>(ptr); }
/* A block is held as a cursor at its start: the cursor follows the document's edits and goes null with it. */
static void phpqt_destroy_text_block(void *ptr) { delete static_cast<QTextCursor *>(ptr); }
static void phpqt_destroy_extra_selection(void *ptr) { delete static_cast<QTextEdit::ExtraSelection *>(ptr); }

void phpqt_register_QText()
{
	phpqt_ce_QTextCursor_MoveMode = register_class_QTextCursor_MoveMode();
	phpqt_ce_QTextCursor_MoveOperation = register_class_QTextCursor_MoveOperation();

	phpqt_ce_QColor = register_class_QColor();
	phpqt_value_setup(phpqt_ce_QColor);
	phpqt_ce_QBrush = register_class_QBrush();
	phpqt_value_setup(phpqt_ce_QBrush);
	phpqt_ce_QTextFormat = register_class_QTextFormat();
	phpqt_ce_QTextCharFormat = register_class_QTextCharFormat();
	phpqt_value_setup(phpqt_ce_QTextCharFormat);
	phpqt_ce_QTextCursor = register_class_QTextCursor();
	phpqt_value_setup(phpqt_ce_QTextCursor);
	phpqt_ce_QTextBlock = register_class_QTextBlock();
	phpqt_value_setup(phpqt_ce_QTextBlock);
	phpqt_ce_QTextEditExtraSelection = register_class_QTextEditExtraSelection();
	phpqt_value_setup(phpqt_ce_QTextEditExtraSelection);

	phpqt_ce_QTextDocument = register_class_QTextDocument(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QTextDocument);
	phpqt_map_class("QTextDocument", phpqt_ce_QTextDocument);
}

/* A second __construct() on a value wrapper. */
static bool phpqt_value_fresh(zend_object *wrapper)
{
	if (phpqt_value_from(wrapper)->constructed) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "%s::__construct() called twice", ZSTR_VAL(wrapper->ce->name));
		return false;
	}
	return true;
}

static void phpqt_return_color(zval *rv, const QColor &color)
{
	object_init_ex(rv, phpqt_ce_QColor);
	phpqt_value_hold(Z_OBJ_P(rv), new QColor(color), true, phpqt_destroy_color);
}

static void phpqt_return_brush(zval *rv, const QBrush &brush)
{
	object_init_ex(rv, phpqt_ce_QBrush);
	phpqt_value_hold(Z_OBJ_P(rv), new QBrush(brush), true, phpqt_destroy_brush);
}

static void phpqt_return_char_format(zval *rv, const QTextCharFormat &format)
{
	object_init_ex(rv, phpqt_ce_QTextCharFormat);
	phpqt_value_hold(Z_OBJ_P(rv), new QTextCharFormat(format), true, phpqt_destroy_char_format);
}

static void phpqt_return_text_block(zval *rv, const QTextBlock &block)
{
	object_init_ex(rv, phpqt_ce_QTextBlock);
	phpqt_value_hold(Z_OBJ_P(rv), new QTextCursor(block), true, phpqt_destroy_text_block);
}

void phpqt_return_text_cursor(zval *rv, const QTextCursor &cursor)
{
	object_init_ex(rv, phpqt_ce_QTextCursor);
	phpqt_value_hold(Z_OBJ_P(rv), new QTextCursor(cursor), true, phpqt_destroy_text_cursor);
}

void phpqt_return_extra_selection(zval *rv, const QTextEdit::ExtraSelection &selection)
{
	object_init_ex(rv, phpqt_ce_QTextEditExtraSelection);
	phpqt_value_hold(Z_OBJ_P(rv), new QTextEdit::ExtraSelection(selection), true, phpqt_destroy_extra_selection);
}

/* ---- QColor ------------------------------------------------------------ */

ZEND_METHOD(QColor, __construct)
{
	zend_long parts[4] = {0, 0, 0, 255};

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(parts[0])
		Z_PARAM_LONG(parts[1])
		Z_PARAM_LONG(parts[2])
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(parts[3])
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	for (int i = 0; i < 4; i++) {
		if (parts[i] < 0 || parts[i] > 255) {
			zend_argument_value_error(i + 1, "must be between 0 and 255");
			RETURN_THROWS();
		}
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QColor((int) parts[0], (int) parts[1], (int) parts[2], (int) parts[3]), true, phpqt_destroy_color);
}

#define PHPQT_COLOR_PART(name) \
ZEND_METHOD(QColor, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_VALUE_THIS(QColor, color); \
	RETURN_LONG(color->name()); \
}

PHPQT_COLOR_PART(red)
PHPQT_COLOR_PART(green)
PHPQT_COLOR_PART(blue)
PHPQT_COLOR_PART(alpha)

/* ---- QBrush ------------------------------------------------------------ */

ZEND_METHOD(QBrush, __construct)
{
	zend_object *color_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(color_obj, phpqt_ce_QColor)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	QColor *color = static_cast<QColor *>(phpqt_value_arg(color_obj, 1));
	if (color == nullptr) {
		RETURN_THROWS();
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QBrush(*color), true, phpqt_destroy_brush);
}

ZEND_METHOD(QBrush, color)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QBrush, brush);

	phpqt_return_color(return_value, brush->color());
}

/* ---- QTextFormat (property ids) ---------------------------------------- */

ZEND_METHOD(QTextFormat, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	zend_throw_error(nullptr, "QTextFormat holds property ids: construct a QTextCharFormat");
}

/* ---- QTextCharFormat --------------------------------------------------- */

ZEND_METHOD(QTextCharFormat, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QTextCharFormat(), true, phpqt_destroy_char_format);
}

#define PHPQT_FORMAT_BRUSH(setter, getter) \
ZEND_METHOD(QTextCharFormat, setter) \
{ \
	zend_object *brush_obj; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_OBJ_OF_CLASS(brush_obj, phpqt_ce_QBrush) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_VALUE_THIS(QTextCharFormat, format); \
	QBrush *brush = static_cast<QBrush *>(phpqt_value_arg(brush_obj, 1)); \
	if (brush == nullptr) { \
		RETURN_THROWS(); \
	} \
	format->setter(*brush); \
} \
ZEND_METHOD(QTextCharFormat, getter) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_VALUE_THIS(QTextCharFormat, format); \
	phpqt_return_brush(return_value, format->getter()); \
}

PHPQT_FORMAT_BRUSH(setForeground, foreground)
PHPQT_FORMAT_BRUSH(setBackground, background)

ZEND_METHOD(QTextCharFormat, setProperty)
{
	zend_long id;
	zval *value;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(id)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTextCharFormat, format);

	QVariant variant;
	switch (Z_TYPE_P(value)) {
		case IS_TRUE:   variant = QVariant(true); break;
		case IS_FALSE:  variant = QVariant(false); break;
		case IS_LONG:   variant = QVariant((qlonglong) Z_LVAL_P(value)); break;
		case IS_DOUBLE: variant = QVariant(Z_DVAL_P(value)); break;
		case IS_STRING: variant = QVariant(phpqt_qstring(Z_STR_P(value))); break;
		default:
			zend_argument_type_error(2, "must be of type bool|int|float|string, %s given", zend_zval_value_name(value));
			RETURN_THROWS();
	}
	format->setProperty((int) id, variant);
}

ZEND_METHOD(QTextCharFormat, boolProperty)
{
	zend_long id;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTextCharFormat, format);

	RETURN_BOOL(format->boolProperty((int) id));
}

ZEND_METHOD(QTextCharFormat, hasProperty)
{
	zend_long id;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(id)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTextCharFormat, format);

	RETURN_BOOL(format->hasProperty((int) id));
}

/* ---- QTextCursor ------------------------------------------------------- */

ZEND_METHOD(QTextCursor, __construct)
{
	zend_object *document_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(document_obj, phpqt_ce_QTextDocument)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	QTextDocument *document = static_cast<QTextDocument *>(phpqt_arg(document_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QTextCursor(document), true, phpqt_destroy_text_cursor);
}

ZEND_METHOD(QTextCursor, setPosition)
{
	zend_long position;
	zend_object *mode = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_LONG(position)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_QTextCursor_MoveMode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTextCursor, cursor);

	if (cursor->isNull()) {
		zend_throw_exception(phpqt_ce_QtException, "QTextCursor's document has been deleted", 0);
		RETURN_THROWS();
	}
	int last = cursor->document()->characterCount() - 1;
	if (position < 0 || position > last) {
		zend_argument_value_error(1, "must be a position between 0 and %d", last);
		RETURN_THROWS();
	}

	cursor->setPosition((int) position, static_cast<QTextCursor::MoveMode>(phpqt_enum_value(mode, QTextCursor::MoveAnchor)));
}

ZEND_METHOD(QTextCursor, movePosition)
{
	zend_object *op;
	zend_object *mode = nullptr;
	zend_long n = 1;

	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_OBJ_OF_CLASS(op, phpqt_ce_QTextCursor_MoveOperation)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_QTextCursor_MoveMode)
		Z_PARAM_LONG(n)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTextCursor, cursor);

	if (cursor->isNull()) {
		zend_throw_exception(phpqt_ce_QtException, "QTextCursor's document has been deleted", 0);
		RETURN_THROWS();
	}
	if (n < INT_MIN || n > INT_MAX) {
		zend_argument_value_error(3, "must be between %d and %d", INT_MIN, INT_MAX);
		RETURN_THROWS();
	}

	RETURN_BOOL(cursor->movePosition(
		static_cast<QTextCursor::MoveOperation>(phpqt_enum_value(op, QTextCursor::NoMove)),
		static_cast<QTextCursor::MoveMode>(phpqt_enum_value(mode, QTextCursor::MoveAnchor)),
		(int) n));
}

#define PHPQT_CURSOR_INT(name) \
ZEND_METHOD(QTextCursor, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_VALUE_THIS(QTextCursor, cursor); \
	RETURN_LONG(cursor->name()); \
}

PHPQT_CURSOR_INT(position)
PHPQT_CURSOR_INT(anchor)
PHPQT_CURSOR_INT(selectionStart)
PHPQT_CURSOR_INT(selectionEnd)

ZEND_METHOD(QTextCursor, hasSelection)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTextCursor, cursor);

	RETURN_BOOL(cursor->hasSelection());
}

/* ---- QTextBlock -------------------------------------------------------- */

ZEND_METHOD(QTextBlock, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	zend_throw_error(nullptr, "QTextBlock is handed out by QTextDocument::findBlockByNumber()");
}

#define PHPQT_BLOCK_INT(name) \
ZEND_METHOD(QTextBlock, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_VALUE_THIS(QTextCursor, start); \
	if (start->isNull()) { \
		zend_throw_exception(phpqt_ce_QtException, "QTextBlock's document has been deleted", 0); \
		RETURN_THROWS(); \
	} \
	RETURN_LONG(start->block().name()); \
}

PHPQT_BLOCK_INT(position)
PHPQT_BLOCK_INT(length)
PHPQT_BLOCK_INT(blockNumber)
PHPQT_BLOCK_INT(firstLineNumber)

/* ---- QTextEditExtraSelection ------------------------------------------- */

ZEND_METHOD(QTextEditExtraSelection, __construct)
{
	zend_object *cursor_obj, *format_obj;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(cursor_obj, phpqt_ce_QTextCursor)
		Z_PARAM_OBJ_OF_CLASS(format_obj, phpqt_ce_QTextCharFormat)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	QTextCursor *cursor = static_cast<QTextCursor *>(phpqt_value_arg(cursor_obj, 1));
	QTextCharFormat *format = cursor != nullptr ? static_cast<QTextCharFormat *>(phpqt_value_arg(format_obj, 2)) : nullptr;
	if (format == nullptr) {
		RETURN_THROWS();
	}

	QTextEdit::ExtraSelection *selection = new QTextEdit::ExtraSelection();
	selection->cursor = *cursor;
	selection->format = *format;
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), selection, true, phpqt_destroy_extra_selection);
}

ZEND_METHOD(QTextEditExtraSelection, cursor)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTextEdit::ExtraSelection, selection);

	phpqt_return_text_cursor(return_value, selection->cursor);
}

ZEND_METHOD(QTextEditExtraSelection, format)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTextEdit::ExtraSelection, selection);

	phpqt_return_char_format(return_value, selection->format);
}

/* ---- QTextDocument ----------------------------------------------------- */

ZEND_METHOD(QTextDocument, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	zend_throw_error(nullptr, "QTextDocument is a text edit's: QPlainTextEdit::document()");
}

ZEND_METHOD(QTextDocument, findBlockByNumber)
{
	zend_long number;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(number)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTextDocument, document);

	QTextBlock block = number >= 0 && number <= INT_MAX ? document->findBlockByNumber((int) number) : QTextBlock();
	if (!block.isValid()) {
		RETURN_NULL();
	}
	phpqt_return_text_block(return_value, block);
}

ZEND_METHOD(QTextDocument, blockCount)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTextDocument, document);

	RETURN_LONG(document->blockCount());
}

ZEND_METHOD(QTextDocument, characterCount)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTextDocument, document);

	RETURN_LONG(document->characterCount());
}
