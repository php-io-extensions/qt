
extern zend_class_entry *qt_widgets_qcommandlinkbutton_qcommandlinkbutton_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QCommandLinkButton_QCommandLinkButton);

PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, staticMetaObject);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, tr);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, new_);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, newQStringQWidget);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, newQStringQStringQWidget);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, description);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, setDescription);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, sizeHint);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, heightForWidth);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, initStyleOption);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, event);
PHP_METHOD(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, paintEvent);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_newqstringqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_newqstringqstringqwidget, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_description, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_setdescription, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, description, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_heightforwidth, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qcommandlinkbutton_qcommandlinkbutton_method_entry) {
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, staticMetaObject, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, tr, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, new_, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, newQStringQWidget, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_newqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, newQStringQStringQWidget, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_newqstringqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, description, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_description, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, setDescription, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_setdescription, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, sizeHint, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, heightForWidth, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_heightforwidth, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, minimumSizeHint, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, initStyleOption, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, event, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QCommandLinkButton_QCommandLinkButton, paintEvent, arginfo_qt_widgets_qcommandlinkbutton_qcommandlinkbutton_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
