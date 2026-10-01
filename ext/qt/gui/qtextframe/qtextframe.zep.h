
extern zend_class_entry *qt_gui_qtextframe_qtextframe_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextFrame_QTextFrame);

PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, staticMetaObject);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, tr);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, new_);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, setFrameFormat);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, frameFormat);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, firstCursorPosition);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, lastCursorPosition);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, firstPosition);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, lastPosition);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, layoutData);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, setLayoutData);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, childFrames);
PHP_METHOD(Qt_Gui_QTextFrame_QTextFrame, parentFrame);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_setframeformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_frameformat, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_firstcursorposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_lastcursorposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_firstposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_lastposition, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_layoutdata, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_setlayoutdata, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_childframes, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextframe_qtextframe_parentframe, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextframe_qtextframe_method_entry) {
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, staticMetaObject, arginfo_qt_gui_qtextframe_qtextframe_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, tr, arginfo_qt_gui_qtextframe_qtextframe_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, new_, arginfo_qt_gui_qtextframe_qtextframe_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, setFrameFormat, arginfo_qt_gui_qtextframe_qtextframe_setframeformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, frameFormat, arginfo_qt_gui_qtextframe_qtextframe_frameformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, firstCursorPosition, arginfo_qt_gui_qtextframe_qtextframe_firstcursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, lastCursorPosition, arginfo_qt_gui_qtextframe_qtextframe_lastcursorposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, firstPosition, arginfo_qt_gui_qtextframe_qtextframe_firstposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, lastPosition, arginfo_qt_gui_qtextframe_qtextframe_lastposition, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, layoutData, arginfo_qt_gui_qtextframe_qtextframe_layoutdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, setLayoutData, arginfo_qt_gui_qtextframe_qtextframe_setlayoutdata, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, childFrames, arginfo_qt_gui_qtextframe_qtextframe_childframes, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextFrame_QTextFrame, parentFrame, arginfo_qt_gui_qtextframe_qtextframe_parentframe, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
