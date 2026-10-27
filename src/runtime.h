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

#include <type_traits>

#include <QtCore/QByteArray>
#include <QtCore/QObject>
#include <QtCore/QPointer>
#include <QtCore/QString>
#include <QtCore/QStringList>
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
class QTreeWidgetItem;
class QBrush;
class QColor;

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
	char **argv;                   /* the array Qt holds and rearranges as it strips its own options */
	char **strings;                /* every argv string, freed from here: Qt may drop some from argv */
	int string_count;
	zend_object std;
} phpqt_object;

static inline phpqt_object *phpqt_object_from(zend_object *obj)
{
	return (phpqt_object *) ((char *) obj - XtOffsetOf(phpqt_object, std));
}

/*
 * Qt values (QFont, QPixmap) and the non-QObject QTableWidgetItem and QTreeWidgetItem: a heap
 * object the PHP object owns, unless a table, tree or parent item took the item; destroy() knows its type.
 */
typedef struct {
	void *ptr;                     /* NULL before construction and once Qt deleted the item */
	bool constructed;
	bool owned;
	void (*destroy)(void *ptr);
	void (*forget)(void *ptr);     /* owner-held kinds: stop the native writing back to this wrapper; may be NULL */
	QPointer<QObject> *owner;      /* borrowed kinds: the object that holds ptr; NULL otherwise */
	bool (*alive)(void *ptr, QObject *owner); /* borrowed kinds: whether the owner still holds ptr */
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
extern zend_class_entry *phpqt_ce_Qt_ApplicationAttribute;
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
extern zend_class_entry *phpqt_ce_Qt_TextInteractionFlag;
extern zend_class_entry *phpqt_ce_QDesktopServices;
extern zend_class_entry *phpqt_ce_QMessageBox_ButtonRole;
extern zend_class_entry *phpqt_ce_QMessageBox_Icon;
extern zend_class_entry *phpqt_ce_QDir_Filter;
extern zend_class_entry *phpqt_ce_QMimeData;
extern zend_class_entry *phpqt_ce_QFileDialog;
extern zend_class_entry *phpqt_ce_QFileDialog_FileMode;
extern zend_class_entry *phpqt_ce_QFileDialog_AcceptMode;
extern zend_class_entry *phpqt_ce_QFileDialog_Option;
extern zend_class_entry *phpqt_ce_QClipboard;
extern zend_class_entry *phpqt_ce_QClipboard_Mode;
extern zend_class_entry *phpqt_ce_QKeySequence_StandardKey;
extern zend_class_entry *phpqt_ce_QInputMethodEvent;
extern zend_class_entry *phpqt_ce_QInputMethodEvent_AttributeType;
extern zend_class_entry *phpqt_ce_QInputMethodEvent_Attribute;
extern zend_class_entry *phpqt_ce_QSizePolicy_Policy;
extern zend_class_entry *phpqt_ce_QLayout;
extern zend_class_entry *phpqt_ce_QStyle;
extern zend_class_entry *phpqt_ce_QStyle_SubElement;
extern zend_class_entry *phpqt_ce_QStyleOption;
extern zend_class_entry *phpqt_ce_QStyleOptionButton;
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
extern zend_class_entry *phpqt_ce_QColor;
extern zend_class_entry *phpqt_ce_QBrush;
extern zend_class_entry *phpqt_ce_QTextFormat;
extern zend_class_entry *phpqt_ce_QTextCharFormat;
extern zend_class_entry *phpqt_ce_QTextCursor;
extern zend_class_entry *phpqt_ce_QTextCursor_MoveMode;
extern zend_class_entry *phpqt_ce_QTextCursor_MoveOperation;
extern zend_class_entry *phpqt_ce_QTextBlock;
extern zend_class_entry *phpqt_ce_QTextEdit_ExtraSelection;
extern zend_class_entry *phpqt_ce_QTextDocument;
extern zend_class_entry *phpqt_ce_QScrollBar;
extern zend_class_entry *phpqt_ce_QPlainTextEdit_LineWrapMode;
extern zend_class_entry *phpqt_ce_QFontDatabase;
extern zend_class_entry *phpqt_ce_QFontDatabase_SystemFont;
extern zend_class_entry *phpqt_ce_QPixmap;
extern zend_class_entry *phpqt_ce_QImage;
extern zend_class_entry *phpqt_ce_QImage_Format;
extern zend_class_entry *phpqt_ce_QTableWidgetItem;
extern zend_class_entry *phpqt_ce_QTreeWidgetItem;
extern zend_class_entry *phpqt_ce_QTreeWidgetItem_ChildIndicatorPolicy;
extern zend_class_entry *phpqt_ce_QFrame_Shape;
extern zend_class_entry *phpqt_ce_QFrame_Shadow;
extern zend_class_entry *phpqt_ce_QAbstractItemView_SelectionBehavior;
extern zend_class_entry *phpqt_ce_QAbstractItemView_SelectionMode;
extern zend_class_entry *phpqt_ce_QAbstractItemView_ScrollHint;
extern zend_class_entry *phpqt_ce_QDateEdit;
extern zend_class_entry *phpqt_ce_QProgressBar;
extern zend_class_entry *phpqt_ce_QFrame;
extern zend_class_entry *phpqt_ce_QScrollArea;
extern zend_class_entry *phpqt_ce_QSplitter;
extern zend_class_entry *phpqt_ce_QSplitterHandle;
extern zend_class_entry *phpqt_ce_QTabWidget;
extern zend_class_entry *phpqt_ce_QAbstractItemView;
extern zend_class_entry *phpqt_ce_QTableWidget;
extern zend_class_entry *phpqt_ce_QTreeWidget;
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
void phpqt_register_QText();
void phpqt_register_QMultimedia();
void phpqt_register_QInputEvents();

class QEvent;

/* Qt's events in filter calls: borrowed for the call, then released (reading one afterwards throws). */
void phpqt_box_event(zval *rv, QEvent *event);
void phpqt_event_release(zval *boxed);
extern zend_class_entry *phpqt_ce_QEvent;
extern zend_class_entry *phpqt_ce_QInputEvent;
extern zend_class_entry *phpqt_ce_QMouseEvent;
extern zend_class_entry *phpqt_ce_QKeyEvent;
extern zend_class_entry *phpqt_ce_QWheelEvent;
extern zend_class_entry *phpqt_ce_QContextMenuEvent;
extern zend_class_entry *phpqt_ce_QStyleHints;
extern zend_class_entry *phpqt_ce_QContextMenuEvent_Reason;
extern zend_class_entry *phpqt_ce_QInputDevice_DeviceType;

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
void phpqt_value_borrow(zend_object *wrapper, void *ptr, QObject *owner, bool (*alive)(void *ptr, QObject *owner));
void *phpqt_value_this(zend_object *wrapper);
void *phpqt_value_arg(zend_object *wrapper, uint32_t arg_num);
void phpqt_return_font(zval *rv, const QFont &font);
void phpqt_return_pixmap(zval *rv, const QPixmap &pixmap);
void phpqt_return_table_item(zval *rv, QTableWidgetItem *item);
void phpqt_return_tree_item(zval *rv, QTreeWidgetItem *item);
void phpqt_return_color(zval *rv, const QColor &color);
void phpqt_return_brush(zval *rv, const QBrush &brush);
void phpqt_value_taken(zend_object *wrapper);
bool phpqt_value_fresh(zend_object *wrapper);
QTableWidgetItem *phpqt_table_item_prototype();

/* Qt value classes, copies both ways (QValues.cpp). */
class QDate;
class QKeySequence;
class QPoint;
class QPointF;
class QRect;
class QSize;
void phpqt_return_qpoint(zval *rv, const QPoint &point);
void phpqt_return_qpointf(zval *rv, const QPointF &point);
void phpqt_return_qsize(zval *rv, const QSize &size);
void phpqt_return_qrect(zval *rv, const QRect &rect);
void phpqt_return_qdate(zval *rv, const QDate &date);
void phpqt_return_qkeysequence(zval *rv, const QKeySequence &sequence);
class QUrl;
void phpqt_return_url(zval *rv, const QUrl &url);
extern zend_class_entry *phpqt_ce_QThread;
extern zend_class_entry *phpqt_ce_QCalendarWidget;
extern zend_class_entry *phpqt_ce_QInputDevice;
extern zend_class_entry *phpqt_ce_QPointingDevice;
extern zend_class_entry *phpqt_ce_QLayoutItem;
extern zend_class_entry *phpqt_ce_QPoint;
extern zend_class_entry *phpqt_ce_QPointF;
extern zend_class_entry *phpqt_ce_QSize;
extern zend_class_entry *phpqt_ce_QRect;
extern zend_class_entry *phpqt_ce_QDate;
extern zend_class_entry *phpqt_ce_QKeySequence;
extern zend_class_entry *phpqt_ce_QKeySequence_SequenceFormat;
extern zend_class_entry *phpqt_ce_Qt_DateFormat;
extern zend_class_entry *phpqt_ce_Qt_WindowType;
extern zend_class_entry *phpqt_ce_Qt_WindowModality;
extern zend_class_entry *phpqt_ce_Qt_FocusPolicy;
extern zend_class_entry *phpqt_ce_Qt_ToolButtonStyle;
extern zend_class_entry *phpqt_ce_Qt_CaseSensitivity;
extern zend_class_entry *phpqt_ce_QComboBox_InsertPolicy;
extern zend_class_entry *phpqt_ce_QCompleter_CompletionMode;
extern zend_class_entry *phpqt_ce_QToolButton_ToolButtonPopupMode;
extern zend_class_entry *phpqt_ce_QToolButton;
extern zend_class_entry *phpqt_ce_QAbstractItemModel;
extern zend_class_entry *phpqt_ce_QStringListModel;
extern zend_class_entry *phpqt_ce_QCompleter;
extern zend_class_entry *phpqt_ce_QIcon;
extern zend_class_entry *phpqt_ce_QActionGroup;
extern zend_class_entry *phpqt_ce_Qt_ImageConversionFlag;
extern zend_class_entry *phpqt_ce_Qt_BrushStyle;
extern zend_class_entry *phpqt_ce_Qt_ConnectionType;
extern zend_class_entry *phpqt_ce_Qt_ItemDataRole;
extern zend_class_entry *phpqt_ce_Qt_Key;
extern zend_class_entry *phpqt_ce_Qt_ScrollPhase;
extern zend_class_entry *phpqt_ce_Qt_MouseEventSource;
void phpqt_register_QValues();
void phpqt_register_QStyle();

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
bool phpqt_long_fits(zend_long value, zend_long min, zend_long max, uint32_t arg_num);
bool phpqt_string_list(HashTable *ht, QStringList *out, uint32_t arg_num);
bool phpqt_int_list(HashTable *ht, QList<int> *out, uint32_t arg_num);
class QVariant;
bool phpqt_zval_to_variant(zval *arg, QMetaType type, QVariant *out, uint32_t arg_num);
/* The value a QVariant holds, as a signal argument of its type reaches PHP; an empty QVariant is null. */
void phpqt_variant_to_zval(zval *rv, const QVariant &value);

/* Threads. */
bool phpqt_on_main_thread();

/*
 * The probe switch. A kept refusal site reads `if (!PHPQT_PROBE_OFF("<id>") && (<check>))`.
 * A build configured with --enable-qt-probes lets env PHPQT_PROBE_OFF=<id> turn that one
 * site off, so tests/Probes can show the crash the site prevents; any other build compiles
 * the switch out.
 */
#ifdef PHPQT_PROBES
bool phpqt_probe_off(const char *id);
# define PHPQT_PROBE_OFF(id) phpqt_probe_off(id)
#else
# define PHPQT_PROBE_OFF(id) 0
#endif

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

	/* Called with no signal arguments (the functor overload of QTimer::singleShot), or with the bound one. */
	void fire();
	/* The one argument fire() passes: QImage's cleanupInfo. */
	void bind(zval *argument);
	void detach();

	PhpSlot *prev = nullptr;
	PhpSlot *next = nullptr;

protected:
	/* Calls the PHP callable; false when it did not run (detached, or an exception already pending). */
	bool call(uint32_t argc, zval *argv, zval *retval);

private:
	void invoke(void **argv);

	zval callable;
	zval bound;
	QMetaMethod signal;
};

/*
 * Site main-thread-macos: on macOS an application, a widget or a QWindow made off the process
 * main thread has Qt's cocoa platform call AppKit there, which raises an uncaught NSException
 * (abort). Those constructors refuse it; elsewhere Qt answers for itself.
 */
#ifdef __APPLE__
#define PHPQT_REQUIRE_MAIN_THREAD() do { \
	if (!PHPQT_PROBE_OFF("main-thread-macos") && (!phpqt_on_main_thread())) { \
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "%s::%s() must be called on the main thread", ZSTR_VAL(EX(func)->common.scope->name), ZSTR_VAL(EX(func)->common.function_name)); /* binding:main-thread-macos */ \
		RETURN_THROWS(); \
	} \
} while (0)
#else
#define PHPQT_REQUIRE_MAIN_THREAD() do { } while (0)
#endif

/* The wrapped QObject, or a QtException when Qt has deleted it. */
#define PHPQT_THIS(type, var) \
	type *var = static_cast<type *>(phpqt_this(Z_OBJ_P(ZEND_THIS))); \
	if (var == nullptr) { \
		RETURN_THROWS(); \
	}

/* The native constructor takes Qt::WindowFlags after the parent (QWidget, QFrame, QDialog, …), so the stub does too. */
template <typename Widget, typename... Leading>
inline constexpr bool phpqt_takes_window_flags = std::is_constructible_v<Widget, Leading..., QWidget *, Qt::WindowFlags>;

/*
 * The widget constructors share one shape: an optional parent widget, and the window flags
 * where the native constructor takes them; a new object PHP owns until the parent (or a later
 * setParent) takes it. Widgets are made on the main thread, after a QApplication.
 */
template <typename Widget>
static inline void phpqt_construct_widget(INTERNAL_FUNCTION_PARAMETERS)
{
	zend_object *parent = nullptr;
	zend_object *flags_case = nullptr;
	zend_long flags_long = 0;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, phpqt_takes_window_flags<Widget> ? 2 : 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
		if constexpr (phpqt_takes_window_flags<Widget>) {
			Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, phpqt_ce_Qt_WindowType, flags_long)
		}
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts with qFatal ("Must construct a QApplication before a QWidget"). */
	if (!PHPQT_PROBE_OFF("qapp-widget") && (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "%s needs a QApplication first", ZSTR_VAL(EX(func)->common.scope->name)); /* binding:qapp-widget */
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	if constexpr (phpqt_takes_window_flags<Widget>) {
		phpqt_adopt(Z_OBJ_P(ZEND_THIS), new Widget(qparent, Qt::WindowFlags(static_cast<int>(phpqt_enum_value(flags_case, flags_long)))));
	} else {
		phpqt_adopt(Z_OBJ_P(ZEND_THIS), new Widget(qparent));
	}
}

/* Same shape with a leading text argument: QLabel, QPushButton, QCheckBox, QLineEdit. */
template <typename Widget>
static inline void phpqt_construct_text_widget(INTERNAL_FUNCTION_PARAMETERS)
{
	zend_string *text = nullptr;
	zend_object *parent = nullptr;
	zend_object *flags_case = nullptr;
	zend_long flags_long = 0;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, (phpqt_takes_window_flags<Widget, QString> ? 3 : 2))
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(text)
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
		if constexpr (phpqt_takes_window_flags<Widget, QString>) {
			Z_PARAM_OBJ_OF_CLASS_OR_LONG(flags_case, phpqt_ce_Qt_WindowType, flags_long)
		}
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	/* Qt aborts with qFatal ("Must construct a QApplication before a QWidget"). */
	if (!PHPQT_PROBE_OFF("qapp-text-widget") && (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr)) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "%s needs a QApplication first", ZSTR_VAL(EX(func)->common.scope->name)); /* binding:qapp-text-widget */
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	QString qtext = text != nullptr ? phpqt_qstring(text) : QString();
	if constexpr (phpqt_takes_window_flags<Widget, QString>) {
		phpqt_adopt(Z_OBJ_P(ZEND_THIS), new Widget(qtext, qparent, Qt::WindowFlags(static_cast<int>(phpqt_enum_value(flags_case, flags_long)))));
	} else {
		phpqt_adopt(Z_OBJ_P(ZEND_THIS), new Widget(qtext, qparent));
	}
}

#endif
