#include "runtime.h"

#include <QtCore/QDate>
#include <QtCore/QStringList>
#include <QtGui/QPixmap>
#include <QtWidgets/QAbstractItemView>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QAbstractSlider>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

/* After the Qt headers: the generated class registration spells QAbstractItemView::NoEditTriggers. */
#include "../stubs/QControls_arginfo.h"

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

void phpqt_register_QControls()
{
	phpqt_ce_QLineEdit_EchoMode = register_class_QLineEdit_EchoMode();
	phpqt_ce_QFrame_Shape = register_class_QFrame_Shape();
	phpqt_ce_QFrame_Shadow = register_class_QFrame_Shadow();
	phpqt_ce_QAbstractItemView_SelectionBehavior = register_class_QAbstractItemView_SelectionBehavior();
	phpqt_ce_QAbstractItemView_SelectionMode = register_class_QAbstractItemView_SelectionMode();

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

/* ---- QAbstractButton, QPushButton, QCheckBox --------------------------- */

ZEND_METHOD(QAbstractButton, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	zend_throw_error(nullptr, "QAbstractButton is abstract: construct a QPushButton or QCheckBox");
}

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

ZEND_METHOD(QCheckBox, __construct)
{
	phpqt_construct_text_widget<QCheckBox>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

/* ---- QAbstractSlider, QSlider ------------------------------------------ */

ZEND_METHOD(QAbstractSlider, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	zend_throw_error(nullptr, "QAbstractSlider is abstract: construct a QSlider");
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

	if (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception(phpqt_ce_QtException, "QSlider needs a QApplication first", 0);
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

PHPQT_SETTER_STRING(QComboBox, addItem, addItem)
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
	zval *text;
	ZEND_HASH_FOREACH_VAL(texts, text) {
		if (Z_TYPE_P(text) != IS_STRING) {
			zend_argument_type_error(1, "must be a list of strings, %s found", zend_zval_value_name(text));
			RETURN_THROWS();
		}
		list.append(phpqt_qstring(Z_STR_P(text)));
	} ZEND_HASH_FOREACH_END();

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

/* ---- QDateEdit --------------------------------------------------------- */

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

	phpqt_return_qstring(return_value, edit->date().toString(Qt::ISODate));
}

ZEND_METHOD(QDateEdit, setDate)
{
	zend_string *iso;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(iso)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QDateEdit, edit);

	QDate date = QDate::fromString(phpqt_qstring(iso), Qt::ISODate);
	if (!date.isValid()) {
		zend_argument_value_error(1, "must be an ISO 8601 date (yyyy-MM-dd)");
		RETURN_THROWS();
	}

	edit->setDate(date);
}

ZEND_METHOD(QDateEdit, calendarWidget)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDateEdit, edit);

	phpqt_box(return_value, edit->calendarPopup() ? edit->calendarWidget() : nullptr);
}

ZEND_METHOD(QDateEdit, minimumDate)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QDateEdit, edit);

	phpqt_return_qstring(return_value, edit->minimumDate().toString(Qt::ISODate));
}

ZEND_METHOD(QDateEdit, setMinimumDate)
{
	zend_string *iso;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(iso)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QDateEdit, edit);

	QDate date = QDate::fromString(phpqt_qstring(iso), Qt::ISODate);
	if (!date.isValid()) {
		zend_argument_value_error(1, "must be an ISO 8601 date (yyyy-MM-dd)");
		RETURN_THROWS();
	}

	edit->setMinimumDate(date);
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

ZEND_METHOD(QAbstractItemView, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	zend_throw_error(nullptr, "QAbstractItemView is abstract: construct a QTableWidget");
}

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

	if (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception(phpqt_ce_QtException, "QTableWidget needs a QApplication first", 0);
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
	zval *label;
	ZEND_HASH_FOREACH_VAL(labels, label) {
		if (Z_TYPE_P(label) != IS_STRING) {
			zend_argument_type_error(1, "must be a list of strings, %s found", zend_zval_value_name(label));
			RETURN_THROWS();
		}
		list.append(phpqt_qstring(Z_STR_P(label)));
	} ZEND_HASH_FOREACH_END();

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
	if (item->tableWidget() != nullptr) {
		zend_argument_value_error(3, "already belongs to a table");
		RETURN_THROWS();
	}
	/* Qt drops an out-of-range item without storing it (leaked, its view pointer left dangling) and folds a column overflow into the next row. */
	if (row < 0 || row >= table->rowCount()) {
		zend_argument_value_error(1, "must be a row of the table (it has %d)", table->rowCount());
		RETURN_THROWS();
	}
	if (column < 0 || column >= table->columnCount()) {
		zend_argument_value_error(2, "must be a column of the table (it has %d)", table->columnCount());
		RETURN_THROWS();
	}

	phpqt_value_taken(item_obj);
	table->setItem(static_cast<int>(row), static_cast<int>(column), item);
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
