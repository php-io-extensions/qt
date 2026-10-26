/*
 * qt: 1:1 bindings of Qt 6 as PHP classes named after their C++ counterparts.
 * Nested C++ scopes become PHP namespaces: Qt::TimerType is Qt\TimerType,
 * QMetaObject::Connection is QMetaObject\Connection.
 */

#include "runtime.h"
#include "ext/standard/info.h"
#include "ext/spl/spl_exceptions.h"
#include "../stubs/qt_arginfo.h"
#include "../stubs/QEventLoop_arginfo.h"
#include "../stubs/qnamespace_arginfo.h"
#include "../stubs/QEvent_arginfo.h"

#include <QtCore/QtGlobal>
#include <QtCore/QEvent>
#include <QtCore/qnamespace.h>
#include <QtGui/QClipboard>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QMessageBox>
#include <QtWidgets/QStyle>

static_assert(Qt::Horizontal == 1 && Qt::Vertical == 2, "Qt::Orientation values differ from the stub's Qt\\Orientation enum");
static_assert(Qt::IgnoreAspectRatio == 0 && Qt::KeepAspectRatio == 1 && Qt::KeepAspectRatioByExpanding == 2,
	"Qt::AspectRatioMode values differ from the stub's Qt\\AspectRatioMode enum");
static_assert(Qt::ScrollBarAsNeeded == 0 && Qt::ScrollBarAlwaysOff == 1 && Qt::ScrollBarAlwaysOn == 2,
	"Qt::ScrollBarPolicy values differ from the stub's Qt\\ScrollBarPolicy enum");
static_assert(Qt::PlainText == 0 && Qt::RichText == 1 && Qt::AutoText == 2 && Qt::MarkdownText == 3,
	"Qt::TextFormat values differ from the stub's Qt\\TextFormat enum");
static_assert(Qt::TextDate == 0 && Qt::ISODate == 1 && Qt::RFC2822Date == 8 && Qt::ISODateWithMs == 9,
	"Qt::DateFormat values differ from the stub's Qt\\DateFormat enum");
static_assert(Qt::FastTransformation == 0 && Qt::SmoothTransformation == 1,
	"Qt::TransformationMode values differ from the stub's Qt\\TransformationMode enum");

/* Every generated enum case is proved against the Qt this build compiles with. */
#include "checks/QEvent_Type.inc"
#include "checks/Qt_WidgetAttribute.inc"
#include "checks/Qt_AlignmentFlag.inc"
#include "checks/QStyle_SubElement.inc"
#include "checks/Qt_TextInteractionFlag.inc"
#include "checks/Qt_WindowType.inc"
#include "checks/Qt_WindowModality.inc"
#include "checks/Qt_FocusPolicy.inc"
#include "checks/Qt_ToolButtonStyle.inc"
#include "checks/Qt_CaseSensitivity.inc"
#include "checks/QMessageBox_ButtonRole.inc"
#include "checks/QFileDialog_FileMode.inc"
#include "checks/QFileDialog_AcceptMode.inc"
#include "checks/QFileDialog_Option.inc"
#include "checks/QClipboard_Mode.inc"
#include "checks/Qt_ImageConversionFlag.inc"
#include "checks/Qt_BrushStyle.inc"
#include "checks/Qt_ConnectionType.inc"
#include "checks/Qt_ApplicationAttribute.inc"
#include "checks/Qt_ItemDataRole.inc"
#include "checks/Qt_Key.inc"
#include "checks/Qt_ScrollPhase.inc"
#include "checks/Qt_MouseEventSource.inc"

ZEND_DECLARE_MODULE_GLOBALS(qt)

zend_class_entry *phpqt_ce_QtException;
zend_class_entry *phpqt_ce_QObject;
zend_class_entry *phpqt_ce_QMetaObject_Connection;
zend_class_entry *phpqt_ce_QMetaObject;
zend_class_entry *phpqt_ce_QEventLoop_ProcessEventsFlag;
zend_class_entry *phpqt_ce_Qt_TimerType;
zend_class_entry *phpqt_ce_QCoreApplication;
zend_class_entry *phpqt_ce_QGuiApplication;
zend_class_entry *phpqt_ce_QApplication;
zend_class_entry *phpqt_ce_QTimer;
zend_class_entry *phpqt_ce_QSocketNotifier;
zend_class_entry *phpqt_ce_QSocketNotifier_Type;
zend_class_entry *phpqt_ce_QAbstractEventDispatcher;
zend_class_entry *phpqt_ce_QEvent_Type;
zend_class_entry *phpqt_ce_Qt_WidgetAttribute;
zend_class_entry *phpqt_ce_Qt_ApplicationAttribute;
zend_class_entry *phpqt_ce_QWindow;
zend_class_entry *phpqt_ce_QOpenGLWidget;
zend_class_entry *phpqt_ce_QVulkanInstance;
zend_class_entry *phpqt_ce_QSurfaceFormat;
zend_class_entry *phpqt_ce_QSurfaceFormat_OpenGLContextProfile;
zend_class_entry *phpqt_ce_QSurfaceFormat_RenderableType;
zend_class_entry *phpqt_ce_QOpenGLPainter;
zend_class_entry *phpqt_ce_QSurface_SurfaceType;
zend_class_entry *phpqt_ce_QWidget;
zend_class_entry *phpqt_ce_QMainWindow;
zend_class_entry *phpqt_ce_QDialog;
zend_class_entry *phpqt_ce_QMessageBox;
zend_class_entry *phpqt_ce_QMenuBar;
zend_class_entry *phpqt_ce_QMenu;
zend_class_entry *phpqt_ce_QAction;
zend_class_entry *phpqt_ce_QAction_MenuRole;
zend_class_entry *phpqt_ce_QEventFilter;
zend_class_entry *phpqt_ce_Qt_AlignmentFlag;
zend_class_entry *phpqt_ce_Qt_TextInteractionFlag;
zend_class_entry *phpqt_ce_QDesktopServices;
zend_class_entry *phpqt_ce_QMessageBox_ButtonRole;
zend_class_entry *phpqt_ce_QFileDialog;
zend_class_entry *phpqt_ce_QFileDialog_FileMode;
zend_class_entry *phpqt_ce_QFileDialog_AcceptMode;
zend_class_entry *phpqt_ce_QFileDialog_Option;
zend_class_entry *phpqt_ce_QClipboard;
zend_class_entry *phpqt_ce_QClipboard_Mode;
zend_class_entry *phpqt_ce_QSizePolicy_Policy;
zend_class_entry *phpqt_ce_QLayout;
zend_class_entry *phpqt_ce_QStyle;
zend_class_entry *phpqt_ce_QStyle_SubElement;
zend_class_entry *phpqt_ce_QStyleOption;
zend_class_entry *phpqt_ce_QStyleOptionButton;
zend_class_entry *phpqt_ce_QBoxLayout;
zend_class_entry *phpqt_ce_QVBoxLayout;
zend_class_entry *phpqt_ce_QHBoxLayout;
zend_class_entry *phpqt_ce_QGridLayout;
zend_class_entry *phpqt_ce_Qt_Orientation;
zend_class_entry *phpqt_ce_QLineEdit_EchoMode;
zend_class_entry *phpqt_ce_QLabel;
zend_class_entry *phpqt_ce_QAbstractButton;
zend_class_entry *phpqt_ce_QPushButton;
zend_class_entry *phpqt_ce_QCheckBox;
zend_class_entry *phpqt_ce_QAbstractSlider;
zend_class_entry *phpqt_ce_QSlider;
zend_class_entry *phpqt_ce_QComboBox;
zend_class_entry *phpqt_ce_QLineEdit;
zend_class_entry *phpqt_ce_QPlainTextEdit;
zend_class_entry *phpqt_ce_Qt_AspectRatioMode;
zend_class_entry *phpqt_ce_Qt_ScrollBarPolicy;
zend_class_entry *phpqt_ce_QFont_Weight;
zend_class_entry *phpqt_ce_QFont;
zend_class_entry *phpqt_ce_QColor;
zend_class_entry *phpqt_ce_QBrush;
zend_class_entry *phpqt_ce_QTextFormat;
zend_class_entry *phpqt_ce_QTextCharFormat;
zend_class_entry *phpqt_ce_QTextCursor;
zend_class_entry *phpqt_ce_QTextCursor_MoveMode;
zend_class_entry *phpqt_ce_QTextCursor_MoveOperation;
zend_class_entry *phpqt_ce_QTextBlock;
zend_class_entry *phpqt_ce_QTextEdit_ExtraSelection;
zend_class_entry *phpqt_ce_QTextDocument;
zend_class_entry *phpqt_ce_QScrollBar;
zend_class_entry *phpqt_ce_QPlainTextEdit_LineWrapMode;
zend_class_entry *phpqt_ce_QFontDatabase;
zend_class_entry *phpqt_ce_QFontDatabase_SystemFont;
zend_class_entry *phpqt_ce_QPixmap;
zend_class_entry *phpqt_ce_QImage;
zend_class_entry *phpqt_ce_QImage_Format;
zend_class_entry *phpqt_ce_QTableWidgetItem;
zend_class_entry *phpqt_ce_QTreeWidgetItem;
zend_class_entry *phpqt_ce_QTreeWidgetItem_ChildIndicatorPolicy;
zend_class_entry *phpqt_ce_QFrame_Shape;
zend_class_entry *phpqt_ce_QFrame_Shadow;
zend_class_entry *phpqt_ce_QAbstractItemView_SelectionBehavior;
zend_class_entry *phpqt_ce_QAbstractItemView_SelectionMode;
zend_class_entry *phpqt_ce_QAbstractItemView_ScrollHint;
zend_class_entry *phpqt_ce_QDateEdit;
zend_class_entry *phpqt_ce_QProgressBar;
zend_class_entry *phpqt_ce_QFrame;
zend_class_entry *phpqt_ce_QScrollArea;
zend_class_entry *phpqt_ce_QSplitter;
zend_class_entry *phpqt_ce_QSplitterHandle;
zend_class_entry *phpqt_ce_QTabWidget;
zend_class_entry *phpqt_ce_QAbstractItemView;
zend_class_entry *phpqt_ce_QTableWidget;
zend_class_entry *phpqt_ce_QTreeWidget;
zend_class_entry *phpqt_ce_QMediaPlayer_PlaybackState;
zend_class_entry *phpqt_ce_QMediaPlayer_MediaStatus;
zend_class_entry *phpqt_ce_QMediaPlayer_Error;
zend_class_entry *phpqt_ce_QUrl;
zend_class_entry *phpqt_ce_QAudioOutput;
zend_class_entry *phpqt_ce_QMediaPlayer;
zend_class_entry *phpqt_ce_QVideoWidget;
zend_class_entry *phpqt_ce_QSpacerItem;
zend_class_entry *phpqt_ce_Qt_TextFormat;
zend_class_entry *phpqt_ce_Qt_TransformationMode;
zend_class_entry *phpqt_ce_Qt_DateFormat;
zend_class_entry *phpqt_ce_Qt_WindowType;
zend_class_entry *phpqt_ce_Qt_WindowModality;
zend_class_entry *phpqt_ce_Qt_FocusPolicy;
zend_class_entry *phpqt_ce_Qt_ToolButtonStyle;
zend_class_entry *phpqt_ce_Qt_CaseSensitivity;
zend_class_entry *phpqt_ce_QComboBox_InsertPolicy;
zend_class_entry *phpqt_ce_QCompleter_CompletionMode;
zend_class_entry *phpqt_ce_QToolButton_ToolButtonPopupMode;
zend_class_entry *phpqt_ce_QToolButton;
zend_class_entry *phpqt_ce_QAbstractItemModel;
zend_class_entry *phpqt_ce_QStringListModel;
zend_class_entry *phpqt_ce_QCompleter;
zend_class_entry *phpqt_ce_QIcon;
zend_class_entry *phpqt_ce_QActionGroup;
zend_class_entry *phpqt_ce_Qt_ImageConversionFlag;
zend_class_entry *phpqt_ce_Qt_BrushStyle;
zend_class_entry *phpqt_ce_Qt_ConnectionType;
zend_class_entry *phpqt_ce_Qt_ItemDataRole;
zend_class_entry *phpqt_ce_Qt_Key;
zend_class_entry *phpqt_ce_Qt_ScrollPhase;
zend_class_entry *phpqt_ce_Qt_MouseEventSource;

ZEND_FUNCTION(qVersion)
{
	ZEND_PARSE_PARAMETERS_NONE();

	RETURN_STRING(qVersion());
}

void phpqt_register_enums()
{
	phpqt_ce_QEventLoop_ProcessEventsFlag = register_class_QEventLoop_ProcessEventsFlag();
	phpqt_ce_Qt_TimerType = register_class_Qt_TimerType();
	phpqt_ce_Qt_WidgetAttribute = register_class_Qt_WidgetAttribute();
	phpqt_ce_Qt_ApplicationAttribute = register_class_Qt_ApplicationAttribute();
	phpqt_ce_QEvent_Type = register_class_QEvent_Type();
	phpqt_ce_Qt_AlignmentFlag = register_class_Qt_AlignmentFlag();
	phpqt_ce_Qt_TextInteractionFlag = register_class_Qt_TextInteractionFlag();
	phpqt_ce_Qt_Orientation = register_class_Qt_Orientation();
	phpqt_ce_Qt_AspectRatioMode = register_class_Qt_AspectRatioMode();
	phpqt_ce_Qt_ScrollBarPolicy = register_class_Qt_ScrollBarPolicy();
	phpqt_ce_Qt_TextFormat = register_class_Qt_TextFormat();
	phpqt_ce_Qt_TransformationMode = register_class_Qt_TransformationMode();
	phpqt_ce_Qt_DateFormat = register_class_Qt_DateFormat();
	phpqt_ce_Qt_WindowType = register_class_Qt_WindowType();
	phpqt_ce_Qt_WindowModality = register_class_Qt_WindowModality();
	phpqt_ce_Qt_FocusPolicy = register_class_Qt_FocusPolicy();
	phpqt_ce_Qt_ToolButtonStyle = register_class_Qt_ToolButtonStyle();
	phpqt_ce_Qt_CaseSensitivity = register_class_Qt_CaseSensitivity();
	phpqt_ce_Qt_ImageConversionFlag = register_class_Qt_ImageConversionFlag();
	phpqt_ce_Qt_BrushStyle = register_class_Qt_BrushStyle();
	phpqt_ce_Qt_ConnectionType = register_class_Qt_ConnectionType();
	phpqt_ce_Qt_ItemDataRole = register_class_Qt_ItemDataRole();
	phpqt_ce_Qt_Key = register_class_Qt_Key();
	phpqt_ce_Qt_ScrollPhase = register_class_Qt_ScrollPhase();
	phpqt_ce_Qt_MouseEventSource = register_class_Qt_MouseEventSource();
}

static PHP_GINIT_FUNCTION(qt)
{
#if defined(COMPILE_DL_QT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	zend_hash_init(&qt_globals->boxes, 32, nullptr, nullptr, 1);
	qt_globals->slots_head = nullptr;
	qt_globals->callout_depth = 0;
	qt_globals->teardown = nullptr;
}

static PHP_GSHUTDOWN_FUNCTION(qt)
{
	zend_hash_destroy(&qt_globals->boxes);
}

PHP_MINIT_FUNCTION(qt)
{
	phpqt_ce_QtException = register_class_QtException(spl_ce_RuntimeException);

	phpqt_register_enums();
	phpqt_register_QObject();
	phpqt_register_QMetaObject();
	phpqt_register_QCoreApplication();
	phpqt_register_QTimer();
	phpqt_register_QSocketNotifier();
	phpqt_register_QAbstractEventDispatcher();
	phpqt_register_QWindow();
	phpqt_register_QVulkan();
	phpqt_register_QWidget();
	phpqt_register_QOpenGLWidget();
	phpqt_register_QMenu();
	phpqt_register_QtGlue();
	phpqt_register_QLayout();
	phpqt_register_QGui();
	phpqt_register_QText();
	phpqt_register_QControls();
	phpqt_register_QMultimedia();
	phpqt_register_QInputEvents();
	phpqt_register_QValues();
	phpqt_register_QStyle();

#ifdef PHPQT_PROBES
	/* A probe build: tests/Probes runs only where env PHPQT_PROBE_OFF can turn a kept refusal off. */
	REGISTER_BOOL_CONSTANT("PHPQT_PROBES", true, CONST_PERSISTENT);
#endif

	return SUCCESS;
}

PHP_RINIT_FUNCTION(qt)
{
#if defined(COMPILE_DL_QT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	return SUCCESS;
}

PHP_RSHUTDOWN_FUNCTION(qt)
{
	phpqt_slots_detach_all();
	return SUCCESS;
}

PHP_MINFO_FUNCTION(qt)
{
	char version[64];

	snprintf(version, sizeof(version), "%s (built %s)", qVersion(), QT_VERSION_STR);

	php_info_print_table_start();
	php_info_print_table_row(2, "qt support", "enabled");
	php_info_print_table_row(2, "Version", PHP_QT_VERSION);
	php_info_print_table_row(2, "Qt", version);
	php_info_print_table_end();
}

zend_module_entry qt_module_entry = {
	STANDARD_MODULE_HEADER,
	"qt",
	ext_functions,
	PHP_MINIT(qt),
	nullptr,
	PHP_RINIT(qt),
	PHP_RSHUTDOWN(qt),
	PHP_MINFO(qt),
	PHP_QT_VERSION,
	PHP_MODULE_GLOBALS(qt),
	PHP_GINIT(qt),
	PHP_GSHUTDOWN(qt),
	nullptr,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_QT
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(qt)
#endif
