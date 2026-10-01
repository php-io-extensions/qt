
extern zend_class_entry *qt_sql_qsqlrecord_qsqlrecord_ce;

ZEPHIR_INIT_CLASS(Qt_Sql_QSqlRecord_QSqlRecord);

PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, new_);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, newQSqlRecord);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, swap);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, value);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, valueQAnyStringView);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, setValue);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, setValueQAnyStringViewQVariant);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, setNull);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, setNullQAnyStringView);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, isNull);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, isNullQAnyStringView);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, indexOf);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, fieldName);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, field);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, fieldQAnyStringView);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, isGenerated);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, isGeneratedQAnyStringView);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, setGenerated);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, setGeneratedIntBool);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, append);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, replace);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, insert);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, remove);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, isEmpty);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, contains);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, clear);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, clearValues);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, count);
PHP_METHOD(Qt_Sql_QSqlRecord_QSqlRecord, keyValues);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_new_, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_newqsqlrecord, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_swap, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, other, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_value, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_valueqanystringview, 0, 0, 2)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_setvalue, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_setvalueqanystringviewqvariant, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_INFO(0, val)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_setnull, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_setnullqanystringview, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_isnull, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_isnullqanystringview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_indexof, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_fieldname, 0, 2, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_field, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_fieldqanystringview, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_isgenerated, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_isgeneratedqanystringview, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_setgenerated, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, generated, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_setgeneratedintbool, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, i, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, generated, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_append, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_replace, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_insert, 0, 3, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, field, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_remove, 0, 2, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, pos, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_isempty, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_contains, 0, 2, _IS_BOOL, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_clear, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_clearvalues, 0, 1, IS_VOID, 0)

	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_count, 0, 1, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_qt_sql_qsqlrecord_qsqlrecord_keyvalues, 0, 2, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, handle, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, keyFields, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(qt_sql_qsqlrecord_qsqlrecord_method_entry) {
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, new_, arginfo_qt_sql_qsqlrecord_qsqlrecord_new_, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, newQSqlRecord, arginfo_qt_sql_qsqlrecord_qsqlrecord_newqsqlrecord, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, swap, arginfo_qt_sql_qsqlrecord_qsqlrecord_swap, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, value, arginfo_qt_sql_qsqlrecord_qsqlrecord_value, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, valueQAnyStringView, arginfo_qt_sql_qsqlrecord_qsqlrecord_valueqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, setValue, arginfo_qt_sql_qsqlrecord_qsqlrecord_setvalue, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, setValueQAnyStringViewQVariant, arginfo_qt_sql_qsqlrecord_qsqlrecord_setvalueqanystringviewqvariant, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, setNull, arginfo_qt_sql_qsqlrecord_qsqlrecord_setnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, setNullQAnyStringView, arginfo_qt_sql_qsqlrecord_qsqlrecord_setnullqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, isNull, arginfo_qt_sql_qsqlrecord_qsqlrecord_isnull, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, isNullQAnyStringView, arginfo_qt_sql_qsqlrecord_qsqlrecord_isnullqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, indexOf, arginfo_qt_sql_qsqlrecord_qsqlrecord_indexof, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, fieldName, arginfo_qt_sql_qsqlrecord_qsqlrecord_fieldname, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, field, arginfo_qt_sql_qsqlrecord_qsqlrecord_field, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, fieldQAnyStringView, arginfo_qt_sql_qsqlrecord_qsqlrecord_fieldqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, isGenerated, arginfo_qt_sql_qsqlrecord_qsqlrecord_isgenerated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, isGeneratedQAnyStringView, arginfo_qt_sql_qsqlrecord_qsqlrecord_isgeneratedqanystringview, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, setGenerated, arginfo_qt_sql_qsqlrecord_qsqlrecord_setgenerated, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, setGeneratedIntBool, arginfo_qt_sql_qsqlrecord_qsqlrecord_setgeneratedintbool, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, append, arginfo_qt_sql_qsqlrecord_qsqlrecord_append, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, replace, arginfo_qt_sql_qsqlrecord_qsqlrecord_replace, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, insert, arginfo_qt_sql_qsqlrecord_qsqlrecord_insert, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, remove, arginfo_qt_sql_qsqlrecord_qsqlrecord_remove, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, isEmpty, arginfo_qt_sql_qsqlrecord_qsqlrecord_isempty, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, contains, arginfo_qt_sql_qsqlrecord_qsqlrecord_contains, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, clear, arginfo_qt_sql_qsqlrecord_qsqlrecord_clear, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, clearValues, arginfo_qt_sql_qsqlrecord_qsqlrecord_clearvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, count, arginfo_qt_sql_qsqlrecord_qsqlrecord_count, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(Qt_Sql_QSqlRecord_QSqlRecord, keyValues, arginfo_qt_sql_qsqlrecord_qsqlrecord_keyvalues, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
