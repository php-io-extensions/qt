PHP_ARG_ENABLE([qt],
  [whether to enable qt support],
  [AS_HELP_STRING([--enable-qt], [Enable Qt 6 bindings])],
  [no])

if test "$PHP_QT" != "no"; then
  PHP_REQUIRE_CXX()
  PKG_CHECK_MODULES([QT], [Qt6Widgets >= 6.5 Qt6Gui >= 6.5 Qt6Core >= 6.5 Qt6Multimedia >= 6.5 Qt6MultimediaWidgets >= 6.5 Qt6OpenGL >= 6.5 Qt6OpenGLWidgets >= 6.5])

  dnl PHP_EVAL_INCLINE/LIBLINE keep only -I/-l/-L; Qt also needs its -D, -F and -framework flags.
  QT_SHARED_LIBADD="$QT_LIBS"
  PHP_SUBST([QT_SHARED_LIBADD])

  PHP_NEW_EXTENSION([qt],
    [src/qt.cpp src/runtime.cpp src/QObject.cpp src/QCoreApplication.cpp src/QTimer.cpp src/QSocketNotifier.cpp src/QAbstractEventDispatcher.cpp src/QWidget.cpp src/QMenu.cpp src/QtGlue.cpp src/QLayout.cpp src/QControls.cpp src/QGui.cpp src/QMultimedia.cpp src/QWindow.cpp src/QVulkan.cpp src/QOpenGLWidget.cpp src/QInputEvents.cpp],
    [$ext_shared],, [$QT_CFLAGS -std=c++17 -fPIC -DQT_NO_KEYWORDS -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1], [cxx])
  PHP_ADD_BUILD_DIR([$ext_builddir/src])
fi
