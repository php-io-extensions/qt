
extern zend_class_entry *qt_widgets_qerrormessage_qerrormessage_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QErrorMessage_QErrorMessage);

PHP_METHOD(Qt_Widgets_QErrorMessage_QErrorMessage, staticMetaObject);
PHP_METHOD(Qt_Widgets_QErrorMessage_QErrorMessage, tr);
PHP_METHOD(Qt_Widgets_QErrorMessage_QErrorMessage, new_);
PHP_METHOD(Qt_Widgets_QErrorMessage_QErrorMessage, qtHandler);
PHP_METHOD(Qt_Widgets_QErrorMessage_QErrorMessage, showMessage);
PHP_METHOD(Qt_Widgets_QErrorMessage_QErrorMessage, showMessageQStringQString);
PHP_METHOD(Qt_Widgets_QErrorMessage_QErrorMessage, done);
PHP_METHOD(Qt_Widgets_QErrorMessage_QErrorMessage, changeEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qerrormessage_qerrormessage_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qerrormessage_qerrormessage_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qerrormessage_qerrormessage_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qerrormessage_qerrormessage_qthandler, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qerrormessage_qerrormessage_showmessage, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qerrormessage_qerrormessage_showmessageqstringqstring, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, message, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, type, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qerrormessage_qerrormessage_done, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qerrormessage_qerrormessage_changeevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qerrormessage_qerrormessage_method_entry) {
	PHP_ME(Qt_Widgets_QErrorMessage_QErrorMessage, staticMetaObject, arginfo_qt_widgets_qerrormessage_qerrormessage_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QErrorMessage_QErrorMessage, tr, arginfo_qt_widgets_qerrormessage_qerrormessage_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QErrorMessage_QErrorMessage, new_, arginfo_qt_widgets_qerrormessage_qerrormessage_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QErrorMessage_QErrorMessage, qtHandler, arginfo_qt_widgets_qerrormessage_qerrormessage_qthandler, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QErrorMessage_QErrorMessage, showMessage, arginfo_qt_widgets_qerrormessage_qerrormessage_showmessage, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QErrorMessage_QErrorMessage, showMessageQStringQString, arginfo_qt_widgets_qerrormessage_qerrormessage_showmessageqstringqstring, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QErrorMessage_QErrorMessage, done, arginfo_qt_widgets_qerrormessage_qerrormessage_done, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QErrorMessage_QErrorMessage, changeEvent, arginfo_qt_widgets_qerrormessage_qerrormessage_changeevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
