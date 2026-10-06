#include "runtime.h"
#include "../stubs/QOpenGLWidget_arginfo.h"

#include <QtGui/QSurfaceFormat>
#include <QtOpenGLWidgets/QOpenGLWidget>

static void phpqt_destroy_surface_format(void *ptr) { delete static_cast<QSurfaceFormat *>(ptr); }

static void phpqt_return_surface_format(zval *rv, const QSurfaceFormat &format)
{
	object_init_ex(rv, phpqt_ce_QSurfaceFormat);
	phpqt_value_hold(Z_OBJ_P(rv), new QSurfaceFormat(format), true, phpqt_destroy_surface_format);
}

/* The callable a QOpenGLPainter paints with: a PhpSlot that runs it with the widget. */
class PhpPaintSlot : public PhpSlot {
public:
	PhpPaintSlot(zval *callable, QObject *parent) : PhpSlot(callable, QMetaMethod())
	{
		setParent(parent);
	}

	void paint(QObject *widget)
	{
		zval argv[1];
		zval retval;

		phpqt_box(&argv[0], widget);
		call(1, argv, &retval);
		zval_ptr_dtor(&retval);
		zval_ptr_dtor(&argv[0]);
	}
};

/*
 * paintGL() runs with the widget's context current and its framebuffer object
 * bound: that is where PHP draws. The slot is the widget's child, so it goes
 * with the widget; at request end every slot is detached first.
 */
class PhpOpenGLPainter : public QOpenGLWidget {
public:
	PhpOpenGLPainter(zval *callable, QWidget *parent) : QOpenGLWidget(parent), slot(new PhpPaintSlot(callable, this)) {}

protected:
	void initializeGL() override {}

	void resizeGL(int, int) override {}

	void paintGL() override
	{
		if (!slot.isNull()) {
			slot->paint(this);
		}
	}

private:
	QPointer<PhpPaintSlot> slot;
};

void phpqt_register_QOpenGLWidget()
{
	phpqt_ce_QSurfaceFormat_OpenGLContextProfile = register_class_QSurfaceFormat_OpenGLContextProfile();
	phpqt_ce_QSurfaceFormat_RenderableType = register_class_QSurfaceFormat_RenderableType();
	phpqt_ce_QSurfaceFormat = register_class_QSurfaceFormat();
	phpqt_value_setup(phpqt_ce_QSurfaceFormat);

	phpqt_ce_QOpenGLWidget = register_class_QOpenGLWidget(phpqt_ce_QWidget);
	phpqt_object_setup(phpqt_ce_QOpenGLWidget);
	phpqt_map_class("QOpenGLWidget", phpqt_ce_QOpenGLWidget);

	phpqt_ce_QOpenGLPainter = register_class_QOpenGLPainter(phpqt_ce_QOpenGLWidget);
	phpqt_object_setup(phpqt_ce_QOpenGLPainter);
}

ZEND_METHOD(QOpenGLWidget, __construct)
{
	phpqt_construct_widget<QOpenGLWidget>(INTERNAL_FUNCTION_PARAM_PASSTHRU);
}

ZEND_METHOD(QOpenGLWidget, makeCurrent)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_REQUIRE_MAIN_THREAD();
	PHPQT_THIS(QOpenGLWidget, widget);

	widget->makeCurrent();
}

ZEND_METHOD(QOpenGLWidget, doneCurrent)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_REQUIRE_MAIN_THREAD();
	PHPQT_THIS(QOpenGLWidget, widget);

	widget->doneCurrent();
}

ZEND_METHOD(QOpenGLWidget, isValid)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QOpenGLWidget, widget);

	RETURN_BOOL(widget->isValid());
}

ZEND_METHOD(QOpenGLWidget, defaultFramebufferObject)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QOpenGLWidget, widget);

	RETURN_LONG(static_cast<zend_long>(widget->defaultFramebufferObject()));
}

ZEND_METHOD(QOpenGLWidget, update)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_REQUIRE_MAIN_THREAD();
	PHPQT_THIS(QOpenGLWidget, widget);

	widget->update();
}

ZEND_METHOD(QOpenGLPainter, __construct)
{
	zval *paint;
	zend_object *parent = nullptr;
	bool failed;

	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_ZVAL(paint)
		Z_PARAM_OPTIONAL
		Z_PARAM_OBJ_OF_CLASS_OR_NULL(parent, phpqt_ce_QWidget)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();

	if (!phpqt_require_callable(paint, 1)) {
		RETURN_THROWS();
	}
	if (qobject_cast<QApplication *>(QCoreApplication::instance()) == nullptr) {
		zend_throw_exception(phpqt_ce_QtException, "QOpenGLPainter needs a QApplication first", 0);
		RETURN_THROWS();
	}
	if (phpqt_object_from(Z_OBJ_P(ZEND_THIS))->guard != nullptr) {
		zend_throw_exception(phpqt_ce_QtException, "QOpenGLPainter::__construct() called twice", 0);
		RETURN_THROWS();
	}

	QWidget *qparent = static_cast<QWidget *>(phpqt_arg(parent, 2, &failed));
	if (failed) {
		RETURN_THROWS();
	}

	phpqt_adopt(Z_OBJ_P(ZEND_THIS), new PhpOpenGLPainter(paint, qparent));
}

ZEND_METHOD(QOpenGLWidget, setFormat)
{
	zend_object *format_obj;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(format_obj, phpqt_ce_QSurfaceFormat)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_REQUIRE_MAIN_THREAD();
	PHPQT_THIS(QOpenGLWidget, widget);

	QSurfaceFormat *format = static_cast<QSurfaceFormat *>(phpqt_value_arg(format_obj, 1));
	if (format == nullptr) {
		RETURN_THROWS();
	}
	widget->setFormat(*format);
}

ZEND_METHOD(QOpenGLWidget, format)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_THIS(QOpenGLWidget, widget);

	phpqt_return_surface_format(return_value, widget->format());
}

/* ---- QSurfaceFormat ------------------------------------------------------ */

ZEND_METHOD(QSurfaceFormat, __construct)
{
	ZEND_PARSE_PARAMETERS_NONE();

	if (phpqt_value_from(Z_OBJ_P(ZEND_THIS))->constructed) {
		zend_throw_exception(phpqt_ce_QtException, "QSurfaceFormat::__construct() called twice", 0);
		RETURN_THROWS();
	}
	phpqt_value_hold(Z_OBJ_P(ZEND_THIS), new QSurfaceFormat(), true, phpqt_destroy_surface_format);
}

ZEND_METHOD(QSurfaceFormat, defaultFormat)
{
	ZEND_PARSE_PARAMETERS_NONE();

	phpqt_return_surface_format(return_value, QSurfaceFormat::defaultFormat());
}

ZEND_METHOD(QSurfaceFormat, majorVersion)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QSurfaceFormat, format);

	RETURN_LONG(format->majorVersion());
}

ZEND_METHOD(QSurfaceFormat, minorVersion)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QSurfaceFormat, format);

	RETURN_LONG(format->minorVersion());
}

ZEND_METHOD(QSurfaceFormat, setVersion)
{
	zend_long major, minor;

	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_LONG(major)
		Z_PARAM_LONG(minor)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QSurfaceFormat, format);

	format->setVersion(static_cast<int>(major), static_cast<int>(minor));
}

ZEND_METHOD(QSurfaceFormat, profile)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QSurfaceFormat, format);

	phpqt_return_enum(return_value, phpqt_ce_QSurfaceFormat_OpenGLContextProfile, static_cast<zend_long>(format->profile()));
}

ZEND_METHOD(QSurfaceFormat, setProfile)
{
	zend_object *profile;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(profile, phpqt_ce_QSurfaceFormat_OpenGLContextProfile)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QSurfaceFormat, format);

	format->setProfile(static_cast<QSurfaceFormat::OpenGLContextProfile>(phpqt_enum_value(profile, 0)));
}

ZEND_METHOD(QSurfaceFormat, renderableType)
{
	ZEND_PARSE_PARAMETERS_NONE();
	PHPQT_VALUE_THIS(QSurfaceFormat, format);

	phpqt_return_enum(return_value, phpqt_ce_QSurfaceFormat_RenderableType, static_cast<zend_long>(format->renderableType()));
}

ZEND_METHOD(QSurfaceFormat, setRenderableType)
{
	zend_object *type;

	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_OBJ_OF_CLASS(type, phpqt_ce_QSurfaceFormat_RenderableType)
	ZEND_PARSE_PARAMETERS_END();
	PHPQT_VALUE_THIS(QSurfaceFormat, format);

	format->setRenderableType(static_cast<QSurfaceFormat::RenderableType>(phpqt_enum_value(type, 0)));
}
