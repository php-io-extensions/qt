
extern zend_class_entry *qt_widgets_qstatusbar_qstatusbar_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QStatusBar_QStatusBar);

PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, staticMetaObject);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, tr);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, new_);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, addWidget);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, insertWidget);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, addPermanentWidget);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, insertPermanentWidget);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, removeWidget);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, setSizeGripEnabled);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, isSizeGripEnabled);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, currentMessage);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, showMessage);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, clearMessage);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, messageChanged);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, showEvent);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, paintEvent);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, resizeEvent);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, reformat);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, hideOrShow);
PHP_METHOD(Qt_Widgets_QStatusBar_QStatusBar, event);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_addwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_insertwidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_addpermanentwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_insertpermanentwidget, 0, 3, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, index, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, stretch, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_removewidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_setsizegripenabled, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_issizegripenabled, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_currentmessage, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_showmessage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, timeout, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_clearmessage, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_messagechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_showevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_resizeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_reformat, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_hideorshow, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qstatusbar_qstatusbar_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qstatusbar_qstatusbar_method_entry) {
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, staticMetaObject, arginfo_qt_widgets_qstatusbar_qstatusbar_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, tr, arginfo_qt_widgets_qstatusbar_qstatusbar_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, new_, arginfo_qt_widgets_qstatusbar_qstatusbar_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, addWidget, arginfo_qt_widgets_qstatusbar_qstatusbar_addwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, insertWidget, arginfo_qt_widgets_qstatusbar_qstatusbar_insertwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, addPermanentWidget, arginfo_qt_widgets_qstatusbar_qstatusbar_addpermanentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, insertPermanentWidget, arginfo_qt_widgets_qstatusbar_qstatusbar_insertpermanentwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, removeWidget, arginfo_qt_widgets_qstatusbar_qstatusbar_removewidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, setSizeGripEnabled, arginfo_qt_widgets_qstatusbar_qstatusbar_setsizegripenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, isSizeGripEnabled, arginfo_qt_widgets_qstatusbar_qstatusbar_issizegripenabled, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, currentMessage, arginfo_qt_widgets_qstatusbar_qstatusbar_currentmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, showMessage, arginfo_qt_widgets_qstatusbar_qstatusbar_showmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, clearMessage, arginfo_qt_widgets_qstatusbar_qstatusbar_clearmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, messageChanged, arginfo_qt_widgets_qstatusbar_qstatusbar_messagechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, showEvent, arginfo_qt_widgets_qstatusbar_qstatusbar_showevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, paintEvent, arginfo_qt_widgets_qstatusbar_qstatusbar_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, resizeEvent, arginfo_qt_widgets_qstatusbar_qstatusbar_resizeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, reformat, arginfo_qt_widgets_qstatusbar_qstatusbar_reformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, hideOrShow, arginfo_qt_widgets_qstatusbar_qstatusbar_hideorshow, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QStatusBar_QStatusBar, event, arginfo_qt_widgets_qstatusbar_qstatusbar_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
