/*
 * Qt value classes: each PHP object owns a heap copy, handed out and taken in by value.
 */

#include "runtime.h"

#include <QtCore/QByteArray>
#include <QtCore/QDate>
#include <QtCore/QPoint>
#include <QtCore/QRect>
#include <QtCore/QSize>
#include <QtGui/QKeySequence>

#include "../stubs/QValues_arginfo.h"

static_assert(QKeySequence::NativeText == 0 && QKeySequence::PortableText == 1,
	"QKeySequence::SequenceFormat values differ from the stub's QKeySequence\\SequenceFormat enum");

zend_class_entry *phpqt_ce_QPoint;
zend_class_entry *phpqt_ce_QPointF;
zend_class_entry *phpqt_ce_QSize;
zend_class_entry *phpqt_ce_QRect;
zend_class_entry *phpqt_ce_QDate;
zend_class_entry *phpqt_ce_QKeySequence;
zend_class_entry *phpqt_ce_QKeySequence_SequenceFormat;
zend_class_entry *phpqt_ce_QByteArray;

template <typename T>
static void phpqt_destroy(void *ptr)
{
	delete static_cast<T *>(ptr);
}

template <typename T>
static void phpqt_return_value(zval *rv, zend_class_entry *ce, const T &value)
{
	object_init_ex(rv, ce);
	phpqt_value_hold(Z_OBJ_P(rv), new T(value), true, phpqt_destroy<T>);
}

void phpqt_return_qpoint(zval *rv, const QPoint &point) { phpqt_return_value(rv, phpqt_ce_QPoint, point); }
void phpqt_return_qpointf(zval *rv, const QPointF &point) { phpqt_return_value(rv, phpqt_ce_QPointF, point); }
void phpqt_return_qsize(zval *rv, const QSize &size) { phpqt_return_value(rv, phpqt_ce_QSize, size); }
void phpqt_return_qrect(zval *rv, const QRect &rect) { phpqt_return_value(rv, phpqt_ce_QRect, rect); }
void phpqt_return_qdate(zval *rv, const QDate &date) { phpqt_return_value(rv, phpqt_ce_QDate, date); }
void phpqt_return_qkeysequence(zval *rv, const QKeySequence &sequence) { phpqt_return_value(rv, phpqt_ce_QKeySequence, sequence); }

void phpqt_register_QValues()
{
	phpqt_ce_QKeySequence_SequenceFormat = register_class_QKeySequence_SequenceFormat();

	phpqt_ce_QPoint = register_class_QPoint();
	phpqt_value_setup(phpqt_ce_QPoint);
	phpqt_ce_QPointF = register_class_QPointF();
	phpqt_value_setup(phpqt_ce_QPointF);
	phpqt_ce_QSize = register_class_QSize();
	phpqt_value_setup(phpqt_ce_QSize);
	phpqt_ce_QRect = register_class_QRect();
	phpqt_value_setup(phpqt_ce_QRect);
	phpqt_ce_QDate = register_class_QDate();
	phpqt_value_setup(phpqt_ce_QDate);
	phpqt_ce_QKeySequence = register_class_QKeySequence();
	phpqt_value_setup(phpqt_ce_QKeySequence);
	phpqt_ce_QByteArray = register_class_QByteArray();
	phpqt_value_setup(phpqt_ce_QByteArray);
}

/* The new value in this wrapper; a second __construct() is refused by phpqt_value_fresh. */
template <typename T>
static void phpqt_construct_value(zend_object *wrapper, T *value)
{
	phpqt_value_hold(wrapper, value, true, phpqt_destroy<T>);
}

#define PHPQT_VALUE_INT(Class, name) \
ZEND_METHOD(Class, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_VALUE_THIS(Class, self); \
	RETURN_LONG(self->name()); \
}

#define PHPQT_VALUE_FLOAT(Class, name) \
ZEND_METHOD(Class, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_VALUE_THIS(Class, self); \
	RETURN_DOUBLE(self->name()); \
}

#define PHPQT_VALUE_BOOL(Class, name) \
ZEND_METHOD(Class, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_VALUE_THIS(Class, self); \
	RETURN_BOOL(self->name()); \
}

#define PHPQT_VALUE_SET_INT(Class, name) \
ZEND_METHOD(Class, name) \
{ \
	zend_long value; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_LONG(value) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_VALUE_THIS(Class, self); \
	self->name(static_cast<int>(value)); \
}

#define PHPQT_VALUE_SET_FLOAT(Class, name) \
ZEND_METHOD(Class, name) \
{ \
	double value; \
	ZEND_PARSE_PARAMETERS_START(1, 1) \
		Z_PARAM_DOUBLE(value) \
	ZEND_PARSE_PARAMETERS_END(); \
	PHPQT_VALUE_THIS(Class, self); \
	self->name(value); \
}

/* ---- QPoint, QPointF --------------------------------------------------- */

ZEND_METHOD(QPoint, __construct)
{
	zend_long xpos;
	zend_long ypos;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(xpos)
		Z_PARAM_LONG(ypos)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_construct_value(Z_OBJ_P(ZEND_THIS), new QPoint(static_cast<int>(xpos), static_cast<int>(ypos)));
}

PHPQT_VALUE_INT(QPoint, x)
PHPQT_VALUE_INT(QPoint, y)
PHPQT_VALUE_SET_INT(QPoint, setX)
PHPQT_VALUE_SET_INT(QPoint, setY)
PHPQT_VALUE_BOOL(QPoint, isNull)

ZEND_METHOD(QPointF, __construct)
{
	double xpos;
	double ypos;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_DOUBLE(xpos)
		Z_PARAM_DOUBLE(ypos)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_construct_value(Z_OBJ_P(ZEND_THIS), new QPointF(xpos, ypos));
}

PHPQT_VALUE_FLOAT(QPointF, x)
PHPQT_VALUE_FLOAT(QPointF, y)
PHPQT_VALUE_SET_FLOAT(QPointF, setX)
PHPQT_VALUE_SET_FLOAT(QPointF, setY)
PHPQT_VALUE_BOOL(QPointF, isNull)

/* ---- QSize, QRect ------------------------------------------------------ */

ZEND_METHOD(QSize, __construct)
{
	zend_long w;
	zend_long h;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(w)
		Z_PARAM_LONG(h)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_construct_value(Z_OBJ_P(ZEND_THIS), new QSize(static_cast<int>(w), static_cast<int>(h)));
}

PHPQT_VALUE_INT(QSize, width)
PHPQT_VALUE_INT(QSize, height)
PHPQT_VALUE_BOOL(QSize, isValid)
PHPQT_VALUE_BOOL(QSize, isEmpty)

ZEND_METHOD(QRect, __construct)
{
	zend_long left;
	zend_long top;
	zend_long width;
	zend_long height;

	ZEND_PARSE_PARAMETERS_START(4, 4)
		Z_PARAM_LONG(left)
		Z_PARAM_LONG(top)
		Z_PARAM_LONG(width)
		Z_PARAM_LONG(height)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_construct_value(Z_OBJ_P(ZEND_THIS), new QRect(static_cast<int>(left), static_cast<int>(top), static_cast<int>(width), static_cast<int>(height)));
}

PHPQT_VALUE_INT(QRect, x)
PHPQT_VALUE_INT(QRect, y)
PHPQT_VALUE_INT(QRect, width)
PHPQT_VALUE_INT(QRect, height)
PHPQT_VALUE_BOOL(QRect, isValid)

/* ---- QDate ------------------------------------------------------------- */

ZEND_METHOD(QDate, __construct)
{
	zend_long y;
	zend_long m;
	zend_long d;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_LONG(y)
		Z_PARAM_LONG(m)
		Z_PARAM_LONG(d)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_construct_value(Z_OBJ_P(ZEND_THIS), new QDate(static_cast<int>(y), static_cast<int>(m), static_cast<int>(d)));
}

PHPQT_VALUE_INT(QDate, year)
PHPQT_VALUE_INT(QDate, month)
PHPQT_VALUE_INT(QDate, day)
PHPQT_VALUE_BOOL(QDate, isValid)

ZEND_METHOD(QDate, toString)
{
	zend_object *format = nullptr;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(format, phpqt_ce_Qt_DateFormat)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QDate, date);

	phpqt_return_qstring(return_value, date->toString(static_cast<Qt::DateFormat>(phpqt_enum_value(format, Qt::TextDate))));
}

ZEND_METHOD(QDate, fromString)
{
	zend_string *string;
	zend_object *format = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(string)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(format, phpqt_ce_Qt_DateFormat)
	ZEND_PARSE_PARAMETERS_END();

	phpqt_return_qdate(return_value, QDate::fromString(phpqt_qstring(string), static_cast<Qt::DateFormat>(phpqt_enum_value(format, Qt::TextDate))));
}

/* ---- QKeySequence ------------------------------------------------------ */

ZEND_METHOD(QKeySequence, __construct)
{
	zend_string *key;
	zend_object *format = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(key)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(format, phpqt_ce_QKeySequence_SequenceFormat)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	phpqt_construct_value(Z_OBJ_P(ZEND_THIS), new QKeySequence(phpqt_qstring(key),
		static_cast<QKeySequence::SequenceFormat>(phpqt_enum_value(format, QKeySequence::NativeText))));
}

ZEND_METHOD(QKeySequence, toString)
{
	zend_object *format = nullptr;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(format, phpqt_ce_QKeySequence_SequenceFormat)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QKeySequence, sequence);

	phpqt_return_qstring(return_value, sequence->toString(static_cast<QKeySequence::SequenceFormat>(phpqt_enum_value(format, QKeySequence::PortableText))));
}

PHPQT_VALUE_BOOL(QKeySequence, isEmpty)

ZEND_METHOD(QKeySequence, fromString)
{
	zend_string *str;
	zend_object *format = nullptr;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(str)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS(format, phpqt_ce_QKeySequence_SequenceFormat)
	ZEND_PARSE_PARAMETERS_END();

	phpqt_return_qkeysequence(return_value, QKeySequence::fromString(phpqt_qstring(str),
		static_cast<QKeySequence::SequenceFormat>(phpqt_enum_value(format, QKeySequence::PortableText))));
}

/* ---- QByteArray -------------------------------------------------------- */

ZEND_METHOD(QByteArray, __construct)
{
	zend_string *data;
	zend_long size = -1;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(data)
		Z_PARAM_OPTIONAL
		Z_PARAM_LONG(size)
	ZEND_PARSE_PARAMETERS_END();

	if (!phpqt_value_fresh(Z_OBJ_P(ZEND_THIS))) {
		RETURN_THROWS();
	}
	/* QByteArray(data, size) copies $size bytes from the string: past its length it reads past the string. */
	if (!PHPQT_PROBE_OFF("qbytearray-string-length") && (size > static_cast<zend_long>(ZSTR_LEN(data)))) {
		zend_argument_value_error(2, "must not be greater than the string's %zu bytes", ZSTR_LEN(data)); /* binding:qbytearray-string-length */
		RETURN_THROWS();
	}
	phpqt_construct_value(Z_OBJ_P(ZEND_THIS), new QByteArray(ZSTR_VAL(data), static_cast<qsizetype>(size)));
}

ZEND_METHOD(QByteArray, size)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QByteArray, bytes);

	RETURN_LONG(static_cast<zend_long>(bytes->size()));
}

ZEND_METHOD(QByteArray, pointer)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QByteArray, bytes);

	RETURN_LONG((zend_long) (uintptr_t) bytes->data());
}
