#include "runtime.h"
#include "php_network.h"

#if __has_include("ext/sockets/php_sockets.h")
# include "ext/sockets/php_sockets.h"
# define PHPQT_HAVE_SOCKETS 1
#endif

#include <QtCore/QByteArray>
#include <QtCore/QCoreApplication>
#include <QtCore/QSocketDescriptor>
#include <QtCore/QString>

#ifdef __APPLE__
# include <pthread.h>
#else
# include <sys/syscall.h>
# include <unistd.h>
#endif

static zend_object_handlers phpqt_handlers;

/* Qt class name => PHP class, for boxing an object as its nearest bound class. */
static HashTable phpqt_classes;
static bool phpqt_classes_ready = false;

static zend_object *phpqt_create_object(zend_class_entry *ce)
{
	phpqt_object *intern = static_cast<phpqt_object *>(zend_object_alloc(sizeof(phpqt_object), ce));

	zend_object_std_init(&intern->std, ce);
	object_properties_init(&intern->std, ce);
	intern->std.handlers = &phpqt_handlers;

	return &intern->std;
}

static void phpqt_free_object(zend_object *object)
{
	phpqt_object *intern = phpqt_object_from(object);

	if (intern->raw != nullptr) {
		zend_ulong key = (zend_ulong) (uintptr_t) intern->raw;

		/* A stale entry may already have been replaced by a newer object at the same address. */
		if (zend_hash_index_find_ptr(&PHPQT_G(boxes), key) == object) {
			zend_hash_index_del(&PHPQT_G(boxes), key);
		}
	}

	if (intern->guard != nullptr) {
		QObject *qobject = intern->guard->data();

		if (intern->owned && qobject != nullptr && qobject->parent() == nullptr) {
			/* Inside a Qt callback the object may be the one emitting: let Qt delete it once back in its loop. */
			if (PHPQT_G(callout_depth) > 0 && qobject_cast<QCoreApplication *>(qobject) == nullptr) {
				qobject->deleteLater();
			} else {
				delete qobject;
			}
		}

		delete intern->guard;
		intern->guard = nullptr;
	}

	/* An application's argv outlives the application, which kept pointers into it. */
	if (intern->argv != nullptr) {
		for (int i = 0; i < intern->argc; i++) {
			pefree(intern->argv[i], 1);
		}
		pefree(intern->argv, 1);
		intern->argv = nullptr;
	}

	zend_object_std_dtor(object);
}

void phpqt_object_setup(zend_class_entry *ce)
{
	static bool handlers_ready = false;

	if (!handlers_ready) {
		memcpy(&phpqt_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
		phpqt_handlers.offset = XtOffsetOf(phpqt_object, std);
		phpqt_handlers.free_obj = phpqt_free_object;
		phpqt_handlers.clone_obj = nullptr;
		phpqt_handlers.compare = zend_objects_not_comparable;
		handlers_ready = true;
	}

	ce->create_object = phpqt_create_object;
	ce->default_object_handlers = &phpqt_handlers;
}

void phpqt_map_class(const char *qt_class, zend_class_entry *ce)
{
	if (!phpqt_classes_ready) {
		zend_hash_init(&phpqt_classes, 16, nullptr, nullptr, 1);
		phpqt_classes_ready = true;
	}

	zend_hash_str_update_ptr(&phpqt_classes, qt_class, strlen(qt_class), ce);
}

static void phpqt_track(zend_object *wrapper, QObject *qobject, bool owned)
{
	phpqt_object *intern = phpqt_object_from(wrapper);

	intern->guard = new QPointer<QObject>(qobject);
	intern->raw = qobject;
	intern->owned = owned;
	zend_hash_index_update_ptr(&PHPQT_G(boxes), (zend_ulong) (uintptr_t) qobject, wrapper);
}

void phpqt_box(zval *rv, QObject *qobject)
{
	if (qobject == nullptr) {
		ZVAL_NULL(rv);
		return;
	}

	zend_object *existing = static_cast<zend_object *>(zend_hash_index_find_ptr(&PHPQT_G(boxes), (zend_ulong) (uintptr_t) qobject));

	if (existing != nullptr && phpqt_object_from(existing)->guard->data() == qobject) {
		ZVAL_OBJ_COPY(rv, existing);
		return;
	}

	zend_class_entry *ce = phpqt_ce_QObject;

	for (const QMetaObject *meta = qobject->metaObject(); meta != nullptr; meta = meta->superClass()) {
		const char *name = meta->className();
		zend_class_entry *mapped = static_cast<zend_class_entry *>(zend_hash_str_find_ptr(&phpqt_classes, name, strlen(name)));

		if (mapped != nullptr) {
			ce = mapped;
			break;
		}
	}

	zend_object *wrapper = phpqt_create_object(ce);
	phpqt_track(wrapper, qobject, false);
	ZVAL_OBJ(rv, wrapper);
}

/* A constructor's new object: PHP owns it until Qt takes it through a parent. */
void phpqt_adopt(zend_object *wrapper, QObject *created)
{
	phpqt_track(wrapper, created, true);
}

QObject *phpqt_this(zend_object *wrapper)
{
	phpqt_object *intern = phpqt_object_from(wrapper);
	QObject *qobject = intern->guard != nullptr ? intern->guard->data() : nullptr;

	if (qobject == nullptr) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0,
			intern->guard == nullptr ? "%s was never constructed" : "%s has been deleted by Qt",
			ZSTR_VAL(wrapper->ce->name));
	}

	return qobject;
}

QObject *phpqt_arg(zend_object *wrapper_or_null, uint32_t arg_num, bool *failed)
{
	*failed = false;

	if (wrapper_or_null == nullptr) {
		return nullptr;
	}

	phpqt_object *intern = phpqt_object_from(wrapper_or_null);
	QObject *qobject = intern->guard != nullptr ? intern->guard->data() : nullptr;

	if (qobject == nullptr) {
		zend_argument_value_error(arg_num, "is a %s that no longer exists", ZSTR_VAL(wrapper_or_null->ce->name));
		*failed = true;
	}

	return qobject;
}

zend_long phpqt_enum_value(zend_object *obj_or_null, zend_long fallback)
{
	return obj_or_null != nullptr ? Z_LVAL_P(zend_enum_fetch_case_value(obj_or_null)) : fallback;
}

void phpqt_return_enum(zval *rv, zend_class_entry *ce, zend_long value)
{
	zend_object *case_obj = nullptr;

	if (zend_enum_get_case_by_value(&case_obj, ce, value, nullptr, true) == SUCCESS && case_obj != nullptr) {
		ZVAL_OBJ_COPY(rv, case_obj);
		return;
	}

	ZVAL_NULL(rv);
}

bool phpqt_fd_from_zval(zval *zfd, uint32_t arg_num, int *fd)
{
	switch (Z_TYPE_P(zfd)) {
		case IS_LONG:
			if (Z_LVAL_P(zfd) < 0 || Z_LVAL_P(zfd) > INT_MAX) {
				zend_argument_value_error(arg_num, "must be a valid file descriptor");
				return false;
			}
			*fd = (int) Z_LVAL_P(zfd);
			return true;

		case IS_RESOURCE: {
			php_stream *stream = (php_stream *) zend_fetch_resource2_ex(
				zfd, nullptr, php_file_le_stream(), php_file_le_pstream()
			);
			php_socket_t stream_fd = -1;

			if (stream == nullptr) {
				zend_argument_type_error(arg_num, "must be a valid stream resource");
				return false;
			}

			if (php_stream_cast(stream, PHP_STREAM_AS_FD_FOR_SELECT | PHP_STREAM_CAST_INTERNAL,
					(void **) &stream_fd, 0) != SUCCESS || stream_fd < 0) {
				zend_argument_value_error(arg_num, "must be a stream backed by a file descriptor");
				return false;
			}

			*fd = (int) stream_fd;
			return true;
		}

#ifdef PHPQT_HAVE_SOCKETS
		case IS_OBJECT: {
			/* Resolved by name so qt.so never links against ext/sockets symbols. */
			zend_class_entry *socket_class = static_cast<zend_class_entry *>(zend_hash_str_find_ptr(CG(class_table), "socket", sizeof("socket") - 1));

			if (socket_class != nullptr && Z_OBJCE_P(zfd) == socket_class) {
				php_socket *socket = Z_SOCKET_P(zfd);

				if (socket->bsd_socket < 0) {
					zend_argument_value_error(arg_num, "has already been closed");
					return false;
				}

				*fd = (int) socket->bsd_socket;
				return true;
			}
			break;
		}
#endif
	}

	zend_argument_type_error(arg_num, "must be of type Socket|resource|int, %s given", zend_zval_value_name(zfd));
	return false;
}

bool phpqt_require_callable(zval *callable, uint32_t arg_num)
{
	if (!zend_is_callable(callable, 0, nullptr)) {
		zend_argument_type_error(arg_num, "must be a valid callback");
		return false;
	}

	return true;
}

bool phpqt_on_main_thread()
{
#ifdef __APPLE__
	return pthread_main_np() != 0;
#else
	return (pid_t) syscall(SYS_gettid) == getpid();
#endif
}

/* ---- signal arguments -------------------------------------------------- */

/*
 * The emitting object as PHP already knows it. connect() needed its wrapper,
 * so the map entry for its address is that wrapper, even while Qt is
 * destroying it and its guard reads null (destroyed() is emitted after
 * QPointers are cleared).
 */
static bool phpqt_box_sender(zval *rv, QObject *sender)
{
	zend_object *known = static_cast<zend_object *>(zend_hash_index_find_ptr(&PHPQT_G(boxes), (zend_ulong) (uintptr_t) sender));

	if (known == nullptr) {
		return false;
	}

	ZVAL_OBJ_COPY(rv, known);
	return true;
}

/* One signal argument as PHP sees it: QObjects boxed, enums as ints, strings as UTF-8. */
static void phpqt_arg_to_zval(zval *rv, QMetaType type, void *value, QObject *sender)
{
	if (value == nullptr) {
		ZVAL_NULL(rv);
		return;
	}

	switch (type.id()) {
		case QMetaType::Bool:      ZVAL_BOOL(rv, *static_cast<bool *>(value)); return;
		case QMetaType::Int:       ZVAL_LONG(rv, *static_cast<int *>(value)); return;
		case QMetaType::UInt:      ZVAL_LONG(rv, (zend_long) *static_cast<uint *>(value)); return;
		case QMetaType::Long:      ZVAL_LONG(rv, (zend_long) *static_cast<long *>(value)); return;
		case QMetaType::ULong:     ZVAL_LONG(rv, (zend_long) *static_cast<ulong *>(value)); return;
		case QMetaType::LongLong:  ZVAL_LONG(rv, (zend_long) *static_cast<qlonglong *>(value)); return;
		case QMetaType::ULongLong: ZVAL_LONG(rv, (zend_long) *static_cast<qulonglong *>(value)); return;
		case QMetaType::Short:     ZVAL_LONG(rv, *static_cast<short *>(value)); return;
		case QMetaType::UShort:    ZVAL_LONG(rv, *static_cast<ushort *>(value)); return;
		case QMetaType::Char:      ZVAL_LONG(rv, *static_cast<char *>(value)); return;
		case QMetaType::SChar:     ZVAL_LONG(rv, *static_cast<signed char *>(value)); return;
		case QMetaType::UChar:     ZVAL_LONG(rv, *static_cast<uchar *>(value)); return;
		case QMetaType::Double:    ZVAL_DOUBLE(rv, *static_cast<double *>(value)); return;
		case QMetaType::Float:     ZVAL_DOUBLE(rv, *static_cast<float *>(value)); return;

		case QMetaType::QString: {
			QByteArray utf8 = static_cast<QString *>(value)->toUtf8();
			ZVAL_STRINGL(rv, utf8.constData(), utf8.size());
			return;
		}

		case QMetaType::QByteArray: {
			QByteArray *bytes = static_cast<QByteArray *>(value);
			ZVAL_STRINGL(rv, bytes->constData(), bytes->size());
			return;
		}
	}

	if (type == QMetaType::fromType<QSocketDescriptor>()) {
		ZVAL_LONG(rv, (zend_long) static_cast<QSocketDescriptor::DescriptorType>(*static_cast<QSocketDescriptor *>(value)));
		return;
	}

	if (type.flags() & QMetaType::PointerToQObject) {
		QObject *object = *static_cast<QObject **>(value);

		if (object == nullptr || object != sender || !phpqt_box_sender(rv, object)) {
			phpqt_box(rv, object);
		}
		return;
	}

	if (type.flags() & QMetaType::IsEnumeration) {
		switch (type.sizeOf()) {
			case 1: ZVAL_LONG(rv, *static_cast<qint8 *>(value)); return;
			case 2: ZVAL_LONG(rv, *static_cast<qint16 *>(value)); return;
			case 4: ZVAL_LONG(rv, *static_cast<qint32 *>(value)); return;
			case 8: ZVAL_LONG(rv, (zend_long) *static_cast<qint64 *>(value)); return;
		}
	}

	ZVAL_NULL(rv);
}

/* ---- PhpSlot ----------------------------------------------------------- */

PhpSlot::PhpSlot(zval *functor, QMetaMethod signal_) : QObject(nullptr), signal(signal_)
{
	ZVAL_COPY(&callable, functor);

	next = PHPQT_G(slots_head);
	if (next != nullptr) {
		next->prev = this;
	}
	PHPQT_G(slots_head) = this;
}

PhpSlot::~PhpSlot()
{
	detach();
}

/* Unlinks the slot and frees its callable; the callable is taken out first because freeing it can run PHP destructors. */
void PhpSlot::detach()
{
	if (prev != nullptr) {
		prev->next = next;
	} else if (PHPQT_G(slots_head) == this) {
		PHPQT_G(slots_head) = next;
	}
	if (next != nullptr) {
		next->prev = prev;
	}
	prev = next = nullptr;

	if (!Z_ISUNDEF(callable)) {
		zval held;

		ZVAL_COPY_VALUE(&held, &callable);
		ZVAL_UNDEF(&callable);
		zval_ptr_dtor(&held);
	}
}

int PhpSlot::qt_metacall(QMetaObject::Call call, int id, void **argv)
{
	id = QObject::qt_metacall(call, id, argv);

	if (id < 0 || call != QMetaObject::InvokeMetaMethod) {
		return id;
	}

	if (id == 0) {
		invoke(argv);
	}

	return -1;
}

void PhpSlot::fire()
{
	invoke(nullptr);
}

void PhpSlot::invoke(void **argv)
{
	/* A PHP exception already on its way out wins; later callbacks in the same Qt call wait for the next one. */
	if (Z_ISUNDEF(callable) || EG(exception) != nullptr) {
		return;
	}

	int argc = (argv != nullptr && signal.isValid()) ? signal.parameterCount() : 0;
	zval *args = argc > 0 ? static_cast<zval *>(safe_emalloc(argc, sizeof(zval), 0)) : nullptr;
	zval functor;
	zval retval;

	QObject *emitter = argc > 0 ? sender() : nullptr;

	for (int i = 0; i < argc; i++) {
		phpqt_arg_to_zval(&args[i], signal.parameterMetaType(i), argv[i + 1], emitter);
	}

	/* The callable may disconnect itself and so free this slot's copy: call through our own reference. */
	ZVAL_COPY(&functor, &callable);

	PHPQT_G(callout_depth)++;
	if (call_user_function(nullptr, nullptr, &functor, &retval, (uint32_t) argc, args) == SUCCESS) {
		zval_ptr_dtor(&retval);
	}
	PHPQT_G(callout_depth)--;

	zval_ptr_dtor(&functor);

	for (int i = 0; i < argc; i++) {
		zval_ptr_dtor(&args[i]);
	}
	if (args != nullptr) {
		efree(args);
	}
}

/*
 * At request end every slot still attached is deleted, which disconnects it,
 * and its callable freed while the engine can still free it.
 */
void phpqt_slots_detach_all()
{
	while (PHPQT_G(slots_head) != nullptr) {
		QPointer<PhpSlot> slot(PHPQT_G(slots_head));

		/* Freeing the callable can run a PHP destructor that disconnects, and so deletes, this very slot. */
		slot->detach();
		if (!slot.isNull()) {
			delete slot.data();
		}
	}
}
