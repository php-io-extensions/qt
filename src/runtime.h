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

#include <QtCore/QByteArray>
#include <QtCore/QObject>
#include <QtCore/QPointer>
#include <QtCore/QString>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QtCore/QMetaMethod>
#include <QtCore/QMetaObject>

#include "php.h"
#include "zend_enum.h"
#include "zend_exceptions.h"
#include "php_qt.h"

class PhpSlot;
class QFont;
class QPixmap;
class QTableWidgetItem;

/* One slot Qt is destroying: its parent, and the slot whose teardown freed this one (or none). */
struct phpqt_teardown {
	QObject *at;
	struct phpqt_teardown *outer;
};

ZEND_BEGIN_MODULE_GLOBALS(qt)
	HashTable boxes;               /* QObject address => zend_object*, not refcounted */
	PhpSlot *slots_head;           /* every slot still attached this request */
	uint32_t callout_depth;        /* > 0 while PHP runs inside a Qt callback */
	struct phpqt_teardown *teardown; /* the slots Qt is destroying while their callables are freed, innermost first */
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

/*
 * Qt values (QFont, QPixmap) and the non-QObject QTableWidgetItem: a heap object
 * the PHP object owns, unless a table took the item; destroy() knows its type.
 */
typedef struct {
	void *ptr;                     /* NULL before construction and once Qt deleted the item */
	bool constructed;
	bool owned;
	void (*destroy)(void *ptr);
	void (*forget)(void *ptr);     /* owner-held kinds: stop the native writing back to this wrapper; may be NULL */
	zend_object std;
} phpqt_value_object;

static inline phpqt_value_object *phpqt_value_from(zend_object *obj)
{
	return (phpqt_value_object *) ((char *) obj - XtOffsetOf(phpqt_value_object, std));
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
extern zend_class_entry *phpqt_ce_QMetaObject;
extern zend_class_entry *phpqt_ce_QEventLoop_ProcessEventsFlag;
extern zend_class_entry *phpqt_ce_Qt_TimerType;
extern zend_class_entry *phpqt_ce_QCoreApplication;
extern zend_class_entry *phpqt_ce_QGuiApplication;
extern zend_class_entry *phpqt_ce_QApplication;
extern zend_class_entry *phpqt_ce_QTimer;
extern zend_class_entry *phpqt_ce_QSocketNotifier;
extern zend_class_entry *phpqt_ce_QSocketNotifier_Type;
extern zend_class_entry *phpqt_ce_QAbstractEventDispatcher;
extern zend_class_entry *phpqt_ce_QEvent_Type;
extern zend_class_entry *phpqt_ce_Qt_WidgetAttribute;
extern zend_class_entry *phpqt_ce_QWindow;
extern zend_class_entry *phpqt_ce_QOpenGLWidget;
extern zend_class_entry *phpqt_ce_QVulkanInstance;
extern zend_class_entry *phpqt_ce_QSurfaceFormat;
extern zend_class_entry *phpqt_ce_QSurfaceFormat_OpenGLContextProfile;
extern zend_class_entry *phpqt_ce_QSurfaceFormat_RenderableType;
extern zend_class_entry *phpqt_ce_QOpenGLPainter;
extern zend_class_entry *phpqt_ce_QSurface_SurfaceType;
extern zend_class_entry *phpqt_ce_QWidget;
extern zend_class_entry *phpqt_ce_QMainWindow;
extern zend_class_entry *phpqt_ce_QDialog;
extern zend_class_entry *phpqt_ce_QMessageBox;
extern zend_class_entry *phpqt_ce_QMenuBar;
extern zend_class_entry *phpqt_ce_QMenu;
extern zend_class_entry *phpqt_ce_QAction;
extern zend_class_entry *phpqt_ce_QAction_MenuRole;
extern zend_class_entry *phpqt_ce_QEventFilter;
extern zend_class_entry *phpqt_ce_Qt_AlignmentFlag;
extern zend_class_entry *phpqt_ce_QSizePolicy_Policy;
extern zend_class_entry *phpqt_ce_QLayout;
extern zend_class_entry *phpqt_ce_QBoxLayout;
extern zend_class_entry *phpqt_ce_QVBoxLayout;
extern zend_class_entry *phpqt_ce_QHBoxLayout;
extern zend_class_entry *phpqt_ce_QGridLayout;
extern zend_class_entry *phpqt_ce_Qt_Orientation;
extern zend_class_entry *phpqt_ce_QLineEdit_EchoMode;
extern zend_class_entry *phpqt_ce_QLabel;
extern zend_class_entry *phpqt_ce_QAbstractButton;
extern zend_class_entry *phpqt_ce_QPushButton;
extern zend_class_entry *phpqt_ce_QCheckBox;
extern zend_class_entry *phpqt_ce_QAbstractSlider;
extern zend_class_entry *phpqt_ce_QSlider;
extern zend_class_entry *phpqt_ce_QComboBox;
extern zend_class_entry *phpqt_ce_QLineEdit;
extern zend_class_entry *phpqt_ce_QPlainTextEdit;
extern zend_class_entry *phpqt_ce_Qt_AspectRatioMode;
extern zend_class_entry *phpqt_ce_Qt_ScrollBarPolicy;
extern zend_class_entry *phpqt_ce_QFont_Weight;
extern zend_class_entry *phpqt_ce_QFont;
extern zend_class_entry *phpqt_ce_QPixmap;
extern zend_class_entry *phpqt_ce_QImage;
extern zend_class_entry *phpqt_ce_QImage_Format;
extern zend_class_entry *phpqt_ce_QTableWidgetItem;
extern zend_class_entry *phpqt_ce_QFrame_Shape;
extern zend_class_entry *phpqt_ce_QFrame_Shadow;
extern zend_class_entry *phpqt_ce_QAbstractItemView_SelectionBehavior;
extern zend_class_entry *phpqt_ce_QAbstractItemView_SelectionMode;
extern zend_class_entry *phpqt_ce_QDateEdit;
extern zend_class_entry *phpqt_ce_QProgressBar;
extern zend_class_entry *phpqt_ce_QFrame;
extern zend_class_entry *phpqt_ce_QScrollArea;
extern zend_class_entry *phpqt_ce_QAbstractItemView;
extern zend_class_entry *phpqt_ce_QTableWidget;
extern zend_class_entry *phpqt_ce_QMediaPlayer_PlaybackState;
extern zend_class_entry *phpqt_ce_QMediaPlayer_MediaStatus;
extern zend_class_entry *phpqt_ce_QMediaPlayer_Error;
extern zend_class_entry *phpqt_ce_QUrl;
extern zend_class_entry *phpqt_ce_QAudioOutput;
extern zend_class_entry *phpqt_ce_QMediaPlayer;
extern zend_class_entry *phpqt_ce_QVideoWidget;
extern zend_class_entry *phpqt_ce_QSpacerItem;
extern zend_class_entry *phpqt_ce_Qt_TextFormat;
extern zend_class_entry *phpqt_ce_Qt_TransformationMode;

void phpqt_register_QObject();
void phpqt_register_QMetaObject();
void phpqt_register_enums();
void phpqt_register_QCoreApplication();
void phpqt_register_QTimer();
void phpqt_register_QSocketNotifier();
void phpqt_register_QAbstractEventDispatcher();
void phpqt_register_QWindow();
void phpqt_register_QVulkan();
void phpqt_register_QOpenGLWidget();
void phpqt_register_QWidget();
void phpqt_register_QMenu();
void phpqt_register_QtGlue();
void phpqt_register_QLayout();
void phpqt_register_QControls();
void phpqt_register_QGui();
void phpqt_register_QMultimedia();

/* Object model. */
void phpqt_object_setup(zend_class_entry *ce);
void phpqt_map_class(const char *qt_class, zend_class_entry *ce);
void phpqt_box(zval *rv, QObject *object);
void phpqt_adopt(zend_object *wrapper, QObject *created);
QObject *phpqt_this(zend_object *wrapper);
QObject *phpqt_arg(zend_object *wrapper_or_null, uint32_t arg_num, bool *failed);

/* Qt values: copies in, copies out; the item keeps its identity through its wrapper. */
void phpqt_value_setup(zend_class_entry *ce);
void phpqt_value_hold(zend_object *wrapper, void *ptr, bool owned, void (*destroy)(void *), void (*forget)(void *) = nullptr);
void *phpqt_value_this(zend_object *wrapper);
void *phpqt_value_arg(zend_object *wrapper, uint32_t arg_num);
void phpqt_return_font(zval *rv, const QFont &font);
void phpqt_return_pixmap(zval *rv, const QPixmap &pixmap);
void phpqt_return_table_item(zval *rv, QTableWidgetItem *item);
void phpqt_value_taken(zend_object *wrapper);
QTableWidgetItem *phpqt_table_item_prototype();

/* The wrapped value, or a QtException when it is gone. */
#define PHPQT_VALUE_THIS(type, var) \
	type *var = static_cast<type *>(phpqt_value_this(Z_OBJ_P(ZEND_THIS))); \
	if (var == nullptr) { \
		RETURN_THROWS(); \
	}

/* Values. */
static inline QString phpqt_qstring(zend_string *value)
{
	return QString::fromUtf8(ZSTR_VAL(value), (qsizetype) ZSTR_LEN(value));
}

static inline void phpqt_return_qstring(zval *rv, const QString &value)
{
	QByteArray utf8 = value.toUtf8();
	ZVAL_STRINGL(rv, utf8.constData(), (size_t) utf8.size());
}

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

protected:
	/* Calls the PHP callable; false when it did not run (detached, or an exception already pending). */
	bool call(uint32_t argc, zval *argv, zval *retval);

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

/*
 * The widget constructors share one shape: an optional parent widget, a new object
 * PHP owns until the parent (or a later setParent) takes it. Widgets are made on the
 * main thread, after a QApplication.
 */
template <typename Widget>
static inline void phpqt_construct_widget(INTERNAL_FUNCTION_PARAMETERS)
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

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new Widget(qparent));
}

/* Same shape with a leading text argument: QLabel, QPushButton, QCheckBox, QLineEdit. */
template <typename Widget>
static inline void phpqt_construct_text_widget(INTERNAL_FUNCTION_PARAMETERS)
{
	zend_string *text = nullptr;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 2)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(text)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	if (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "%s needs a QApplication first", ZSTR_VAL(EX(func)->common.scope->name));
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new Widget(text != nullptr ? phpqt_qstring(text) : QString(), qparent));
}

#endif
