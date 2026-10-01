
extern zend_class_entry *qt_sql_qsqldriverplugin_qsqldriverplugin_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlDriverPlugin_QSqlDriverPlugin);

PHP_METHOD(Qt_Sql_QSqlDriverPlugin_QSqlDriverPlugin, staticMetaObject);
PHP_METHOD(Qt_Sql_QSqlDriverPlugin_QSqlDriverPlugin, tr);
PHP_METHOD(Qt_Sql_QSqlDriverPlugin_QSqlDriverPlugin, new_);
PHP_METHOD(Qt_Sql_QSqlDriverPlugin_QSqlDriverPlugin, create);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriverplugin_qsqldriverplugin_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriverplugin_qsqldriverplugin_tr, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, s)
	ZEND_ARG_INFO(0, c)
	ZEND_ARG_TYPE_INFO(0, n, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriverplugin_qsqldriverplugin_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, parent_, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqldriverplugin_qsqldriverplugin_create, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqldriverplugin_qsqldriverplugin_method_entry) {
	PHP_ME(Qt_Sql_QSqlDriverPlugin_QSqlDriverPlugin, staticMetaObject, arginfo_qt_sql_qsqldriverplugin_qsqldriverplugin_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriverPlugin_QSqlDriverPlugin, tr, arginfo_qt_sql_qsqldriverplugin_qsqldriverplugin_tr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriverPlugin_QSqlDriverPlugin, new_, arginfo_qt_sql_qsqldriverplugin_qsqldriverplugin_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlDriverPlugin_QSqlDriverPlugin, create, arginfo_qt_sql_qsqldriverplugin_qsqldriverplugin_create, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
