#include "runtime.h"
#include "../stubs/QObject_arginfo.h"
#include "../stubs/QMetaObject_arginfo.h"

#include <QtCore/QCoreApplication>
#include <QtCore/QString>

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

void phpqt_register_QObject()
{
	phpqt_ce_QObject = register_class_QObject();
	phpqt_object_setup(phpqt_ce_QObject);
	phpqt_map_class("QObject", phpqt_ce_QObject);
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

	if (phpqt_object_from(Z_OBJ_P(ZEND_THIS))->guard != nullptr) {
		zend_throw_exception(phpqt_ce_QtException, "QObject::__construct() called twice", 0);
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

	if (index < 0) {
		zend_argument_value_error(2, "is not a signal of %s (signals are named by signature, e.g. \"timeout()\")",
			sender->metaObject()->className());
		RETURN_THROWS();
	}

	PhpSlot *slot = new PhpSlot(functor, sender->metaObject()->method(index));
	QMetaObject::Connection connection = QMetaObject::connect(
		sender, index, slot, QObject::staticMetaObject.methodCount(), Qt::DirectConnection
	);

	if (!connection) {
		delete slot;
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "Qt refused to connect %s", signature.constData());
		RETURN_THROWS();
	}

	/* The sender going away ends the connection; the slot and its callable follow it out. */
	QObject::connect(sender, &QObject::destroyed, slot, &QObject::deleteLater);

	object_init_ex(return_value, phpqt_ce_QMetaObject_Connection);
	phpqt_connection *intern = phpqt_connection_from(Z_OBJ_P(return_value));
	intern->connection = new QMetaObject::Connection(connection);
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

ZEND_METHOD(QMetaObject_Connection, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();
}

ZEND_METHOD(QMetaObject_Connection, isValid)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_BOOL(static_cast<bool>(*phpqt_connection_from(Z_OBJ_P(ZEND_THIS))->connection));
}
