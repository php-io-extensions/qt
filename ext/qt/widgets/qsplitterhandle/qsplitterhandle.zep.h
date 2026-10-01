
extern zend_class_entry *qt_widgets_qsplitterhandle_qsplitterhandle_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QSplitterHandle_QSplitterHandle);

PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, staticMetaObject);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, tr);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, new_);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, setOrientation);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, orientation);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, opaqueResize);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, splitter);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, sizeHint);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, paintEvent);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, mousePressEvent);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, mouseReleaseEvent);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, resizeEvent);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, event);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, moveSplitter);
PHP_METHOD(Qt_Widgets_QSplitterHandle_QSplitterHandle, closestLegalPosition);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_new_, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_setorientation, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, o, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_orientation, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_opaqueresize, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_splitter, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_mousepressevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_mousereleaseevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_movesplitter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_closestlegalposition, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, p, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qsplitterhandle_qsplitterhandle_method_entry) {
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, staticMetaObject, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, tr, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, new_, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, setOrientation, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_setorientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, orientation, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_orientation, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, opaqueResize, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_opaqueresize, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, splitter, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_splitter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, sizeHint, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, paintEvent, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, mouseMoveEvent, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, mousePressEvent, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_mousepressevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, mouseReleaseEvent, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_mousereleaseevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, resizeEvent, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, event, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, moveSplitter, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_movesplitter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QSplitterHandle_QSplitterHandle, closestLegalPosition, arginfo_qt_widgets_qsplitterhandle_qsplitterhandle_closestlegalposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
