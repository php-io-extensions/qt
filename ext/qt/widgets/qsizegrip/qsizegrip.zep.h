
extern zend_class_entry *qt_widgets_qsizegrip_qsizegrip_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSizeGrip_QSizeGrip);

PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, staticMetaObject);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, tr);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, new_);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, sizeHint);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, setVisible);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, paintEvent);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, mousePressEvent);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, moveEvent);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, showEvent);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, hideEvent);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, eventFilter);
PHP_METHOD(Qt_Widgets_QSizeGrip_QSizeGrip, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, mouseEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_moveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, moveEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, showEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_hideevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, hideEvent, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsizegrip_qsizegrip_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qsizegrip_qsizegrip_method_entry) {
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, staticMetaObject, arginfo_qt_widgets_qsizegrip_qsizegrip_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, tr, arginfo_qt_widgets_qsizegrip_qsizegrip_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, new_, arginfo_qt_widgets_qsizegrip_qsizegrip_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, sizeHint, arginfo_qt_widgets_qsizegrip_qsizegrip_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, setVisible, arginfo_qt_widgets_qsizegrip_qsizegrip_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, paintEvent, arginfo_qt_widgets_qsizegrip_qsizegrip_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, mousePressEvent, arginfo_qt_widgets_qsizegrip_qsizegrip_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, mouseMoveEvent, arginfo_qt_widgets_qsizegrip_qsizegrip_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, mouseReleaseEvent, arginfo_qt_widgets_qsizegrip_qsizegrip_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, moveEvent, arginfo_qt_widgets_qsizegrip_qsizegrip_moveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, showEvent, arginfo_qt_widgets_qsizegrip_qsizegrip_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, hideEvent, arginfo_qt_widgets_qsizegrip_qsizegrip_hideevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, eventFilter, arginfo_qt_widgets_qsizegrip_qsizegrip_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSizeGrip_QSizeGrip, event, arginfo_qt_widgets_qsizegrip_qsizegrip_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
