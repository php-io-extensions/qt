
extern zend_class_entry *qt_gui_qtextlist_qtextlist_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextList_QTextList);

PHP_METHOD(Qt_Gui_QTextList_QTextList, staticMetaObject);
PHP_METHOD(Qt_Gui_QTextList_QTextList, tr);
PHP_METHOD(Qt_Gui_QTextList_QTextList, new_);
PHP_METHOD(Qt_Gui_QTextList_QTextList, count);
PHP_METHOD(Qt_Gui_QTextList_QTextList, item);
PHP_METHOD(Qt_Gui_QTextList_QTextList, itemNumber);
PHP_METHOD(Qt_Gui_QTextList_QTextList, itemText);
PHP_METHOD(Qt_Gui_QTextList_QTextList, removeItem);
PHP_METHOD(Qt_Gui_QTextList_QTextList, remove);
PHP_METHOD(Qt_Gui_QTextList_QTextList, add);
PHP_METHOD(Qt_Gui_QTextList_QTextList, setFormat);
PHP_METHOD(Qt_Gui_QTextList_QTextList, format);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_item, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_itemnumber, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_itemtext, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_removeitem, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_remove, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, arg0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_add, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_setformat, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, format, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextlist_qtextlist_format, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextlist_qtextlist_method_entry) {
	PHP_ME(Qt_Gui_QTextList_QTextList, staticMetaObject, arginfo_qt_gui_qtextlist_qtextlist_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, tr, arginfo_qt_gui_qtextlist_qtextlist_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, new_, arginfo_qt_gui_qtextlist_qtextlist_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, count, arginfo_qt_gui_qtextlist_qtextlist_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, item, arginfo_qt_gui_qtextlist_qtextlist_item, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, itemNumber, arginfo_qt_gui_qtextlist_qtextlist_itemnumber, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, itemText, arginfo_qt_gui_qtextlist_qtextlist_itemtext, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, removeItem, arginfo_qt_gui_qtextlist_qtextlist_removeitem, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, remove, arginfo_qt_gui_qtextlist_qtextlist_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, add, arginfo_qt_gui_qtextlist_qtextlist_add, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, setFormat, arginfo_qt_gui_qtextlist_qtextlist_setformat, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextList_QTextList, format, arginfo_qt_gui_qtextlist_qtextlist_format, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
