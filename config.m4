PHP_ARG_ENABLE([qt],
  [whether to enable qt support],
  [AS_HELP_STRING([--enable-qt], [Enable Qt 6 bindings])],
  [no])

PHP_ARG_ENABLE([qt-probes],
  [whether to build the qt probe switch],
  [AS_HELP_STRING([--enable-qt-probes],
    [Build the PHPQT_PROBE_OFF switch that tests/Probes drives: env PHPQT_PROBE_OFF=<site id> turns that kept refusal off. Never for a release build])],
  [no],
  [no])

if test "$PHP_QT" != "no"; then
  if test "$PHP_QT_PROBES" != "no"; then
    AC_DEFINE([PHPQT_PROBES], [1], [Kept refusal sites can be turned off through env PHPQT_PROBE_OFF])
  fi

  PHP_REQUIRE_CXX()
  PKG_CHECK_MODULES([QT], [Qt6Widgets >= 6.4 Qt6Gui >= 6.4 Qt6Core >= 6.4 Qt6Multimedia >= 6.4 Qt6MultimediaWidgets >= 6.4 Qt6OpenGL >= 6.4 Qt6OpenGLWidgets >= 6.4])

  dnl PHP_EVAL_INCLINE/LIBLINE keep only -I/-l/-L; Qt also needs its -D, -F and -framework flags.
  dnl Shared, QT_LIBS go to the .so whole. Compiled into PHP, they join PHP's own link line:
  dnl -l/-L through PHP_EVAL_LIBLINE, macOS frameworks through PHP_ADD_FRAMEWORK, and their -F
  dnl search path into EXTRA_LDFLAGS_PROGRAM: PHP's program link lines never use PHP_FRAMEWORKPATH.
  if test "$ext_shared" = "yes"; then
    QT_SHARED_LIBADD="$QT_LIBS"
    PHP_SUBST([QT_SHARED_LIBADD])
  else
    PHP_EVAL_LIBLINE([$QT_LIBS])
    qt_framework=no
    for qt_flag in $QT_LIBS; do
      if test "$qt_framework" = "yes"; then
        PHP_ADD_FRAMEWORK([$qt_flag])
        qt_framework=no
      else
        case $qt_flag in
          -framework) qt_framework=yes ;;
          -F*) EXTRA_LDFLAGS_PROGRAM="$EXTRA_LDFLAGS_PROGRAM $qt_flag" ;;
        esac
      fi
    done
  fi

  PHP_NEW_EXTENSION([qt],
    [src/qt.cpp src/runtime.cpp src/QObject.cpp src/QCoreApplication.cpp src/QTimer.cpp src/QSocketNotifier.cpp src/QAbstractEventDispatcher.cpp src/QWidget.cpp src/QMenu.cpp src/QtGlue.cpp src/QLayout.cpp src/QControls.cpp src/QGui.cpp src/QText.cpp src/QMultimedia.cpp src/QWindow.cpp src/QVulkan.cpp src/QOpenGLWidget.cpp src/QInputEvents.cpp src/QValues.cpp src/QStyle.cpp],
    [$ext_shared],, [$QT_CFLAGS -std=c++17 -fPIC -DQT_NO_KEYWORDS -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1], [cxx])
  PHP_ADD_BUILD_DIR([$ext_builddir/src])
fi
