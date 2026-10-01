
extern zend_class_entry *qt_widgets_qdateedit_qdateedit_ce;

ZEPHIR_INIT_CLASS(Qt_Widgets_QDateEdit_QDateEdit);

PHP_METHOD(Qt_Widgets_QDateEdit_QDateEdit, staticMetaObject);
PHP_METHOD(Qt_Widgets_QDateEdit_QDateEdit, tr);
PHP_METHOD(Qt_Widgets_QDateEdit_QDateEdit, new_);
PHP_METHOD(Qt_Widgets_QDateEdit_QDateEdit, newQDateQWidget);
PHP_METHOD(Qt_Widgets_QDateEdit_QDateEdit, userDateChanged);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdateedit_qdateedit_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdateedit_qdateedit_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdateedit_qdateedit_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdateedit_qdateedit_newqdateqwidget, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_widgets_qdateedit_qdateedit_userdatechanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, date, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_widgets_qdateedit_qdateedit_method_entry) {
	PHP_ME(Qt_Widgets_QDateEdit_QDateEdit, staticMetaObject, arginfo_qt_widgets_qdateedit_qdateedit_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDateEdit_QDateEdit, tr, arginfo_qt_widgets_qdateedit_qdateedit_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDateEdit_QDateEdit, new_, arginfo_qt_widgets_qdateedit_qdateedit_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDateEdit_QDateEdit, newQDateQWidget, arginfo_qt_widgets_qdateedit_qdateedit_newqdateqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Widgets_QDateEdit_QDateEdit, userDateChanged, arginfo_qt_widgets_qdateedit_qdateedit_userdatechanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
