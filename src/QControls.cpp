#include "runtime.h"
#include "qtext.h"

#include <QtCore/QDate>
#include <QtCore/QStringList>
#include <QtGui/QPixmap>
#include <QtWidgets/QAbstractItemView>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QAbstractSlider>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>

/* After the Qt headers: the generated class registration spells QAbstractItemView::NoEditTriggers. */
#include "../stubs/QControls_arginfo.h"

static_assert(QPlainTextEdit::NoWrap == 0 && QPlainTextEdit::WidgetWidth == 1,
	"QPlainTextEdit::LineWrapMode values differ from the stub's QPlainTextEdit\\LineWrapMode enum");
static_assert(QLineEdit::Normal == 0 && QLineEdit::NoEcho == 1 && QLineEdit::Password == 2 && QLineEdit::PasswordEchoOnEdit == 3,
	"QLineEdit::EchoMode values differ from the stub's QLineEdit\\EchoMode enum");
static_assert(QFrame::NoFrame == 0 && QFrame::Box == 1 && QFrame::Panel == 2 && QFrame::WinPanel == 3 && QFrame::HLine == 4
	&& QFrame::VLine == 5 && QFrame::StyledPanel == 6, "QFrame::Shape values differ from the stub's QFrame\\Shape enum");
static_assert(QFrame::Plain == 16 && QFrame::Raised == 32 && QFrame::Sunken == 48, "QFrame::Shadow values differ from the stub's QFrame\\Shadow enum");
static_assert(QAbstractItemView::SelectItems == 0 && QAbstractItemView::SelectRows == 1 && QAbstractItemView::SelectColumns == 2,
	"QAbstractItemView::SelectionBehavior values differ from the stub's enum");
static_assert(QAbstractItemView::NoSelection == 0 && QAbstractItemView::SingleSelection == 1 && QAbstractItemView::MultiSelection == 2
	&& QAbstractItemView::ExtendedSelection == 3 && QAbstractItemView::ContiguousSelection == 4,
	"QAbstractItemView::SelectionMode values differ from the stub's enum");
static_assert(QAbstractItemView::EnsureVisible == 0 && QAbstractItemView::PositionAtTop == 1 && QAbstractItemView::PositionAtBottom == 2
	&& QAbstractItemView::PositionAtCenter == 3, "QAbstractItemView::ScrollHint values differ from the stub's enum");

void phpqt_register_QControls()
{
	phpqt_ce_QLineEdit_EchoMode = register_class_QLineEdit_EchoMode();
	phpqt_ce_QPlainTextEdit_LineWrapMode = register_class_QPlainTextEdit_LineWrapMode();
	phpqt_ce_QFrame_Shape = register_class_QFrame_Shape();
	phpqt_ce_QFrame_Shadow = register_class_QFrame_Shadow();
	phpqt_ce_QAbstractItemView_SelectionBehavior = register_class_QAbstractItemView_SelectionBehavior();
	phpqt_ce_QAbstractItemView_SelectionMode = register_class_QAbstractItemView_SelectionMode();
	phpqt_ce_QAbstractItemView_ScrollHint = register_class_QAbstractItemView_ScrollHint();

	phpqt_ce_QLabel = register_class_QLabel(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QLabel);
	phpqt_map_class("QLabel", phpqt_ce_QLabel);

	phpqt_ce_QAbstractButton = register_class_QAbstractButton(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QAbstractButton);
	phpqt_map_class("QAbstractButton", phpqt_ce_QAbstractButton);

	phpqt_ce_QPushButton = register_class_QPushButton(phpqt_ce_QAbstractButton);
	phpqt_object_setup(phpqt_ce_QPushButton);
	phpqt_map_class("QPushButton", phpqt_ce_QPushButton);

	phpqt_ce_QCheckBox = register_class_QCheckBox(phpqt_ce_QAbstractButton);
	phpqt_object_setup(phpqt_ce_QCheckBox);
	phpqt_map_class("QCheckBox", phpqt_ce_QCheckBox);

	phpqt_ce_QAbstractSlider = register_class_QAbstractSlider(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QAbstractSlider);
	phpqt_map_class("QAbstractSlider", phpqt_ce_QAbstractSlider);

	phpqt_ce_QScrollBar = register_class_QScrollBar(phpqt_ce_QAbstractSlider);
	phpqt_object_setup(phpqt_ce_QScrollBar);
	phpqt_map_class("QScrollBar", phpqt_ce_QScrollBar);

	phpqt_ce_QSlider = register_class_QSlider(phpqt_ce_QAbstractSlider);
	phpqt_object_setup(phpqt_ce_QSlider);
	phpqt_map_class("QSlider", phpqt_ce_QSlider);

	phpqt_ce_QComboBox = register_class_QComboBox(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QComboBox);
	phpqt_map_class("QComboBox", phpqt_ce_QComboBox);

	phpqt_ce_QLineEdit = register_class_QLineEdit(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QLineEdit);
	phpqt_map_class("QLineEdit", phpqt_ce_QLineEdit);

	phpqt_ce_QPlainTextEdit = register_class_QPlainTextEdit(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QPlainTextEdit);
	phpqt_map_class("QPlainTextEdit", phpqt_ce_QPlainTextEdit);

	phpqt_ce_QCalendarWidget = register_class_QCalendarWidget(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QCalendarWidget);
	phpqt_map_class("QCalendarWidget", phpqt_ce_QCalendarWidget);

	phpqt_ce_QDateEdit = register_class_QDateEdit(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QDateEdit);
	phpqt_map_class("QDateEdit", phpqt_ce_QDateEdit);

	phpqt_ce_QProgressBar = register_class_QProgressBar(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QProgressBar);
	phpqt_map_class("QProgressBar", phpqt_ce_QProgressBar);

	phpqt_ce_QFrame = register_class_QFrame(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QFrame);
	phpqt_map_class("QFrame", phpqt_ce_QFrame);

	phpqt_ce_QScrollArea = register_class_QScrollArea(phpqt_ce_QFrame);
	phpqt_object_setup(phpqt_ce_QScrollArea);
	phpqt_map_class("QScrollArea", phpqt_ce_QScrollArea);

	phpqt_ce_QAbstractItemView = register_class_QAbstractItemView(phpqt_ce_QFrame);
	phpqt_object_setup(phpqt_ce_QAbstractItemView);
	phpqt_map_class("QAbstractItemView", phpqt_ce_QAbstractItemView);

	phpqt_ce_QTableWidget = register_class_QTableWidget(phpqt_ce_QAbstractItemView);
	phpqt_object_setup(phpqt_ce_QTableWidget);
	phpqt_map_class("QTableWidget", phpqt_ce_QTableWidget);

	phpqt_ce_QTreeWidget = register_class_QTreeWidget(phpqt_ce_QAbstractItemView);
	phpqt_object_setup(phpqt_ce_QTreeWidget);
	phpqt_map_class("QTreeWidget", phpqt_ce_QTreeWidget);

	phpqt_ce_QSplitter = register_class_QSplitter(phpqt_ce_QFrame);
	phpqt_object_setup(phpqt_ce_QSplitter);
	phpqt_map_class("QSplitter", phpqt_ce_QSplitter);

	phpqt_ce_QSplitterHandle = register_class_QSplitterHandle(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QSplitterHandle);
	phpqt_map_class("QSplitterHandle", phpqt_ce_QSplitterHandle);

	phpqt_ce_QTabWidget = register_class_QTabWidget(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QTabWidget);
	phpqt_map_class("QTabWidget", phpqt_ce_QTabWidget);
}

/* One-liners shared by every class here: no-arg getters and one-arg setters. */
#define PHPQT_GETTER_STRING(Class, name, call) \
ZEND_METHOD(Class, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(Class, self); \
	phpqt_return_qstring(return_value, self->call()); \
}

#define PHPQT_SETTER_STRING(Class, name, call) \
ZEND_METHOD(Class, name) \
{ \
	zend_string *value; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_STR(value) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(Class, self); \
	self->call(phpqt_qstring(value)); \
}

#define PHPQT_GETTER_BOOL(Class, name, call) \
ZEND_METHOD(Class, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(Class, self); \
	RETURN_BOOL(self->call()); \
}

#define PHPQT_SETTER_BOOL(Class, name, call) \
ZEND_METHOD(Class, name) \
{ \
	bool value; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_BOOL(value) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(Class, self); \
	self->call(value); \
}

#define PHPQT_GETTER_INT(Class, name, call) \
ZEND_METHOD(Class, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(Class, self); \
	RETURN_LONG(self->call()); \
}

#define PHPQT_SETTER_INT(Class, name, call) \
ZEND_METHOD(Class, name) \
{ \
	zend_long value; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_LONG(value) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(Class, self); \
	self->call(static_cast<int>(value)); \
}

#define PHPQT_VOID(Class, name, call) \
ZEND_METHOD(Class, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(Class, self); \
	self->call(); \
}

/* ---- QLabel ------------------------------------------------------------ */

ZEND_METHOD(QLabel, __construct)
{
	phpqt_construct_text_widget<QLabel>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

PHPQT_GETTER_STRING(QLabel, text, text)
PHPQT_SETTER_STRING(QLabel, setText, setText)
PHPQT_GETTER_BOOL(QLabel, wordWrap, wordWrap)
PHPQT_SETTER_BOOL(QLabel, setWordWrap, setWordWrap)
PHPQT_SETTER_BOOL(QLabel, setScaledContents, setScaledContents)

ZEND_METHOD(QLabel, alignment)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QLabel, label);

	RETURN_LONG(static_cast<zend_long>(label->alignment().toInt()));
}

ZEND_METHOD(QLabel, setAlignment)
{
	zend_object *alignment_case = nullptr;
	zend_long alignment_long = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(alignment_case, phpqt_ce_Qt_AlignmentFlag, alignment_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLabel, label);

	label->setAlignment(Qt::Alignment(static_cast<int>(phpqt_enum_value(alignment_case, alignment_long))));
}

ZEND_METHOD(QLabel, setPixmap)
{
	zend_object *pixmap_obj = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(pixmap_obj, phpqt_ce_QPixmap)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLabel, label);

	if (pixmap_obj == nullptr) {
		label->setPixmap(QPixmap());
		return;
	}

	QPixmap *pixmap = static_cast<QPixmap *>(phpqt_value_arg(pixmap_obj, 1));
	if (pixmap == nullptr) {
		RETURN_THROWS();
	}

	label->setPixmap(*pixmap);
}

ZEND_METHOD(QLabel, pixmap)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QLabel, label);

	phpqt_return_pixmap(return_value, label->pixmap());
}

ZEND_METHOD(QLabel, textFormat)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QLabel, label);

	phpqt_return_enum(return_value, phpqt_ce_Qt_TextFormat, static_cast<zend_long>(label->textFormat()));
}

ZEND_METHOD(QLabel, setTextFormat)
{
	zend_object *format;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(format, phpqt_ce_Qt_TextFormat)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLabel, label);

	label->setTextFormat(static_cast<Qt::TextFormat>(phpqt_enum_value(format, Qt::AutoText)));
}

PHPQT_GETTER_BOOL(QLabel, openExternalLinks, openExternalLinks)
PHPQT_SETTER_BOOL(QLabel, setOpenExternalLinks, setOpenExternalLinks)

ZEND_METHOD(QLabel, textInteractionFlags)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QLabel, label);

	RETURN_LONG(static_cast<zend_long>(label->textInteractionFlags().toInt()));
}

ZEND_METHOD(QLabel, setTextInteractionFlags)
{
	zend_object *flags_case = nullptr;
	zend_long flags_long = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, phpqt_ce_Qt_TextInteractionFlag, flags_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLabel, label);

	label->setTextInteractionFlags(Qt::TextInteractionFlags(static_cast<int>(phpqt_enum_value(flags_case, flags_long))));
}

/* ---- QAbstractButton, QPushButton, QCheckBox --------------------------- */


PHPQT_GETTER_STRING(QAbstractButton, text, text)
PHPQT_SETTER_STRING(QAbstractButton, setText, setText)
PHPQT_GETTER_BOOL(QAbstractButton, isCheckable, isCheckable)
PHPQT_SETTER_BOOL(QAbstractButton, setCheckable, setCheckable)
PHPQT_GETTER_BOOL(QAbstractButton, isChecked, isChecked)
PHPQT_SETTER_BOOL(QAbstractButton, setChecked, setChecked)
PHPQT_VOID(QAbstractButton, click, click)
PHPQT_VOID(QAbstractButton, toggle, toggle)

ZEND_METHOD(QPushButton, __construct)
{
	phpqt_construct_text_widget<QPushButton>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

PHPQT_GETTER_BOOL(QPushButton, isDefault, isDefault)
PHPQT_SETTER_BOOL(QPushButton, setDefault, setDefault)

ZEND_METHOD(QCheckBox, __construct)
{
	phpqt_construct_text_widget<QCheckBox>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

/* ---- QAbstractSlider, QSlider ------------------------------------------ */

/* Private: a QSlider or a scroll area's QScrollBar is one. */
ZEND_METHOD(QAbstractSlider, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

PHPQT_GETTER_INT(QAbstractSlider, minimum, minimum)
PHPQT_GETTER_INT(QAbstractSlider, maximum, maximum)
PHPQT_GETTER_INT(QAbstractSlider, value, value)
PHPQT_SETTER_INT(QAbstractSlider, setValue, setValue)
PHPQT_GETTER_INT(QAbstractSlider, singleStep, singleStep)
PHPQT_SETTER_INT(QAbstractSlider, setSingleStep, setSingleStep)
PHPQT_GETTER_INT(QAbstractSlider, pageStep, pageStep)
PHPQT_SETTER_INT(QAbstractSlider, setPageStep, setPageStep)

ZEND_METHOD(QAbstractSlider, setRange)
{
	zend_long min;
	zend_long max;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(min)
		Z_PARAM_LONG(max)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAbstractSlider, slider);

	slider->setRange(static_cast<int>(min), static_cast<int>(max));
}

ZEND_METHOD(QAbstractSlider, orientation)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAbstractSlider, slider);

	phpqt_return_enum(return_value, phpqt_ce_Qt_Orientation, static_cast<zend_long>(slider->orientation()));
}

ZEND_METHOD(QAbstractSlider, setOrientation)
{
	zend_object *orientation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(orientation, phpqt_ce_Qt_Orientation)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAbstractSlider, slider);

	slider->setOrientation(static_cast<Qt::Orientation>(phpqt_enum_value(orientation, Qt::Horizontal)));
}

/* Private: a scroll area's own, QPlainTextEdit::verticalScrollBar(). */
ZEND_METHOD(QScrollBar, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QSlider, __construct)
{
	zend_object *orientation = nullptr;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(orientation, phpqt_ce_Qt_Orientation)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts with qFatal ("Must construct a QApplication before a QWidget"). */
	if (!PHPQT_PROBE_OFF("qapp-slider") && (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "QSlider needs a QApplication first", 0); /* binding:qapp-slider */
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QSlider(static_cast<Qt::Orientation>(phpqt_enum_value(orientation, Qt::Vertical)), qparent));
}

/* ---- QComboBox --------------------------------------------------------- */

ZEND_METHOD(QComboBox, __construct)
{
	phpqt_construct_widget<QComboBox>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QComboBox, addItem)
{
	zend_string *text;
	zval *user_data = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL(user_data)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QComboBox, combo);

	QVariant data;
	if (user_data != nullptr && !phpqt_zval_to_variant(user_data, QMetaType(), &data, 2)) {
		RETURN_THROWS();
	}

	combo->addItem(phpqt_qstring(text), data);
}

PHPQT_VOID(QComboBox, clear, clear)
PHPQT_GETTER_INT(QComboBox, count, count)
PHPQT_GETTER_INT(QComboBox, currentIndex, currentIndex)
PHPQT_SETTER_INT(QComboBox, setCurrentIndex, setCurrentIndex)
PHPQT_GETTER_STRING(QComboBox, currentText, currentText)

ZEND_METHOD(QComboBox, addItems)
{
	HashTable *texts;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(texts)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QComboBox, combo);

	QStringList list;
	if (!phpqt_string_list(texts, &list, 1)) {
		RETURN_THROWS();
	}

	combo->addItems(list);
}

ZEND_METHOD(QComboBox, itemText)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QComboBox, combo);

	phpqt_return_qstring(return_value, combo->itemText(static_cast<int>(index)));
}

/* ---- QLineEdit --------------------------------------------------------- */

ZEND_METHOD(QLineEdit, __construct)
{
	phpqt_construct_text_widget<QLineEdit>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

PHPQT_GETTER_STRING(QLineEdit, text, text)
PHPQT_SETTER_STRING(QLineEdit, setText, setText)
PHPQT_GETTER_STRING(QLineEdit, placeholderText, placeholderText)
PHPQT_SETTER_STRING(QLineEdit, setPlaceholderText, setPlaceholderText)
PHPQT_GETTER_BOOL(QLineEdit, isReadOnly, isReadOnly)
PHPQT_SETTER_BOOL(QLineEdit, setReadOnly, setReadOnly)

#define PHPQT_EDIT_SLOT(type, slot) \
	ZEND_METHOD(type, slot) \
	{ \
		ZEND_PARSE_PARAMETERS_NONE(); \
		PHPQT_THIS(type, edit); \
		edit->slot(); \
	}

PHPQT_EDIT_SLOT(QLineEdit, cut)
PHPQT_EDIT_SLOT(QLineEdit, copy)
PHPQT_EDIT_SLOT(QLineEdit, paste)
PHPQT_EDIT_SLOT(QLineEdit, selectAll)
PHPQT_EDIT_SLOT(QLineEdit, undo)
PHPQT_EDIT_SLOT(QLineEdit, redo)
PHPQT_GETTER_STRING(QLineEdit, selectedText, selectedText)

ZEND_METHOD(QLineEdit, echoMode)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QLineEdit, edit);

	phpqt_return_enum(return_value, phpqt_ce_QLineEdit_EchoMode, static_cast<zend_long>(edit->echoMode()));
}

ZEND_METHOD(QLineEdit, setEchoMode)
{
	zend_object *mode;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_QLineEdit_EchoMode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLineEdit, edit);

	edit->setEchoMode(static_cast<QLineEdit::EchoMode>(phpqt_enum_value(mode, QLineEdit::Normal)));
}

/* ---- QPlainTextEdit ---------------------------------------------------- */

ZEND_METHOD(QPlainTextEdit, __construct)
{
	phpqt_construct_widget<QPlainTextEdit>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

PHPQT_GETTER_STRING(QPlainTextEdit, toPlainText, toPlainText)
PHPQT_SETTER_STRING(QPlainTextEdit, setPlainText, setPlainText)
PHPQT_GETTER_BOOL(QPlainTextEdit, isReadOnly, isReadOnly)
PHPQT_SETTER_BOOL(QPlainTextEdit, setReadOnly, setReadOnly)

PHPQT_EDIT_SLOT(QPlainTextEdit, cut)
PHPQT_EDIT_SLOT(QPlainTextEdit, copy)
PHPQT_EDIT_SLOT(QPlainTextEdit, paste)
PHPQT_EDIT_SLOT(QPlainTextEdit, selectAll)
PHPQT_EDIT_SLOT(QPlainTextEdit, undo)
PHPQT_EDIT_SLOT(QPlainTextEdit, redo)

ZEND_METHOD(QPlainTextEdit, document)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QPlainTextEdit, edit);

	phpqt_box(return_value, edit->document());
}

ZEND_METHOD(QPlainTextEdit, textCursor)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QPlainTextEdit, edit);

	phpqt_return_text_cursor(return_value, edit->textCursor());
}

ZEND_METHOD(QPlainTextEdit, setTextCursor)
{
	zend_object *cursor_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(cursor_obj, phpqt_ce_QTextCursor)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QPlainTextEdit, edit);

	QTextCursor *cursor = static_cast<QTextCursor *>(phpqt_value_arg(cursor_obj, 1));
	if (cursor == nullptr) {
		RETURN_THROWS();
	}
	edit->setTextCursor(*cursor);
}

PHPQT_VOID(QPlainTextEdit, ensureCursorVisible, ensureCursorVisible)

/* A PHP list of QTextEdit\ExtraSelection as QList<QTextEdit::ExtraSelection>: each struct's fields copied. */
static bool phpqt_extra_selections(HashTable *selections, QList<QTextEdit::ExtraSelection> *out, uint32_t arg_num)
{
	zval *entry;

	out->reserve((qsizetype) zend_hash_num_elements(selections));
	ZEND_HASH_FOREACH_VAL(selections, entry) {
		ZVAL_DEREF(entry);
		if (Z_TYPE_P(entry) != IS_OBJECT || !instanceof_function(Z_OBJCE_P(entry), phpqt_ce_QTextEdit_ExtraSelection)) {
			zend_argument_type_error(arg_num, "must contain only QTextEdit\\ExtraSelection, %s given", zend_zval_value_name(entry));
			return false;
		}
		zval *cursor_zv = zend_read_property(phpqt_ce_QTextEdit_ExtraSelection, Z_OBJ_P(entry), "cursor", sizeof("cursor") - 1, false, nullptr);
		zval *format_zv = EG(exception) == nullptr ? zend_read_property(phpqt_ce_QTextEdit_ExtraSelection, Z_OBJ_P(entry), "format", sizeof("format") - 1, false, nullptr) : nullptr;
		if (EG(exception) != nullptr) {
			return false;
		}
		QTextCursor *cursor = static_cast<QTextCursor *>(phpqt_value_arg(Z_OBJ_P(cursor_zv), arg_num));
		QTextCharFormat *format = cursor != nullptr ? static_cast<QTextCharFormat *>(phpqt_value_arg(Z_OBJ_P(format_zv), arg_num)) : nullptr;
		if (format == nullptr) {
			return false;
		}
		out->append(QTextEdit::ExtraSelection{*cursor, *format});
	} ZEND_HASH_FOREACH_END();

	return true;
}

ZEND_METHOD(QPlainTextEdit, setExtraSelections)
{
	HashTable *selections;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(selections)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QPlainTextEdit, edit);

	QList<QTextEdit::ExtraSelection> list;
	if (!phpqt_extra_selections(selections, &list, 1)) {
		RETURN_THROWS();
	}

	edit->setExtraSelections(list);
}

ZEND_METHOD(QPlainTextEdit, extraSelections)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QPlainTextEdit, edit);

	const QList<QTextEdit::ExtraSelection> list = edit->extraSelections();
	array_init_size(return_value, (uint32_t) list.size());
	for (const QTextEdit::ExtraSelection &selection : list) {
		zval boxed;
		phpqt_return_extra_selection(&boxed, selection);
		add_next_index_zval(return_value, &boxed);
	}
}

ZEND_METHOD(QPlainTextEdit, lineWrapMode)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QPlainTextEdit, edit);

	phpqt_return_enum(return_value, phpqt_ce_QPlainTextEdit_LineWrapMode, static_cast<zend_long>(edit->lineWrapMode()));
}

ZEND_METHOD(QPlainTextEdit, setLineWrapMode)
{
	zend_object *mode;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_QPlainTextEdit_LineWrapMode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QPlainTextEdit, edit);

	edit->setLineWrapMode(static_cast<QPlainTextEdit::LineWrapMode>(phpqt_enum_value(mode, QPlainTextEdit::WidgetWidth)));
}

ZEND_METHOD(QPlainTextEdit, textInteractionFlags)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QPlainTextEdit, edit);

	RETURN_LONG(static_cast<zend_long>(edit->textInteractionFlags().toInt()));
}

ZEND_METHOD(QPlainTextEdit, setTextInteractionFlags)
{
	zend_object *flags_case = nullptr;
	zend_long flags_long = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, phpqt_ce_Qt_TextInteractionFlag, flags_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QPlainTextEdit, edit);

	edit->setTextInteractionFlags(Qt::TextInteractionFlags(static_cast<int>(phpqt_enum_value(flags_case, flags_long))));
}

ZEND_METHOD(QPlainTextEdit, verticalScrollBar)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QPlainTextEdit, edit);

	phpqt_box(return_value, edit->verticalScrollBar());
}

ZEND_METHOD(QPlainTextEdit, horizontalScrollBar)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QPlainTextEdit, edit);

	phpqt_box(return_value, edit->horizontalScrollBar());
}

ZEND_METHOD(QPlainTextEdit, viewport)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QPlainTextEdit, edit);

	phpqt_box(return_value, edit->viewport());
}

/* ---- QCalendarWidget, QDateEdit ---------------------------------------- */

zend_class_entry *phpqt_ce_QCalendarWidget;

ZEND_METHOD(QCalendarWidget, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QDateEdit, __construct)
{
	phpqt_construct_widget<QDateEdit>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

PHPQT_SETTER_BOOL(QDateEdit, setCalendarPopup, setCalendarPopup)
PHPQT_SETTER_STRING(QDateEdit, setDisplayFormat, setDisplayFormat)

ZEND_METHOD(QDateEdit, date)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDateEdit, edit);

	phpqt_return_qdate(return_value, edit->date());
}

ZEND_METHOD(QDateEdit, setDate)
{
	zend_object *date_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(date_obj, phpqt_ce_QDate)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QDateEdit, edit);

	QDate *date = static_cast<QDate *>(phpqt_value_arg(date_obj, 1));
	if (date == nullptr) {
		RETURN_THROWS();
	}

	edit->setDate(*date);
}

ZEND_METHOD(QDateEdit, calendarWidget)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDateEdit, edit);

	phpqt_box(return_value, edit->calendarWidget());
}

ZEND_METHOD(QDateEdit, minimumDate)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDateEdit, edit);

	phpqt_return_qdate(return_value, edit->minimumDate());
}

ZEND_METHOD(QDateEdit, setMinimumDate)
{
	zend_object *min_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(min_obj, phpqt_ce_QDate)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QDateEdit, edit);

	QDate *min = static_cast<QDate *>(phpqt_value_arg(min_obj, 1));
	if (min == nullptr) {
		RETURN_THROWS();
	}

	edit->setMinimumDate(*min);
}

/* ---- QProgressBar ------------------------------------------------------ */

ZEND_METHOD(QProgressBar, __construct)
{
	phpqt_construct_widget<QProgressBar>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

PHPQT_GETTER_INT(QProgressBar, minimum, minimum)
PHPQT_GETTER_INT(QProgressBar, maximum, maximum)
PHPQT_GETTER_INT(QProgressBar, value, value)
PHPQT_SETTER_INT(QProgressBar, setValue, setValue)
PHPQT_SETTER_BOOL(QProgressBar, setTextVisible, setTextVisible)
PHPQT_VOID(QProgressBar, reset, reset)

ZEND_METHOD(QProgressBar, setRange)
{
	zend_long minimum;
	zend_long maximum;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(minimum)
		Z_PARAM_LONG(maximum)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QProgressBar, bar);

	bar->setRange(static_cast<int>(minimum), static_cast<int>(maximum));
}

/* ---- QFrame, QScrollArea ----------------------------------------------- */

ZEND_METHOD(QFrame, __construct)
{
	phpqt_construct_widget<QFrame>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QFrame, frameShape)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QFrame, frame);

	phpqt_return_enum(return_value, phpqt_ce_QFrame_Shape, static_cast<zend_long>(frame->frameShape()));
}

ZEND_METHOD(QFrame, setFrameShape)
{
	zend_object *shape;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(shape, phpqt_ce_QFrame_Shape)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QFrame, frame);

	frame->setFrameShape(static_cast<QFrame::Shape>(phpqt_enum_value(shape, QFrame::NoFrame)));
}

ZEND_METHOD(QFrame, setFrameShadow)
{
	zend_object *shadow;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(shadow, phpqt_ce_QFrame_Shadow)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QFrame, frame);

	frame->setFrameShadow(static_cast<QFrame::Shadow>(phpqt_enum_value(shadow, QFrame::Plain)));
}

ZEND_METHOD(QScrollArea, __construct)
{
	phpqt_construct_widget<QScrollArea>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

PHPQT_SETTER_BOOL(QScrollArea, setWidgetResizable, setWidgetResizable)

ZEND_METHOD(QScrollArea, setWidget)
{
	zend_object *widget_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QScrollArea, area);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	area->setWidget(widget);
}

ZEND_METHOD(QScrollArea, widget)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QScrollArea, area);

	phpqt_box(return_value, area->widget());
}

#define PHPQT_SCROLLBAR_POLICY(name, call) \
ZEND_METHOD(QScrollArea, name) \
{ \
	zend_object *policy; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_OBJ_OF_CLASS(policy, phpqt_ce_Qt_ScrollBarPolicy) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(QScrollArea, area); \
	area->call(static_cast<Qt::ScrollBarPolicy>(phpqt_enum_value(policy, Qt::ScrollBarAsNeeded))); \
}

PHPQT_SCROLLBAR_POLICY(setHorizontalScrollBarPolicy, setHorizontalScrollBarPolicy)
PHPQT_SCROLLBAR_POLICY(setVerticalScrollBarPolicy, setVerticalScrollBarPolicy)

/* ---- QAbstractItemView, QTableWidget ----------------------------------- */


ZEND_METHOD(QAbstractItemView, setSelectionBehavior)
{
	zend_object *behavior;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(behavior, phpqt_ce_QAbstractItemView_SelectionBehavior)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAbstractItemView, view);

	view->setSelectionBehavior(static_cast<QAbstractItemView::SelectionBehavior>(phpqt_enum_value(behavior, QAbstractItemView::SelectItems)));
}

ZEND_METHOD(QAbstractItemView, setSelectionMode)
{
	zend_object *mode;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_QAbstractItemView_SelectionMode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAbstractItemView, view);

	view->setSelectionMode(static_cast<QAbstractItemView::SelectionMode>(phpqt_enum_value(mode, QAbstractItemView::SingleSelection)));
}

ZEND_METHOD(QAbstractItemView, setEditTriggers)
{
	zend_long triggers;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(triggers)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QAbstractItemView, view);

	view->setEditTriggers(QAbstractItemView::EditTriggers(static_cast<int>(triggers)));
}

ZEND_METHOD(QAbstractItemView, clearSelection)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QAbstractItemView, view);

	view->clearSelection();
}

ZEND_METHOD(QTableWidget, __construct)
{
	zend_long rows = 0;
	zend_long columns = 0;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 3)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(rows)
		Z_PARAM_LONG(columns)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts with qFatal ("Must construct a QApplication before a QWidget"). */
	if (!PHPQT_PROBE_OFF("qapp-table") && (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "QTableWidget needs a QApplication first", 0); /* binding:qapp-table */
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 3, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	QTableWidget *table = new QTableWidget(static_cast<int>(rows), static_cast<int>(columns), qparent);
	/* Items Qt makes itself (header labels, cells a user types into) are clones of this, so their wrappers learn of deletion. */
	table->setItemPrototype(phpqt_table_item_prototype());
	phpqt_adopt(Z_OBJ_P(ZEND_THIS), table);
}

PHPQT_GETTER_INT(QTableWidget, rowCount, rowCount)
PHPQT_SETTER_INT(QTableWidget, setRowCount, setRowCount)
PHPQT_GETTER_INT(QTableWidget, columnCount, columnCount)
PHPQT_SETTER_INT(QTableWidget, setColumnCount, setColumnCount)
PHPQT_VOID(QTableWidget, clearContents, clearContents)
PHPQT_GETTER_INT(QTableWidget, currentRow, currentRow)
PHPQT_SETTER_INT(QTableWidget, selectRow, selectRow)

ZEND_METHOD(QTableWidget, setHorizontalHeaderLabels)
{
	HashTable *labels;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(labels)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTableWidget, table);

	QStringList list;
	if (!phpqt_string_list(labels, &list, 1)) {
		RETURN_THROWS();
	}

	table->setHorizontalHeaderLabels(list);
}

ZEND_METHOD(QTableWidget, setItem)
{
	zend_long row;
	zend_long column;
	zend_object *item_obj;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_OBJ_OF_CLASS(item_obj, phpqt_ce_QTableWidgetItem)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTableWidget, table);

	QTableWidgetItem *item = static_cast<QTableWidgetItem *>(phpqt_value_arg(item_obj, 3));
	if (item == nullptr) {
		RETURN_THROWS();
	}
	/*
	 * Qt drops an item outside the table without storing it, but leaves the item's view pointer
	 * on the table: once the table goes, the item reads freed memory.
	 */
	bool row_in = row >= 0 && row < table->rowCount();
	if (!PHPQT_PROBE_OFF("table-item-range") && (!row_in || column < 0 || column >= table->columnCount())) {
		zend_argument_value_error(row_in ? 2 : 1, "must be a %s of the table (it has %d)", row_in ? "column" : "row", row_in ? table->columnCount() : table->rowCount()); /* binding:table-item-range */
		RETURN_THROWS();
	}

	table->setItem(static_cast<int>(row), static_cast<int>(column), item);
	/* The table owns the item once Qt stored it; an item of another table stays that table's. */
	if (item->tableWidget() == table) {
		phpqt_value_taken(item_obj);
	}
}

ZEND_METHOD(QTableWidget, item)
{
	zend_long row;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTableWidget, table);

	phpqt_return_table_item(return_value, table->item(static_cast<int>(row), static_cast<int>(column)));
}

ZEND_METHOD(QTableWidget, selectedItems)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTableWidget, table);

	const QList<QTableWidgetItem *> items = table->selectedItems();
	array_init_size(return_value, (uint32_t) items.size());
	for (QTableWidgetItem *item : items) {
		zval boxed;
		phpqt_return_table_item(&boxed, item);
		add_next_index_zval(return_value, &boxed);
	}
}

ZEND_METHOD(QTableWidget, horizontalHeaderItem)
{
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTableWidget, table);

	phpqt_return_table_item(return_value, table->horizontalHeaderItem(static_cast<int>(column)));
}

/* ---- QTreeWidget ------------------------------------------------------- */

ZEND_METHOD(QTreeWidget, __construct)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts with qFatal ("Must construct a QApplication before a QWidget"). */
	if (!PHPQT_PROBE_OFF("qapp-tree-widget") && (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "QTreeWidget needs a QApplication first", 0); /* binding:qapp-tree-widget */
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QTreeWidget(qparent));
}

PHPQT_GETTER_INT(QTreeWidget, columnCount, columnCount)
PHPQT_SETTER_INT(QTreeWidget, setColumnCount, setColumnCount)
PHPQT_VOID(QTreeWidget, clear, clear)

ZEND_METHOD(QTreeWidget, setHeaderLabels)
{
	HashTable *labels;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(labels)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTreeWidget, tree);

	QStringList list;
	if (!phpqt_string_list(labels, &list, 1)) {
		RETURN_THROWS();
	}

	tree->setHeaderLabels(list);
}

ZEND_METHOD(QTreeWidget, addTopLevelItem)
{
	zend_object *item_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(item_obj, phpqt_ce_QTreeWidgetItem)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTreeWidget, tree);

	QTreeWidgetItem *item = static_cast<QTreeWidgetItem *>(phpqt_value_arg(item_obj, 1));
	if (item == nullptr) {
		RETURN_THROWS();
	}

	tree->addTopLevelItem(item);
	/* The tree owns the item once Qt stored it; an item that already had a tree or a parent stays where it was. */
	if (item->treeWidget() == tree && item->parent() == nullptr) {
		phpqt_value_taken(item_obj);
	}
}

ZEND_METHOD(QTreeWidget, currentItem)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTreeWidget, tree);

	phpqt_return_tree_item(return_value, tree->currentItem());
}

ZEND_METHOD(QTreeWidget, setCurrentItem)
{
	zend_object *item_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(item_obj, phpqt_ce_QTreeWidgetItem)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTreeWidget, tree);

	QTreeWidgetItem *item = nullptr;
	if (item_obj != nullptr) {
		item = static_cast<QTreeWidgetItem *>(phpqt_value_arg(item_obj, 1));
		if (item == nullptr) {
			RETURN_THROWS();
		}
	}

	tree->setCurrentItem(item);
}

ZEND_METHOD(QTreeWidget, scrollToItem)
{
	zend_object *item_obj;
	zend_object *hint = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(item_obj, phpqt_ce_QTreeWidgetItem)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(hint, phpqt_ce_QAbstractItemView_ScrollHint)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTreeWidget, tree);

	QTreeWidgetItem *item = static_cast<QTreeWidgetItem *>(phpqt_value_arg(item_obj, 1));
	if (item == nullptr) {
		RETURN_THROWS();
	}

	tree->scrollToItem(item, static_cast<QAbstractItemView::ScrollHint>(phpqt_enum_value(hint, QAbstractItemView::EnsureVisible)));
}

/* expandItem(), collapseItem(): one item argument each. */
#define PHPQT_TREE_ITEM_CALL(name) \
ZEND_METHOD(QTreeWidget, name) \
{ \
	zend_object *item_obj; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_OBJ_OF_CLASS(item_obj, phpqt_ce_QTreeWidgetItem) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(QTreeWidget, tree); \
	QTreeWidgetItem *item = static_cast<QTreeWidgetItem *>(phpqt_value_arg(item_obj, 1)); \
	if (item == nullptr) { \
		RETURN_THROWS(); \
	} \
	tree->name(item); \
}

PHPQT_TREE_ITEM_CALL(expandItem)
PHPQT_TREE_ITEM_CALL(collapseItem)

ZEND_METHOD(QTreeWidget, selectedItems)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTreeWidget, tree);

	const QList<QTreeWidgetItem *> items = tree->selectedItems();
	array_init_size(return_value, (uint32_t) items.size());
	for (QTreeWidgetItem *item : items) {
		zval boxed;
		phpqt_return_tree_item(&boxed, item);
		add_next_index_zval(return_value, &boxed);
	}
}

/* ---- QSplitter, QSplitterHandle ---------------------------------------- */

ZEND_METHOD(QSplitter, __construct)
{
	zend_object *orientation;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(orientation, phpqt_ce_Qt_Orientation)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts with qFatal ("Must construct a QApplication before a QWidget"). */
	if (!PHPQT_PROBE_OFF("qapp-splitter") && (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "QSplitter needs a QApplication first", 0); /* binding:qapp-splitter */
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QSplitter(static_cast<Qt::Orientation>(phpqt_enum_value(orientation, Qt::Horizontal)), qparent));
}

ZEND_METHOD(QSplitter, orientation)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QSplitter, splitter);

	phpqt_return_enum(return_value, phpqt_ce_Qt_Orientation, static_cast<zend_long>(splitter->orientation()));
}

ZEND_METHOD(QSplitter, setOrientation)
{
	zend_object *orientation;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(orientation, phpqt_ce_Qt_Orientation)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QSplitter, splitter);

	splitter->setOrientation(static_cast<Qt::Orientation>(phpqt_enum_value(orientation, Qt::Horizontal)));
}

ZEND_METHOD(QSplitter, addWidget)
{
	zend_object *widget_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QSplitter, splitter);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	splitter->addWidget(widget);
}

ZEND_METHOD(QSplitter, insertWidget)
{
	zend_long index;
	zend_object *widget_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QSplitter, splitter);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}
	splitter->insertWidget(static_cast<int>(index), widget);
}

PHPQT_GETTER_INT(QSplitter, count, count)
PHPQT_GETTER_INT(QSplitter, handleWidth, handleWidth)
PHPQT_SETTER_INT(QSplitter, setHandleWidth, setHandleWidth)
PHPQT_GETTER_BOOL(QSplitter, opaqueResize, opaqueResize)
PHPQT_SETTER_BOOL(QSplitter, setOpaqueResize, setOpaqueResize)
PHPQT_GETTER_BOOL(QSplitter, childrenCollapsible, childrenCollapsible)
PHPQT_SETTER_BOOL(QSplitter, setChildrenCollapsible, setChildrenCollapsible)

ZEND_METHOD(QSplitter, widget)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QSplitter, splitter);

	phpqt_box(return_value, splitter->widget(static_cast<int>(index)));
}

ZEND_METHOD(QSplitter, indexOf)
{
	zend_object *widget_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QSplitter, splitter);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	RETURN_LONG(splitter->indexOf(widget));
}

ZEND_METHOD(QSplitter, setSizes)
{
	HashTable *sizes;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ARRAY_HT(sizes)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QSplitter, splitter);

	QList<int> list;
	if (!phpqt_int_list(sizes, &list, 1)) {
		RETURN_THROWS();
	}

	splitter->setSizes(list);
}

ZEND_METHOD(QSplitter, sizes)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QSplitter, splitter);

	array_init(return_value);
	for (int size : splitter->sizes()) {
		add_next_index_long(return_value, size);
	}
}

ZEND_METHOD(QSplitter, setStretchFactor)
{
	zend_long index;
	zend_long stretch;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(stretch)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QSplitter, splitter);

	splitter->setStretchFactor(static_cast<int>(index), static_cast<int>(stretch));
}

ZEND_METHOD(QSplitter, handle)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QSplitter, splitter);

	phpqt_box(return_value, splitter->handle(static_cast<int>(index)));
}

/* Private: its QSplitter makes it, QSplitter::handle(). */
ZEND_METHOD(QSplitterHandle, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QSplitterHandle, splitter)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QSplitterHandle, handle);

	phpqt_box(return_value, handle->splitter());
}

/* ---- QTabWidget -------------------------------------------------------- */

ZEND_METHOD(QTabWidget, __construct)
{
	phpqt_construct_widget<QTabWidget>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QTabWidget, addTab)
{
	zend_object *page_obj;
	zend_string *label;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(page_obj, phpqt_ce_QWidget)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTabWidget, tabs);

	QWidget *page = static_cast<QWidget *>(phpqt_arg(page_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	RETURN_LONG(tabs->addTab(page, phpqt_qstring(label)));
}

ZEND_METHOD(QTabWidget, removeTab)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTabWidget, tabs);

	tabs->removeTab(static_cast<int>(index));
}

ZEND_METHOD(QTabWidget, indexOf)
{
	zend_object *page_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(page_obj, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTabWidget, tabs);

	QWidget *page = static_cast<QWidget *>(phpqt_arg(page_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	RETURN_LONG(tabs->indexOf(page));
}

PHPQT_GETTER_INT(QTabWidget, count, count)
PHPQT_GETTER_INT(QTabWidget, currentIndex, currentIndex)
PHPQT_GETTER_BOOL(QTabWidget, documentMode, documentMode)
PHPQT_SETTER_BOOL(QTabWidget, setDocumentMode, setDocumentMode)

ZEND_METHOD(QTabWidget, setCurrentIndex)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTabWidget, tabs);

	tabs->setCurrentIndex(static_cast<int>(index));
}

ZEND_METHOD(QTabWidget, currentWidget)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QTabWidget, tabs);

	phpqt_box(return_value, tabs->currentWidget());
}

ZEND_METHOD(QTabWidget, setTabText)
{
	zend_long index;
	zend_string *label;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_STR(label)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTabWidget, tabs);

	tabs->setTabText(static_cast<int>(index), phpqt_qstring(label));
}

ZEND_METHOD(QTabWidget, tabText)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTabWidget, tabs);

	phpqt_return_qstring(return_value, tabs->tabText(static_cast<int>(index)));
}

ZEND_METHOD(QTabWidget, widget)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QTabWidget, tabs);

	phpqt_box(return_value, tabs->widget(static_cast<int>(index)));
}
