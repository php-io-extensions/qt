
extern zend_class_entry *qt_printsupport_qpagesetupdialog_qpagesetupdialog_ce;

ZEPHIR_INIT_CLASS(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog);

PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, open);
PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, staticMetaObject);
PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, tr);
PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, new_);
PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, newQWidget);
PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, exec);
PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, openQObjectChar);
PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, done);
PHP_METHOD(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, printer);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_open, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_newqwidget, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_exec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_openqobjectchar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_done, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_printer, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_printsupport_qpagesetupdialog_qpagesetupdialog_method_entry) {
	PHP_ME(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, open, arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, staticMetaObject, arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, tr, arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, new_, arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, newQWidget, arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_newqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, exec, arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, openQObjectChar, arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_openqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, done, arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_done, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPageSetupDialog_QPageSetupDialog, printer, arginfo_qt_printsupport_qpagesetupdialog_qpagesetupdialog_printer, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
