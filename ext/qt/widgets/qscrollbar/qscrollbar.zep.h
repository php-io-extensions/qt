
extern zend_class_entry *qt_widgets_qscrollbar_qscrollbar_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QScrollBar_QScrollBar);

PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, staticMetaObject);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, tr);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, new_);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, newQtOrientationQWidget);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, sizeHint);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, event);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, wheelEvent);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, paintEvent);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, mousePressEvent);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, hideEvent);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, sliderChange);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, contextMenuEvent);
PHP_METHOD(Qt_Widgets_QScrollBar_QScrollBar, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_newqtorientationqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, event, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_wheelevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_hideevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_sliderchange, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, change, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_contextmenuevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qscrollbar_qscrollbar_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qscrollbar_qscrollbar_method_entry) {
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, staticMetaObject, arginfo_qt_widgets_qscrollbar_qscrollbar_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, tr, arginfo_qt_widgets_qscrollbar_qscrollbar_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, new_, arginfo_qt_widgets_qscrollbar_qscrollbar_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, newQtOrientationQWidget, arginfo_qt_widgets_qscrollbar_qscrollbar_newqtorientationqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, sizeHint, arginfo_qt_widgets_qscrollbar_qscrollbar_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, event, arginfo_qt_widgets_qscrollbar_qscrollbar_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, wheelEvent, arginfo_qt_widgets_qscrollbar_qscrollbar_wheelevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, paintEvent, arginfo_qt_widgets_qscrollbar_qscrollbar_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, mousePressEvent, arginfo_qt_widgets_qscrollbar_qscrollbar_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, mouseReleaseEvent, arginfo_qt_widgets_qscrollbar_qscrollbar_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, mouseMoveEvent, arginfo_qt_widgets_qscrollbar_qscrollbar_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, hideEvent, arginfo_qt_widgets_qscrollbar_qscrollbar_hideevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, sliderChange, arginfo_qt_widgets_qscrollbar_qscrollbar_sliderchange, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, contextMenuEvent, arginfo_qt_widgets_qscrollbar_qscrollbar_contextmenuevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QScrollBar_QScrollBar, initStyleOption, arginfo_qt_widgets_qscrollbar_qscrollbar_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
