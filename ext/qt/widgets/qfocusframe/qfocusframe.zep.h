
extern zend_class_entry *qt_widgets_qfocusframe_qfocusframe_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QFocusFrame_QFocusFrame);

PHP_METHOD(Qt_Widgets_QFocusFrame_QFocusFrame, staticMetaObject);
PHP_METHOD(Qt_Widgets_QFocusFrame_QFocusFrame, tr);
PHP_METHOD(Qt_Widgets_QFocusFrame_QFocusFrame, new_);
PHP_METHOD(Qt_Widgets_QFocusFrame_QFocusFrame, setWidget);
PHP_METHOD(Qt_Widgets_QFocusFrame_QFocusFrame, widget);
PHP_METHOD(Qt_Widgets_QFocusFrame_QFocusFrame, event);
PHP_METHOD(Qt_Widgets_QFocusFrame_QFocusFrame, eventFilter);
PHP_METHOD(Qt_Widgets_QFocusFrame_QFocusFrame, paintEvent);
PHP_METHOD(Qt_Widgets_QFocusFrame_QFocusFrame, initStyleOption);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfocusframe_qfocusframe_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfocusframe_qfocusframe_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfocusframe_qfocusframe_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfocusframe_qfocusframe_setwidget, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, widget, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfocusframe_qfocusframe_widget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfocusframe_qfocusframe_event, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, e, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfocusframe_qfocusframe_eventfilter, 0, 3, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg1, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfocusframe_qfocusframe_paintevent, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qfocusframe_qfocusframe_initstyleoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qfocusframe_qfocusframe_method_entry) {
	PHP_ME(Qt_Widgets_QFocusFrame_QFocusFrame, staticMetaObject, arginfo_qt_widgets_qfocusframe_qfocusframe_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFocusFrame_QFocusFrame, tr, arginfo_qt_widgets_qfocusframe_qfocusframe_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFocusFrame_QFocusFrame, new_, arginfo_qt_widgets_qfocusframe_qfocusframe_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFocusFrame_QFocusFrame, setWidget, arginfo_qt_widgets_qfocusframe_qfocusframe_setwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFocusFrame_QFocusFrame, widget, arginfo_qt_widgets_qfocusframe_qfocusframe_widget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFocusFrame_QFocusFrame, event, arginfo_qt_widgets_qfocusframe_qfocusframe_event, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFocusFrame_QFocusFrame, eventFilter, arginfo_qt_widgets_qfocusframe_qfocusframe_eventfilter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFocusFrame_QFocusFrame, paintEvent, arginfo_qt_widgets_qfocusframe_qfocusframe_paintevent, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QFocusFrame_QFocusFrame, initStyleOption, arginfo_qt_widgets_qfocusframe_qfocusframe_initstyleoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
