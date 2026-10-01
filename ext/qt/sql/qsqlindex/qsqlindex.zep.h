
extern zend_class_entry *qt_sql_qsqlindex_qsqlindex_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlIndex_QSqlIndex);

PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, staticMetaObject);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, qt_check_for_QGADGET_macro);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, new_);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, newQSqlIndex);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, swap);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, setCursorName);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, cursorName);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, setName);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, name);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, append);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, appendQSqlFieldBool);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, isDescending);
PHP_METHOD(Qt_Sql_QSqlIndex_QSqlIndex, setDescending);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_staticmetaobject, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_qt_check_for_qgadget_macro, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_new_, 0, 0, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursorName, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_newqsqlindex, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_setcursorname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, cursorName, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_cursorname, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_setname, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_name, 0, 1, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_append, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_appendqsqlfieldbool, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, desc, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_isdescending, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlindex_qsqlindex_setdescending, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, desc, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqlindex_qsqlindex_method_entry) {
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, staticMetaObject, arginfo_qt_sql_qsqlindex_qsqlindex_staticmetaobject, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, qt_check_for_QGADGET_macro, arginfo_qt_sql_qsqlindex_qsqlindex_qt_check_for_qgadget_macro, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, new_, arginfo_qt_sql_qsqlindex_qsqlindex_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, newQSqlIndex, arginfo_qt_sql_qsqlindex_qsqlindex_newqsqlindex, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, swap, arginfo_qt_sql_qsqlindex_qsqlindex_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, setCursorName, arginfo_qt_sql_qsqlindex_qsqlindex_setcursorname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, cursorName, arginfo_qt_sql_qsqlindex_qsqlindex_cursorname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, setName, arginfo_qt_sql_qsqlindex_qsqlindex_setname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, name, arginfo_qt_sql_qsqlindex_qsqlindex_name, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, append, arginfo_qt_sql_qsqlindex_qsqlindex_append, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, appendQSqlFieldBool, arginfo_qt_sql_qsqlindex_qsqlindex_appendqsqlfieldbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, isDescending, arginfo_qt_sql_qsqlindex_qsqlindex_isdescending, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlIndex_QSqlIndex, setDescending, arginfo_qt_sql_qsqlindex_qsqlindex_setdescending, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
