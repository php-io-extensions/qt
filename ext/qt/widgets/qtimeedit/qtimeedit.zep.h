
extern zend_class_entry *qt_widgets_qtimeedit_qtimeedit_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QTimeEdit_QTimeEdit);

PHP_METHOD(Qt_Widgets_QTimeEdit_QTimeEdit, staticMetaObject);
PHP_METHOD(Qt_Widgets_QTimeEdit_QTimeEdit, tr);
PHP_METHOD(Qt_Widgets_QTimeEdit_QTimeEdit, new_);
PHP_METHOD(Qt_Widgets_QTimeEdit_QTimeEdit, newQTimeQWidget);
PHP_METHOD(Qt_Widgets_QTimeEdit_QTimeEdit, userTimeChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtimeedit_qtimeedit_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtimeedit_qtimeedit_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtimeedit_qtimeedit_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtimeedit_qtimeedit_newqtimeqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qtimeedit_qtimeedit_usertimechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, time, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qtimeedit_qtimeedit_method_entry) {
	PHP_ME(Qt_Widgets_QTimeEdit_QTimeEdit, staticMetaObject, arginfo_qt_widgets_qtimeedit_qtimeedit_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTimeEdit_QTimeEdit, tr, arginfo_qt_widgets_qtimeedit_qtimeedit_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTimeEdit_QTimeEdit, new_, arginfo_qt_widgets_qtimeedit_qtimeedit_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTimeEdit_QTimeEdit, newQTimeQWidget, arginfo_qt_widgets_qtimeedit_qtimeedit_newqtimeqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QTimeEdit_QTimeEdit, userTimeChanged, arginfo_qt_widgets_qtimeedit_qtimeedit_usertimechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
