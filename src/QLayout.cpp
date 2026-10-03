#include "runtime.h"
#include "../stubs/QLayout_arginfo.h"

#include <QtWidgets/QApplication>
#include <QtWidgets/QBoxLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLayout>
#include <QtWidgets/QLayoutItem>
#include <QtWidgets/QSizePolicy>
#include <QtWidgets/QWidget>

static_assert(QSizePolicy::Fixed == 0 && QSizePolicy::Minimum == 1 && QSizePolicy::Maximum == 4
	&& QSizePolicy::Preferred == 5 && QSizePolicy::MinimumExpanding == 3 && QSizePolicy::Expanding == 7
	&& QSizePolicy::Ignored == 13,
	"QSizePolicy::Policy values differ from the stub's QSizePolicy\\Policy enum");

void phpqt_register_QLayout()
{
	phpqt_ce_QSizePolicy_Policy = register_class_QSizePolicy_Policy();

	phpqt_ce_QLayout = register_class_QLayout(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QLayout);
	phpqt_map_class("QLayout", phpqt_ce_QLayout);

	phpqt_ce_QBoxLayout = register_class_QBoxLayout(phpqt_ce_QLayout);
	phpqt_object_setup(phpqt_ce_QBoxLayout);
	phpqt_map_class("QBoxLayout", phpqt_ce_QBoxLayout);

	phpqt_ce_QVBoxLayout = register_class_QVBoxLayout(phpqt_ce_QBoxLayout);
	phpqt_object_setup(phpqt_ce_QVBoxLayout);
	phpqt_map_class("QVBoxLayout", phpqt_ce_QVBoxLayout);

	phpqt_ce_QHBoxLayout = register_class_QHBoxLayout(phpqt_ce_QBoxLayout);
	phpqt_object_setup(phpqt_ce_QHBoxLayout);
	phpqt_map_class("QHBoxLayout", phpqt_ce_QHBoxLayout);

	phpqt_ce_QSpacerItem = register_class_QSpacerItem();
	phpqt_value_setup(phpqt_ce_QSpacerItem);

	phpqt_ce_QGridLayout = register_class_QGridLayout(phpqt_ce_QLayout);
	phpqt_object_setup(phpqt_ce_QGridLayout);
	phpqt_map_class("QGridLayout", phpqt_ce_QGridLayout);
}

/*
 * A layout takes an optional parent widget, which installs the layout on it and
 * owns it from then on; parentless, PHP owns it until setLayout/addLayout does.
 */
template <typename Layout>
static void phpqt_construct_layout(INTERNAL_FUNCTION_PARAMETERS)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	if (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "%s needs a QApplication first", ZSTR_VAL(EX(func)->common.scope->name));
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new Layout(qparent));
}

/*
 * QLayout::addWidget only reparents when the layout already sits on a widget.
 * Until then the widget has no parent, so its PHP wrapper would delete it while
 * the layout still lists it. A hold keeps the wrapper alive for as long as the
 * native layout lives: it is a QObject child of the layout, so Qt deletes it
 * with the layout, after the layout has deleted its items. The hold is a
 * PhpSlot that is never connected, so request shutdown releases it like any
 * slot. A layout dropped without ever being installed then frees its widgets.
 */
class PhpHold : public PhpSlot {
public:
	PhpHold(zval *wrapper, QWidget *widget, QLayout *layout) : PhpSlot(wrapper, QMetaMethod()), held(widget)
	{
		setParent(layout);
	}

	QWidget *held;
};

static void phpqt_hold_if_parentless(QLayout *layout, zend_object *widget_obj, QWidget *widget)
{
	if (widget->parentWidget() != nullptr) {
		return;
	}

	zval wrapper;
	ZVAL_OBJ(&wrapper, widget_obj);
	new PhpHold(&wrapper, widget, layout);
}

static void phpqt_release_hold(QLayout *layout, QWidget *widget)
{
	for (QObject *child : layout->children()) {
		PhpHold *hold = dynamic_cast<PhpHold *>(child);
		if (hold != nullptr && hold->held == widget) {
			/* Releasing may free the last reference and so delete the widget: it is out of the layout already. */
			delete hold;
			return;
		}
	}
}

/* The widget of a layout item: null for a spacer, a nested layout or no item. */
static void phpqt_return_item_widget(zval *rv, QLayoutItem *item)
{
	phpqt_box(rv, item != nullptr ? item->widget() : nullptr);
}

/*
 * A spacer PHP made: the layout that takes it deletes it, and the destructor tells the wrapper.
 */
class PhpSpacerItem : public QSpacerItem {
public:
	using QSpacerItem::QSpacerItem;

	~PhpSpacerItem() override
	{
		if (wrapper != nullptr) {
			phpqt_value_from(wrapper)->ptr = nullptr;
		}
	}

	zend_object *wrapper = nullptr;
};

static void phpqt_destroy_spacer(void *ptr) { delete static_cast<PhpSpacerItem *>(ptr); }
static void phpqt_forget_spacer(void *ptr) { static_cast<PhpSpacerItem *>(ptr)->wrapper = nullptr; }

/* ---- QLayout ----------------------------------------------------------- */

ZEND_METHOD(QLayout, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	zend_throw_error(nullptr, "QLayout is abstract: construct a QVBoxLayout, QHBoxLayout or QGridLayout");
}

ZEND_METHOD(QLayout, setSpacing)
{
	zend_long spacing;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(spacing)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLayout, layout);

	layout->setSpacing(static_cast<int>(spacing));
}

ZEND_METHOD(QLayout, spacing)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QLayout, layout);

	RETURN_LONG(layout->spacing());
}

ZEND_METHOD(QLayout, setContentsMargins)
{
	zend_long left, top, right, bottom;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(left)
		Z_PARAM_LONG(top)
		Z_PARAM_LONG(right)
		Z_PARAM_LONG(bottom)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLayout, layout);

	layout->setContentsMargins(static_cast<int>(left), static_cast<int>(top), static_cast<int>(right), static_cast<int>(bottom));
}

ZEND_METHOD(QLayout, count)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QLayout, layout);

	RETURN_LONG(layout->count());
}

ZEND_METHOD(QLayout, removeWidget)
{
	zend_object *widget_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLayout, layout);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	layout->removeWidget(widget);
	phpqt_release_hold(layout, widget);
}

ZEND_METHOD(QLayout, indexOf)
{
	zend_object *widget_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLayout, layout);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	RETURN_LONG(layout->indexOf(widget));
}

ZEND_METHOD(QLayout, itemAtWidget)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QLayout, layout);

	phpqt_return_item_widget(return_value, layout->itemAt(static_cast<int>(index)));
}

/* ---- QBoxLayout -------------------------------------------------------- */

ZEND_METHOD(QBoxLayout, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	zend_throw_error(nullptr, "QBoxLayout is made through QVBoxLayout or QHBoxLayout");
}

ZEND_METHOD(QBoxLayout, addWidget)
{
	zend_object *widget_obj;
	zend_long stretch = 0;
	zend_object *alignment_case = nullptr;
	zend_long alignment_long = 0;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stretch)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(alignment_case, phpqt_ce_Qt_AlignmentFlag, alignment_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QBoxLayout, box);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	box->addWidget(widget, static_cast<int>(stretch), Qt::Alignment(static_cast<int>(phpqt_enum_value(alignment_case, alignment_long))));
	phpqt_hold_if_parentless(box, widget_obj, widget);
}

ZEND_METHOD(QBoxLayout, insertWidget)
{
	zend_long index;
	zend_object *widget_obj;
	zend_long stretch = 0;
	zend_object *alignment_case = nullptr;
	zend_long alignment_long = 0;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(index)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stretch)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(alignment_case, phpqt_ce_Qt_AlignmentFlag, alignment_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QBoxLayout, box);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}
	/* Qt maps only a negative index to "append" and inserts anything else unchecked. */
	if (index > box->count()) {
		zend_argument_value_error(1, "must be between -1 and %d (a negative index appends)", box->count());
		RETURN_THROWS();
	}

	box->insertWidget(static_cast<int>(index), widget, static_cast<int>(stretch), Qt::Alignment(static_cast<int>(phpqt_enum_value(alignment_case, alignment_long))));
	phpqt_hold_if_parentless(box, widget_obj, widget);
}

ZEND_METHOD(QBoxLayout, addLayout)
{
	zend_object *layout_obj;
	zend_long stretch = 0;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(layout_obj, phpqt_ce_QLayout)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stretch)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QBoxLayout, box);

	QLayout *layout = static_cast<QLayout *>(phpqt_arg(layout_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	box->addLayout(layout, static_cast<int>(stretch));
}

ZEND_METHOD(QBoxLayout, addStretch)
{
	zend_long stretch = 0;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(stretch)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QBoxLayout, box);

	box->addStretch(static_cast<int>(stretch));
}

ZEND_METHOD(QBoxLayout, setStretch)
{
	zend_long index;
	zend_long stretch;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(index)
		Z_PARAM_LONG(stretch)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QBoxLayout, box);

	box->setStretch(static_cast<int>(index), static_cast<int>(stretch));
}

ZEND_METHOD(QBoxLayout, setAlignment)
{
	zend_object *widget_obj;
	zend_object *alignment_case = nullptr;
	zend_long alignment_long = 0;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(alignment_case, phpqt_ce_Qt_AlignmentFlag, alignment_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QBoxLayout, box);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	RETURN_BOOL(box->setAlignment(widget, Qt::Alignment(static_cast<int>(phpqt_enum_value(alignment_case, alignment_long)))));
}

ZEND_METHOD(QVBoxLayout, __construct)
{
	phpqt_construct_layout<QVBoxLayout>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QHBoxLayout, __construct)
{
	phpqt_construct_layout<QHBoxLayout>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

/* ---- QGridLayout ------------------------------------------------------- */

ZEND_METHOD(QGridLayout, __construct)
{
	phpqt_construct_layout<QGridLayout>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QGridLayout, addWidget)
{
	zend_object *widget_obj;
	zend_long row;
	zend_long column;
	zend_long row_span = 1;
	zend_long column_span = 1;
	zend_object *alignment_case = nullptr;
	zend_long alignment_long = 0;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(3, 6)
		Z_PARAM_OBJ_OF_CLASS(widget_obj, phpqt_ce_QWidget)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(row_span)
		Z_PARAM_LONG(column_span)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(alignment_case, phpqt_ce_Qt_AlignmentFlag, alignment_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QGridLayout, grid);

	QWidget *widget = static_cast<QWidget *>(phpqt_arg(widget_obj, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	grid->addWidget(widget, static_cast<int>(row), static_cast<int>(column), static_cast<int>(row_span), static_cast<int>(column_span),
		Qt::Alignment(static_cast<int>(phpqt_enum_value(alignment_case, alignment_long))));
	phpqt_hold_if_parentless(grid, widget_obj, widget);
}

ZEND_METHOD(QGridLayout, rowCount)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QGridLayout, grid);

	RETURN_LONG(grid->rowCount());
}

ZEND_METHOD(QGridLayout, columnCount)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QGridLayout, grid);

	RETURN_LONG(grid->columnCount());
}

ZEND_METHOD(QGridLayout, setHorizontalSpacing)
{
	zend_long spacing;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(spacing)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QGridLayout, grid);

	grid->setHorizontalSpacing(static_cast<int>(spacing));
}

ZEND_METHOD(QGridLayout, setVerticalSpacing)
{
	zend_long spacing;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(spacing)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QGridLayout, grid);

	grid->setVerticalSpacing(static_cast<int>(spacing));
}

ZEND_METHOD(QGridLayout, itemAtPosition)
{
	zend_long row;
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QGridLayout, grid);

	phpqt_return_item_widget(return_value, grid->itemAtPosition(static_cast<int>(row), static_cast<int>(column)));
}

ZEND_METHOD(QLayout, invalidate)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QLayout, layout);

	layout->invalidate();
}

ZEND_METHOD(QBoxLayout, stretch)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QBoxLayout, box);

	RETURN_LONG(box->stretch(static_cast<int>(index)));
}

#define PHPQT_GRID_STRETCH_SETTER(name, call) \
ZEND_METHOD(QGridLayout, name) \
{ \
	zend_long index; \
	zend_long stretch; \
	ZEND_PARSE_PARAMETERS_START(2, 2) \
		Z_PARAM_LONG(index) \
		Z_PARAM_LONG(stretch) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(QGridLayout, grid); \
	grid->call(static_cast<int>(index), static_cast<int>(stretch)); \
}

#define PHPQT_GRID_STRETCH_GETTER(name, call) \
ZEND_METHOD(QGridLayout, name) \
{ \
	zend_long index; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_LONG(index) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_THIS(QGridLayout, grid); \
	RETURN_LONG(grid->call(static_cast<int>(index))); \
}

PHPQT_GRID_STRETCH_SETTER(setRowStretch, setRowStretch)
PHPQT_GRID_STRETCH_SETTER(setColumnStretch, setColumnStretch)
PHPQT_GRID_STRETCH_GETTER(rowStretch, rowStretch)
PHPQT_GRID_STRETCH_GETTER(columnStretch, columnStretch)

ZEND_METHOD(QGridLayout, addItem)
{
	zend_object *item_obj;
	zend_long row;
	zend_long column;
	zend_long row_span = 1;
	zend_long column_span = 1;
	zend_object *alignment_case = nullptr;
	zend_long alignment_long = 0;

	ZEND_PARSE_PARAMETERS_START(3, 6)
		Z_PARAM_OBJ_OF_CLASS(item_obj, phpqt_ce_QSpacerItem)
		Z_PARAM_LONG(row)
		Z_PARAM_LONG(column)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(row_span)
		Z_PARAM_LONG(column_span)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(alignment_case, phpqt_ce_Qt_AlignmentFlag, alignment_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QGridLayout, grid);

	auto *spacer = static_cast<PhpSpacerItem *>(phpqt_value_arg(item_obj, 1));
	if (spacer == nullptr) {
		RETURN_THROWS();
	}
	if (!phpqt_value_from(item_obj)->owned) {
		zend_argument_value_error(1, "already belongs to a layout");
		RETURN_THROWS();
	}

	phpqt_value_taken(item_obj);
	grid->addItem(spacer, static_cast<int>(row), static_cast<int>(column), static_cast<int>(row_span), static_cast<int>(column_span),
		Qt::Alignment(static_cast<int>(phpqt_enum_value(alignment_case, alignment_long))));
}

/* ---- QSpacerItem ------------------------------------------------------- */

ZEND_METHOD(QSpacerItem, __construct)
{
	zend_long w;
	zend_long h;
	zend_object *h_policy = nullptr;
	zend_object *v_policy = nullptr;

	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(h_policy, phpqt_ce_QSizePolicy_Policy)
		Z_PARAM_OBJ_OF_CLASS(v_policy, phpqt_ce_QSizePolicy_Policy)
	ZEND_PARSE_PARAMETERS_END();

	if (phpqt_value_from(Z_OBJ_P(ZEND_THIS))->constructed) {
		zend_throw_exception(phpqt_ce_QtException, "QSpacerItem::__construct() called twice", 0);
		RETURN_THROWS();
	}

	auto *spacer = new PhpSpacerItem(static_cast<int>(w), static_cast<int>(h),
		static_cast<QSizePolicy::Policy>(phpqt_enum_value(h_policy, QSizePolicy::Minimum)),
		static_cast<QSizePolicy::Policy>(phpqt_enum_value(v_policy, QSizePolicy::Minimum)));
	spacer->wrapper = Z_OBJ_P(ZEND_THIS);
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), spacer, true, phpqt_destroy_spacer, phpqt_forget_spacer);
}

ZEND_METHOD(QSpacerItem, changeSize)
{
	zend_long w;
	zend_long h;
	zend_object *h_policy = nullptr;
	zend_object *v_policy = nullptr;

	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(h_policy, phpqt_ce_QSizePolicy_Policy)
		Z_PARAM_OBJ_OF_CLASS(v_policy, phpqt_ce_QSizePolicy_Policy)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(PhpSpacerItem, spacer);

	spacer->changeSize(static_cast<int>(w), static_cast<int>(h),
		static_cast<QSizePolicy::Policy>(phpqt_enum_value(h_policy, QSizePolicy::Minimum)),
		static_cast<QSizePolicy::Policy>(phpqt_enum_value(v_policy, QSizePolicy::Minimum)));
}

ZEND_METHOD(QSpacerItem, sizeHint)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(PhpSpacerItem, spacer);

	QSize size = spacer->sizeHint();
	array_init_size(return_value, 2);
	add_next_index_long(return_value, size.width());
	add_next_index_long(return_value, size.height());
}
