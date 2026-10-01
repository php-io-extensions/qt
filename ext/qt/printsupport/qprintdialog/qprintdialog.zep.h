
extern zend_class_entry *qt_printsupport_qprintdialog_qprintdialog_ce;

ZEPHIR_INIT_CLASS(Qt_PrintSupport_QPrintDialog_QPrintDialog);

PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, accepted);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, open);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, staticMetaObject);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, tr);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, new_);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, newQWidget);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, exec);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, accept);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, done);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, setOption);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, testOption);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, setOptions);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, options);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, setVisible);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, openQObjectChar);
PHP_METHOD(Qt_PrintSupport_QPrintDialog_QPrintDialog, acceptedQPrinter);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_accepted, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_open, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_new_, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_newqwidget, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_exec, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_accept, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_done, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, result, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_setoption, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, on, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_testoption, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, option, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_setoptions, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_options, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_setvisible, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, visible, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_openqobjectchar, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, receiver, IS_LONG, 0)
	ZEND_ARG_INFO(0, member)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_printsupport_qprintdialog_qprintdialog_acceptedqprinter, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, printer, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_printsupport_qprintdialog_qprintdialog_method_entry) {
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, accepted, arginfo_qt_printsupport_qprintdialog_qprintdialog_accepted, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, open, arginfo_qt_printsupport_qprintdialog_qprintdialog_open, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, staticMetaObject, arginfo_qt_printsupport_qprintdialog_qprintdialog_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, tr, arginfo_qt_printsupport_qprintdialog_qprintdialog_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, new_, arginfo_qt_printsupport_qprintdialog_qprintdialog_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, newQWidget, arginfo_qt_printsupport_qprintdialog_qprintdialog_newqwidget, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, exec, arginfo_qt_printsupport_qprintdialog_qprintdialog_exec, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, accept, arginfo_qt_printsupport_qprintdialog_qprintdialog_accept, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, done, arginfo_qt_printsupport_qprintdialog_qprintdialog_done, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, setOption, arginfo_qt_printsupport_qprintdialog_qprintdialog_setoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, testOption, arginfo_qt_printsupport_qprintdialog_qprintdialog_testoption, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, setOptions, arginfo_qt_printsupport_qprintdialog_qprintdialog_setoptions, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, options, arginfo_qt_printsupport_qprintdialog_qprintdialog_options, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, setVisible, arginfo_qt_printsupport_qprintdialog_qprintdialog_setvisible, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, openQObjectChar, arginfo_qt_printsupport_qprintdialog_qprintdialog_openqobjectchar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_PrintSupport_QPrintDialog_QPrintDialog, acceptedQPrinter, arginfo_qt_printsupport_qprintdialog_qprintdialog_acceptedqprinter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
