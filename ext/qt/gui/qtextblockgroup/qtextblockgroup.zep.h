
extern zend_class_entry *qt_gui_qtextblockgroup_qtextblockgroup_ce;

ZEPHIR_INIT_CLASS(Qt_Gui_QTextBlockGroup_QTextBlockGroup);

PHP_METHOD(Qt_Gui_QTextBlockGroup_QTextBlockGroup, staticMetaObject);
PHP_METHOD(Qt_Gui_QTextBlockGroup_QTextBlockGroup, tr);
PHP_METHOD(Qt_Gui_QTextBlockGroup_QTextBlockGroup, new_);
PHP_METHOD(Qt_Gui_QTextBlockGroup_QTextBlockGroup, blockInserted);
PHP_METHOD(Qt_Gui_QTextBlockGroup_QTextBlockGroup, blockRemoved);
PHP_METHOD(Qt_Gui_QTextBlockGroup_QTextBlockGroup, blockFormatChanged);
PHP_METHOD(Qt_Gui_QTextBlockGroup_QTextBlockGroup, blockList);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockgroup_qtextblockgroup_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockgroup_qtextblockgroup_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockgroup_qtextblockgroup_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, doc, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockgroup_qtextblockgroup_blockinserted, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockgroup_qtextblockgroup_blockremoved, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockgroup_qtextblockgroup_blockformatchanged, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, block, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_gui_qtextblockgroup_qtextblockgroup_blocklist, 0, 1, IS_ARRAY, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_gui_qtextblockgroup_qtextblockgroup_method_entry) {
	PHP_ME(Qt_Gui_QTextBlockGroup_QTextBlockGroup, staticMetaObject, arginfo_qt_gui_qtextblockgroup_qtextblockgroup_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockGroup_QTextBlockGroup, tr, arginfo_qt_gui_qtextblockgroup_qtextblockgroup_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockGroup_QTextBlockGroup, new_, arginfo_qt_gui_qtextblockgroup_qtextblockgroup_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockGroup_QTextBlockGroup, blockInserted, arginfo_qt_gui_qtextblockgroup_qtextblockgroup_blockinserted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockGroup_QTextBlockGroup, blockRemoved, arginfo_qt_gui_qtextblockgroup_qtextblockgroup_blockremoved, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockGroup_QTextBlockGroup, blockFormatChanged, arginfo_qt_gui_qtextblockgroup_qtextblockgroup_blockformatchanged, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Gui_QTextBlockGroup_QTextBlockGroup, blockList, arginfo_qt_gui_qtextblockgroup_qtextblockgroup_blocklist, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
