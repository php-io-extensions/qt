/*
 * The glue every binding shares: one PHP object per QObject, guarded against
 * Qt deleting it; PHP-created objects deleted with their PHP object unless Qt
 * owns them through a parent; PHP callables Qt signals call into.
 */

#ifndef PHPQT_RUNTIME_H
#define PHPQT_RUNTIME_H

#ifdef HAVE_CONFIG_H
# include "config.h"
#endif

#include <QtCore/QObject>
#include <QtCore/QPointer>
#include <QtCore/QMetaMethod>
#include <QtCore/QMetaObject>

#include "php.h"
#include "zend_enum.h"
#include "zend_exceptions.h"
#include "php_qt.h"

class PhpSlot;

ZEND_BEGIN_MODULE_GLOBALS(qt)
	HashTable boxes;               /* QObject address => zend_object*, not refcounted */
	PhpSlot *slots_head;           /* every slot still attached this request */
	uint32_t callout_depth;        /* > 0 while PHP runs inside a Qt callback */
ZEND_END_MODULE_GLOBALS(qt)

ZEND_EXTERN_MODULE_GLOBALS(qt)
#define PHPQT_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(qt, v)

/* Plain layout for XtOffsetOf: the Qt members live behind pointers. */
typedef struct {
	QPointer<QObject> *guard;      /* nulls itself when Qt deletes the object; NULL before adoption */
	QObject *raw;                  /* the address the identity map is keyed by */
	bool owned;                    /* PHP created it: deleted with the PHP object unless it has a parent */
	int argc;                      /* QCoreApplication family: storage Qt keeps referencing */
	char **argv;
	zend_object std;
} phpqt_object;

static inline phpqt_object *phpqt_object_from(zend_object *obj)
{
	return (phpqt_object *) ((char *) obj - XtOffsetOf(phpqt_object, std));
}

/* QMetaObject\Connection */
typedef struct {
	QMetaObject::Connection *connection;
	QPointer<PhpSlot> *slot;
	zend_object std;
} phpqt_connection;

static inline phpqt_connection *phpqt_connection_from(zend_object *obj)
{
	return (phpqt_connection *) ((char *) obj - XtOffsetOf(phpqt_connection, std));
}

extern zend_class_entry *phpqt_ce_QtException;
extern zend_class_entry *phpqt_ce_QObject;
extern zend_class_entry *phpqt_ce_QMetaObject_Connection;
extern zend_class_entry *phpqt_ce_QEventLoop_ProcessEventsFlag;
extern zend_class_entry *phpqt_ce_Qt_TimerType;
extern zend_class_entry *phpqt_ce_QCoreApplication;
extern zend_class_entry *phpqt_ce_QGuiApplication;
extern zend_class_entry *phpqt_ce_QApplication;
extern zend_class_entry *phpqt_ce_QTimer;
extern zend_class_entry *phpqt_ce_QSocketNotifier;
extern zend_class_entry *phpqt_ce_QSocketNotifier_Type;
extern zend_class_entry *phpqt_ce_QAbstractEventDispatcher;

void phpqt_register_QObject();
void phpqt_register_QMetaObject();
void phpqt_register_enums();
void phpqt_register_QCoreApplication();
void phpqt_register_QTimer();
void phpqt_register_QSocketNotifier();
void phpqt_register_QAbstractEventDispatcher();

/* Object model. */
void phpqt_object_setup(zend_class_entry *ce);
void phpqt_map_class(const char *qt_class, zend_class_entry *ce);
void phpqt_box(zval *rv, QObject *object);
void phpqt_adopt(zend_object *wrapper, QObject *created);
QObject *phpqt_this(zend_object *wrapper);
QObject *phpqt_arg(zend_object *wrapper_or_null, uint32_t arg_num, bool *failed);

/* Values. */
zend_long phpqt_enum_value(zend_object *obj_or_null, zend_long fallback);
void phpqt_return_enum(zval *rv, zend_class_entry *ce, zend_long value);
bool phpqt_fd_from_zval(zval *zfd, uint32_t arg_num, int *fd);
bool phpqt_require_callable(zval *callable, uint32_t arg_num);

/* Threads. */
bool phpqt_on_main_thread();

/* Slots. */
void phpqt_slots_detach_all();

/*
 * A QObject that calls a PHP callable. connect() hands Qt a method index one
 * past QObject's own methods; qt_metacall receives it as 0 after QObject has
 * taken its share, so no moc-generated metaobject is needed.
 */
class PhpSlot : public QObject {
public:
	PhpSlot(zval *callable, QMetaMethod signal);
	~PhpSlot() override;

	int qt_metacall(QMetaObject::Call call, int id, void **argv) override;

	/* Called with no signal arguments: the functor overload of QTimer::singleShot. */
	void fire();
	void detach();

	PhpSlot *prev = nullptr;
	PhpSlot *next = nullptr;

private:
	void invoke(void **argv);

	zval callable;
	QMetaMethod signal;
};

/* Qt asserts its applications are made on the main thread; this refuses other threads. */
#define PHPQT_REQUIRE_MAIN_THREAD() do { \
	if (!phpqt_on_main_thread()) { \
		zend_throw_exception_ex(phpqt_ce_QtException, 0, \
			"%s::%s() must be called on the main thread", \
			ZSTR_VAL(EX(func)->common.scope->name), ZSTR_VAL(EX(func)->common.function_name)); \
		RETURN_THROWS(); \
	} \
} while (0)

/* The wrapped QObject, or a QtException when Qt has deleted it. */
#define PHPQT_THIS(type, var) \
	type *var = static_cast<type *>(phpqt_this(Z_OBJ_P(ZEND_THIS))); \
	if (var == nullptr) { \
		RETURN_THROWS(); \
	}

#endif
