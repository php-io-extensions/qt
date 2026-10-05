/*
 * Qt values and the one non-QObject widget item. Each PHP object owns a heap
 * copy; a QTableWidgetItem handed to a table is the table's from then on and
 * its wrapper learns of the deletion through the item's destructor.
 */

#include "runtime.h"
#include "../stubs/QGui_arginfo.h"

#include <QtGui/QFont>
#include <QtGui/QGuiApplication>
#include <QtGui/QImage>
#include <QtGui/QPixmap>
#include <QtWidgets/QTableWidgetItem>

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

static void phpqt_destroy_font(void *ptr) { delete static_cast<QFont *>(ptr); }
static void phpqt_destroy_pixmap(void *ptr) { delete static_cast<QPixmap *>(ptr); }
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

	phpqt_ce_QFont = register_class_QFont();
	phpqt_value_setup(phpqt_ce_QFont);

	phpqt_ce_QPixmap = register_class_QPixmap();
	phpqt_value_setup(phpqt_ce_QPixmap);

	phpqt_ce_QImage_Format = register_class_QImage_Format();
	phpqt_ce_QImage = register_class_QImage();
	phpqt_value_setup(phpqt_ce_QImage);

	phpqt_ce_QTableWidgetItem = register_class_QTableWidgetItem();
	phpqt_value_setup(phpqt_ce_QTableWidgetItem);
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

void *phpqt_value_this(zend_object *wrapper)
{
	phpqt_value_object *intern = phpqt_value_from(wrapper);

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

/* Installed by the QTableWidget constructor; the table owns it. */
QTableWidgetItem *phpqt_table_item_prototype()
{
	return new PhpTableWidgetItem();
}

/* Qt's weight scale. */
static bool phpqt_font_weight_valid(zend_long weight, uint32_t arg_num)
{
	if (weight < 1 || weight > 1000) {
		zend_argument_value_error(arg_num, "must be between 1 and 1000 (QFont's weight scale)");
		return false;
	}
	return true;
}

/* An owner (a table, a layout) took the item: PHP no longer deletes it. */
void phpqt_value_taken(zend_object *wrapper)
{
	phpqt_value_from(wrapper)->owned = false;
}

/* ---- QFont ------------------------------------------------------------- */

ZEND_METHOD(QFont, __construct)
{
	zend_string *family = nullptr;
	double point_size = -1.0;
	zend_long weight = -1;

	ZEND_PARSE_PARAMETERS_START(0, 3)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(family)
		Z_PARAM_DOUBLE(point_size)
		Z_PARAM_LONG(weight)
	ZEND_PARSE_PARAMETERS_END();

	if (phpqt_value_from(Z_OBJ_P(ZEND_THIS))->constructed) {
		zend_throw_exception(phpqt_ce_QtException, "QFont::__construct() called twice", 0);
		RETURN_THROWS();
	}
	/* -1 is Qt's "default" for both; anything else must be a real size and weight. */
	if (point_size != -1.0 && point_size <= 0) {
		zend_argument_value_error(2, "must be greater than 0, or -1 for the default size");
		RETURN_THROWS();
	}
	if (weight != -1 && !phpqt_font_weight_valid(weight, 3)) {
		RETURN_THROWS();
	}

	QFont *font = (family != nullptr && ZSTR_LEN(family) > 0)
		? new QFont(phpqt_qstring(family), -1, static_cast<int>(weight))
		: new QFont();
	if ((family == nullptr || ZSTR_LEN(family) == 0) && weight >= 0) {
		font->setWeight(static_cast<QFont::Weight>(weight));
	}
	if (point_size > 0) {
		font->setPointSizeF(point_size);
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), font, true, phpqt_destroy_font);
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

	if (point_size <= 0) {
		zend_argument_value_error(1, "must be greater than 0");
		RETURN_THROWS();
	}

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
	if (!phpqt_font_weight_valid(weight, 1)) {
		RETURN_THROWS();
	}

	font->setWeight(static_cast<QFont::Weight>(weight));
}

/* ---- QPixmap ----------------------------------------------------------- */

ZEND_METHOD(QPixmap, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts the process (qFatal) on a pixmap made before a QGuiApplication. */
	if (qobject_cast<QGuiApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception(phpqt_ce_QtException, "QPixmap needs a QGuiApplication first", 0);
		RETURN_THROWS();
	}

	if (phpqt_value_from(Z_OBJ_P(ZEND_THIS))->constructed) {
		zend_throw_exception(phpqt_ce_QtException, "QPixmap::__construct() called twice", 0);
		RETURN_THROWS();
	}

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QPixmap(), true, phpqt_destroy_pixmap);
}

ZEND_METHOD(QPixmap, fromImage)
{
	zend_object *image_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(image_obj, phpqt_ce_QImage)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts the process (qFatal) on a pixmap made before a QGuiApplication. */
	if (qobject_cast<QGuiApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception(phpqt_ce_QtException, "QPixmap needs a QGuiApplication first", 0);
		RETURN_THROWS();
	}

	QImage *image = static_cast<QImage *>(phpqt_value_arg(image_obj, 1));
	if (image == nullptr) {
		RETURN_THROWS();
	}

	phpqt_return_pixmap(return_value, QPixmap::fromImage(*image));
}

/* ---- QImage ------------------------------------------------------------ */

static_assert(QImage::Format_RGB32 == 4 && QImage::Format_ARGB32 == 5 && QImage::Format_ARGB32_Premultiplied == 6
	&& QImage::Format_RGB888 == 13 && QImage::Format_RGBX8888 == 16 && QImage::Format_RGBA8888 == 17
	&& QImage::Format_RGBA8888_Premultiplied == 18 && QImage::Format_BGR888 == 29,
	"QImage::Format values differ from the stub's QImage\\Format enum");

ZEND_METHOD(QImage, __construct)
{
	zend_string *data = NULL;
	zend_long address = 0;
	zend_long width;
	zend_long height;
	zend_long bytes_per_line;
	zend_object *format_obj;

	ZEND_PARSE_PARAMETERS_START(5, 5)
		Z_PARAM_STR_OR_LONG(data, address)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_LONG(bytes_per_line)
		Z_PARAM_OBJ_OF_CLASS(format_obj, phpqt_ce_QImage_Format)
	ZEND_PARSE_PARAMETERS_END();

	if (phpqt_value_from(Z_OBJ_P(ZEND_THIS))->constructed) {
		zend_throw_exception(phpqt_ce_QtException, "QImage::__construct() called twice", 0);
		RETURN_THROWS();
	}

	QImage::Format format = static_cast<QImage::Format>(phpqt_enum_value(format_obj, QImage::Format_Invalid));
	/* RGB888 and BGR888 take three bytes a pixel; every other format bound here takes four. */
	zend_long pixel = format == QImage::Format_RGB888 || format == QImage::Format_BGR888 ? 3 : 4;

	/* Qt reads width x height pixels from the pointer it is handed and trusts the description. */
	if (width < 1 || width > 32767) {
		zend_argument_value_error(2, "must be between 1 and 32767");
		RETURN_THROWS();
	}
	if (height < 1 || height > 32767) {
		zend_argument_value_error(3, "must be between 1 and 32767");
		RETURN_THROWS();
	}
	if (bytes_per_line < width * pixel) {
		zend_argument_value_error(4, "must hold a line: at least " ZEND_LONG_FMT " bytes", width * pixel);
		RETURN_THROWS();
	}
	if (data != NULL) {
		if (static_cast<zend_long>(ZSTR_LEN(data)) < bytes_per_line * (height - 1) + width * pixel) {
			zend_argument_value_error(1, "must hold every line (" ZEND_LONG_FMT " bytes), " ZEND_LONG_FMT " given",
				bytes_per_line * (height - 1) + width * pixel, static_cast<zend_long>(ZSTR_LEN(data)));
			RETURN_THROWS();
		}
	} else if (address == 0) {
		zend_argument_value_error(1, "must not be a null address");
		RETURN_THROWS();
	}

	/* The address is trusted: an ext-fb buffer's pointer(), which holds $bytesPerLine × $height readable bytes. */
	QImage borrowed(data != NULL ? reinterpret_cast<const uchar *>(ZSTR_VAL(data))
			: reinterpret_cast<const uchar *>(static_cast<uintptr_t>(address)),
		static_cast<int>(width), static_cast<int>(height), static_cast<qsizetype>(bytes_per_line), format);

	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QImage(borrowed.copy()), true, phpqt_destroy_image);
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

/* ---- QPixmap, continued ------------------------------------------------ */

ZEND_METHOD(QPixmap, load)
{
	zend_string *file_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(file_name)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPixmap, pixmap);

	RETURN_BOOL(pixmap->load(phpqt_qstring(file_name)));
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
	zend_object *mode;
	zend_object *transformation = nullptr;

	ZEND_PARSE_PARAMETERS_START(3, 4)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
		Z_PARAM_OBJ_OF_CLASS(mode, phpqt_ce_Qt_AspectRatioMode)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(transformation, phpqt_ce_Qt_TransformationMode)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QPixmap, pixmap);

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

	if (ratio <= 0) {
		zend_argument_value_error(1, "must be greater than 0");
		RETURN_THROWS();
	}

	pixmap->setDevicePixelRatio(ratio);
}

/* ---- QTableWidgetItem -------------------------------------------------- */

ZEND_METHOD(QTableWidgetItem, __construct)
{
	zend_string *text = nullptr;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(text)
	ZEND_PARSE_PARAMETERS_END();

	if (phpqt_value_from(Z_OBJ_P(ZEND_THIS))->constructed) {
		zend_throw_exception(phpqt_ce_QtException, "QTableWidgetItem::__construct() called twice", 0);
		RETURN_THROWS();
	}

	auto *item = new PhpTableWidgetItem(text != nullptr ? phpqt_qstring(text) : QString());
	item->wrapper = Z_OBJ_P(ZEND_THIS);
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), item, true, phpqt_destroy_table_item, phpqt_forget_table_item);
}

ZEND_METHOD(QTableWidgetItem, text)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QTableWidgetItem, item);

	phpqt_return_qstring(return_value, item->text());
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
