
extern zend_class_entry *qt_widgets_qradiobutton_qradiobutton_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QRadioButton_QRadioButton);

PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, staticMetaObject);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, tr);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, new_);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, newQStringQWidget);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, sizeHint);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, minimumSizeHint);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, event);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, hitButton);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, paintEvent);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, mouseMoveEvent);
PHP_METHOD(Qt_Widgets_QRadioButton_QRadioButton, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_newqstringqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, text, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_sizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_minimumsizehint, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_hitbutton, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0X, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0Y, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_mousemoveevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qradiobutton_qradiobutton_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, button, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qradiobutton_qradiobutton_method_entry) {
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, staticMetaObject, arginfo_qt_widgets_qradiobutton_qradiobutton_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, tr, arginfo_qt_widgets_qradiobutton_qradiobutton_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, new_, arginfo_qt_widgets_qradiobutton_qradiobutton_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, newQStringQWidget, arginfo_qt_widgets_qradiobutton_qradiobutton_newqstringqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, sizeHint, arginfo_qt_widgets_qradiobutton_qradiobutton_sizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, minimumSizeHint, arginfo_qt_widgets_qradiobutton_qradiobutton_minimumsizehint, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, event, arginfo_qt_widgets_qradiobutton_qradiobutton_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, hitButton, arginfo_qt_widgets_qradiobutton_qradiobutton_hitbutton, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, paintEvent, arginfo_qt_widgets_qradiobutton_qradiobutton_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, mouseMoveEvent, arginfo_qt_widgets_qradiobutton_qradiobutton_mousemoveevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QRadioButton_QRadioButton, initStyleOption, arginfo_qt_widgets_qradiobutton_qradiobutton_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
