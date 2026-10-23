#include "runtime.h"

#include <QtCore/QDate>
#include <QtCore/QPoint>
#include <QtCore/QRect>
#include <QtCore/QSize>
#include <QtCore/QUrl>
#include <QtCore/QVariant>
#include <QtGui/QKeySequence>
#include <QtGui/QBrush>
#include <QtGui/QColor>
#include <QtGui/QFont>
#include <QtGui/QPixmap>
#include "../stubs/QObject_arginfo.h"
#include "../stubs/QMetaObject_arginfo.h"

#include <QtCore/QCoreApplication>
#include <QtCore/QString>
#include <QtCore/QThread>

static zend_object_handlers phpqt_connection_handlers;

static zend_object *phpqt_connection_create(zend_class_entry *ce)
{
	phpqt_connection *intern = static_cast<phpqt_connection *>(zend_object_alloc(sizeof(phpqt_connection), ce));

	zend_object_std_init(&intern->std, ce);
	object_properties_init(&intern->std, ce);
	intern->std.handlers = &phpqt_connection_handlers;

	return &intern->std;
}

/* Dropping the handle does not disconnect, as in Qt: only QObject::disconnect() does. */
static void phpqt_connection_free(zend_object *object)
{
	phpqt_connection *intern = phpqt_connection_from(object);

	delete intern->connection;
	delete intern->slot;
	intern->connection = nullptr;
	intern->slot = nullptr;

	zend_object_std_dtor(object);
}

zend_class_entry *phpqt_ce_QThread;

void phpqt_register_QObject()
{
	phpqt_ce_QObject = register_class_QObject();
	phpqt_object_setup(phpqt_ce_QObject);
	phpqt_map_class("QObject", phpqt_ce_QObject);

	phpqt_ce_QThread = register_class_QThread(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QThread);
	phpqt_map_class("QThread", phpqt_ce_QThread);
}

void phpqt_register_QMetaObject()
{
	phpqt_ce_QMetaObject_Connection = register_class_QMetaObject_Connection();
	phpqt_ce_QMetaObject_Connection->create_object = phpqt_connection_create;

	memcpy(&phpqt_connection_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
	phpqt_connection_handlers.offset = XtOffsetOf(phpqt_connection, std);
	phpqt_connection_handlers.free_obj = phpqt_connection_free;
	phpqt_connection_handlers.clone_obj = nullptr;
	phpqt_ce_QMetaObject_Connection->default_object_handlers = &phpqt_connection_handlers;

	phpqt_ce_QMetaObject = register_class_QMetaObject();
}

ZEND_METHOD(QObject, __construct)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	QObject *qparent = phpqt_arg(parent, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QObject(qparent));
}

ZEND_METHOD(QObject, objectName)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QObject, object);

	QByteArray name = object->objectName().toUtf8();
	RETURN_STRINGL(name.constData(), name.size());
}

ZEND_METHOD(QObject, setObjectName)
{
	zend_string *name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(name)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QObject, object);

	object->setObjectName(QString::fromUtf8(ZSTR_VAL(name), (qsizetype) ZSTR_LEN(name)));
}

ZEND_METHOD(QObject, inherits)
{
	zend_string *class_name;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(class_name)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QObject, object);

	RETURN_BOOL(object->inherits(ZSTR_VAL(class_name)));
}

ZEND_METHOD(QObject, parent)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QObject, object);

	phpqt_box(return_value, object->parent());
}

ZEND_METHOD(QObject, setParent)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QObject, object);

	QObject *qparent = phpqt_arg(parent, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	object->setParent(qparent);
}

ZEND_METHOD(QObject, deleteLater)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QObject, object);

	object->deleteLater();
}

ZEND_METHOD(QObject, installEventFilter)
{
	zend_object *filter_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(filter_obj, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QObject, object);

	QObject *filter = phpqt_arg(filter_obj, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	object->installEventFilter(filter);
}

ZEND_METHOD(QObject, removeEventFilter)
{
	zend_object *filter_obj;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(filter_obj, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QObject, object);

	QObject *filter = phpqt_arg(filter_obj, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	object->removeEventFilter(filter);
}

ZEND_METHOD(QObject, children)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QObject, object);

	const QObjectList &children = object->children();
	array_init_size(return_value, (uint32_t) children.size());
	for (QObject *child : children) {
		zval boxed;
		phpqt_box(&boxed, child);
		add_next_index_zval(return_value, &boxed);
	}
}

ZEND_METHOD(QObject, thread)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QObject, object);

	phpqt_box(return_value, object->thread());
}

ZEND_METHOD(QThread, __construct)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QObject)
	ZEND_PARSE_PARAMETERS_END();

	QObject *qparent = phpqt_arg(parent, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QThread(qparent));
}

ZEND_METHOD(QThread, currentThread)
{
	ZEND_PARSE_PARAMETERS_NONE();

	phpqt_box(return_value, QThread::currentThread());
}

ZEND_METHOD(QObject, pointer)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QObject, object);

	RETURN_LONG((zend_long) (uintptr_t) object);
}

ZEND_METHOD(QObject, connect)
{
	zend_object *sender_obj;
	zend_string *signal_name;
	zval *functor;

	ZEND_PARSE_PARAMETERS_START(3, 3)
		Z_PARAM_OBJ_OF_CLASS(sender_obj, phpqt_ce_QObject)
		Z_PARAM_STR(signal_name)
		Z_PARAM_ZVAL(functor)
	ZEND_PARSE_PARAMETERS_END();

	bool failed;
	QObject *sender = phpqt_arg(sender_obj, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}
	if (!phpqt_require_callable(functor, 3)) {
		RETURN_THROWS();
	}

	QByteArray signature = QMetaObject::normalizedSignature(ZSTR_VAL(signal_name));
	int index = sender->metaObject()->indexOfSignal(signature.constData());

	object_init_ex(return_value, phpqt_ce_QMetaObject_Connection);
	phpqt_connection *intern = phpqt_connection_from(Z_OBJ_P(return_value));

	/* As Qt's string connect: a signal the metaobject lacks warns and gives the invalid connection. */
	if (index < 0) {
		qWarning("QObject::connect: No such signal %s::%s", sender->metaObject()->className(), signature.constData());
		intern->connection = new QMetaObject::Connection();
		intern->slot = new QPointer<PhpSlot>();
		return;
	}

	PhpSlot *slot = new PhpSlot(functor, sender->metaObject()->method(index));
	QMetaObject::Connection connection = QMetaObject::connect(
		sender, index, slot, QObject::staticMetaObject.methodCount(), Qt::DirectConnection
	);

	intern->connection = new QMetaObject::Connection(connection);
	if (!connection) {
		delete slot;
		intern->slot = new QPointer<PhpSlot>();
		return;
	}

	/* The sender going away ends the connection; the slot and its callable follow it out. */
	QObject::connect(sender, &QObject::destroyed, slot, &QObject::deleteLater);
	intern->slot = new QPointer<PhpSlot>(slot);
}

ZEND_METHOD(QObject, disconnect)
{
	zend_object *connection_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(connection_obj, phpqt_ce_QMetaObject_Connection)
	ZEND_PARSE_PARAMETERS_END();

	phpqt_connection *intern = phpqt_connection_from(connection_obj);
	bool disconnected = QObject::disconnect(*intern->connection);
	QPointer<PhpSlot> slot(intern->slot->data());

	if (!slot.isNull()) {
		slot->detach();
		if (!slot.isNull()) {
			if (PHPQT_G(callout_depth) > 0) {
				slot->deleteLater();
			} else {
				delete slot.data();
			}
		}
	}

	RETURN_BOOL(disconnected);
}

ZEND_METHOD(QMetaObject, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

/* Qt's value classes and their PHP classes, which cross as copies both ways. */
static const struct {
	QMetaType type;
	zend_class_entry **ce;
} phpqt_value_types[] = {
	{QMetaType::fromType<QDate>(), &phpqt_ce_QDate},
	{QMetaType::fromType<QPoint>(), &phpqt_ce_QPoint},
	{QMetaType::fromType<QPointF>(), &phpqt_ce_QPointF},
	{QMetaType::fromType<QSize>(), &phpqt_ce_QSize},
	{QMetaType::fromType<QRect>(), &phpqt_ce_QRect},
	{QMetaType::fromType<QUrl>(), &phpqt_ce_QUrl},
	{QMetaType::fromType<QKeySequence>(), &phpqt_ce_QKeySequence},
	{QMetaType::fromType<QBrush>(), &phpqt_ce_QBrush},
	{QMetaType::fromType<QColor>(), &phpqt_ce_QColor},
	{QMetaType::fromType<QFont>(), &phpqt_ce_QFont},
	{QMetaType::fromType<QPixmap>(), &phpqt_ce_QPixmap},
};

/*
 * One PHP argument as a value of the member's parameter type: the inverse of how signal
 * arguments reach PHP. False (with a TypeError or ValueError thrown) when it cannot be.
 * With no type (a QVariant parameter), the value's own kind decides: null, bool, int, float,
 * string, or one of Qt's value classes.
 */
bool phpqt_zval_to_variant(zval *arg, QMetaType type, QVariant *out, uint32_t arg_num)
{
	for (const auto &value_type : phpqt_value_types) {
		bool ours = Z_TYPE_P(arg) == IS_OBJECT && Z_OBJCE_P(arg) == *value_type.ce;
		if (ours && (!type.isValid() || type == value_type.type)) {
			void *value = phpqt_value_arg(Z_OBJ_P(arg), arg_num);
			if (value == nullptr) {
				return false;
			}
			*out = QVariant(value_type.type, value);
			return true;
		}
		if (type.isValid() && type == value_type.type) {
			zend_argument_type_error(arg_num, "must be of type %s for %s, %s given", ZSTR_VAL((*value_type.ce)->name), type.name(), zend_zval_value_name(arg));
			return false;
		}
	}

	if (!type.isValid()) {
		switch (Z_TYPE_P(arg)) {
			case IS_NULL:   *out = QVariant(); return true;
			case IS_TRUE:   *out = QVariant(true); return true;
			case IS_FALSE:  *out = QVariant(false); return true;
			case IS_LONG:   *out = QVariant(static_cast<qlonglong>(Z_LVAL_P(arg))); return true;
			case IS_DOUBLE: *out = QVariant(Z_DVAL_P(arg)); return true;
			case IS_STRING: *out = QVariant(phpqt_qstring(Z_STR_P(arg))); return true;
		}
		zend_argument_type_error(arg_num, "must be of type ?scalar or a Qt value class for QVariant, %s given", zend_zval_value_name(arg));
		return false;
	}

	*out = QVariant(type);
	void *data = out->data();

	switch (type.id()) {
		case QMetaType::Bool:
			*static_cast<bool *>(data) = zend_is_true(arg);
			return true;

		case QMetaType::Int: case QMetaType::UInt: case QMetaType::Long: case QMetaType::ULong:
		case QMetaType::LongLong: case QMetaType::ULongLong: case QMetaType::Short: case QMetaType::UShort:
		case QMetaType::Char: case QMetaType::SChar: case QMetaType::UChar:
			if (Z_TYPE_P(arg) != IS_LONG) {
				zend_argument_type_error(arg_num, "must be of type int for %s, %s given", type.name(), zend_zval_value_name(arg));
				return false;
			}
			*out = QVariant(static_cast<qlonglong>(Z_LVAL_P(arg)));
			if (!out->convert(type)) {
				zend_argument_value_error(arg_num, "does not fit %s", type.name());
				return false;
			}
			return true;

		case QMetaType::Double: case QMetaType::Float:
			if (Z_TYPE_P(arg) != IS_LONG && Z_TYPE_P(arg) != IS_DOUBLE) {
				zend_argument_type_error(arg_num, "must be of type float for %s, %s given", type.name(), zend_zval_value_name(arg));
				return false;
			}
			*out = QVariant(zval_get_double(arg));
			out->convert(type);
			return true;

		case QMetaType::QString:
			if (Z_TYPE_P(arg) != IS_STRING) {
				zend_argument_type_error(arg_num, "must be of type string for QString, %s given", zend_zval_value_name(arg));
				return false;
			}
			*static_cast<QString *>(data) = phpqt_qstring(Z_STR_P(arg));
			return true;
	}

	if (type.flags() & QMetaType::IsEnumeration) {
		zend_long value;
		if (Z_TYPE_P(arg) == IS_LONG) {
			value = Z_LVAL_P(arg);
		} else if (Z_TYPE_P(arg) == IS_OBJECT && (Z_OBJCE_P(arg)->ce_flags & ZEND_ACC_ENUM)) {
			value = phpqt_enum_value(Z_OBJ_P(arg), 0);
		} else {
			zend_argument_type_error(arg_num, "must be an enum case or int for %s, %s given", type.name(), zend_zval_value_name(arg));
			return false;
		}
		switch (type.sizeOf()) {
			case 1: *static_cast<qint8 *>(data) = static_cast<qint8>(value); return true;
			case 2: *static_cast<qint16 *>(data) = static_cast<qint16>(value); return true;
			case 4: *static_cast<qint32 *>(data) = static_cast<qint32>(value); return true;
			case 8: *static_cast<qint64 *>(data) = static_cast<qint64>(value); return true;
		}
	}

	if (type.flags() & QMetaType::PointerToQObject) {
		if (Z_TYPE_P(arg) == IS_NULL) {
			*static_cast<QObject **>(data) = nullptr;
			return true;
		}
		if (Z_TYPE_P(arg) != IS_OBJECT || !instanceof_function(Z_OBJCE_P(arg), phpqt_ce_QObject)) {
			zend_argument_type_error(arg_num, "must be a QObject for %s, %s given", type.name(), zend_zval_value_name(arg));
			return false;
		}
		bool failed;
		QObject *object = phpqt_arg(Z_OBJ_P(arg), arg_num, &failed);
		if (failed) {
			return false;
		}
		*static_cast<QObject **>(data) = object;
		return true;
	}

	zend_argument_type_error(arg_num, "is for a %s parameter, which invokeMethod() cannot pass", type.name());
	return false;
}

ZEND_METHOD(QMetaObject, invokeMethod)
{
	zend_object *object_obj;
	zend_string *member;
	zend_object *type_case;
	zval *args = nullptr;
	uint32_t argc = 0;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(3, -1)
		Z_PARAM_OBJ_OF_CLASS(object_obj, phpqt_ce_QObject)
		Z_PARAM_STR(member)
		Z_PARAM_OBJ_OF_CLASS(type_case, phpqt_ce_Qt_ConnectionType)
		Z_PARAM_VARIADIC('*', args, argc)
	ZEND_PARSE_PARAMETERS_END();

	QObject *object = phpqt_arg(object_obj, 1, &failed);
	if (failed) {
		RETURN_THROWS();
	}
	Qt::ConnectionType type = static_cast<Qt::ConnectionType>(phpqt_enum_value(type_case, 0));

	if (argc == 0) {
		RETURN_BOOL(QMetaObject::invokeMethod(object, ZSTR_VAL(member), type));
	}
	if (argc > 10) {
		zend_argument_count_error("QMetaObject::invokeMethod() passes at most 10 arguments, %u given", argc);
		RETURN_THROWS();
	}

	/*
	 * Arguments convert to the parameter types of the member of that name taking that many
	 * arguments (the most derived class's); with no such member each takes the type of its
	 * PHP value, and Qt's lookup answers.
	 */
	const QMetaObject *meta = object->metaObject();
	QMetaMethod method;
	for (int i = meta->methodCount() - 1; i >= 0; i--) {
		QMetaMethod candidate = meta->method(i);
		if (candidate.parameterCount() == static_cast<int>(argc) && candidate.name() == ZSTR_VAL(member)) {
			method = candidate;
			break;
		}
	}

	QVariant values[10];
	QGenericArgument generic[10];
	for (uint32_t i = 0; i < argc; i++) {
		QMetaType param = method.isValid() ? method.parameterMetaType(static_cast<int>(i)) : QMetaType();
		if (!phpqt_zval_to_variant(&args[i], param, &values[i], i + 4)) {
			RETURN_THROWS();
		}
		generic[i] = QGenericArgument(values[i].metaType().name(), values[i].constData());
	}

	RETURN_BOOL(QMetaObject::invokeMethod(object, ZSTR_VAL(member), type,
		generic[0], generic[1], generic[2], generic[3], generic[4],
		generic[5], generic[6], generic[7], generic[8], generic[9]));
}

ZEND_METHOD(QMetaObject_Connection, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QMetaObject_Connection, isValid)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL(static_cast<bool>(*phpqt_connection_from(Z_OBJ_P(ZEND_THIS))->connection));
}
