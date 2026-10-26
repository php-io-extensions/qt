/*
 * Qt values and the non-QObject widget items. Each PHP object owns a heap
 * copy; a QTableWidgetItem handed to a table, or a QTreeWidgetItem handed to a
 * tree or a parent item, is the owner's from then on and its wrapper learns of
 * the deletion through the item's destructor.
 */

#include "runtime.h"

#include <QtGui/QFont>
#include <QtGui/QIcon>
#include <QtGui/QFontDatabase>
#include <QtGui/QGuiApplication>
#include <QtGui/QImage>
#include <QtGui/QPixmap>
#include <QtGui/QDesktopServices>
#include <QtGui/QClipboard>
#include <QtCore/QUrl>
#include <QtCore/QPointer>
#include <QtCore/QThread>
#include <QtWidgets/QTableWidgetItem>
#include <QtWidgets/QTreeWidgetItem>
#include <QtGui/QBrush>
#include <QtCore/QVariant>

/* After the Qt headers: the class constants spell QTableWidgetItem::Type and UserType, QTreeWidgetItem's the same. */
#include "../stubs/QGui_arginfo.h"

static_assert(QTreeWidgetItem::ShowIndicator == 0 && QTreeWidgetItem::DontShowIndicator == 1 && QTreeWidgetItem::DontShowIndicatorWhenChildless == 2,
	"QTreeWidgetItem::ChildIndicatorPolicy values differ from the stub's QTreeWidgetItem\\ChildIndicatorPolicy enum");

static_assert(QFontDatabase::GeneralFont == 0 && QFontDatabase::FixedFont == 1 && QFontDatabase::TitleFont == 2
	&& QFontDatabase::SmallestReadableFont == 3, "QFontDatabase::SystemFont values differ from the stub's QFontDatabase\\SystemFont enum");
static_assert(QFont::Thin == 100 && QFont::ExtraLight == 200 && QFont::Light == 300 && QFont::Normal == 400
	&& QFont::Medium == 500 && QFont::DemiBold == 600 && QFont::Bold == 700 && QFont::ExtraBold == 800 && QFont::Black == 900,
	"QFont::Weight values differ from the stub's QFont\\Weight enum");

static zend_object_handlers phpqt_value_handlers;

/*
 * Every item a table holds is one of these: PHP-made ones directly, Qt-made ones
 * (header labels, cells a user types into) through the table's item prototype,
 * which Qt clones. The destructor tells the wrapper, if any, that Qt deleted it.
 */
class PhpTableWidgetItem : public QTableWidgetItem {
public:
	using QTableWidgetItem::QTableWidgetItem;

	QTableWidgetItem *clone() const override
	{
		auto *copy = new PhpTableWidgetItem(*this);
		copy->wrapper = nullptr;
		return copy;
	}

	~PhpTableWidgetItem() override
	{
		if (wrapper != nullptr) {
			phpqt_value_from(wrapper)->ptr = nullptr;
		}
	}

	zend_object *wrapper = nullptr;
};

/*
 * Every item a tree holds is one of these: only PHP adds items, and Qt makes none of its own that a
 * bound call reaches (its header item is not bound; it clones items only for drag and drop, which no
 * bound call turns on). The destructor tells the wrapper, if any, that Qt deleted it, with its tree,
 * its parent item, or clear(); Qt's own destructor then deletes the children, which tell theirs.
 */
class PhpTreeWidgetItem : public QTreeWidgetItem {
public:
	using QTreeWidgetItem::QTreeWidgetItem;

	~PhpTreeWidgetItem() override
	{
		if (wrapper != nullptr) {
			phpqt_value_from(wrapper)->ptr = nullptr;
		}
	}

	zend_object *wrapper = nullptr;
};

static void phpqt_destroy_font(void *ptr) { delete static_cast<QFont *>(ptr); }
static void phpqt_destroy_pixmap(void *ptr) { delete static_cast<QPixmap *>(ptr); }
static void phpqt_destroy_icon(void *ptr) { delete static_cast<QIcon *>(ptr); }
static void phpqt_destroy_image(void *ptr) { delete static_cast<QImage *>(ptr); }
static void phpqt_destroy_table_item(void *ptr) { delete static_cast<QTableWidgetItem *>(ptr); }

/* The item outlives this wrapper when a table owns it: stop it from writing back. */
static void phpqt_forget_table_item(void *ptr)
{
	auto *item = dynamic_cast<PhpTableWidgetItem *>(static_cast<QTableWidgetItem *>(ptr));
	if (item != nullptr) {
		item->wrapper = nullptr;
	}
}

static void phpqt_destroy_tree_item(void *ptr) { delete static_cast<QTreeWidgetItem *>(ptr); }

/* The item outlives this wrapper when a tree or a parent item owns it: stop it from writing back. */
static void phpqt_forget_tree_item(void *ptr)
{
	auto *item = dynamic_cast<PhpTreeWidgetItem *>(static_cast<QTreeWidgetItem *>(ptr));
	if (item != nullptr) {
		item->wrapper = nullptr;
	}
}

static zend_object *phpqt_value_create(zend_class_entry *ce)
{
	phpqt_value_object *intern = static_cast<phpqt_value_object *>(zend_object_alloc(sizeof(phpqt_value_object), ce));

	zend_object_std_init(&intern->std, ce);
	object_properties_init(&intern->std, ce);
	intern->std.handlers = &phpqt_value_handlers;
	intern->ptr = nullptr;
	intern->constructed = false;
	intern->owned = false;
	intern->destroy = nullptr;
	intern->forget = nullptr;
	intern->owner = nullptr;
	intern->alive = nullptr;

	return &intern->std;
}

static void phpqt_value_free(zend_object *object)
{
	phpqt_value_object *intern = phpqt_value_from(object);

	if (intern->ptr != nullptr) {
		if (intern->forget != nullptr) {
			intern->forget(intern->ptr);
		}
		if (intern->owned) {
			intern->destroy(intern->ptr);
		}
		intern->ptr = nullptr;
	}
	delete intern->owner;
	intern->owner = nullptr;

	zend_object_std_dtor(object);
}

void phpqt_value_setup(zend_class_entry *ce)
{
	static bool handlers_ready = false;

	if (!handlers_ready) {
		memcpy(&phpqt_value_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
		phpqt_value_handlers.offset = XtOffsetOf(phpqt_value_object, std);
		phpqt_value_handlers.free_obj = phpqt_value_free;
		phpqt_value_handlers.clone_obj = nullptr;
		phpqt_value_handlers.compare = zend_objects_not_comparable;
		handlers_ready = true;
	}

	ce->create_object = phpqt_value_create;
	ce->default_object_handlers = &phpqt_value_handlers;
}

void phpqt_register_QGui()
{
	phpqt_ce_QFont_Weight = register_class_QFont_Weight();
	phpqt_ce_QFontDatabase_SystemFont = register_class_QFontDatabase_SystemFont();
	phpqt_ce_QFontDatabase = register_class_QFontDatabase();

	phpqt_ce_QFont = register_class_QFont();
	phpqt_value_setup(phpqt_ce_QFont);

	phpqt_ce_QPixmap = register_class_QPixmap();
	phpqt_value_setup(phpqt_ce_QPixmap);

	phpqt_ce_QIcon = register_class_QIcon();
	phpqt_value_setup(phpqt_ce_QIcon);

	phpqt_ce_QImage_Format = register_class_QImage_Format();
	phpqt_ce_QImage = register_class_QImage();
	phpqt_value_setup(phpqt_ce_QImage);

	phpqt_ce_QTableWidgetItem = register_class_QTableWidgetItem();
	phpqt_value_setup(phpqt_ce_QTableWidgetItem);
	phpqt_ce_QTreeWidgetItem_ChildIndicatorPolicy = register_class_QTreeWidgetItem_ChildIndicatorPolicy();
	phpqt_ce_QTreeWidgetItem = register_class_QTreeWidgetItem();
	phpqt_value_setup(phpqt_ce_QTreeWidgetItem);
	phpqt_ce_QDesktopServices = register_class_QDesktopServices();

	phpqt_ce_QClipboard_Mode = register_class_QClipboard_Mode();
	phpqt_ce_QClipboard = register_class_QClipboard(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QClipboard);
	phpqt_map_class("QClipboard", phpqt_ce_QClipboard);
}

/* ---- QClipboard -------------------------------------------------------- */

ZEND_METHOD(QClipboard, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QClipboard, setText)
{
	zend_string *text;
	zend_object *mode = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(text)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_QClipboard_Mode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QClipboard, clipboard);

	clipboard->setText(phpqt_qstring(text), static_cast<QClipboard::Mode>(phpqt_enum_value(mode, QClipboard::Clipboard)));
}

ZEND_METHOD(QClipboard, text)
{
	zend_object *mode = nullptr;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_QClipboard_Mode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QClipboard, clipboard);

	phpqt_return_qstring(return_value, clipboard->text(static_cast<QClipboard::Mode>(phpqt_enum_value(mode, QClipboard::Clipboard))));
}

void phpqt_value_hold(zend_object *wrapper, void *ptr, bool owned, void (*destroy)(void *), void (*forget)(void *))
{
	phpqt_value_object *intern = phpqt_value_from(wrapper);

	intern->ptr = ptr;
	intern->constructed = true;
	intern->owned = owned;
	intern->destroy = destroy;
	intern->forget = forget;
}

/*
 * A value Qt owns and PHP borrows (a layout's item): the PHP object holds no copy, so it reads
 * Qt's only while the owner still holds it; once the owner lets it go the wrapper reads as deleted.
 */
void phpqt_value_borrow(zend_object *wrapper, void *ptr, QObject *owner, bool (*alive)(void *ptr, QObject *owner))
{
	phpqt_value_object *intern = phpqt_value_from(wrapper);

	phpqt_value_hold(wrapper, ptr, false, nullptr);
	intern->owner = new QPointer<QObject>(owner);
	intern->alive = alive;
}

static void phpqt_value_check_alive(phpqt_value_object *intern)
{
	if (intern->ptr != nullptr && intern->alive != nullptr && !intern->alive(intern->ptr, intern->owner->data())) {
		intern->ptr = nullptr;
	}
}

void *phpqt_value_this(zend_object *wrapper)
{
	phpqt_value_object *intern = phpqt_value_from(wrapper);

	phpqt_value_check_alive(intern);
	if (intern->ptr == nullptr) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0,
			intern->constructed ? "%s has been deleted by Qt" : "%s was never constructed",
			ZSTR_VAL(wrapper->ce->name));
	}

	return intern->ptr;
}

void *phpqt_value_arg(zend_object *wrapper, uint32_t arg_num)
{
	phpqt_value_object *intern = phpqt_value_from(wrapper);

	phpqt_value_check_alive(intern);
	if (intern->ptr == nullptr) {
		zend_argument_value_error(arg_num, "is a %s that no longer exists", ZSTR_VAL(wrapper->ce->name));
	}

	return intern->ptr;
}

void phpqt_return_font(zval *rv, const QFont &font)
{
	object_init_ex(rv, phpqt_ce_QFont);
	phpqt_value_hold(Z_OBJ_P(rv), new QFont(font), true, phpqt_destroy_font);
}

void phpqt_return_pixmap(zval *rv, const QPixmap &pixmap)
{
	object_init_ex(rv, phpqt_ce_QPixmap);
	phpqt_value_hold(Z_OBJ_P(rv), new QPixmap(pixmap), true, phpqt_destroy_pixmap);
}

/* The wrapper the item already has, or a new table-owned one; null stays null. */
void phpqt_return_table_item(zval *rv, QTableWidgetItem *item)
{
	if (item == nullptr) {
		ZVAL_NULL(rv);
		return;
	}

	auto *ours = dynamic_cast<PhpTableWidgetItem *>(item);
	if (ours != nullptr && ours->wrapper != nullptr) {
		ZVAL_OBJ_COPY(rv, ours->wrapper);
		return;
	}

	object_init_ex(rv, phpqt_ce_QTableWidgetItem);
	phpqt_value_hold(Z_OBJ_P(rv), item, false, phpqt_destroy_table_item, phpqt_forget_table_item);
	if (ours != nullptr) {
		ours->wrapper = Z_OBJ_P(rv);
	}
}

/* The wrapper the item already has, or a new tree-owned one; null stays null. */
void phpqt_return_tree_item(zval *rv, QTreeWidgetItem *item)
{
	if (item == nullptr) {
		ZVAL_NULL(rv);
		return;
	}

	auto *ours = dynamic_cast<PhpTreeWidgetItem *>(item);
	if (ours != nullptr && ours->wrapper != nullptr) {
		ZVAL_OBJ_COPY(rv, ours->wrapper);
		return;
	}

	object_init_ex(rv, phpqt_ce_QTreeWidgetItem);
	phpqt_value_hold(Z_OBJ_P(rv), item, false, phpqt_destroy_tree_item, phpqt_forget_tree_item);
	if (ours != nullptr) {
		ours->wrapper = Z_OBJ_P(rv);
	}
}

/* Installed by the QTableWidget constructor; the table owns it. */
QTableWidgetItem *phpqt_table_item_prototype()
{
	return new PhpTableWidgetItem();
}

/* An owner (a table, a layout) took the item: PHP no longer deletes it. */
void phpqt_value_taken(zend_object *wrapper)
{
	phpqt_value_from(wrapper)->owned = false;
}

/* ---- QFontDatabase ----------------------------------------------------- */

/* Private: QFontDatabase is static in Qt 6. */
ZEND_METHOD(QFontDatabase, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QFontDatabase, systemFont)
{
	zend_object *type;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(type, phpqt_ce_QFontDatabase_SystemFont)
	ZEND_PARSE_PARAMETERS_END();

	phpqt_return_font(return_value, QFontDatabase::systemFont(static_cast<QFontDatabase::SystemFont>(phpqt_enum_value(type, QFontDatabase::GeneralFont))));
}

/* ---- QFont ------------------------------------------------------------- */

ZEND_METHOD(QFont, __construct)
{
	zend_string *family;
	zend_long point_size = -1;
	zend_long weight = -1;
	bool italic = false;

	ZEND_PARSE_PARAMETERS_START(1, 4)
		Z_PARAM_STR(family)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(point_size)
		Z_PARAM_LONG(weight)
		Z_PARAM_BOOL(italic)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))
		|| !phpqt_long_fits(point_size, INT_MIN, INT_MAX, 2) || !phpqt_long_fits(weight, INT_MIN, INT_MAX, 3)) {
		RETURN_THROWS();
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QFont(phpqt_qstring(family), static_cast<int>(point_size), static_cast<int>(weight), italic),
		true, phpqt_destroy_font);
}

ZEND_METHOD(QFont, family)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QFont, font);

	phpqt_return_qstring(return_value, font->family());
}

ZEND_METHOD(QFont, setFamily)
{
	zend_string *family;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(family)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QFont, font);

	font->setFamily(phpqt_qstring(family));
}

ZEND_METHOD(QFont, pointSizeF)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QFont, font);

	RETURN_DOUBLE(font->pointSizeF());
}

ZEND_METHOD(QFont, setPointSizeF)
{
	double point_size;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(point_size)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QFont, font);

	font->setPointSizeF(point_size);
}

ZEND_METHOD(QFont, weight)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QFont, font);

	zend_long weight = static_cast<zend_long>(font->weight());
	phpqt_return_enum(return_value, phpqt_ce_QFont_Weight, weight);
	if (Z_TYPE_P(return_value) == IS_NULL) {
		RETURN_LONG(weight);
	}
}

ZEND_METHOD(QFont, setWeight)
{
	zend_object *weight_case = nullptr;
	zend_long weight_long = 0;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(weight_case, phpqt_ce_QFont_Weight, weight_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QFont, font);

	zend_long weight = phpqt_enum_value(weight_case, weight_long);
	if (!phpqt_long_fits(weight, INT_MIN, INT_MAX, 1)) {
		RETURN_THROWS();
	}

	font->setWeight(static_cast<QFont::Weight>(weight));
}

/* ---- QPixmap ----------------------------------------------------------- */

/* ---- QIcon ------------------------------------------------------------- */

ZEND_METHOD(QIcon, __construct)
{
	zend_object *pixmap_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(pixmap_obj, phpqt_ce_QPixmap)
	ZEND_PARSE_PARAMETERS_END();

	QPixmap *pixmap = static_cast<QPixmap *>(phpqt_value_arg(pixmap_obj, 1));
	if (pixmap == nullptr) {
		RETURN_THROWS();
	}
	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QIcon(*pixmap), true, phpqt_destroy_icon);
}

ZEND_METHOD(QIcon, isNull)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QIcon, icon);

	RETURN_BOOL(icon->isNull());
}

ZEND_METHOD(QPixmap, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	/* Qt aborts with qFatal ("Must construct a QGuiApplication before a QPixmap"). */
	if (!PHPQT_PROBE_OFF("qguiapp-pixmap") && (qobject_cast<QGuiApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "QPixmap needs a QGuiApplication first", 0); /* binding:qguiapp-pixmap */
		RETURN_THROWS();
	}

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QPixmap(), true, phpqt_destroy_pixmap);
}

ZEND_METHOD(QPixmap, fromImage)
{
	zend_object *image_obj;
	zend_object *flags_case = nullptr;
	zend_long flags_long = Qt::AutoColor;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_OBJ_OF_CLASS(image_obj, phpqt_ce_QImage)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, phpqt_ce_Qt_ImageConversionFlag, flags_long)
	ZEND_PARSE_PARAMETERS_END();

	/* Qt aborts with qFatal ("Must construct a QGuiApplication before a QPixmap"). */
	if (!PHPQT_PROBE_OFF("qguiapp-pixmap-from-image") && (qobject_cast<QGuiApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception(phpqt_ce_QtException, "QPixmap needs a QGuiApplication first", 0); /* binding:qguiapp-pixmap-from-image */
		RETURN_THROWS();
	}

	QImage *image = static_cast<QImage *>(phpqt_value_arg(image_obj, 1));
	if (image == nullptr) {
		RETURN_THROWS();
	}

	phpqt_return_pixmap(return_value, QPixmap::fromImage(*image, Qt::ImageConversionFlags(static_cast<int>(phpqt_enum_value(flags_case, flags_long)))));
}

/* ---- QImage ------------------------------------------------------------ */

static_assert(QImage::Format_RGB32 == 4 && QImage::Format_ARGB32 == 5 && QImage::Format_ARGB32_Premultiplied == 6
	&& QImage::Format_RGB888 == 13 && QImage::Format_RGBX8888 == 16 && QImage::Format_RGBA8888 == 17
	&& QImage::Format_RGBA8888_Premultiplied == 18 && QImage::Format_BGR888 == 29,
	"QImage::Format values differ from the stub's QImage\\Format enum");

/*
 * QImageCleanupFunction: Qt calls it with cleanupInfo once the last image sharing the buffer goes.
 * cleanupInfo is a QPointer to the slot holding the PHP callable and its argument; the slot runs
 * on its own thread, queued there from any other, and after request end it is gone and nothing runs.
 */
static void phpqt_image_cleanup(void *info)
{
	QPointer<PhpSlot> *held = static_cast<QPointer<PhpSlot> *>(info);
	PhpSlot *slot = held->data();
	delete held;
	if (slot == nullptr) {
		return;
	}

	auto run = [slot]() {
		slot->fire();
		slot->detach();
		slot->deleteLater();
	};
	if (QThread::currentThread() == slot->thread()) {
		run();
	} else {
		QMetaObject::invokeMethod(slot, run, Qt::QueuedConnection);
	}
}

ZEND_METHOD(QImage, __construct)
{
	zend_long address;
	zend_long width;
	zend_long height;
	zend_long bytes_per_line;
	zend_object *format_obj;
	zval *cleanup = nullptr;
	zval *cleanup_info = nullptr;

	ZEND_PARSE_PARAMETERS_START(5, 7)
		Z_PARAM_LONG(address)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(bytes_per_line)
		Z_PARAM_OBJ_OF_CLASS(format_obj, phpqt_ce_QImage_Format)
		Z_PARAM_OPTIONAL
		Z_PARAM_ZVAL_OR_NULL(cleanup)
		Z_PARAM_ZVAL(cleanup_info)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))
		|| !phpqt_long_fits(width, INT_MIN, INT_MAX, 2) || !phpqt_long_fits(height, INT_MIN, INT_MAX, 3)
		|| (cleanup != nullptr && !phpqt_require_callable(cleanup, 6))) {
		RETURN_THROWS();
	}

	QImageCleanupFunction function = nullptr;
	void *info = nullptr;
	if (cleanup != nullptr) {
		zval null_info;
		ZVAL_NULL(&null_info);
		PhpSlot *slot = new PhpSlot(cleanup, QMetaMethod());
		slot->bind(cleanup_info != nullptr ? cleanup_info : &null_info);
		function = phpqt_image_cleanup;
		info = new QPointer<PhpSlot>(slot);
	}

	/* The address is the caller's: Qt borrows the buffer, which must outlive every image sharing it. */
	QImage *image = new QImage(reinterpret_cast<uchar *>(static_cast<uintptr_t>(address)),
		static_cast<int>(width), static_cast<int>(height), static_cast<qsizetype>(bytes_per_line),
		static_cast<QImage::Format>(phpqt_enum_value(format_obj, QImage::Format_Invalid)), function, info);

	/* A null image shares no buffer, so Qt never calls the cleanup function: its slot goes now. */
	if (image->isNull() && info != nullptr) {
		QPointer<PhpSlot> *held = static_cast<QPointer<PhpSlot> *>(info);
		PhpSlot *slot = held->data();
		delete held;
		slot->detach();
		delete slot;
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), image, true, phpqt_destroy_image);
}

ZEND_METHOD(QImage, isNull)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QImage, image);

	RETURN_BOOL(image->isNull());
}

ZEND_METHOD(QImage, width)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QImage, image);

	RETURN_LONG(image->width());
}

ZEND_METHOD(QImage, height)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QImage, image);

	RETURN_LONG(image->height());
}

ZEND_METHOD(QImage, format)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QImage, image);

	phpqt_return_enum(return_value, phpqt_ce_QImage_Format, static_cast<zend_long>(image->format()));
}

ZEND_METHOD(QImage, copy)
{
	zend_object *rect_obj = nullptr;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(rect_obj, phpqt_ce_QRect)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QImage, image);

	QRect rect;
	if (rect_obj != nullptr) {
		QRect *given = static_cast<QRect *>(phpqt_value_arg(rect_obj, 1));
		if (given == nullptr) {
			RETURN_THROWS();
		}
		rect = *given;
	}

	object_init_ex(return_value, phpqt_ce_QImage);
	phpqt_value_hold(Z_OBJ_P(return_value), new QImage(image->copy(rect)), true, phpqt_destroy_image);
}

/* ---- QPixmap, continued ------------------------------------------------ */

ZEND_METHOD(QPixmap, load)
{
	zend_string *file_name;
	zend_string *format = nullptr;
	zend_object *flags_case = nullptr;
	zend_long flags_long = Qt::AutoColor;

	ZEND_PARSE_PARAMETERS_START(1, 3)
		Z_PARAM_STR(file_name)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR_OR_NULL(format)
		Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, phpqt_ce_Qt_ImageConversionFlag, flags_long)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPixmap, pixmap);

	RETURN_BOOL(pixmap->load(phpqt_qstring(file_name), format != nullptr ? ZSTR_VAL(format) : nullptr,
		Qt::ImageConversionFlags(static_cast<int>(phpqt_enum_value(flags_case, flags_long)))));
}

ZEND_METHOD(QPixmap, isNull)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QPixmap, pixmap);

	RETURN_BOOL(pixmap->isNull());
}

ZEND_METHOD(QPixmap, width)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QPixmap, pixmap);

	RETURN_LONG(pixmap->width());
}

ZEND_METHOD(QPixmap, height)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QPixmap, pixmap);

	RETURN_LONG(pixmap->height());
}

ZEND_METHOD(QPixmap, scaled)
{
	zend_long width;
	zend_long height;
	zend_object *mode = nullptr;
	zend_object *transformation = nullptr;

	ZEND_PARSE_PARAMETERS_START(2, 4)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_Qt_AspectRatioMode)
		Z_PARAM_OBJ_OF_CLASS(transformation, phpqt_ce_Qt_TransformationMode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPixmap, pixmap);
	if (!phpqt_long_fits(width, INT_MIN, INT_MAX, 1) || !phpqt_long_fits(height, INT_MIN, INT_MAX, 2)) {
		RETURN_THROWS();
	}

	phpqt_return_pixmap(return_value, pixmap->scaled(static_cast<int>(width), static_cast<int>(height),
		static_cast<Qt::AspectRatioMode>(phpqt_enum_value(mode, Qt::IgnoreAspectRatio)),
		static_cast<Qt::TransformationMode>(phpqt_enum_value(transformation, Qt::FastTransformation))));
}

ZEND_METHOD(QPixmap, devicePixelRatio)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QPixmap, pixmap);

	RETURN_DOUBLE(pixmap->devicePixelRatio());
}

ZEND_METHOD(QPixmap, setDevicePixelRatio)
{
	double ratio;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_DOUBLE(ratio)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPixmap, pixmap);

	pixmap->setDevicePixelRatio(ratio);
}

/* ---- QTableWidgetItem -------------------------------------------------- */

ZEND_METHOD(QTableWidgetItem, __construct)
{
	zend_string *text = nullptr;
	zend_long type = QTableWidgetItem::Type;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(text)
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}

	auto *item = new PhpTableWidgetItem(text != nullptr ? phpqt_qstring(text) : QString(), static_cast<int>(type));
	item->wrapper = Z_OBJ_P(ZEND_THIS);
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), item, true, phpqt_destroy_table_item, phpqt_forget_table_item);
}

ZEND_METHOD(QTableWidgetItem, text)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTableWidgetItem, item);

	phpqt_return_qstring(return_value, item->text());
}

ZEND_METHOD(QTableWidgetItem, type)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTableWidgetItem, item);

	RETURN_LONG(item->type());
}

ZEND_METHOD(QTableWidgetItem, row)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTableWidgetItem, item);

	RETURN_LONG(item->row());
}

ZEND_METHOD(QTableWidgetItem, setText)
{
	zend_string *text;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTableWidgetItem, item);

	item->setText(phpqt_qstring(text));
}

/* ---- QTreeWidgetItem --------------------------------------------------- */

ZEND_METHOD(QTreeWidgetItem, __construct)
{
	zend_long type = QTreeWidgetItem::Type;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(type)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}

	auto *item = new PhpTreeWidgetItem(static_cast<int>(type));
	item->wrapper = Z_OBJ_P(ZEND_THIS);
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), item, true, phpqt_destroy_tree_item, phpqt_forget_tree_item);
}

ZEND_METHOD(QTreeWidgetItem, text)
{
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	phpqt_return_qstring(return_value, item->text(static_cast<int>(column)));
}

ZEND_METHOD(QTreeWidgetItem, setText)
{
	zend_long column;
	zend_string *text;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	item->setText(static_cast<int>(column), phpqt_qstring(text));
}

ZEND_METHOD(QTreeWidgetItem, foreground)
{
	zend_long column;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(column)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	phpqt_return_brush(return_value, item->foreground(static_cast<int>(column)));
}

ZEND_METHOD(QTreeWidgetItem, setForeground)
{
	zend_long column;
	zend_object *brush_obj;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_OBJ_OF_CLASS(brush_obj, phpqt_ce_QBrush)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	QBrush *brush = static_cast<QBrush *>(phpqt_value_arg(brush_obj, 2));
	if (brush == nullptr) {
		RETURN_THROWS();
	}

	item->setForeground(static_cast<int>(column), *brush);
}

ZEND_METHOD(QTreeWidgetItem, data)
{
	zend_long column;
	zend_long role;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(role)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	phpqt_variant_to_zval(return_value, item->data(static_cast<int>(column), static_cast<int>(role)));
}

ZEND_METHOD(QTreeWidgetItem, setData)
{
	zend_long column;
	zend_long role;
	zval *value;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(column)
		Z_PARAM_LONG(role)
		Z_PARAM_ZVAL(value)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	QVariant variant;
	if (!phpqt_zval_to_variant(value, QMetaType(), &variant, 3)) {
		RETURN_THROWS();
	}

	item->setData(static_cast<int>(column), static_cast<int>(role), variant);
}

ZEND_METHOD(QTreeWidgetItem, addChild)
{
	zend_object *child_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(child_obj, phpqt_ce_QTreeWidgetItem)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	QTreeWidgetItem *child = static_cast<QTreeWidgetItem *>(phpqt_value_arg(child_obj, 1));
	if (child == nullptr) {
		RETURN_THROWS();
	}

	item->addChild(child);
	/* The parent owns the child once Qt stored it; a child that already had a tree or a parent stays where it was. */
	if (child->parent() == item) {
		phpqt_value_taken(child_obj);
	}
}

ZEND_METHOD(QTreeWidgetItem, childCount)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	RETURN_LONG(item->childCount());
}

ZEND_METHOD(QTreeWidgetItem, child)
{
	zend_long index;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_LONG(index)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	phpqt_return_tree_item(return_value, item->child(static_cast<int>(index)));
}

ZEND_METHOD(QTreeWidgetItem, parent)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	phpqt_return_tree_item(return_value, item->parent());
}

ZEND_METHOD(QTreeWidgetItem, isExpanded)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	RETURN_BOOL(item->isExpanded());
}

ZEND_METHOD(QTreeWidgetItem, setExpanded)
{
	bool expand;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_BOOL(expand)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	item->setExpanded(expand);
}

ZEND_METHOD(QTreeWidgetItem, childIndicatorPolicy)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	phpqt_return_enum(return_value, phpqt_ce_QTreeWidgetItem_ChildIndicatorPolicy, static_cast<zend_long>(item->childIndicatorPolicy()));
}

ZEND_METHOD(QTreeWidgetItem, setChildIndicatorPolicy)
{
	zend_object *policy;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(policy, phpqt_ce_QTreeWidgetItem_ChildIndicatorPolicy)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QTreeWidgetItem, item);

	item->setChildIndicatorPolicy(static_cast<QTreeWidgetItem::ChildIndicatorPolicy>(phpqt_enum_value(policy, QTreeWidgetItem::ShowIndicator)));
}

/* ---- QDesktopServices -------------------------------------------------- */

ZEND_METHOD(QDesktopServices, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QDesktopServices, openUrl)
{
	zend_object *url;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(url, phpqt_ce_QUrl)
	ZEND_PARSE_PARAMETERS_END();

	QUrl *given = static_cast<QUrl *>(phpqt_value_arg(url, 1));
	if (given == nullptr) {
		RETURN_THROWS();
	}

	RETURN_BOOL(QDesktopServices::openUrl(*given));
}
