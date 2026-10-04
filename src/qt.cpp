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

static_assert(Qt::Horizontal == 1 && Qt::Vertical == 2, "Qt::Orientation values differ from the stub's Qt\\Orientation enum");
static_assert(Qt::IgnoreAspectRatio == 0 && Qt::KeepAspectRatio == 1 && Qt::KeepAspectRatioByExpanding == 2,
	"Qt::AspectRatioMode values differ from the stub's Qt\\AspectRatioMode enum");
static_assert(Qt::ScrollBarAsNeeded == 0 && Qt::ScrollBarAlwaysOff == 1 && Qt::ScrollBarAlwaysOn == 2,
	"Qt::ScrollBarPolicy values differ from the stub's Qt\\ScrollBarPolicy enum");
static_assert(Qt::PlainText == 0 && Qt::RichText == 1 && Qt::AutoText == 2 && Qt::MarkdownText == 3,
	"Qt::TextFormat values differ from the stub's Qt\\TextFormat enum");
static_assert(Qt::FastTransformation == 0 && Qt::SmoothTransformation == 1,
	"Qt::TransformationMode values differ from the stub's Qt\\TransformationMode enum");

/* Every generated enum case is proved against the Qt this build compiles with. */
#include "checks/QEvent_Type.inc"
#include "checks/Qt_WidgetAttribute.inc"
#include "checks/Qt_AlignmentFlag.inc"

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
zend_class_entry *phpqt_ce_QSizePolicy_Policy;
zend_class_entry *phpqt_ce_QLayout;
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
zend_class_entry *phpqt_ce_QPixmap;
zend_class_entry *phpqt_ce_QImage;
zend_class_entry *phpqt_ce_QImage_Format;
zend_class_entry *phpqt_ce_QTableWidgetItem;
zend_class_entry *phpqt_ce_QFrame_Shape;
zend_class_entry *phpqt_ce_QFrame_Shadow;
zend_class_entry *phpqt_ce_QAbstractItemView_SelectionBehavior;
zend_class_entry *phpqt_ce_QAbstractItemView_SelectionMode;
zend_class_entry *phpqt_ce_QDateEdit;
zend_class_entry *phpqt_ce_QProgressBar;
zend_class_entry *phpqt_ce_QFrame;
zend_class_entry *phpqt_ce_QScrollArea;
zend_class_entry *phpqt_ce_QAbstractItemView;
zend_class_entry *phpqt_ce_QTableWidget;
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
	phpqt_ce_QEvent_Type = register_class_QEvent_Type();
	phpqt_ce_Qt_AlignmentFlag = register_class_Qt_AlignmentFlag();
	phpqt_ce_Qt_Orientation = register_class_Qt_Orientation();
	phpqt_ce_Qt_AspectRatioMode = register_class_Qt_AspectRatioMode();
	phpqt_ce_Qt_ScrollBarPolicy = register_class_Qt_ScrollBarPolicy();
	phpqt_ce_Qt_TextFormat = register_class_Qt_TextFormat();
	phpqt_ce_Qt_TransformationMode = register_class_Qt_TransformationMode();
}

static PHP_GINIT_FUNCTION(qt)
{
#if defined(COMPILE_DL_QT) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	zend_hash_init(&qt_globals->boxes, 32, nullptr, nullptr, 1);
	qt_globals->slots_head = nullptr;
	qt_globals->callout_depth = 0;
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
	phpqt_register_QWidget();
	phpqt_register_QMenu();
	phpqt_register_QtGlue();
	phpqt_register_QLayout();
	phpqt_register_QGui();
	phpqt_register_QControls();
	phpqt_register_QMultimedia();

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
