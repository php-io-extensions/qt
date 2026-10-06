#include "runtime.h"
#include "../stubs/QWindow_arginfo.h"

#include <QtGui/QGuiApplication>
#include <QtGui/QSurface>
#include <QtGui/QWindow>

/* RasterGLSurface (2) is deprecated in 6.11 and left out of the check: naming it is a warning. */
static_assert(QSurface::RasterSurface == 0 && QSurface::OpenGLSurface == 1
	&& QSurface::OpenVGSurface == 3 && QSurface::VulkanSurface == 4 && QSurface::MetalSurface == 5 && QSurface::Direct3DSurface == 6,
	"QSurface::SurfaceType values differ from the stub's QSurface\\SurfaceType enum");

void phpqt_register_QWindow()
{
	phpqt_ce_QSurface_SurfaceType = register_class_QSurface_SurfaceType();
	phpqt_ce_QWindow = register_class_QWindow(phpqt_ce_QObject);
	phpqt_object_setup(phpqt_ce_QWindow);
	phpqt_map_class("QWindow", phpqt_ce_QWindow);
}

ZEND_METHOD(QWindow, __construct)
{
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(0, 1)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWindow)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	if (qobject_cast<QGuiApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception_ex(phpqt_ce_QtException, 0, "QWindow needs a QGuiApplication first");
		RETURN_THROWS();
	}
	QWindow *qparent = static_cast<QWindow *>(phpqt_arg(parent, 1, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new QWindow(qparent));
}

ZEND_METHOD(QWindow, setSurfaceType)
{
	zend_object *type;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(type, phpqt_ce_QSurface_SurfaceType)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_THIS(QWindow, window);

	window->setSurfaceType(static_cast<QSurface::SurfaceType>(phpqt_enum_value(type, QSurface::RasterSurface)));
}

ZEND_METHOD(QWindow, surfaceType)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWindow, window);

	phpqt_return_enum(return_value, phpqt_ce_QSurface_SurfaceType, (zend_long) window->surfaceType());
}

ZEND_METHOD(QWindow, winId)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWindow, window);

	RETURN_LONG((zend_long) (uintptr_t) window->winId());
}

#define PHPQT_WINDOW_VOID(name, call) \
ZEND_METHOD(QWindow, name) \
{ \
	ZEND_PARSE_PARAMETERS_NONE(); \
	PHPQT_THIS(QWindow, window); \
	window->call(); \
}

PHPQT_WINDOW_VOID(create, create)
PHPQT_WINDOW_VOID(show, show)
PHPQT_WINDOW_VOID(hide, hide)

ZEND_METHOD(QWindow, isExposed)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWindow, window);

	RETURN_BOOL(window->isExposed());
}

ZEND_METHOD(QWindow, width)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWindow, window);

	RETURN_LONG(window->width());
}

ZEND_METHOD(QWindow, height)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWindow, window);

	RETURN_LONG(window->height());
}

ZEND_METHOD(QWindow, devicePixelRatio)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QWindow, window);

	RETURN_DOUBLE(window->devicePixelRatio());
}
